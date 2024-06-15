package org.prlprg.ir.cfg;

import java.util.Objects;
import org.prlprg.ir.analysis.CFGAnalyses;

interface CFGCleanup extends CFGQuery, CFGAnalyses, CFGIntrinsicMutate, CFGCompoundMutate {
  /**
   * Cleanup the CFG. Specifically:
   *
   * <ul>
   *   <li>Remove basic blocks that are unreachable from the entry block (remove basic blocks with
   *       zero predecessors recursively under DFS).
   *   <li>Merge the basic blocks with only one successor which has only one predecessor (and vice
   *       versa) with each other.
   *   <li>Remove phi nodes and "pure" statements with no users (including temporary {@link
   *       StmtData.NoOp NoOp} statements).
   *   <li>Substitute phi nodes that have a single input with that input.
   *   <li>Convert branch instructions where both branches are the same BB into single-branch
   *       variants.
   * </ul>
   *
   * <p>{@link CFG#verify()} will fail on CFGs that aren't cleaned up. Generally, after a set of
   * optimizations you will call this method and then optionally {@link CFG#verify()}.
   */
  default void cleanup() {
    var defUses = defUses();
    batchSubst(
        substs -> {
          var iter = new CFGIterator.Dfs((CFG) this);
          while (iter.hasNext()) {
            var bb = iter.next();
            if (bb.predecessors().isEmpty() && bb != entry()) {
              // Remove basic blocks that are unreachable from the entry block (remove basic blocks
              // with zero predecessors recursively under DFS) [1].
              remove(bb);
            }

            // Remove phi nodes and "pure" statements with no users (including temporary `NoOp`
            // statements).
            bb.removeWhere(
                i ->
                    i.isPure()
                        && !(i instanceof Jump)
                        && i.returns().stream().allMatch(defUses::isUnused));

            // Substitute phi nodes that have a single input with that input.
            for (var phi : bb.phis()) {
              if (phi.numInputs() == 1) {
                substs.stage(phi, phi.inputNodes().getFirst());
              }
            }

            // Convert branch instructions where both branches are the same BB into single-branch
            // variants.
            if (bb.jump() != null
                && bb.jump().data()
                    instanceof JumpData.Branch(var _, var _, var ifTrue, var ifFalse)) {
              if (ifTrue == ifFalse) {
                Instr.mutateArgs(bb.jump(), new JumpData.Goto(ifTrue));
              }
            }

            var onlyPred = bb.onlyPredecessor();
            if (onlyPred != null
                && Objects.requireNonNull(onlyPred.jump()).data()
                    instanceof JumpData.Goto(var nextBB)) {
              // Merge the basic blocks with only one successor which has only one predecessor (and
              // vice versa) with each other.
              //
              // Do this at the end because we already iterated onlyPred's phis and instructions.
              assert nextBB == bb;
              onlyPred.mergeWithSuccessor(bb);
            }
          }

          // Remove basic blocks that are unreachable from the entry block [2].
          removeAll(iter.remainingBBIds());
        });
  }
}
