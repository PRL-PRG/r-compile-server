package org.prlprg.sexp;

import org.prlprg.bc.Bc;

public record BCodeSXP(Bc bc) implements SEXP {
    @Override
    public SEXPType type() {
        return SEXPType.BCODE;
    }

    @Override
    public String toString() {
        return "BCodeSXP(" + bc + ")";
    }
}
