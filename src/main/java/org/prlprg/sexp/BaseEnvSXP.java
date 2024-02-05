package org.prlprg.sexp;

import java.util.Optional;

public final class BaseEnvSXP implements EnvSXP {
    @Override
    public Optional<SEXP> get(String name) {
        return Optional.empty();
    }

    @Override
    public String toString() {
        // TODO: add some link to the R session?
        return "<environment: base>";
    }
}
