package org.prlprg.ir.cfg;

interface CFGIntrinsicMutate {
  // region mutate
  /** Create, insert, and return a new basic block. */
  BB addBB();

  /** Create insert, and return a new basic block, and attach a short name to the block's id. */
  BB addBB(String name);

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link CFG#verify()} is called.
   *
   * @throws IllegalArgumentException If the basic block was never in the CFG.
   * @throws IllegalArgumentException If the basic block was already removed.
   */
  void remove(BB bb);

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link CFG#verify()} is called.
   *
   * @return The removed basic block.
   * @throws IllegalArgumentException If the basic block was never in the CFG.
   * @throws IllegalArgumentException If the basic block was already removed.
   */
  BB remove(BBId bbId);

  // endregion

  // region additional recording operations
  /**
   * Indicate to the recorder (argument provided to {@link CFG ( CFGRecorder )}) that a user-defined
   * section has begun.
   *
   * <p>Edits between this and the later {@link #endSection()} call at the same level will be put
   * put into a {@link CFGEdit.Section}.
   */
  void beginSection(String label);

  /**
   * Indicate to the recorder (argument provided to {@link CFG( CFGObserver )}) that a user-defined
   * section has ended.
   *
   * <p>Edits between this and prior {@link #beginSection(String)} call at the same level will be
   * put into a {@link CFGEdit.Section}.
   *
   * @throws IllegalStateException If there is no section to end.
   */
  void endSection();

  /**
   * Indicate to the recorder (argument provided to {@link CFG( CFGObserver )}) that a user-defined
   * divider has been added.
   *
   * <p>This will record a {@link CFGEdit.Divider}.
   */
  void recordDivider(String label);

  // endregion

  // region observers
  /**
   * Add an observer to this CFG.
   *
   * <p>Observers will be notified of all edits (mutations) that are performed on this CFG,
   * including those performed on its {@link BB}s and {@link Node}s, as well as {@link
   * #beginSection(String)}, {@link #endSection()}, and {@link #recordDivider(String)}.
   *
   * <p>If you are only temporarily adding the observer and removing it within the same scope, call
   * {@link #withObserver(CFGObserver, Runnable)} instead.
   */
  void addObserver(CFGObserver observer);

  /**
   * Remove an observer from this CFG.
   *
   * @throws IllegalArgumentException If the observer was never added.
   * @see #addObserver(CFGObserver)
   */
  void removeObserver(CFGObserver observer);

  /**
   * Temporarily add an observer to the CFG for the duration of the given action.
   *
   * @see #addObserver(CFGObserver)
   */
  void withObserver(CFGObserver observer, Runnable action);
  // endregion
}
