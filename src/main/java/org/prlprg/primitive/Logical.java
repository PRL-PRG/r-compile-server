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

  /** Convert from GNU-R representation: 0 → FALSE, 1 → TRUE, NA → NA. */
  public static Logical valueOf(int i) {
    return switch (i) {
      case 0 -> FALSE;
      case 1 -> TRUE;
      case Constants.NA_INT -> NA;
      default -> throw new IllegalArgumentException("Integer is not a GNU-R logical: " + i);
    };
  }

  /** Convert to GNU-R representation. */
  public int toInt() {
    return i;
  }

  Logical(int i) {
    this.i = i;
  }

  /** Coerce to an integer: FALSE → 0, TRUE → 1, NA → NA.
   *
   * <p>This also happens to be the opposite of {@link #valueOf(int).
   */
  public int asInt() {
    return switch (this) {
      case FALSE -> 0;
      case TRUE -> 1;
      case NA -> Constants.NA_INT;
    };
  }

  /** Coerce to a real (double): FALSE → 0, TRUE → 1, NA → NA. */
  public double asReal() {
    return switch (this) {
      case FALSE -> 0;
      case TRUE -> 1;
      case NA -> Constants.NA_REAL;
    };
  }
}
