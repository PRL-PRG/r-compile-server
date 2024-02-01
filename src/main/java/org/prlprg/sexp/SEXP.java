package org.prlprg.sexp;

import javax.annotation.Nullable;

public sealed interface SEXP
    permits StrOrRegSymSXP, SymOrLangSXP, ListOrVectorSXP, CloSXP, EnvSXP, BCodeSXP {
  SEXPType type();

  /**
   * @return {@code null} if the SEXP doesn't support attributes ({@link #withAttributes} throws an
   *     exception) and {@code Attributes.NONE} if it does but there are none.
   */
  default @Nullable Attributes attributes() {
    return null;
  }

  /**
   * @throws UnsupportedOperationException if the SEXP doesn't support attributes.
   */
  default SEXP withAttributes(Attributes attributes) {
    throw new UnsupportedOperationException("Cannot set attributes on " + type());
  }
}
