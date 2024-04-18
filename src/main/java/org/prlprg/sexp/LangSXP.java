package org.prlprg.sexp;

import com.google.common.collect.ImmutableList;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.InterfaceHiddenMembers;

/** AST function call ("language object") SEXP. */
@Immutable
@InterfaceHiddenMembers(LangSXPImpl.class)
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

  TaggedElem arg(int i);

  ListSXP asList();
}

record LangSXPImpl(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes)
    implements LangSXP {
  @Override
  public String toString() {
    return attributes().isEmpty() ? deparse() : SEXPs.toString(this, deparse(), attributes());
  }

  @Override
  public LangSXP withAttributes(Attributes attributes) {
    return SEXPs.lang(fun, args, attributes);
  }

  @Override
  public TaggedElem arg(int i) {
    return args.get(i);
  }

  @Override
  public ListSXP asList() {
    var l = new ImmutableList.Builder<SEXP>().add(fun).addAll(args.values()).build();
    return SEXPs.list2(l);
  }

  // TODO: Special print `{`, `if`, `while`, `for`, ...
  private String deparse() {
    if (fun instanceof RegSymSXP funSym) {
      var funName = funSym.name();
      if (Names.BINOPS.contains(funName) && args.size() == 2) {
        return args.get(0) + " " + funName + " " + args.get(1);
      }
    }
    return fun + (args instanceof NilSXP ? "()" : args.toString());
  }

  @ParseMethod
  private LangSXP parse(Parser p) {
    var sexp = p.parse(SymOrLangSXP.class);
    if (!(sexp instanceof LangSXP l)) {
      throw p.scanner().fail("expected LangSXP but this is a symbol: " + sexp);
    }

    return l;
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(fun);
    if (args instanceof NilSXP) {
      w.write("()");
    } else {
      p.print(args);
    }
  }
}
