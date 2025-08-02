package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.HashSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.primitive.Logical;

/// Cleanup optimizations:
/// - Remove unreachable basic blocks.
/// - Convert branches whose condition is always true or false, or where both blocks are the
///   same, into gotos.
/// - Merge blocks with a single successor ([Goto]).
public class Cleanup extends Optimization {
  @Override
  public void run(Abstraction abstraction) {
    var cfg = abstraction.cfg();
    var changed = true;

    while (changed) {
      // Use `|` so all passes are applied.
      changed = removeUnreachableBlocks(cfg) | simplifyBranches(cfg) | mergeBlocks(cfg);
    }
  }

  private boolean removeUnreachableBlocks(CFG cfg) {
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

  private boolean simplifyBranches(CFG cfg) {
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

  private Logical truthiness(Constant constant) {
    return constant.sexp().asScalarLogical().orElse(Logical.NA);
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
        mergeWithSuccessor(bb);
        changed = true;
      }
    }

    return changed;
  }

  private boolean canMergeWithSuccessor(BB bb) {
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

  private void mergeWithSuccessor(BB first) {
    var cfg = first.owner();
    var target = ((Goto) first.jump()).target();
    var second = target.bb();

    // Substitute phi parameters with arguments
    for (var i = 0; i < target.phiArgs().size(); i++) {
      var arg = target.phiArgs().get(i);
      var phi = second.phiParameters().get(i);

      cfg.scope().removeLocal(phi);
      cfg.substitute(cfg, new Read(phi), arg);
    }

    // Add statements and replace jump
    first.pushStatements(second.statements());
    first.setJump(second.jump());

    // Remove second block
    cfg.removeBB(second);
  }
}
