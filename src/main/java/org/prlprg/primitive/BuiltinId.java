package org.prlprg.primitive;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;

// TODO
/**
 * Identifies an R "builtin" or "special" function.
 *
 * @see org.prlprg.sexp.SEXPType#BUILTIN
 * @see org.prlprg.sexp.SEXPType#SPECIAL
 */
public record BuiltinId(int index) {
  // region global builtins
  public static BuiltinId ENVIRONMENT = new BuiltinId(1);
  // TODO: These aren't the actual indices
  public static BuiltinId PRINT_VALUE = new BuiltinId(2);
  public static BuiltinId DOLLAR = new BuiltinId(3);
  public static BuiltinId DOLLAR_GETS = new BuiltinId(4);
  public static BuiltinId DOT_CALL = new BuiltinId(5);
  public static BuiltinId SEQ_ALONG = new BuiltinId(6);
  public static BuiltinId SEQ_LEN = new BuiltinId(7);
  public static BuiltinId EVAL = new BuiltinId(8);
  public static BuiltinId SUBSET = new BuiltinId(9);
  public static BuiltinId SUBASSIGN = new BuiltinId(10);
  public static BuiltinId C = new BuiltinId(11);
  public static BuiltinId SUBSET2 = new BuiltinId(12);
  public static BuiltinId SUBASSIGN2 = new BuiltinId(13);
  public static BuiltinId SUBSETN = new BuiltinId(14);
  public static BuiltinId SUBASSIGNN = new BuiltinId(15);
  public static BuiltinId SUBSET2N = new BuiltinId(16);
  public static BuiltinId SUBASSIGN2N = new BuiltinId(17);

  /**
   * The total number of builtins in the latest known version of GNU-R.
   *
   * <p>Note: Should eventually be moved into {@link org.prlprg.RSession}, since we will need a
   * smaller number to support earlier versions. But currently only used in tests.
   */
  public static final int COUNT = 752;

  // endregion

  public BuiltinId {
    if (index < 0 || index >= COUNT) {
      throw new IllegalArgumentException("Index doesn't correspond to a known builtin: " + index);
    }
  }

  /** The id of the builtin function referenced by the given symbol in R. */
  public static BuiltinId referencedBy(RegSymSXP symbol) {
    return named(symbol.name());
  }

  /** The id of the builtin function with the given name (in R). */
  public static BuiltinId named(String name) {
    // TODO: this isn't the actual ID or name
    return new BuiltinId(name.equals("environment") ? 1 : 0);
  }

  /** Returns the name (in R) of the builtin function with this id. */
  public String name() {
    return index == 1 ? "environment" : "TODO_BUILTIN_NAME";
  }

  /** Returns the symbol in R which refers to the builtin function with this id. */
  public RegSymSXP symbol() {
    return SEXPs.symbol(name());
  }

  /** Whether the builtin is "special", i.e. evaluates its arguments before calling the C code. */
  public boolean isSpecial() {
    return index % 10 == 1;
  }

  /**
   * Whether this builtin is "non-object" as defined in PIR's {@code SafeBuiltinsList}.
   *
   * <p>i.e. whether it doesn't dispatch if none of the arguments are objects?
   */
  public boolean isNonObject() {
    // TODO
    return false;
  }

  /** Whether this builtin can be safely inlined as defined in PIR's {@code SafeBuiltinsList}. */
  public boolean canSafelyBeInlined() {
    // TODO
    return false;
  }

  // region serialization and deserialization
  @ParseMethod
  private static BuiltinId parse(Parser p) {
    return referencedBy(p.parse(RegSymSXP.class));
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(symbol());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
