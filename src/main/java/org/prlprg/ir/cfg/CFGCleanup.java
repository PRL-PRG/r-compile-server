package org.prlprg.ir.cfg;

import com.google.common.collect.Streams;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;
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
  @SuppressWarnings("UnstableApiUsage")
  default void cleanup() {
    section(
        "CFG#cleanup",
        () -> {
          var defUses = defUses();

          var iter = new CFGIterator.Dfs((CFG) this);
          while (iter.hasNext()) {
            var bb = iter.next();

            // Remove phi nodes and "pure" statements with no users (including temporary `NoOp`
            // statements).
            bb.removeWhere(
                i ->
                    i.isPure()
                        && !(i instanceof Jump)
                        && i.returns().stream().allMatch(defUses::isUnused));
          }

          // Remove basic blocks that are unreachable from the entry block.
          removeAll(iter.remainingBBIds());

          // ???: Is there a non-iterative way to do these?
          AtomicBoolean mayImproveOnRepeat = new AtomicBoolean(false);
          do {
            mayImproveOnRepeat.set(false);

            // Convert branch instructions where both branches are the same BB into single-branch
            // variants.
            for (var bb : iter()) {
              if (bb.jump() != null
                  && bb.jump().data()
                      instanceof JumpData.Branch(var _, var _, var ifTrue, var ifFalse)
                  && ifTrue == ifFalse) {
                var phiInputs = ifTrue.phis().stream().map(phi -> phi.input(bb)).toList();
                Instr.mutateArgs(bb.jump(), new JumpData.Goto(ifTrue));
                Streams.forEachPair(
                    ifTrue.phis().stream(),
                    phiInputs.stream(),
                    (phi, input) -> {
                      // This is safe because the input is the same type as the phi,
                      // but Java can't enforce because it's an existential.
                      @SuppressWarnings("unchecked")
                      var phi1 = (Phi<Node>) phi;
                      phi1.setInput(bb, input);
                    });
                // Don't need to set `mayImproveOnRepeat` for the first optimization.
              }
            }

            // Substitute phi nodes that have a single input, or all the same input, with that
            // input.
            batchSubst(
                substs -> {
                  for (var bb : iter()) {
                    var phis = bb.iterPhis();
                    while (phis.hasNext()) {
                      var phi = phis.next();
                      var inputs = Set.copyOf(phi.inputNodes());
                      if (inputs.size() == 1) {
                        substs.stage(phi, inputs.iterator().next());
                        phis.remove();
                        mayImproveOnRepeat.set(true);
                      }
                    }
                  }
                });

            // Merge basic blocks with only one successor that has only one predecessor (and vice
            // versa),
            // and blocks with only one successor and no instructions or phis.
            var iter1 = new CFGIterator.Dfs((CFG) this);
            while (iter1.hasNext()) {
              var bb = iter1.next();
              while (bb.jump() != null
                  && bb.jump().data() instanceof JumpData.Goto(var nextBb)
                  && ((nextBb != entry() && nextBb.hasSinglePredecessor())
                      || (bb.stmts().isEmpty()
                          && nextBb.phis().stream()
                              .noneMatch(
                                  nextPhi ->
                                      bb.predecessors().stream()
                                          .anyMatch(
                                              pred ->
                                                  nextPhi.hasIncomingBB(pred)
                                                      && !nextPhi
                                                          .input(pred)
                                                          .equals(nextPhi.input(bb))))))) {
                if (nextBb == entry()) {
                  // We can't do `mergeWithSuccessor` because we can't remove the entry.
                  // Instead we inline a tiny `mergeWithPredecessor` manually and remove `bb`.
                  // (We have to inline the `mergeWithPredecessor` because we have to call
                  // `iter1.remove()`
                  // instead of `remove(bb)`.)
                  // stmts.isEmpty()
                  section(
                      "CFG#cleanup#mergeWithPredecessor",
                      () -> {
                        bb.removeJump();
                        for (var pred : bb.predecessors()) {
                          var jump = pred.jump();
                          assert jump != null && jump.targets().contains(bb)
                              : "BB has predecessor whose jump doesn't point to it";
                          JumpImpl.cast(jump).replaceInTargets(bb, nextBb);
                        }
                        iter1.remove();
                      });
                } else {
                  bb.mergeWithSuccessor(nextBb);
                }
                mayImproveOnRepeat.set(true);
              }
            }
          } while (mayImproveOnRepeat.get());
        });
  }
}
