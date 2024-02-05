package org.prlprg.sexp;

import java.util.Optional;

public final class GlobalEnvSXP implements EnvSXP {

    // FIXME: parent should return the proper namespaces
    //  in default R session that is:
    //  stats, graphics, grDevices, utils, datasets, methods, Autoloads, base

    @Override
    public Optional<SEXP> get(String name) {
        return Optional.empty();
    }

    @Override
    public String toString() {
        // TODO: add some link to the R session?
        return "<environment: R_GlobalEnv>";
    }
}
