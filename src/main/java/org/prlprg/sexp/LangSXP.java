package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.Printer;

/** AST function call ("language object") SEXP. */
@Immutable
public sealed interface LangSXP extends RegSymOrLangSXP, LangOrListSXP {
  /** The function being called. */
  RegSymOrLangSXP fun();

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

  @Nullable RegSymSXP argName(int i);

  SEXP arg(int i);

  ListSXP asList();

  default Optional<String> funName() {
    return fun() instanceof RegSymSXP funSym ? Optional.of(funSym.name()) : Optional.empty();
  }

  default boolean funNameIs(String name) {
    return funName().map(name::equals).orElse(false);
  }
}

record LangSXPImpl(RegSymOrLangSXP fun, ListSXP args, @Override Attributes attributes)
    implements LangSXP {
  @Override
  public LangSXP withAttributes(Attributes attributes) {
    return SEXPs.lang(fun, args, attributes);
  }

  @Override
  public @Nullable RegSymSXP argName(int i) {
    return args.get(i).tagAsSymbol();
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
