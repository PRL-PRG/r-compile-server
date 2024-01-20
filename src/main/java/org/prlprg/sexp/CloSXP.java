package org.prlprg.sexp;

public record CloSXP(ListSXP formals, SEXP body, EnvSXP env, Attributes attributes) implements SEXP {
    @Override
    public SEXPType type() {
        return SEXPType.CLO;
    }

    CloSXP(ListSXP formals, SEXP body, EnvSXP env) {
        this(formals, body, env, Attributes.NONE);
    }

    @Override
    public String toString() {
        return "CloSXP(formals=" + formals + ", body=" + body + ", env=" + env + ", attrs=" + attributes() + ")";
    }

    @Override
    public CloSXP withAttributes(Attributes attributes) {
        return new CloSXP(formals, body, env, attributes);
    }
}
