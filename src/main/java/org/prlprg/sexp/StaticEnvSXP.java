package org.prlprg.sexp;

/** A global, namespace, or base environment. */
public sealed interface StaticEnvSXP extends EnvSXP
    permits BaseEnvSXP, EmptyEnvSXP, GlobalEnvSXP, NamespaceEnvSXP {}
