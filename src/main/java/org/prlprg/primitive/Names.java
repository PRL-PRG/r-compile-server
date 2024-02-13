package org.prlprg.primitive;

import com.google.common.collect.ImmutableList;

/** Special symbols */
public final class Names {
  /** The symbols which are treated as binary-operators in R (when parsing or printing). */
  public static final ImmutableList<String> BINOPS =
      ImmutableList.of(
          "+", "-", "*", "/", "^", "%%", "%/%", "==", "!=", "<", "<=", ">", ">=", "&", "|", "&&",
          "||", ":", "::", ":::", "$", "@", "~", "%%%", "%%", "%*%", "%o%", "%x%", "%in%", "%*%",
          "%/%", "%+%", "%-%", "%&%", "%/%", "%|%", "%?%", "%$%", "%::%", "%:::%", "%>%", "%<>%",
          "%<>%");

  private Names() {}
}
