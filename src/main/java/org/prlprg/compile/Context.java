package org.prlprg.compile;

import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;

import java.util.Collections;
import java.util.List;
import java.util.Set;

sealed interface Frame {
    record Global() implements Frame {
    }

    record Namespace() implements Frame {
    }

    record Local(Set<String> locals) implements Frame {
    }
}

/**
 * Represents the compilation environment
 */
record Environment(List<Frame> frames) {
    public static Environment fromEnv(EnvSXP env) {
        return new Environment(Collections.emptyList());
    }
}

/**
 * @param topLevel   {@code true} for top level expressions, {@code false} otherwise (e.g., compilation of function arguments).
 * @param tailCall   {@code true} for expressions that appear in tail position and should be followed by return, or {@code false}
 *                   when the result is ignored, or whether the expression is contained in a loop.
 * @param returnJump {@code true} indicated that the call to return needs {@code RETURNJMP}.
 * @param cenv
 */
public record Context(boolean topLevel, boolean tailCall, boolean returnJump, Environment cenv) {
    public static Context topLevelContext(Environment cenv) {
        return new Context(true, true, false, cenv);
    }

    public static Context functionContext(CloSXP fun) {
        // TODO:
        //    cntxt$env <- addCenvFrame(cntxt$env, names(forms))
        //    locals <- findLocalsList(c(forms, body), cntxt)
        //    addCenvVars(cntxt$env, locals)
        return new Context(false, true, false, Environment.fromEnv(fun.env()));
    }

    Context makeNonTailContext() {
        return new Context(false, true, false, cenv);
    }

    Context makePromiseContext() {
        // TODO: check loop?
        // The promise context also sets returnJump since a return call that is triggered by forcing a promise
        // requires a longjmp to return from the appropriate function.
        return new Context(false, true, true, cenv);
    }

    public boolean baseVersion(String name) {
        return false;
    }

    public Binding binding(String name) {
        return new Binding.Local();
    }
}

sealed interface Binding {
    record Local() implements Binding {
    }

    record Global() implements Binding {
    }

    record Namespace() implements Binding {
    }
}

record InlineInfo(Binding binding, String pkgName) {
}