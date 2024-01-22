package org.prlprg.sexp;

import javax.annotation.Nullable;

/** A scope containing name-value bindings and parent environment. However, global environments we abstract the bindings
 * so that we can compile in agnostic context (see {@link SpecialEnvSXP}. Environments are also special in that they can
 * be mutable and equality is defined by their identity, while most R objects are immutable and equality is defined by
 * their structure. */
// TODO: Also namespaces and packages
public sealed interface EnvSXP extends SEXP permits LocalEnvSXP, SpecialEnvSXP {
    /** @return {@code null} if unknown or different in different contexts. */
    @Nullable EnvSXP knownParent();

    /** @return {@code null} if not present, unknown, or different in different contexts */
    @Nullable SEXP get(String name);

    @Override
    default SEXPType type() {
        return SEXPType.ENV;
    }

    @Override
    EnvSXP withAttributes(Attributes attributes);
}
