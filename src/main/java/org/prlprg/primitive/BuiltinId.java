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
  public static BuiltinId PRINT_VALUE = new BuiltinId(12345);
  public static BuiltinId DOLLAR = new BuiltinId(23456);
  public static BuiltinId DOLLAR_GETS = new BuiltinId(34567);
  public static BuiltinId DOT_CALL = new BuiltinId(45678);
  public static BuiltinId SEQ_ALONG = new BuiltinId(56789);
  public static BuiltinId SEQ_LEN = new BuiltinId(67890);
  public static BuiltinId EVAL = new BuiltinId(78901);
  public static BuiltinId SUBSET = new BuiltinId(89012);
  public static BuiltinId SUBASSIGN = new BuiltinId(90123);
  public static BuiltinId C = new BuiltinId(11234);
  public static BuiltinId SUBSET2 = new BuiltinId(22345);
  public static BuiltinId SUBASSIGN2 = new BuiltinId(33456);
  public static BuiltinId SUBSETN = new BuiltinId(44567);
  public static BuiltinId SUBASSIGNN = new BuiltinId(55678);
  public static BuiltinId SUBSET2N = new BuiltinId(66789);
  public static BuiltinId SUBASSIGN2N = new BuiltinId(77890);

  // endregion

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
