package org.prlprg.bc;

import com.google.common.collect.ImmutableList;
import org.renjin.sexp.SEXP;

/** A complete R bytecode, consisting of a version, array of instructions and associated data, and constants. */
public record Bc(BcCode code, ImmutableList<SEXP> constants) {
    /**
     * The only version of R bytecodes we support, which is also the latest version.
     * The bytecode's version is denoted by the first integer in its code.
     */
    static int R_BC_VERSION = 13;
}
