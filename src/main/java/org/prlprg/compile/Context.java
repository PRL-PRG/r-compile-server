package org.prlprg.compile;

import org.prlprg.sexp.EnvSXP;

import java.util.Set;

record CompilerEnv(EnvSXP env, Set<String> extra) {
}

record Context(boolean topLevel, boolean tailCall, CompilerEnv cenv) {
    Context makeNonTailContext() {
        return new Context(false, true, cenv);
    }

    Context makePromisecContext() {
        // TODO: check loop?
        return new Context(false, true, cenv);
    }
}
