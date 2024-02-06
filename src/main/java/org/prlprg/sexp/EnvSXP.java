package org.prlprg.sexp;

import org.prlprg.util.Pair;

import java.util.Optional;
import java.util.function.Consumer;

public sealed interface EnvSXP extends SEXP permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP, UserEnvSXP {
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

    default void visit(Consumer<EnvSXP> visitor) {
        visitor.accept(this);
        parent().visit(visitor);
    }


    default Optional<Pair<EnvSXP, SEXP>> find(String name) {
        return getLocal(name).map(v -> new Pair<>(this, v)).or(() -> parent().find(name));
    }
}
