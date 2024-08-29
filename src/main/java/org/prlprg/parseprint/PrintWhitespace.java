package org.prlprg.parseprint;

/** What whitespace to print around children of larger data-structures (e.g. collections). */
public enum PrintWhitespace {
  /** Don't print any whitespace around the children. */
  NONE,
  /** Print spaces after commas and between other delimiters. */
  SPACES,
  /** Print newlines between children. */
  NEWLINES,
}
