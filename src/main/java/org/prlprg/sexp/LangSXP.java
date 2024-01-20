package org.prlprg.sexp;

public record LangSXP(SymOrLangSXP fun, ListSXP args, @Override Attributes attributes) implements SymOrLangSXP {
    @Override
    public SEXPType type() {
        return SEXPType.LANG;
    }

    public LangSXP(SymOrLangSXP fun, ListSXP args) {
        this(fun, args, Attributes.NONE);
    }

    @Override
    public String toString() {
        return "LangSxp(fun=" + fun + ", args=" + args + ", " + attributes + ")";
    }

    @Override
    public LangSXP withAttributes(Attributes attributes) {
        return new LangSXP(fun, args, attributes);
    }
}
