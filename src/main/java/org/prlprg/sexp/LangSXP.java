package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import javax.annotation.Nonnull;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

/** AST function call ("language object") SEXP. */
@Immutable
public sealed interface LangSXP extends SymOrLangSXP {
  /** The function being called. */
  SymOrLangSXP fun();

  /** The function arguments (all ASTs). */
  ListSXP args();

  @Override
  default SEXPType type() {
    return SEXPType.LANG;
  }

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return LangSXP.class;
  }

  @Override
  @Nonnull
  Attributes attributes();

  @Override
  LangSXP withAttributes(Attributes attributes);

  SEXP arg(int i);

  ListSXP asList();

  default Optional<String> funName() {
    return fun() instanceof RegSymSXP funSym ? Optional.of(funSym.name()) : Optional.empty();
  }

  default boolean funNameIs(String name) {
    return funName().map(name::equals).orElse(false);
  }

  @ParseMethod
  private static LangSXP parse(Parser p) {
    var sexp = p.parse(SymOrLangSXP.class);
    if (!(sexp instanceof LangSXP l)) {
      throw p.scanner().fail("expected LangSXP but this is a symbol: " + sexp);
    }

    return l;
  }
}

record LangSXPImpl(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes)
    implements LangSXP {
  @Override
  public LangSXP withAttributes(Attributes attributes) {
    return SEXPs.lang(fun, args, attributes);
  }

  @Override
  public SEXP arg(int i) {
    return args.get(i).value();
  }

  @Override
  public ListSXP asList() {
    var l = new ImmutableList.Builder<SEXP>().add(fun).addAll(args.values()).build();
    return SEXPs.list1(l);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
