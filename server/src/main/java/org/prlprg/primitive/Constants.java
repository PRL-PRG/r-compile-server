package org.prlprg.primitive;

import java.util.Set;
import org.prlprg.sexp.SEXPs;

/** Constants for R runtime primitives. Other constants are in {@link SEXPs}. */
public final class Constants {
  // according to Arith.h
  /**
   * Minimum value representable in an R integer, since {@link Integer#MIN_VALUE} is used for NA.
   */
  public static final int INT_MIN = Integer.MIN_VALUE + 1;

  /** The actual value of an {@code NA} element of an integer vector in GNU-R. */
  public static final int NA_INT = Integer.MIN_VALUE;

  /// The actual value of an `NA` element of a real vector in GNU-R (`R_NaReal`): the `NaN` whose
  /// low word is 1954. GNU-R treats every other `NaN` as `NaN`, not `NA`.
  ///
  /// [Double#equals] doesn't tell it apart from other `NaN`s; [Double#doubleToRawLongBits] does.
  /// [org.prlprg.rds.RDSReader] and [org.prlprg.rds.RDSWriter] keep the bits.
  public static final double NA_REAL = Double.longBitsToDouble(0x7FF00000000007A2L);

  /** The actual value of an {@code NA} element of a complex vector in GNU-R. */
  public static final Complex NA_COMPLEX = new Complex(NA_REAL, NA_REAL);

  /**
   * The "NA string": a unique string that is compared for identity which represents NA values.
   *
   * <p>Note: This is <b>not</b> encoded the same as GNU-R's NA string (because they're both
   * pointers), so it must be handled in serialization and deserialization.
   */
  @SuppressWarnings("StringOperationCanBeSimplified")
  public static final String NA_STRING = new String("!!!NA_STRING!!!");

  /** String representations of true values. (cf. StringTrue and truenames in util.c) */
  public static final Set<String> TRUE_NAMES = Set.of("T", "True", "TRUE", "true");

  /** String representations of false values. (cf. StringFalse and falsenames in util.c) */
  public static final Set<String> FALSE_NAMES = Set.of("F", "False", "FALSE", "false");

  /// Whether `d` is GNU-R's `NA` (`R_IsNA`): a `NaN` whose low word is 1954. Arithmetic may set
  /// the quiet bit, so the high word can differ from [#NA_REAL]'s.
  public static boolean isNaReal(double d) {
    return Double.isNaN(d) && (Double.doubleToRawLongBits(d) & 0xFFFFFFFFL) == 1954;
  }

  /** Check if a string is the NA string. */
  @SuppressWarnings("StringEquality")
  public static boolean isNaString(String s) {
    return s == NA_STRING;
  }

  private Constants() {}
}
