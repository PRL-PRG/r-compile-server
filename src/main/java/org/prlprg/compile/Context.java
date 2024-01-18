package org.prlprg.compile;

import org.prlprg.sexp.EnvSXP;

record Context(boolean topLevel, boolean tailCall, EnvSXP cenv) {
    Context makePromisecContext() {
        return new Context(false, true, cenv);
    }
}
