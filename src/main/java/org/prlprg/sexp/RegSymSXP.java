package org.prlprg.sexp;

import com.google.common.base.Objects;
import com.google.common.collect.ImmutableList;
import java.util.Optional;

/** Symbol which isn't "unbound value" or "missing arg" */
public final class RegSymSXP implements SymSXP, StrOrRegSymSXP {
  private static final ImmutableList<String> LITERAL_NAMES =
      ImmutableList.of("TRUE", "FALSE", "NULL", "NA", "Inf", "NaN");

  private final String name;
  private final boolean isEscaped;

  RegSymSXP(String name) {
    if (name.isBlank()) {
      throw new IllegalArgumentException("Symbol name cannot be blank");
    }
    if (LITERAL_NAMES.contains(name)) {
      throw new IllegalArgumentException("Symbol name reserved by literal: " + name);
    }
    this.name = name;
    isEscaped = name.chars().anyMatch(c -> !Character.isAlphabetic(c) && c != '.' && c != '_');
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
    return isEscaped ? "`" + name + "`" : name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof RegSymSXP regSymSXP)) return false;
    return Objects.equal(name, regSymSXP.name);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(name);
  }
}
