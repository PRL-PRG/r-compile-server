package org.prlprg.primitive;

/** GNU-R "logical": a boolean which also permits NA (trinary). */
public enum Logical {
  FALSE(0),
  TRUE(1),
  NA(Integer.MIN_VALUE);

  /** The value in GNU-R */
  final int i;

  /** Convert from GNU-R representation. */
  public static Logical valueOf(int i) {
    return switch (i) {
      case 0 -> FALSE;
      case 1 -> TRUE;
      case Integer.MIN_VALUE -> NA;
      default -> throw new IllegalArgumentException("Integer is not a GNU-R logical: " + i);
    };
  }

  Logical(int i) {
    this.i = i;
  }
}
