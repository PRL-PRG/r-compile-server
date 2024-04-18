package org.prlprg.parseprint;

/** Skip all whitespace, all except newlines, or nothing? For {@link Scanner} and {@link Parser}. */
public enum SkipWhitespace {
  /** Skip all whitespace. */
  ALL,
  /** Skip all except newlines. */
  ALL_EXCEPT_NEWLINES,
  /** Skip nothing. */
  NONE
}
