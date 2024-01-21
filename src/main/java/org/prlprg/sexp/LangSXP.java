package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public non-sealed interface LangSXP extends SymOrLangSXP {
    SymOrLangSXP fun();

    ListSXP args();

    @Override
    default SEXPType type() {
        return SEXPType.LANG;
    }
    @Override Attributes attributes();

    @Override
    LangSXP withAttributes(Attributes attributes);
}

record LangSXPImpl(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes) implements LangSXP {
    @Override
    public String toString() {
        // TODO: Special print `{`, `if`, `while`, `for`, ...
        var default_ = "" + fun() + args();
        return attributes().isEmpty() ? default_ :
                SEXPUtil.toString(this, default_, attributes());
    }

    @Override
    public LangSXP withAttributes(Attributes attributes) {
        return SEXP.lang(fun, args, attributes);
    }
}
