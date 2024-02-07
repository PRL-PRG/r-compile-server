package org.prlprg.sexp;

import org.prlprg.util.Pair;

import java.util.Optional;

public sealed interface EnvSXP extends SEXP permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP, UserEnvSXP {
    /**
     * Environments are linked in a parent chain. Every environment, except the empty environment, has a parent that will be returned by this function.
     *
     * @return the parent environment
     */
    EnvSXP parent();

    /**
     * Get the value of a symbol in the environment, following the parent chain.
     *
     * @param name the name of the symbol
     * @return the value of the symbol, if found
     */
    Optional<SEXP> get(String name);

    /**
     * Get the value of a symbol in the environment, without following the parent chain.
     *
     * @param name the name of the symbol
     * @return the value of the symbol, if found
     */
    Optional<SEXP> getLocal(String name);

    @Override
    default SEXPType type() {
        return SEXPType.ENV;
    }

    /**
     * Try to find the value of a symbol in the environment, following the parent chain.
     *
     * @param name the name of the symbol
     * @return the value of the symbol and the environment where it was found, if found
     */
    default Optional<Pair<EnvSXP, SEXP>> find(String name) {
        return getLocal(name).map(v -> new Pair<>(this, v)).or(() -> parent().find(name));
    }
}
