package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.iterator.Dfs.dfs;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashSet;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptLoad;
import org.prlprg.fir.ir.expression.SubscriptStore;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Logical;

/// Cleanup optimizations:
/// - Basic blocks
///   - Remove unreachable blocks.
///   - Convert [If]s whose condition is always true or false, or where both targets are the same,
///     into [Goto]s.
///   - Merge single-predecessor/single-successor blocks.
///   - Remove phi parameters in single-predecessor blocks (substitute with the phi argument).
/// - Registers
///   - Substitute registers whose origin is another register or constant (e.g. if `a = b`,
///     substitute occurrences of `a` with `b`).
///   - Remove unused assignees (convert `r = e` to `e` if `r` is unused) and phis.
/// - Instructions
///   - Remove trivial no-ops (pure expressions not assigned to anything).
public record Cleanup(boolean substituteWithOrigins) implements AbstractionOptimization {
  public static void cleanup(Module module) {
    new Cleanup().run(module);
  }

  public Cleanup() {
    this(true);
  }

  @Override
  public boolean run(Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  private class OnAbstraction {
    final Abstraction scope;
    final Substituter substituter;
    boolean changed = false;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      substituter = new Substituter(scope);
    }

    void run() {
      // Basic blocks
      scope.streamCfgs().forEach(this::removeUnreachableBlocks);
      scope.streamCfgs().forEach(cfg -> cfg.bbs().forEach(this::simplifyBranches));
      scope.streamCfgs().forEach(cfg -> cfg.bbs().forEach(this::removeSinglePredecessorPhis));
      scope.streamCfgs().forEach(this::mergeBlocks);

      // Registers
      if (substituteWithOrigins) {
        substituteWithOrigins();
      }
      // Run all substitutions here, later stages don't substitute and rely on them.
      substituter.commit();
      removeUnusedLocals();

      // Instructions
      scope.streamCfgs().forEach(this::removeTrivialNoOps);
    }

    void removeUnreachableBlocks(CFG cfg) {
      var unreachable = new HashSet<>(cfg.bbs());
      var worklist = new ArrayList<BB>();

      // Start from entry block
      var entry = cfg.entry();
      unreachable.remove(entry);
      worklist.add(entry);

      // Find all reachable blocks
      while (!worklist.isEmpty()) {
        var current = worklist.removeLast();
        for (var successor : current.successors()) {
          if (unreachable.remove(successor)) {
            worklist.add(successor);
          }
        }
      }

      // Remove unreachable blocks
      for (var bb : unreachable) {
        cfg.removeBB(bb);
      }
      changed |= !unreachable.isEmpty();
    }

    void simplifyBranches(BB bb) {
      if (bb.jump() instanceof If(Argument cond, Target ifTrue, Target ifFalse)) {
        // Case 1: Condition is a constant
        if (cond instanceof Constant literal) {
          var target =
              switch (truthiness(literal)) {
                case TRUE -> ifTrue;
                case FALSE -> ifFalse;
                case NA -> null;
              };
          if (target == null) {
            // If the condition is not a boolean logical, this is a type error.
            return;
          }

          bb.setJump(new Goto(target));
          changed = true;
          return;
        }

        // Case 2: Both targets are the same
        if (ifTrue.bb() == ifFalse.bb() && ifTrue.phiArgs().equals(ifFalse.phiArgs())) {
          bb.setJump(new Goto(ifTrue));
          changed = true;
        }
      }
    }

    static Logical truthiness(Constant constant) {
      return constant.sexp().asScalarLogical().orElse(Logical.NA);
    }

    void removeSinglePredecessorPhis(BB bb) {
      // Skip blocks with no phi parameters (fastcase)
      if (bb.phiParameters().isEmpty()) {
        return;
      }

      // Skip blocks with zero or multiple predecessors
      if (bb.predecessors().size() != 1) {
        return;
      }

      // Skip if the predecessor is an `If`, where both branches point to this block.
      // If the arguments are the same, it will be handled by `simplifyBranches`.
      // If the arguments are different, we can't remove the phi parameters.
      var predecessor = Iterables.getOnlyElement(bb.predecessors());
      if (predecessor.jump() instanceof If(var _, var ifTrue, var ifFalse)
          && ifTrue.bb() == bb
          && ifFalse.bb() == bb
          && ifTrue.phiArgs().equals(ifFalse.phiArgs())) {
        return;
      }

      var jumpTarget = findTargetInJump(predecessor.jump(), bb);
      if (jumpTarget == null) {
        throw new IllegalStateException(
            "CFG is malformed: block is not it's predecessor's successor: "
                + bb.label()
                + ", "
                + predecessor.label());
      }

      // If the number of arguments doesn't match the number of parameters,
      // this is a malformed CFG, so skip.
      var phiParams = bb.phiParameters();
      var phiArgs = jumpTarget.phiArgs();
      if (phiParams.size() != phiArgs.size()) {
        return;
      }

      // Substitute each phi parameter with the corresponding argument
      for (var i = 0; i < phiParams.size(); i++) {
        var phi = phiParams.get(i);
        var arg = phiArgs.get(i);

        substituter.stage(phi, arg);
      }

      // Remove phi parameter definitions and arguments.
      bb.clearParameters();
      predecessor.setJump(removingAllJumpArguments(predecessor.jump(), bb));

      changed = true;
    }

    void mergeBlocks(CFG cfg) {
      for (var bb : dfs(cfg)) {
        while (canMergeWithSuccessor(bb)) {
          mergeWithSuccessor(bb);
        }
      }
    }

    static boolean canMergeWithSuccessor(BB bb) {
      // Can merge if:

      // 1. Block has exactly one successor ([Goto])
      if (!(bb.jump() instanceof Goto(var target))) {
        return false;
      }
      var successor = target.bb();

      // 2. That successor has exactly one predecessor (this block)
      if (successor.predecessors().size() != 1) {
        return false;
      }

      // 3. The successor is not the entry block
      if (successor == bb.owner().entry()) {
        return false;
      }

      // 4. The jump has the correct number of arguments (general CFG invariant)
      return target.phiArgs().size() == successor.phiParameters().size();
    }

    void mergeWithSuccessor(BB first) {
      var cfg = first.owner();
      var target = ((Goto) first.jump()).target();
      var second = target.bb();

      // Substitute phi parameters with arguments
      for (var i = 0; i < target.phiArgs().size(); i++) {
        var arg = target.phiArgs().get(i);
        var phi = second.phiParameters().get(i);

        substituter.stage(phi, arg);
      }

      // Add statements and replace jump
      first.appendStatements(second.statements());
      first.setJump(second.jump());

      // Remove second block
      cfg.removeBB(second);

      changed = true;
    }

    void substituteWithOrigins() {
      var originAnalysis = new OriginAnalysis(scope);
      substituter.stageAll(originAnalysis.registerOrigins());
      changed |= !originAnalysis.registerOrigins().isEmpty();
    }

    void removeUnusedLocals() {
      // ???: Do we need to repeat this for long phi/jump-argument chains, since we remove jump
      //  arguments? Or we may need to do something equivalent to repeating but more optimal.
      var defUses = new DefUses(scope);

      var iterator = scope.mutablyIterateLocals();
      while (iterator.hasNext()) {
        var local = iterator.next();

        if (!(local.variable() instanceof Register localReg && defUses.uses(localReg).isEmpty())) {
          continue;
        }

        // Remove the local from definitions
        for (var definition : defUses.definitions(localReg)) {
          var localDef = definition.inInnermostCfg();
          var defBb = localDef.bb();
          var defStmt = (Statement) localDef.instruction();

          if (defStmt == null) {
            // Remove unused phi
            var phiIndex = defBb.phiParameters().indexOf(localReg);
            assert phiIndex != -1
                : "def-use analysis reported a def in phis, but there is no phi: "
                    + localReg
                    + " in\n"
                    + defBb;
            defBb.removeParameterAt(phiIndex);
            for (var pred : defBb.predecessors()) {
              pred.setJump(removingJumpArgument(pred.jump(), defBb, phiIndex));
            }
          } else {
            // Convert assignment to void statement
            localDef.replaceWith(new Statement(defStmt.expression()));
          }
        }

        // Remove the local from the scope
        iterator.remove();
        changed = true;
      }
    }

    void removeTrivialNoOps(CFG cfg) {
      for (var bb : cfg.bbs()) {
        for (int i = 0; i < bb.statements().size(); ) {
          var stmt = bb.statements().get(i);
          if (stmt.assignee() != null || !isTriviallyPure(stmt.expression())) {
            i++;
            continue;
          }

          // No-op, remove
          bb.removeStatementAt(i);
          changed = true;
        }
      }
    }

    boolean isTriviallyPure(Expression expression) {
      return switch (expression) {
        case Aea _ -> true;
        case Call _ -> false;
          // Other instructions may implicitly depend on it succeeding
        case Cast _ -> false;
        case Closure _, Dup _ -> true;
        case Force _ -> false;
          // May error
        case Load _ -> false;
          // May force
        case LoadFun _ -> false;
        case MaybeForce _ -> false;
        case MkVector _ -> true;
        case Placeholder _ -> false;
        case Promise _ -> true;
        case ReflectiveLoad _, ReflectiveStore _, Store _ -> false;
          // May error
        case SubscriptLoad _ -> false;
        case SubscriptStore _ -> false;
          // May error
        case SuperLoad _ -> false;
        case SuperStore _ -> false;
      };
    }

    /// Find the target in a jump that points to the given basic block
    @Nullable Target findTargetInJump(Jump jump, BB targetBb) {
      for (var target : jump.targets()) {
        if (target.bb() == targetBb) {
          return target;
        }
      }
      return null;
    }

    /// Returns the jump removing the phi argument in the target pointing to `targetBb`.
    Jump removingJumpArgument(Jump jump, BB targetBb, int index) {
      return switch (jump) {
        case Goto(var next) -> new Goto(removingJumpArgument(next, targetBb, index));
        case If(var condition, var ifTrue, var ifFalse) ->
            new If(
                condition,
                removingJumpArgument(ifTrue, targetBb, index),
                removingJumpArgument(ifFalse, targetBb, index));
        case Return(var value) -> new Return(value);
        case Unreachable() -> new Unreachable();
      };
    }

    /// Returns the jump removing all phi arguments for the given target BB
    Jump removingAllJumpArguments(Jump jump, BB targetBb) {
      return switch (jump) {
        case Goto(var next) -> new Goto(removingAllJumpArguments(next, targetBb));
        case If(var condition, var ifTrue, var ifFalse) ->
            new If(
                condition,
                removingAllJumpArguments(ifTrue, targetBb),
                removingAllJumpArguments(ifFalse, targetBb));
        case Return(var value) -> new Return(value);
        case Unreachable() -> new Unreachable();
      };
    }

    /// If this points to `targetBb`, returns removing the phi argument at the given index.
    Target removingJumpArgument(Target target, BB targetBb, int index) {
      if (target.bb() != targetBb) {
        return target;
      }

      var phiArgs = ImmutableList.<Argument>builderWithExpectedSize(target.phiArgs().size() - 1);
      phiArgs.addAll(target.phiArgs().subList(0, index));
      phiArgs.addAll(target.phiArgs().subList(index + 1, target.phiArgs().size()));

      return new Target(target.bb(), phiArgs.build());
    }

    /// If this points to targetBb, returns it with all phi arguments removed
    Target removingAllJumpArguments(Target target, BB targetBb) {
      if (target.bb() != targetBb) {
        return target;
      }
      return new Target(target.bb(), ImmutableList.of());
    }
  }
}
