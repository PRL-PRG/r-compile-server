package org.prlprg.ir.cfg;

import java.util.Collection;
import java.util.function.Consumer;

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
   * <p>Use {@link BB#subst(Instr, String, InstrData)} when applicable. This has O(<# arguments in
   * all instructions>) time complexity per call. However, {@code BB#subst} has restrictions, while
   * this method can substitute any node with an arbitrary other node.
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
