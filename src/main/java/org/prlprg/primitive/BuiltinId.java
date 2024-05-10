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

  @ParseMethod
  private static BuiltinId parse(Parser p) {
    return BuiltinId.referencedBy(p.parse(RegSymSXP.class));
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(symbol());
  }
}
