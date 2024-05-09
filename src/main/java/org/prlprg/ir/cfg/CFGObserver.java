package org.prlprg.ir.cfg;

/**
 * Observes all edits (mutations) that are performed on a {@link CFG}, including those performed on
 * its {@link BB}s and {@link Node}s.
 *
 * <p>Also observes user-defined "sections" and "dividers" which provide context and structure to
 * the edits.
 */
@FunctionalInterface
public interface CFGObserver {
  /** Records that an edit (mutation) was just performed. */
  void record(CFGEdit.Intrinsic<?> edit, CFGEdit.Intrinsic<?> inverse);

  /**
   * Records that a user-defined section has begun.
   *
   * <p>Edits between this and the later {@link #endSection()} call at the same level should be put
   * into a {@link CFGEdit.Section}.
   */
  default void beginSection(String label) {}

  /**
   * Records that a user-defined section has ended.
   *
   * <p>Edits between this and prior {@link #beginSection(String)} call at the same level should be
   * put into a {@link CFGEdit.Section}.
   *
   * @throws IllegalStateException If there is no section to end.
   */
  default void endSection() {}

  /**
   * Records that a user-defined divider has been added.
   *
   * <p>This should record a {@link CFGEdit.Divider}.
   */
  default void recordDivider(String label) {}
}
