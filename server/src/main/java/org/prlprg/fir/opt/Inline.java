package org.prlprg.fir.opt;

import static org.prlprg.fir.analyze.resolve.NamedVariablesOf.namedVariablesOf;

import com.google.common.collect.Sets;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.resolve.NamedVariablesOf;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGInliner;
import org.prlprg.fir.ir.cfg.iterator.BbDfs;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Register;

/// Inline forces, maybe-forces, and static calls when possible.
///
/// This is the one optimization that evaluates unevaluated versions: whether a call can be inlined
/// depends on the callee's body. It only evaluates callees that pass every check that doesn't.
public final class Inline extends AbstractionOptimization {
  private final int maxInlineeSize;

  public Inline(int maxInlineeSize) {
    this.maxInlineeSize = maxInlineeSize;
  }

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    if (abstraction.isStub()) {
      return false;
    }

    // Evaluate callees before looking at anything else, and not while inlining: evaluating one
    // can run optimizations on the whole module, this version included.
    var evaluated = false;
    while (true) {
      var unevaluated =
          abstraction
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .flatMap(bb -> bb.statements().stream())
              .filter(
                  s ->
                      s.expression() instanceof Call(StaticFnCallee callee)
                          && callee.exactVersion() != null
                          && !callee.exactVersion().isStub()
                          && !callee.exactVersion().isEvaluated()
                          && mayInline(abstraction, callee.exactVersion(), s.argCount() - 1))
              .map(s -> ((StaticFnCallee) ((Call) s.expression()).callee()).exactVersion())
              .distinct()
              .toList();
      if (unevaluated.isEmpty()) {
        break;
      }
      for (var callee : unevaluated) {
        callee.body();
      }
      evaluated = true;
    }

    var opt = new OnAbstraction(abstraction);
    opt.run();
    // An evaluated callee is progress even if it didn't get inlined: it's now optimized, which
    // improves what callers know about it. So is one that inlining uncovered (left for the next
    // run to evaluate).
    return opt.changed || evaluated || opt.sawUnevaluated;
  }

  /// Whether a call from `scope` to `callee` with `argumentCount` arguments passes the checks for
  /// inlining that don't depend on the callee's body:
  /// - Callee isn't the caller (recursive)
  /// - Callee doesn't have reflective effects
  /// - Callee isn't a stub
  /// - Argument and parameter counts match (otherwise the CFG is invalid)
  private static boolean mayInline(Abstraction scope, Abstraction callee, int argumentCount) {
    return callee != scope
        && !callee.effects().reflect()
        && !callee.isStub()
        && callee.parameters().size() == argumentCount;
  }

  private class OnAbstraction {
    private final Abstraction scope;
    private final Analyses analyses;

    boolean changed = false;
    /// Whether there's a call that may be inlined depending on its callee's body, which is
    /// unevaluated.
    boolean sawUnevaluated = false;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      analyses =
          new Analyses(
              scope,
              CfgDominatorTree.class,
              CfgReachability.class,
              CfgHierarchy.class,
              OriginAnalysis.class,
              NamedVariablesOf.class);
    }

    void run() {
      run(scope.body());
    }

    void run(CFG cfg) {
      // We run DFS to run inlined instructions, trying to inline recursively.
      // Then we don't need to repeat the analysis to reach a fixpoint.
      for (var bb : BbDfs.bbDfs(cfg)) {
        for (int i = 0; i < bb.statements().size(); i++) {
          run(bb, i);
        }
      }
    }

    void run(BB bb, int statementIndex) {
      var stmt = bb.statements().get(statementIndex);
      var expr = stmt.expression();
      var assignee = stmt.assignee();

      // Step 3: Check for inlining opportunities
      switch (expr) {
        case Force _ -> tryInlineForce(bb, statementIndex, assignee, stmt.arg(0));
        case Call call
            when call.callee() instanceof StaticFnCallee callee && callee.exactVersion() != null ->
            tryInlineCall(
                bb,
                statementIndex,
                assignee,
                Objects.requireNonNull(callee.exactVersion()),
                // Call arguments follow the callee's own argument (index 0).
                stmt.args().subList(1, stmt.argCount()));
        // Inline within the promise
        case Promise(_, _, var code, _) -> run(code);
        default -> {}
      }
    }

    /// A non-force use of the promise, with its `(bb, index)` captured at analysis time (before
    /// any promise-wrapping insertions shift positions).
    private record OtherUse(Instruction instruction, BB bb, int index) {}

    private void tryInlineForce(
        BB bb, int statementIndex, @Nullable Register assignee, Argument forced) {
      var cfg = bb.owner();
      var hierarchy = analyses.get(CfgHierarchy.class);

      // Check if the origin is a non-reflective `Promise`
      if (!(analyses.get(OriginAnalysis.class).resolve(forced) instanceof Read(var promiseReg))) {
        return;
      }
      // A register *is* its definition: the promise must be defined by a (non-reflective)
      // `Promise` statement.
      if (!(promiseReg instanceof AssigneeOf promiseAssignee)
          || !(promiseAssignee.statement().expression()
              instanceof Promise(var valueType, var effects, var code, _))
          || effects.reflect()) {
        return;
      }

      var forceStmt = bb.statements().get(statementIndex);

      // Check whether the promise has definitely, maybe, or definitely not been forced.
      // If it has definitely not been forced, also store the location of all other forces.
      Register dominatingForceAssignee = null;
      var hasMaybeBeenForced = false;
      var otherUses = new ArrayList<OtherUse>();
      for (var use : promiseReg.uses()) {
        var useInstr = use.instruction();
        var useParentBb = Objects.requireNonNull(useInstr.parentBB());
        // Project the use into this force's CFG (its enclosing promise statement if the use is in a
        // nested promise). `null` means the use is in a sibling or outer scope.
        var projected = hierarchy.projectInto(cfg, useInstr);
        if (projected == null || projected == forceStmt) {
          continue;
        }

        // `use` is not this force.
        otherUses.add(new OtherUse(useInstr, useParentBb, useInstr.indexInBB()));

        if (useParentBb.owner() == cfg
            && analyses.get(cfg, CfgDominatorTree.class).dominates(projected, forceStmt)) {
          // `use` will definitely occur before this force.
          hasMaybeBeenForced = true;
          if (useInstr instanceof Statement useStmt && useStmt.expression() instanceof Force) {
            dominatingForceAssignee = useStmt.assignee();
          }
        } else if (analyses.get(cfg, CfgReachability.class).isReachable(projected, forceStmt)
            && !analyses.get(cfg, CfgDominatorTree.class).dominates(forceStmt, projected)) {
          // `use` may occur before this force
          // (checks that this force may occur after `use`, and `use` does not always occur
          //  after this force; if the former is `false` then any trace with `use` doesn't have
          //  `force`, if the latter is `true` then `force` always occurs first).
          hasMaybeBeenForced = true;
        }
      }

      if (dominatingForceAssignee != null) {
        // This will never evaluate, so forward to the dominating force's result and remove it.
        if (assignee != null) {
          assignee.substUsesWith(new Read(dominatingForceAssignee));
        }
        bb.statements().get(statementIndex).remove();
        changed = true;
      } else if (!hasMaybeBeenForced) {
        // This will always evaluate, and one force dominates all other possible forces, so:
        // - Replace statement with inline (its return goes to a fresh `returnDest`).
        // - Forward all other possible forces (i.e. all other forces) to `returnDest`.
        // - Wrap non-force uses in trivial promises that return `returnDest`.
        var returnDest =
            new BlockParameter(
                scope.freshName(assignee == null ? Register.DEFAULT_NAME : assignee.name()),
                valueType);

        for (var use : otherUses) {
          var useInstr = use.instruction();
          if (useInstr instanceof Statement useStmt && useStmt.expression() instanceof Force) {
            // Redundant force: forward its result to the inlined value and remove it.
            if (useStmt.assignee() != null) {
              useStmt.assignee().substUsesWith(new Read(returnDest));
            }
            useStmt.replaceWith(new Statement(new Noop()));
          } else {
            // Non-force use: wrap the inlined value in a trivial promise.
            var newPromiseCfg = new CFG(scope);
            newPromiseCfg.entry().setJump(new Jump(new Return(), List.of(new Read(returnDest))));
            var newPromiseStmt = new Statement(new Promise(valueType, effects, newPromiseCfg));
            var newPromiseAssignee =
                newPromiseStmt.setAssignee(
                    scope.freshName(Register.DEFAULT_NAME), Type.promise(valueType, effects));

            useInstr.mapArguments(
                a -> a.equals(new Read(promiseReg)) ? new Read(newPromiseAssignee) : a);
            newPromiseStmt.insertBefore(useInstr);
            if (use.bb() == bb && use.index() < statementIndex) {
              statementIndex++;
            }
          }
        }

        // Forward this force's result, remove it, and inline the promise body in its place.
        if (assignee != null) {
          assignee.substUsesWith(new Read(returnDest));
        }
        bb.statements().get(statementIndex).remove();
        inline(code, bb, statementIndex - 1, returnDest, Map.of());
      }
    }

    private void tryInlineCall(
        BB bb,
        int statementIndex,
        @Nullable Register assignee,
        Abstraction callee,
        List<Argument> arguments) {
      if (!mayInline(scope, callee, arguments.size())) {
        return;
      }
      if (!callee.isEvaluated()) {
        // A call that inlining another one brought in.
        sawUnevaluated = true;
        return;
      }

      // Also don't inline if:
      // - Callee calls itself (another recursive case)
      // - Callee is too big
      // - Callee and caller load or store the same named variable
      var instructionCount =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .mapToInt(bb1 -> bb1.instructions().size())
              .sum();
      var callsItself =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .flatMap(bb1 -> bb1.statements().stream())
              .anyMatch(
                  s ->
                      s.expression() instanceof Call(StaticFnCallee callee1)
                          && callee1.exactVersion() == callee);
      var variablesClash =
          !Sets.intersection(
                  namedVariablesOf(callee), analyses.get(NamedVariablesOf.class).namedVariables())
              .isEmpty();
      if (instructionCount > maxInlineeSize || callsItself || variablesClash) {
        return;
      }

      // TODO: Handle functions with deopt branches. For now we just don't inline them.
      var hasDeopt =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .anyMatch(bb1 -> bb1.jump().expression() instanceof Deopt);
      if (hasDeopt) {
        return;
      }

      // Import the callee's named-variable declared types.
      callee.namedVariableTypes().forEach(scope::setNamedVariableType);

      // The callee's parameters have no counterpart in this scope, so the inliner substitutes each
      // with the corresponding call argument while copying the body in. (Computed before removing
      // the call below, since `arguments` is a view of its argument list.)
      var substitutions = new HashMap<Register, Argument>();
      for (var i = 0; i < callee.parameters().size(); i++) {
        substitutions.put(callee.parameters().get(i), arguments.get(i));
      }

      // Replace the call with the inlined body (its return goes to a fresh `returnDest`).
      BlockParameter returnDest = null;
      if (assignee != null) {
        returnDest = new BlockParameter(scope.freshName(assignee.name()), assignee.type());
        assignee.substUsesWith(new Read(returnDest));
      }
      bb.statements().get(statementIndex).remove();
      inline(callee.body(), bb, statementIndex - 1, returnDest, substitutions);
    }

    private void inline(
        CFG cfg,
        BB bb,
        int statementIndex,
        @Nullable BlockParameter returnDestination,
        Map<Register, Argument> substitutions) {
      CFGInliner.inline(cfg, bb, statementIndex, returnDestination, substitutions);
      changed = true;
      analyses.evict();
    }
  }
}
