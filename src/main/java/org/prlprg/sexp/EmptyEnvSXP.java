package org.prlprg.sexp;

import java.util.Optional;

public final class EmptyEnvSXP implements EnvSXP {
    static final EmptyEnvSXP INSTANCE = new EmptyEnvSXP();

    private EmptyEnvSXP() {
    }

    @Override
    public EnvSXP parent() {
        throw new UnsupportedOperationException("the empty environment has no parent");
    }

    @Override
    public Optional<SEXP> get(String name) {
        return Optional.empty();
    }

    @Override
    public String toString() {
        return "<environment: R_EmptyEnv>";
    }
}
