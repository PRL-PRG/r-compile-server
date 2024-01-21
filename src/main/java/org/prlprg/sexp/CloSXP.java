package org.prlprg.sexp;

public interface CloSXP extends SEXP {
    ListSXP formals();

    SEXP body();

    EnvSXP env();

    @Override
    default SEXPType type() {
        return SEXPType.CLO;
    }

    @Override Attributes attributes();

    @Override
    CloSXP withAttributes(Attributes attributes);
}

record CloSXPImpl(ListSXP formals, SEXP body, EnvSXP env, @Override Attributes attributes) implements CloSXP {
    @Override
    public String toString() {
        return SEXPUtil.toString(this, env(), formals(), "\n  → ", body());
    }

    @Override
    public CloSXP withAttributes(Attributes attributes) {
        return SEXP.closure(formals, body, env, attributes);
    }
}
