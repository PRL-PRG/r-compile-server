package org.prlprg.sexp;

import javax.annotation.Nullable;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;

public final class UserEnvSXP implements EnvSXP {
    private EnvSXP parent;
    private final Map<String, SEXP> entries;
    private @Nullable Attributes attributes;

    public UserEnvSXP() {
        this.parent = EmptyEnvSXP.INSTANCE;
        this.entries = new HashMap<>();
    }

    @Override
    public Optional<SEXP> get(String name) {
        return Optional.ofNullable(entries.get(name)).or(() -> parent.get(name));
    }


    @Override
    public String toString() {
        return "<environment: " + hashCode() + ">";
    }

    @Override
    public UserEnvSXP withAttributes(Attributes attributes) {
        this.attributes = attributes;
        return this;
    }

    public void setParent(EnvSXP parent) {
        this.parent = parent;
    }

    public void set(String name, SEXP value) {
        entries.put(name, value);
    }

    public void setAttributes(Attributes attributes) {
        this.attributes = attributes;
    }
}
