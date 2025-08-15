package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashSet;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.DefUses;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.Substituter;
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
/// - Remove unreachable basic blocks.
/// - Remove unused locals (convert assignments into void statements, and remove from scope).
/// - Convert branches whose condition is always true or false, or where both targets are the
///   same, into gotos.
/// - Merge blocks with a single successor ([Goto]).
public class Cleanup extends Optimization {
  public static void cleanup(Module module) {
    new Cleanup().run(module);
  }

  @Override
  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private static class OnAbstraction {
    final Abstraction scope;
    final Substituter substituter;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      substituter = new Substituter(scope);
    }

    void run() {
      // CFG-specific cleanup
      scope.streamCfgs().forEach(cfg -> new OnCfg(cfg).run());

      // Run substitutions all at once for performance
      substituter.commit();

      // Remove unused locals (must be after CFG cleanup and substitution, doesn't substitute).
      var defUses = new DefUses(scope);
      var toRemove = new ArrayList<Register>();
      for (var local : scope.locals()) {
        if (local.variable() instanceof Register localReg && defUses.uses(localReg).isEmpty()) {
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

          // Remove from scope
          toRemove.add(localReg);
        }
      }
      for (var localReg : toRemove) {
        scope.removeLocal(localReg);
      }
    }

    private class OnCfg {
      final CFG cfg;

      OnCfg(CFG cfg) {
        this.cfg = cfg;
      }

      void run() {
        var changed = true;
        while (changed) {
          // Use `|` so all passes are applied.
          changed =
              removeUnreachableBlocks()
                  | simplifyBranches()
                  | mergeBlocks()
                  | removeSinglePredecessorPhis();
        }
      }

      boolean removeUnreachableBlocks() {
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
        var changed = !unreachable.isEmpty();
        for (var bb : unreachable) {
          cfg.removeBB(bb);
        }

        return changed;
      }

      boolean simplifyBranches() {
        var changed = false;

        for (var bb : new ArrayList<>(cfg.bbs())) {
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
                continue;
              }

              bb.setJump(new Goto(target));
              changed = true;
              continue;
            }

            // Case 2: Both targets are the same
            if (ifTrue.bb() == ifFalse.bb() && ifTrue.phiArgs().equals(ifFalse.phiArgs())) {
              bb.setJump(new Goto(ifTrue));
              changed = true;
            }
          }
        }

        return changed;
      }

      static Logical truthiness(Constant constant) {
        return constant.sexp().asScalarLogical().orElse(Logical.NA);
      }

      boolean mergeBlocks() {
        var changed = false;

        // Find blocks that can be merged
        var toMerge = new ArrayList<BB>();
        for (var bb : cfg.bbs()) {
          if (canMergeWithSuccessor(bb)) {
            toMerge.add(bb);
          }
        }

        // Perform merging
        for (var bb : toMerge) {
          if (canMergeWithSuccessor(bb)) { // Check again in case CFG changed
            mergeWithSuccessor(bb);
            changed = true;
          }
        }

        return changed;
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
      }

      boolean removeSinglePredecessorPhis() {
        var changed = false;

        for (var bb : new ArrayList<>(cfg.bbs())) {
          // Skip blocks with no phi parameters (fastcase)
          if (bb.phiParameters().isEmpty()) {
            continue;
          }

          // Skip blocks with zero or multiple predecessors
          if (bb.predecessors().size() != 1) {
            continue;
          }

          // Skip if the predecessor is an `If`, where both branches point to this block.
          // If the arguments are the same, it will be handled by `simplifyBranches`.
          // If the arguments are different, we can't remove the phi parameters.
          var predecessor = Iterables.getOnlyElement(bb.predecessors());
          if (predecessor.jump() instanceof If(var _, var ifTrue, var ifFalse)
              && ifTrue.bb() == bb
              && ifFalse.bb() == bb
              && ifTrue.phiArgs().equals(ifFalse.phiArgs())) {
            continue;
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
            continue;
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

        return changed;
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
