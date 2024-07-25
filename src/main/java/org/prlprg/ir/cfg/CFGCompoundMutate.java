package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.function.Consumer;
import org.prlprg.ir.cfg.Phi.Input;

public interface CFGCompoundMutate extends CFGQuery, CFGIntrinsicMutate {
  // region mutate BBs
  /**
   * Remove every basic block in the collection from the CFG.
   *
   * @see CFG#remove(BBId)
   */
  default void removeAll(Collection<BBId> bbs) {
    section(
        "CFG#removeAll",
        () -> {
          for (var bb : bbs) {
            remove(bb);
          }
        });
  }

  // endregion mutate BBs

  // region mutate nodes
  /**
   * Substitute many nodes at once: run the given action and then perform the prepared
   * substitutions.
   *
   * <p>Use {@link LocalNode#rename(String)} or {@link Phi#setInput(Input)} when applicable. Those
   * have O(&lt;# arguments in all instructions and phis&gt;) time complexity per call. However,
   * they are less flexible than this method, since they mutate nodes, while this substitutes an
   * arbitrary node with another one.
   *
   * <p>If a {@link Jump} is substituted with another jump that has different targets, the shape of
   * the graph will change, and this will change the number of inputs in {@link Phi} nodes (adding
   * an {@linkplain InvalidNode#UNSET_PHI_INPUT "unset"} input to phis in blocks with a new
   * predecessor, and removing inputs from phis in blocks with a removed predecessor).
   */
  default void batchSubst(Consumer<BatchSubst> action) {
    section(
        "CFG#batchSubst",
        () -> {
          var substs = new BatchSubst();
          action.accept(substs);
          substs.commit((CFG) this);
        });
  }
  // endregion mutate nodes
}
