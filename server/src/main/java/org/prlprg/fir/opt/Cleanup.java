package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.HashSet;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Literal;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.LglSXP;

/// Cleanup optimizations:
/// - Remove unreachable basic blocks.
/// - Convert branches whose condition is always true or false, or where both blocks are the same,
///   to gotos. Moves the condition into an instruction before the goto if it's not a constant
/// - Merge blocks with a single successor.
public class Cleanup extends Optimization {
  @Override
  public void run(Abstraction abstraction) {
    var cfg = abstraction.cfg();
    var changed = true;

    while (changed) {
      changed = false;

      // Remove unreachable blocks
      changed |= removeUnreachableBlocks(cfg);

      // Simplify branches
      changed |= simplifyBranches(cfg);

      // Merge blocks
      changed |= mergeBlocks(cfg);
    }
  }

  private boolean removeUnreachableBlocks(CFG cfg) {
    var reachable = new HashSet<BB>();
    var worklist = new ArrayList<BB>();

    // Start from entry block
    var entry = cfg.entry();
    reachable.add(entry);
    worklist.add(entry);

    // Find all reachable blocks
    while (!worklist.isEmpty()) {
      var current = worklist.removeLast();
      for (var successor : current.successors()) {
        if (reachable.add(successor)) {
          worklist.add(successor);
        }
      }
    }

    // Remove unreachable blocks
    var toRemove = new ArrayList<BB>();
    for (var bb : cfg.bbs()) {
      if (!reachable.contains(bb)) {
        toRemove.add(bb);
      }
    }

    var changed = !toRemove.isEmpty();
    for (var bb : toRemove) {
      cfg.removeBB(bb);
    }

    return changed;
  }

  private boolean simplifyBranches(CFG cfg) {
    var changed = false;

    for (var bb : new ArrayList<>(cfg.bbs())) {
      if (bb.jump() instanceof If ifJump) {
        var condition = ifJump.cond();
        var trueTarget = ifJump.ifTrue();
        var falseTarget = ifJump.ifFalse();

        // Case 1: Both targets are the same
        if (trueTarget.bb() == falseTarget.bb()) {
          // Convert to unconditional jump, but first evaluate condition for side effects
          if (!(condition instanceof Literal)) {
            bb.pushStatement(condition);
          }
          bb.setJump(new Goto(trueTarget));
          changed = true;
          continue;
        }

        // Case 2: Condition is a constant
        if (condition instanceof Literal literal) {
          var target = getConstantBranchTarget(literal, trueTarget, falseTarget);
          if (target != null) {
            bb.setJump(new Goto(target));
            changed = true;
          }
        }
      }
    }

    return changed;
  }

  private @Nullable Target getConstantBranchTarget(
      Literal literal, Target trueTarget, Target falseTarget) {
    var sexp = literal.sexp();
    if (sexp instanceof LglSXP logical && logical.size() == 1) {
      var value = logical.get(0);
      if (value == Logical.TRUE) {
        return trueTarget;
      } else if (value == Logical.FALSE) {
        return falseTarget;
      }
    }
    return null; // Unknown or non-boolean constant
  }

  private boolean mergeBlocks(CFG cfg) {
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
        var successor = getSingleSuccessor(bb);
        if (successor != null) {
          mergeBlocks(bb, successor);
          changed = true;
        }
      }
    }

    return changed;
  }

  private boolean canMergeWithSuccessor(BB bb) {
    // Can merge if:
    // 1. Block has exactly one successor
    // 2. That successor has exactly one predecessor (this block)
    // 3. The jump is an unconditional goto
    // 4. The successor is not the entry block

    if (!(bb.jump() instanceof Goto)) {
      return false;
    }

    var successor = getSingleSuccessor(bb);
    if (successor == null) {
      return false;
    }

    if (successor == bb.owner().entry()) {
      return false;
    }

    return successor.predecessors().size() == 1;
  }

  private @Nullable BB getSingleSuccessor(BB bb) {
    var successors = bb.successors();
    var iterator = successors.iterator();
    if (iterator.hasNext()) {
      var first = iterator.next();
      if (!iterator.hasNext()) {
        return first; // Exactly one successor
      }
    }
    return null; // Zero or multiple successors
  }

  private void mergeBlocks(BB first, BB second) {
    var cfg = first.owner();

    // Move all statements from second to first
    var secondStatements = new ArrayList<>(second.statements());
    for (var i = 0; i < secondStatements.size(); i++) {
      var stmt = second.removeStatementAt(0); // Always remove from index 0
      first.pushStatement(stmt);
    }

    // Update jump from first to second's jump
    first.setJump(second.jump());

    // Remove second block
    cfg.removeBB(second);
  }
}
