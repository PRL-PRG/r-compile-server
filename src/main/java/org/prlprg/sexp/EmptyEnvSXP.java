package org.prlprg.sexp;

import org.prlprg.util.Pair;

import java.util.Optional;

public final class EmptyEnvSXP implements EnvSXP {
    static final EmptyEnvSXP INSTANCE = new EmptyEnvSXP();

    private EmptyEnvSXP() {
    }

    /**
     * Empty environment has no parent.
     * It is an error to call this method.
     */
    @Override
    public EnvSXP parent() {
        throw new UnsupportedOperationException("the empty environment has no parent");
    }


    @Override
    public Optional<SEXP> get(String name) {
        return Optional.empty();
    }

    @Override
    public Optional<SEXP> getLocal(String name) {
        return Optional.empty();
    }

    @Override
    public Optional<Pair<EnvSXP, SEXP>> find(String name) {
        return Optional.empty();
    }

    @Override
    public String toString() {
        return "<environment: R_EmptyEnv>";
    }
}
