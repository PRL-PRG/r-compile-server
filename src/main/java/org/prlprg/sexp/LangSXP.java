package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import javax.annotation.concurrent.Immutable;
import org.prlprg.primitive.Names;

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
  Attributes attributes();

  @Override
  LangSXP withAttributes(Attributes attributes);

  SEXP arg(int i);

  ListSXP asList();

  default Optional<String> funName() {
    return fun() instanceof RegSymSXP funSym ? Optional.of(funSym.name()) : Optional.empty();
  }
}

record LangSXPImpl(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes)
    implements LangSXP {
  @Override
  public String toString() {
    return attributes().isEmpty() ? deparse() : SEXPs.toString(this, deparse(), attributes());
  }

  // TODO: Special print `{`, `if`, `while`, `for`, ...
  private String deparse() {
    if (fun instanceof RegSymSXP funSym) {
      var funName = funSym.name();
      if (Names.BINOPS.contains(funName) && args.size() == 2) {
        return args.get(0) + " " + funName + " " + args.get(1);
      }
    }
    return fun() + (args() instanceof NilSXP ? "()" : args().toString());
  }

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
    return SEXPs.list2(l);
  }
}
