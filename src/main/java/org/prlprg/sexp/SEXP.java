package org.prlprg.sexp;

import javax.annotation.Nullable;

/**
 * R runtime object: every value, expression, AST node, etc. in R's runtime is an SEXP.
 *
 * <p>I believe the name comes from <a
 * href="https://en.wikipedia.org/wiki/S_expression">S-expressions</a>, but confusingly I also
 * suspect GNU-R SEXPs aren't actually S-expressions.
 */
public sealed interface SEXP
    permits StrOrRegSymSXP, SymOrLangSXP, ListOrVectorSXP, CloSXP, EnvSXP, BCodeSXP {
  /**
   * SEXPTYPE. It's important to distinguish these from the SEXP's class, because there's a class
   * for every type but not vice versa due to subclasses (e.g. simple-scalar ints have the same
   * {@link SEXPType} as any other int vector).
   */
  SEXPType type();

  /**
   * @return {@code null} if the SEXP doesn't support attributes ({@link #withAttributes} throws an
   *     exception) and {@code Attributes.NONE} if it does but there are none.
   */
  default @Nullable Attributes attributes() {
    return null;
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
    var attrs = attributes().including("class", new SimpleStrSXPImpl(name));
    return withAttributes(attrs);
  }
}
