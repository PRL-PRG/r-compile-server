package org.prlprg.bc;

import org.prlprg.sexp.EnvSXP;

import java.util.Set;

sealed public interface Frame {
    record Global(EnvSXP e) implements Frame {
    }

    record Local(EnvSXP e, Set<String> locals) implements Frame {
    }
}
