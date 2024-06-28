package org.prlprg.ir.cfg;

import java.util.function.Supplier;

interface CFGIntrinsicMutate {
  // region mutate BBs
  /** Create, insert, and return a new basic block. */
  BB addBB();

  /** Create insert, and return a new basic block, and attach a short name to the block's id. */
  BB addBB(String name);

  /**
   * Create insert, and return a new basic block with the given ID.
   *
   * <p>Usually you will call {@link #addBB()} or {@link #addBB(String)} instead. Mainly this is
   * used by {@link CFGEdit} to re-add BBs with the same IDs as they had before removal.
   *
   * @throws IllegalArgumentException If a different basic block in the CFG has the same ID.
   */
  BB addBBWithId(BBId id);

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link CFG#verify()} is called.
   *
   * @throws IllegalArgumentException If the basic block is the {@linkplain CFG#entry() entry}.
   *     <p><b>OR</b> if the basic block was never in the CFG.
   *     <p><b>OR</b> if the basic block was already removed.
   */
  void remove(BB bb);

  /**
   * Remove a basic block from the CFG.
   *
   * <p>Existing basic blocks and instructions may still reference it, but these references must be
   * removed before {@link CFG#verify()} is called.
   *
   * @return The removed basic block.
   * @throws IllegalArgumentException If the basic block is the {@linkplain CFG#entry() entry}.
   *     <p><b>OR</b> if the basic block was never in the CFG.
   *     <p><b>OR</b> if the basic block was already removed.
   */
  BB remove(BBId bbId);

  // endregion mutate BBs

  // region additional recording operations
  /**
   * Indicate to the CFG's {@linkplain CFG#withObserver(CFGObserver, Runnable) observers} that a new
   * section has begun.
   *
   * <p>Edits between this and the later {@link #endSection()} call at the same level will be put
   * put into a {@link CFGEdit.Section}.
   *
   * @see #section(String, Runnable)
   */
  void beginSection(String label);

  /**
   * Indicate to the CFG's {@linkplain CFG#withObserver(CFGObserver, Runnable) observers} that the
   * newest in-progress section has ended.
   *
   * <p>Edits between this and prior {@link #beginSection(String)} call at the same level will be
   * put into a {@link CFGEdit.Section}.
   *
   * @throws IllegalStateException If there is no section to end.
   * @see #section(String, Runnable)
   */
  void endSection();

  /**
   * Run the given function, and indicate to the CFG's {@linkplain CFG#withObserver(CFGObserver,
   * Runnable) observers} that the edits performed by the function are in a section with the given
   * label.
   *
   * <p>This combines {@link #beginSection(String)} and {@link #endSection()}. Notably, this calls
   * {@code endSection} even if the action throws an exception.
   */
  default void section(String label, Runnable action) {
    beginSection(label);
    try {
      action.run();
    } finally {
      endSection();
    }
  }

  /**
   * Run the given function, and indicate to the CFG's {@linkplain CFG#withObserver(CFGObserver,
   * Runnable) observers} that the edits performed by the function are in a section with the given
   * label.
   *
   * <p>This combines {@link #beginSection(String)} and {@link #endSection()}. Notably, this calls
   * {@code endSection} even if the action throws an exception.
   */
  default <T> T section(String label, Supplier<T> action) {
    beginSection(label);
    try {
      return action.get();
    } finally {
      endSection();
    }
  }

  /**
   * Indicate to the CFG's {@linkplain CFG#withObserver(CFGObserver, Runnable) }} that a divider has
   * been added.
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
