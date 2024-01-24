package org.prlprg.sexp;

import javax.annotation.Nullable;

/**
 * Top-level environment (global, base, or empty).
 * <p>
 * We don't track its contents because 1) it may be shared across compilations and we compile SEXPs in a pure context
 * (we don't want compiling one SEXP to produce side-effects which affect compiling others), 2) we want to compile SEXPs
 * in a more general context than their exact top-level environment, so they can be reused.
 */
public final class SpecialEnvSXP implements EnvSXP {
    private final String label;

    SpecialEnvSXP(String label) {
        this.label = label;
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
        return "<" + label + ">";
    }

    @Override
    public EnvSXP withAttributes(Attributes attributes) {
        throw new UnsupportedOperationException("Cannot set attributes on special environment");
    }
}
