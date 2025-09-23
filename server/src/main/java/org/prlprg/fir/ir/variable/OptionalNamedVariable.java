package org.prlprg.fir.ir.variable;

import java.util.Objects;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.util.Characters;

/// `Optional<`[NamedVariable]`>` but slightly more ergonomic.
///
/// In particular, it provides helpers like [#ofString(String)] and [#taggedElem(SEXP)], and
/// [#toString()] is overridden to print the empty string if [#empty()].
@Immutable
public class OptionalNamedVariable {
  @Nullable NamedVariable inner;

  public static OptionalNamedVariable empty() {
    return new OptionalNamedVariable(null);
  }

  public static OptionalNamedVariable of(NamedVariable inner) {
    return new OptionalNamedVariable(Objects.requireNonNull(inner));
  }

  public static OptionalNamedVariable ofNullable(@Nullable NamedVariable inner) {
    return new OptionalNamedVariable(inner);
  }

  /// Returns [#empty()] iff [String#isEmpty()].
  public static OptionalNamedVariable ofString(String string) {
    return string.isEmpty() ? empty() : of(Variable.named(string));
  }

  private OptionalNamedVariable(@Nullable NamedVariable inner) {
    this.inner = inner;
  }

  public boolean isPresent() {
    return inner != null;
  }

  public @Nullable NamedVariable orNull() {
    return inner;
  }

  public TaggedElem taggedElem(SEXP value) {
    return inner == null ? new TaggedElem(value) : new TaggedElem(inner.name(), value);
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof OptionalNamedVariable that)) {
      return false;
    }
    return Objects.equals(inner, that.inner);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(inner);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    if (inner != null) {
      p.print(inner);
    }
  }

  @ParseMethod
  private OptionalNamedVariable parse(Parser p) {
    return p.scanner().nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))
        ? of(p.parse(NamedVariable.class))
        : empty();
  }
}
