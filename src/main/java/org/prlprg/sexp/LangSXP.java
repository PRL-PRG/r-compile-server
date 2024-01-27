package org.prlprg.sexp;

import org.prlprg.primitive.Names;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface LangSXP extends SymOrLangSXP {
    SymOrLangSXP fun();

    ListSXP args();

    @Override
    default SEXPType type() {
        return SEXPType.LANG;
    }

    @Override
    Attributes attributes();

    @Override
    LangSXP withAttributes(Attributes attributes);

    TaggedElem arg(int i);
}

record LangSXPImpl(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes) implements LangSXP {
    @Override
    public String toString() {
        return attributes().isEmpty() ? deparse() :
                SEXPs.toString(this, deparse(), attributes());
    }

    // TODO: Special print `{`, `if`, `while`, `for`, ...
    private String deparse() {
        if (fun instanceof RegSymSXP funSym) {
            var funName = funSym.name();
            if (Names.BINOPS.contains(funName) && args.size() == 2) {
                return args.get(0) + " " + funName + " " + args.get(1);
            }
        }
        return "" + fun() + args();
    }

    @Override
    public LangSXP withAttributes(Attributes attributes) {
        return SEXPs.lang(fun, args, attributes);
    }

    @Override
    public TaggedElem arg(int i) {
        return args.get(i);
    }
}
