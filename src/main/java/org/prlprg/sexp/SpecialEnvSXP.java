package org.prlprg.sexp;

import javax.annotation.Nullable;

/**
 * Top-level environment (global, base, or empty).
 *
 * We don't track its contents because this is shared across compilations and we compile SEXPs in a pure context (we
 * don't want compiling one SEXP to produce side-effects which affect compiling others). We also want to compile SEXPs
 * in a more general context than their exact top-level environment, so they can be reused much more often.
 */
public final class SpecialEnvSXP implements EnvSXP {
    private final String toString;

    public SpecialEnvSXP(String toString) {
        this.toString = toString;
    }

    @Override
    public @Nullable EnvSXP knownParent() {
        return null;
    }

    @Nullable
    @Override
    public SEXP get(String name) {
        return null;
    }

    @Override
    public String toString() {
        return toString;
    }

    @Override
    public EnvSXP withAttributes(Attributes attributes) {
        throw new UnsupportedOperationException("Cannot set attributes on context-independent environment");
    }
}
