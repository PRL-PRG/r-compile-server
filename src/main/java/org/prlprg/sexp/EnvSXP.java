package org.prlprg.sexp;

import javax.annotation.Nullable;

// TODO: Also namespaces and packages
public sealed interface EnvSXP extends SEXP permits RegEnvSXP, SpecialEnvSXP {
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
