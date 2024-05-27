package org.prlprg.primitive;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Set;
import org.prlprg.sexp.SEXPs;

/** Constants for R runtime primitives. Other constants are in {@link SEXPs}. */
@SuppressFBWarnings(
    value = {"DM_STRING_CTOR", "ES_COMPARING_PARAMETER_STRING_WITH_EQ"},
    justification = "NA_STRING has to be a unique string, and we compare via direct equality")
public final class Constants {
  // according to Arith.h
  /**
   * Minimum value representable in an R integer, since {@link Integer#MIN_VALUE} is used for NA.
   */
  public static final int INT_MIN = Integer.MIN_VALUE + 1;

  /** The actual value of an {@code NA} element of an integer vector in GNU-R. */
  public static final int NA_INT = Integer.MIN_VALUE;

  /** The actual value of an {@code NA} element of a real vector in GNU-R. */
  public static final double NA_REAL = Double.NaN;

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

  /** Check if a string is the NA string. */
  @SuppressWarnings("StringEquality")
  public static boolean isNaString(String s) {
    return s == NA_STRING;
  }

  private Constants() {}
}
