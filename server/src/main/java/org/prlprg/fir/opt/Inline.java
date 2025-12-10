package org.prlprg.fir.opt;

import static org.prlprg.fir.analyze.resolve.NamedVariablesOf.namedVariablesOf;
import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;
import static org.prlprg.fir.ir.cfg.iterator.Dfs.dfs;

import com.google.common.collect.Sets;
import java.util.ArrayList;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.resolve.NamedVariablesOf;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.InlineSubstituter;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGInliner;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Inline forces, maybe-forces, and static calls when possible.
public record Inline(int maxInlineeSize) implements AbstractionOptimization {
  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  private class OnAbstraction {
    private final Abstraction scope;
    private final Analyses analyses;

    boolean changed = false;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      analyses =
          new Analyses(
              scope,
              CfgDominatorTree.class,
              CfgReachability.class,
              DefUses.class,
              OriginAnalysis.class,
              NamedVariablesOf.class);
    }

    void run() {
      if (scope.cfg() != null) {
        run(scope.cfg());
      }
    }

    void run(CFG cfg) {
      // We run DFS to run inlined instructions, trying to inline recursively.
      // Then we don't need to repeat the analysis to reach a fixpoint.
      for (var bb : dfs(cfg)) {
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
        case Force(var value) -> tryInlineForce(bb, statementIndex, assignee, value);
        case MaybeForce(var value) -> tryInlineForce(bb, statementIndex, assignee, value);
        case Call call when call.callee() instanceof StaticCallee(var _, var version) ->
            tryInlineCall(bb, statementIndex, assignee, version, call.callArguments());
        // Inline within the promise
        case Promise(var _, var _, var code) -> run(code);
        default -> {}
      }
    }

    private void tryInlineForce(
        BB bb, int statementIndex, @Nullable Register assignee, Argument forced) {
      var cfg = bb.owner();

      // Check if the origin is a non-reflective `Promise`
      if (!(analyses.get(OriginAnalysis.class).resolve(forced) instanceof Read(var forcedReg))) {
        return;
      }
      var forceDef = analyses.get(DefUses.class).definition(forcedReg);
      if (forceDef == null
          || !(forceDef.inInnermostCfg().instruction() instanceof Statement forceStmt)
          || !(forceStmt.expression() instanceof Promise(var valueType, var effects, var code))
          || effects.reflect()) {
        return;
      }

      // Check whether the promise has definitely, maybe, or definitely not been forced.
      // If it has definitely not been forced, also store the location of all other forces.
      Register dominator = null;
      var hasMaybeBeenForced = false;
      var otherForcePositions = new ArrayList<CfgPosition>();
      for (var use : analyses.get(DefUses.class).uses(forcedReg)) {
        var use1 = use.inCfg(cfg);
        var use2 = use.inInnermostCfg();
        if (use1 == null || (use1.bb() == bb && use1.instructionIndex() == statementIndex)) {
          continue;
        }

        if (!(use2.instruction()
                instanceof Statement(var useComments, var useAssignee, var useExpr))
            || !(useExpr instanceof Force)) {
          continue;
        }

        // `use` is a force, and not this force.
        otherForcePositions.add(use2);

        if (cfg == use2.cfg()
            && analyses
                .get(cfg, CfgDominatorTree.class)
                .dominates(use1.bb(), use1.instructionIndex(), bb, statementIndex)) {
          // `use` will definitely occur before this force.
          hasMaybeBeenForced = true;
          dominator = useAssignee;
        } else if (analyses
                .get(cfg, CfgReachability.class)
                .isReachable(use1.bb(), use1.instructionIndex(), bb, statementIndex)
            && !analyses
                .get(cfg, CfgDominatorTree.class)
                .dominates(bb, statementIndex, use1.bb(), use1.instructionIndex())) {
          // `use` may occur before this force
          // (checks that this force may occur after `use`, and `use` does not always occur
          //  after this force; if the former is `false` then any trace with `use` doesn't have
          //  `force`, if the latter is `true` then `force` always occurs first).
          hasMaybeBeenForced = true;
        }
      }

      if (dominator != null) {
        // This will never evaluate, so replace with the dominator.
        var comments = bb.statements().get(statementIndex).comments();
        bb.replaceStatementAt(
            statementIndex, new Statement(comments, assignee, new Aea(new Read(dominator))));
      } else if (!hasMaybeBeenForced) {
        // This will always evaluate, so:
        // - Remove promise (it has duplicate register definitions if we keep it)
        // - Convert all other forces into reads
        // - Replace statement with inline

        // If there are other forces,
        // we need to ensure this force's result is assigned to a register,
        // so they can read it.
        if (!otherForcePositions.isEmpty() && assignee == null) {
          assignee = scope.addLocal(valueType);
        }

        // Remove promise and convert forces into reads before we inline,
        // because the CFG positions are non-local, so they'll be corrupted after insertions.

        // Technically instead of removing the promise, we must replace it, because non-force
        // instructions may use it. We replace with a promise stub so types are correct.
        forceDef.inInnermostCfg().replaceWith(new Promise(valueType, effects, new CFG(scope)));

        // Now convert forces into reads.
        for (var forcePos : otherForcePositions) {
          forcePos.replaceWith(new Aea(new Read(assignee)));
        }

        // Finally, replace the statement with inline.
        bb.removeStatementAt(statementIndex);
        inline(code, bb, statementIndex - 1, assignee);
      }
    }

    private void tryInlineCall(
        BB bb,
        int statementIndex,
        @Nullable Register assignee,
        Abstraction callee,
        List<Argument> arguments) {
      // Don't inline if:
      // - Callee is caller (recursive)
      // - Callee calls itself (another recursive case)
      // - Callee has effects
      // - Callee is a stub
      // - Callee is too big
      // - Callee and caller load or store the same named variable
      // - Argument and parameter count mismatch (invalid CFG)
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
                      s.expression() instanceof Call call
                          && call.callee() instanceof StaticCallee(var _, var target)
                          && target == callee);
      var variablesClash =
          !Sets.intersection(
                  namedVariablesOf(callee), analyses.get(NamedVariablesOf.class).namedVariables())
              .isEmpty();
      if (callee == scope
          || callee.effects().reflect()
          || callee.cfg() == null
          || instructionCount > maxInlineeSize
          || callsItself
          || variablesClash
          || callee.parameters().size() != arguments.size()) {
        return;
      }

      // TODO: Handle functions with deopt branches. For now we just don't inline them.
      var hasDeopt =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .anyMatch(bb1 -> bb1.jump() instanceof Deopt);
      if (hasDeopt) {
        return;
      }

      // Add local types of named variables we're going to import from `callee`.
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof NamedVariable nv)) {
          continue;
        }
        scope.setLocalType(nv, local.type());
      }

      // Copy `callee` (since these are in-place mutations), then prepare it for inlining:
      // substitute parameters with arguments, and substitute locals with new locals.
      var body = new Abstraction(scope.module(), List.of());
      assert body.cfg() != null;
      for (var parameter : callee.parameters()) {
        body.addLocal(new Local(parameter.variable(), parameter.type()));
      }
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof Register _)) {
          continue;
        }
        body.addLocal(local);
      }
      copyFrom(body.cfg(), callee.cfg());
      var localSubstituter = new InlineSubstituter(body);
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof Register oldVariable)) {
          continue;
        }
        var type = local.type();
        var disambiguatedVariable = scope.addLocal(oldVariable.name(), type);
        localSubstituter.stage(oldVariable, disambiguatedVariable);
      }
      localSubstituter.commit();
      var parameterSubstituter = new Substituter(body);
      for (int i = 0; i < callee.parameters().size(); i++) {
        var parameter = callee.parameters().get(i).variable();
        var argument = arguments.get(i);
        parameterSubstituter.stage(parameter, argument);
      }
      parameterSubstituter.commit();

      // Replace statement with inline
      bb.removeStatementAt(statementIndex);
      inline(body.cfg(), bb, statementIndex - 1, assignee);
    }

    private void inline(CFG cfg, BB bb, int statementIndex, @Nullable Register assignee) {
      CFGInliner.inline(cfg, bb, statementIndex, assignee);
      changed = true;
      analyses.evict();
    }
  }
}
