package org.prlprg.sexp;

import javax.annotation.Nullable;

public sealed interface SEXP
    permits StrOrRegSymSXP, SymOrLangSXP, ListOrVectorSXP, CloSXP, EnvSXP, BCodeSXP, PromSXP {
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
