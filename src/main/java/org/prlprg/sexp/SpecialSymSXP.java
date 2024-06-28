package org.prlprg.sexp;

/** Unique symbol (equality by identity). */
public final class SpecialSymSXP implements SymSXP {
  private final String toString;

  SpecialSymSXP(String label) {
    toString = '<' + label + '>';
  }

  // This can't call `Printer.toString`, because it calls this.
  @Override
  public String toString() {
    return toString;
  }
}
