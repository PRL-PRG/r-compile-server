package org.prlprg.primitive;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.util.StringCase;

/** R "logical": a boolean which also permits NA (trinary). */
@EnumSerialCaseIs(StringCase.SCREAMING_SNAKE)
public enum Logical {
  @SuppressWarnings("MissingJavadoc")
  FALSE(0),
  @SuppressWarnings("MissingJavadoc")
  TRUE(1),
  @SuppressWarnings("MissingJavadoc")
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
