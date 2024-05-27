package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;

/** R Identifier. */
@Immutable
public sealed interface SymSXP extends SymOrLangSXP permits RegSymSXP, SpecialSymSXP {
  @Override
  default SEXPType type() {
    return SEXPType.SYM;
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return SymSXP.class;
  }

  /** Whether this is the ellipsis symbol. */
  default boolean isEllipsis() {
    return this == SEXPs.DOTS_SYMBOL;
  }

  /** Whether this is the missing symbol. */
  default boolean isMissing() {
    return this == SEXPs.MISSING_ARG;
  }

  /** Whether this is the unbound value symbol. */
  default boolean isUnbound() {
    return this == SEXPs.UNBOUND_VALUE;
  }

  @ParseMethod
  private static SymSXP parse(Parser p) {
    var s = p.scanner();
    var name = Names.read(s, true);

    return name.equals("...") ? SEXPs.DOTS_SYMBOL : new RegSymSXP(name);
  }
}
