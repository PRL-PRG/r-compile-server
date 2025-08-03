package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.HashSet;
import org.prlprg.fir.analyze.DefUses;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.Substituter;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Logical;

/// Cleanup optimizations:
/// - Remove unreachable basic blocks.
/// - Remove unused locals (convert assignments into void statements, and remove from scope).
/// - Convert branches whose condition is always true or false, or where both blocks are the
///   same, into gotos.
/// - Merge blocks with a single successor ([Goto]).
public class Cleanup extends Optimization {
  @Override
  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private static class OnAbstraction {
    final Abstraction scope;
    final DefUses defUses;
    final Substituter substituter;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      this.defUses = new DefUses(scope);
      substituter = new Substituter(scope);
    }

    void run() {
      // Remove unused locals.
      var toRemove = new ArrayList<Register>();
      for (var local : scope.locals()) {
        if (local.variable() instanceof Register localReg && defUses.uses(localReg).isEmpty()) {
          // Convert assignments to void statements
          for (var definition : defUses.definitions(localReg)) {
            var localDef = definition.inInnermostCfg();
            var defStmt = (Statement) localDef.instruction();
            localDef.replaceWith(new Statement(defStmt.expression()));
          }

          // Remove from scope
          toRemove.add(localReg);
        }
      }
      for (var localReg : toRemove) {
        scope.removeLocal(localReg);
      }

      // CFG-specific cleanup
      scope.streamCfgs().forEach(cfg -> new OnCfg(cfg).run());

      // Run substitutions all at once for performance
      substituter.commit();
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
          changed = removeUnreachableBlocks() | simplifyBranches() | mergeBlocks();
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
            if (ifTrue.bb() == ifFalse.bb()) {
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
        first.pushStatements(second.statements());
        first.setJump(second.jump());

        // Remove second block
        cfg.removeBB(second);
      }
    }
  }
}
