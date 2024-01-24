package org.prlprg.sexp;

import org.prlprg.bc.Bc;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface BCodeSXP extends SEXP {
    Bc bc();

    @Override
    default SEXPType type() {
        return SEXPType.BCODE;
    }
}

record BCodeSXPImpl(Bc bc) implements BCodeSXP {
    @Override
    public String toString() {
        return SEXPs.toString(this, bc());
    }
}
