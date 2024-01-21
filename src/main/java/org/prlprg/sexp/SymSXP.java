package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface SymSXP extends SymOrLangSXP permits RegSymSXP, SpecialSymSXP {
    @Override
    default SEXPType type() {
        return SEXPType.SYM;
    }
}
