package org.prlprg.sexp;

public sealed interface SymSXP extends SymOrLangSXP permits RegSymSXP, SpecialSymSXP {
    @Override
    default SEXPType type() {
        return SEXPType.SYM;
    }
}
