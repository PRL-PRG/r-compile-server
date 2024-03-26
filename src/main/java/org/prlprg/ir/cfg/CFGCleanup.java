package org.prlprg.ir.cfg;

interface CFGCleanup extends CFGQuery, CFGIntrinsicMutate {
  /**
   * Cleanup the CFG. Specifically:
   *
   * <ul>
   *   <li>Remove phi nodes with no users.
   *   <li>Convert branch instructions where both branches are the same BB into single-branch
   *       variants.
   *   <li>Merge the basic blocks which have only one successor to a basic block with only one
   *       predecessor.
   *   <li>Remove "pure" statements with no users (including temporary {@link
   *       Stmts.Placeholder.NoOp} statements).
   *   <li>Replace phi nodes that have a single input with that input.
   *   <li>Remove basic blocks that are unreachable from the entry block (remove basic blocks with
   *       zero predecessors recursively).
   * </ul>
   *
   * <p>{@link CFG#verify()} will fail on CFGs that aren't cleaned up. Generally, after a set of
   * optimizations you will call this method and then optionally {@link CFG#verify()}.
   */
  default void cleanup() {
    var iter = new CFGIterator.Dfs((CFG) this);
    while (iter.hasNext()) {
      var bb = iter.next();
      if (bb.predecessors().isEmpty() && bb != entry()) {
        remove(bb);
      }

      // Remove temporary NoOp statements?
      // TODO ???
    }

    for (var remainingBBId : iter.remainingBBIds()) {
      // Remove basic blocks that are unreachable from the entry block.
      remove(remainingBBId);
    }
  }
}
