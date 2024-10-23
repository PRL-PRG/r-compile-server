package org.prlprg.parseprint;

/**
 * <b>Whitespace policy:</b> determines whether to skip all whitespace, all except newlines, or
 * nothing.
 *
 * @see Scanner#skipsWhitespace()
 * @see Scanner#runWithWhitespacePolicy(SkipWhitespace, Runnable)
 */
public enum SkipWhitespace {
  /** Skip all whitespace. */
  ALL,
  /** Skip all except newlines. */
  ALL_EXCEPT_NEWLINES,
  /** Skip nothing. */
  NONE;

  /**
   * Returns a whitespace policy that skips whatever this skips except for newlines)
   *
   * <p>If this doesn't skip newlines, it will return {@code this}.
   */
  public SkipWhitespace notSkippingNewlines() {
    return switch (this) {
      case ALL -> ALL_EXCEPT_NEWLINES;
      case ALL_EXCEPT_NEWLINES, NONE -> this;
    };
  }
}
