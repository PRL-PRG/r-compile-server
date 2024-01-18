package org.prlprg.sexp;

public record SymSXP(String name) implements SymOrLangSXP {
    @Override
    public SEXPType type() {
        return SEXPType.SYM;
    }
}
