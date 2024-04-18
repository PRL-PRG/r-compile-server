package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.InterfaceHiddenMembers;
import org.prlprg.util.Strings;

/** R Identifier. */
@Immutable
@InterfaceHiddenMembers(SymSxpParser.class)
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
}

class SymSxpParser {
  @ParseMethod
  private static SymSXP parse(Parser p) {
    var s = p.scanner();

    var isEscaped = s.nextCharIs('`');
    if (!isEscaped && !s.nextCharSatisfies(RegSymSXP::isValidUnescapedStartChar)) {
      throw s.fail("start of symbol (letter, '_', or '.', or '`')", Strings.quote(s.peekChar()));
    }

    var name = isEscaped ? s.readQuoted('`') : s.readWhile(RegSymSXP::isValidUnescapedChar);
    if (!isEscaped && !RegSymSXP.isValidUnescaped(name)) {
      // Happens if `name` is a literal or "_"
      throw s.fail("symbol must be escaped but isn't: " + Strings.quote(name));
    }
    return name.equals("...") ? SEXPs.ELLIPSIS : new RegSymSXP(name);
  }
}
