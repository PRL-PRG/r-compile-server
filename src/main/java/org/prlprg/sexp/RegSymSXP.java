package org.prlprg.sexp;

import com.google.common.base.Objects;
import com.google.common.collect.ImmutableList;

/** Symbol which isn't "unbound value" or "missing arg" */
public final class RegSymSXP implements SymSXP {
    private static final ImmutableList<String> LITERAL_NAMES = ImmutableList.of("TRUE", "FALSE", "NULL", "NA", "Inf", "NaN");

    private final String name;
    private final boolean isEscaped;

    RegSymSXP(String name) {
        if (name.isBlank()) {
            throw new IllegalArgumentException("Symbol name cannot be blank");
        }
        if (LITERAL_NAMES.contains(name)) {
            throw new IllegalArgumentException("Symbol name reserved by literal: " + name);
        }
        this.name = name;
        isEscaped = name.chars().anyMatch(c -> !Character.isAlphabetic(c) && c != '.' && c != '_');
    }

    /** Returns the name of this symbol. */
    public String name() {
        return name;
    }

    @Override
    public String toString() {
        return isEscaped ? "`" + name + "`" : name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof RegSymSXP regSymSXP)) return false;
        return Objects.equal(name, regSymSXP.name);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(name);
    }
}
