package org.prlprg.sexp;

import java.util.Objects;
import java.util.Optional;
import org.prlprg.primitive.Names;

/** Symbol which isn't "unbound value" or "missing arg" */
public sealed class RegSymSXP implements SymSXP, StrOrRegSymSXP, RegSymOrLangSXP
    permits DotsSymSXP {
  private final String name;
  private final String toString;

  RegSymSXP(String name) {
    assert !name.equals("...") || this instanceof DotsSymSXP
        : "Constructed a \"...\" symbol, use SEXPs.DOTS_SYM instead (that's why this is package-private)";
    if (name.isEmpty()) {
      // GNU-R would throw "Error: attempt to use zero-length variable name"
      throw new IllegalArgumentException("symbol name cannot be empty");
    }

    this.name = name;
    toString = "'" + Names.quoteIfNecessary(name);
  }

  /** Returns the name of this symbol. */
  public String name() {
    return name;
  }

  public Optional<String> reifyString() {
    return Optional.of(name);
  }

  /**
   * Whether this is a double-dot symbol ({@code ..0}, {@code ..1}, ...).
   *
   * @see #ddNum()
   */
  public boolean isDdSym() {
    return name.startsWith("..")
        && name.substring(2).chars().allMatch(Character::isDigit)
        && name.length() < 13
        && Long.parseLong(name, 2, name.length(), 10) < Integer.MAX_VALUE;
  }

  /**
   * If this is a double-dot symbol (<code>..<i>n</i></code>), returns <code><i>n</i></code>.
   *
   * @throws UnsupportedOperationException If this is not a double-dot symbol.
   * @see #isDdSym()
   */
  public int ddNum() {
    if (!isDdSym()) {
      throw new UnsupportedOperationException("Not a double-dot symbol: " + name);
    }
    return Integer.parseInt(name, 2, name.length(), 10);
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof RegSymSXP regSymSXP)) return false;
    return Objects.equals(name, regSymSXP.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name);
  }

  // This can't call `Printer.toString`, because it calls this.
  @Override
  public String toString() {
    return toString;
  }
}
