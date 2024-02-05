package org.prlprg.sexp;

import java.util.Optional;

/**
 * A scope containing name-value bindings and parent environment. However, global environments we abstract the bindings
 * so that we can compile in agnostic context (see {@link SpecialEnvSXP}. Environments are also special in that they can
 * be mutable and equality is defined by their identity, while most R objects are immutable and equality is defined by
 * their structure.
 */
// TODO: Also namespaces and packages
public sealed interface EnvSXP extends SEXP permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP, UserEnvSXP {
    default EnvSXP parent() {
        return EmptyEnvSXP.INSTANCE;
    }

    Optional<SEXP> get(String name);

    @Override
    default SEXPType type() {
        return SEXPType.ENV;
    }
}
