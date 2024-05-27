package org.prlprg.sexp;

import java.util.Objects;
import java.util.Optional;
import org.prlprg.primitive.Names;

/** Symbol which isn't "unbound value" or "missing arg" */
public final class RegSymSXP implements SymSXP, StrOrRegSymSXP {
  private final String name;
  private final String toString;

  // `DOTS_SYMBOL` has to be constructed, and to do this we just call `new RegSymSxp("...")`. When
  // we do this, `DOTS_SYMBOL` is `null` since it doesn't exist yet, since it's being constructed.
  // Thus `@SuppressWarnings("ConstantValue")`.
  @SuppressWarnings("ConstantValue")
  RegSymSXP(String name) {
    assert !name.equals("...") || SEXPs.DOTS_SYMBOL == null
        : "Constructed a \"...\" symbol, use SEXPs.ELLIPSIS instead (that's why this is package-private)";
    if (name.isEmpty()) {
      // GNU-R would throw "Error: attempt to use zero-length variable name"
      throw new IllegalArgumentException("symbol name cannot be empty");
    }

    this.name = name;
    toString = Names.quoteIfNecessary(name);
  }

  /** Returns the name of this symbol. */
  public String name() {
    return name;
  }

  public Optional<String> reifyString() {
    return Optional.of(name);
  }

  /** Whether this is a double-dot symbol ({@code ..0}, {@code ..1}, ...). */
  public boolean isDdSym() {
    return name.startsWith("..") && name.substring(2).chars().allMatch(Character::isDigit);
  }

  @Override
  public String toString() {
    return toString;
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
}
