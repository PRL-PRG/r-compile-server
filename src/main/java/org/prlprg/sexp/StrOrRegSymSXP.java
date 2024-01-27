package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface StrOrRegSymSXP extends SEXP permits StrSXP, RegSymSXP {
    /**
     * This is a weird method. If the SEXP is a symbol, it returns the name.
     * If the SEXP is a string, it returns the first element or (if empty) empty string.
     * It's used in the compiler in CreateTag to convert a symbol or string into a tag.
     * Maybe it should be moved into the compiler directly.
     */
    String reifyString();
}
