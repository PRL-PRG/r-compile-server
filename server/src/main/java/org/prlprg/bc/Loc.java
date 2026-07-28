package org.prlprg.bc;

import org.jspecify.annotations.Nullable;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;

public record Loc(@Nullable SEXP expr, @Nullable IntSXP srcRef) {}
