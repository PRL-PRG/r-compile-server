package org.prlprg.sexp;

import com.google.common.collect.Streams;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/**
 * R runtime object: every value, expression, AST node, etc. in R's runtime is an SEXP.
 *
 * <p>I believe the name comes from <a
 * href="https://en.wikipedia.org/wiki/S_expression">S-expressions</a>, but confusingly I also
 * suspect GNU-R SEXPs aren't actually S-expressions.
 */
public sealed interface SEXP
    permits StrOrRegSymSXP,
        SymOrLangSXP,
        ListOrVectorSXP,
        LangOrListSXP,
        FunSXP,
        EnvSXP,
        BCodeSXP,
        PromSXP {
  /**
   * SEXPTYPE. It's important to distinguish these from the SEXP's class, because there's a class
   * for every type but not vice versa due to subclasses (e.g. simple-scalar ints have the same
   * {@link SEXPType} as any other int vector).
   */
  SEXPType type();

  /**
   * The canonical class of this SEXP in the Java land. For example, there are specialized classes
   * for simple scalars, but they all have the same SEXPType. Every SEXP that override the {@link
   * #type()} method should also override this method.
   *
   * @return the Java class of this SEXP
   */
  Class<? extends SEXP> getCanonicalType();

  /**
   * @return {@code null} if the SEXP type doesn't support attributes ({@link #withAttributes}
   *     throws an exception) and {@link Attributes#NONE} if it does but there are none.
   */
  default @Nullable Attributes attributes() {
    return null;
  }

  /** Whether the SEXP type supports attributes and this SEXP has any. */
  default boolean hasAttributes() {
    var attributes = attributes();
    return attributes != null && !attributes.isEmpty();
  }

  /** Whether the SEXP is an object i.e. has the "class" attribute. */
  default boolean isObject() {
    var attributes = attributes();
    return attributes != null && attributes.isObject();
  }

  /**
   * Returns an SEXP which would be equal except it has the given attributes instead of its old
   * ones. <b>If the SEXP is a {@link UserEnvSXP}, it will mutate in-place and return itself. If the
   * SEXP is a list or vector containing environments, this performs a shallow copy, so mutating the
   * environments in one version will affect the other</b>.
   *
   * @throws UnsupportedOperationException if the SEXP doesn't support attributes.
   */
  default SEXP withAttributes(Attributes attributes) {
    throw new UnsupportedOperationException("Cannot set attributes on " + type());
  }

  default SEXP withClass(String name) {
    var attrs = Objects.requireNonNull(attributes()).including("class", SEXPs.string(name));
    return withAttributes(attrs);
  }

  /**
   * The implementation of the is.function() which eventually calls the isFunction() from
   * Rinlinedfuns.h
   *
   * @return {@code true} if this SEXP is a function (closure, builtin, or special).
   */
  default boolean isFunction() {
    return this instanceof CloSXP || this instanceof BuiltinOrSpecialSXP;
  }

  default SEXP withNames(String name) {
    return withNames(SEXPs.string(name));
  }

  default SEXP withNames(Collection<String> names) {
    return withNames(SEXPs.string(names));
  }

  default SEXP withNames(StrSXP names) {
    if (names.isEmpty()) {
      return withAttributes(Objects.requireNonNull(attributes()).excluding("names"));
    } else {
      return withAttributes(Objects.requireNonNull(attributes()).including("names", names));
    }
  }

  default List<String> names() {
    var names = Objects.requireNonNull(attributes()).get("names");
    if (names == null) {
      return List.of();
    } else {
      return Streams.stream((StrSXP) names).toList();
    }
  }

  default boolean typeOneOf(SEXPType... types) {
    return Arrays.stream(types).anyMatch(t -> t == type());
  }

  default Optional<Logical> asScalarLogical() {
    return as(ScalarLglSXP.class).map(ScalarLglSXP::value);
  }

  default Optional<Integer> asScalarInteger() {
    return as(ScalarIntSXP.class).map(ScalarIntSXP::value);
  }

  default Optional<Double> asScalarReal() {
    return as(ScalarRealSXP.class).map(ScalarRealSXP::value);
  }

  default Optional<Byte> asScalarRaw() {
    return as(ScalarRawSXP.class).map(ScalarRawSXP::value);
  }

  default Optional<Complex> asScalarComplex() {
    return as(ScalarComplexSXP.class).map(ScalarComplexSXP::value);
  }

  default Optional<String> asScalarString() {
    return as(ScalarStrSXP.class).map(ScalarStrSXP::value);
  }

  default Optional<LangSXP> asLang() {
    return as(LangSXP.class);
  }

  default <T extends SEXP> Optional<T> as(Class<T> clazz) {
    return clazz.isInstance(this) ? Optional.of(clazz.cast(this)) : Optional.empty();
  }

  // region serialization and deserialization
  @ParseMethod
  private static SEXP parse(Parser p, HasSEXPParseContext h) {
    return p.withContext(h.sexpParseContext()).parse(SEXP.class);
  }

  @PrintMethod
  private void print(Printer p, HasSEXPPrintContext h) {
    p.withContext(h.sexpPrintContext()).print(this);
  }

  @ParseMethod
  private static SEXP parse(Parser p) {
    return p.withContext(new SEXPParseContext()).parse(SEXP.class);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new SEXPPrintContext()).print(this);
  }

  // `toString` is overridden in every subclass to call `Printer.toString(this)`.

  // endregion serialization and deserialization
}
