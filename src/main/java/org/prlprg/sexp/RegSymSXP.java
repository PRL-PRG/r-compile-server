package org.prlprg.sexp;

import com.google.common.base.Objects;
import com.google.common.collect.ImmutableList;
import java.util.Optional;

// TODO: move to SymSXP.java?
/** Symbol which isn't "unbound value" or "missing arg" */
public final class RegSymSXP implements SymSXP, StrOrRegSymSXP {
  static final ImmutableList<String> LITERAL_NAMES =
      ImmutableList.of("TRUE", "FALSE", "NULL", "NA", "Inf", "NaN");

  private final String name;
  private final boolean isEscaped;

  /** Returns whether a symbol with the given name must be quoted in backticks. */
  public static boolean isValidUnescaped(String name) {
    return !LITERAL_NAMES.contains(name)
        && !name.equals("_")
        && !Character.isDigit(name.chars().findFirst().orElse(' '))
        && name.chars().allMatch(c -> Character.isLetterOrDigit(c) || c == '.' || c == '_');
  }

  /** Returns whether the character is valid at the start of an escaped symbol. */
  public static boolean isValidUnescapedStartChar(int c) {
    return Character.isLetter(c) || c == '_' || c == '.';
  }

  /** Returns whether the character is valid in an escaped symbol, not at the start. */
  public static boolean isValidUnescapedChar(int c) {
    return isValidUnescapedStartChar(c) || Character.isDigit(c);
  }

  /**
   * If the symbol with the given name must be quoted in backticks, returns it like that, otherwise
   * as-is.
   */
  public static String escape(String name) {
    return isValidUnescaped(name) ? name : "`" + name.replace("`", "\\`") + "`";
  }

  @SuppressWarnings("ConstantValue")
  RegSymSXP(String name) {
    assert !name.equals("...") || SEXPs.ELLIPSIS == null
        : "Constructed a \"...\" symbol, use SEXPs.ELLIPSIS instead (that's why this is package-private)";
    if (name.isEmpty()) {
      // GNU-R would throw "Error: attempt to use zero-length variable name"
      throw new IllegalArgumentException("Symbol name cannot be empty");
    }

    this.name = name;
    isEscaped = !isValidUnescaped(name);
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
    return isEscaped ? "`" + name.replace("`", "\\`") + "`" : name;
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
