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
   * <p>Use {@link InstrOrPhi#rename(String)}, {@link Phi#setInput(Input)}, or {@link
   * Instr#mutateArgs(Instr, InstrData)} when applicable. Those have O(<# arguments in all
   * instructions and phis>) time complexity per call. However, they are less flexible than this
   * method, which can substitute a node with one of a different shape (# of return values) or one
   * that already exists.
   *
   * <p>Some of the substitutions may change the number of inputs in phi nodes.
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
