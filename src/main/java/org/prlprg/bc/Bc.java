package org.prlprg.bc;

import com.google.common.collect.ImmutableList;

// TODO: Remove stub with Sexp from branch `filip`
class Sexp {}

/** A complete R bytecode, consisting of a version, array of instructions and associated data, and constants. */
public record Bc(BcCode code, ImmutableList<Sexp> constants) {
    /**
     * The only version of R bytecodes we support, which is also the latest version.
     * The bytecode's version is denoted by the first integer in its code.
     */
    static int R_BC_VERSION = 13;
}
