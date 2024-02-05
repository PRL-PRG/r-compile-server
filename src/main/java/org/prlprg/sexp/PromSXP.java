package org.prlprg.sexp;

public final class PromSXP implements SEXP {
    private final SEXP expr;
    private final SEXP val;
    private final EnvSXP env;

    public PromSXP(SEXP expr, SEXP val, EnvSXP env) {
        this.expr = expr;
        this.val = val;
        this.env = env;
    }

    @Override
    public SEXPType type() {
        return SEXPType.PROM;
    }
}
