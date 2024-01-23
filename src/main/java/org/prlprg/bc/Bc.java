package org.prlprg.bc;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.sexp.SEXP;

import java.util.*;

/** A complete R bytecode, consisting of a version, array of instructions and associated data, and constants. */
public record Bc(BcCode code, ConstPool consts) {
    /**
     * The only version of R bytecodes we support, which is also the latest version.
     * The bytecode's version is denoted by the first integer in its code.
     */
    public static final int R_BC_VERSION = 12;

    /** Create from the raw GNU-R representation, bytecodes not including the initial version number. */
    public static Bc fromRaw(ImmutableIntArray bytecodes, List<SEXP> consts) throws BcFromRawException {
        var poolAndMakeIdx = ConstPool.fromRaw(consts);
        var pool = poolAndMakeIdx.a();
        var makePoolIdx = poolAndMakeIdx.b();
        try {
            return new Bc(BcCode.fromRaw(bytecodes, makePoolIdx), pool);
        } catch (BcFromRawException e) {
            throw new BcFromRawException("malformed bytecode\nConstants: " + pool, e);
        }
    }

    @Override
    public String toString() {
        return code() + "\n" + consts;
    }

    /** Equivalent to `CodeBuffer` in other projects */
    public static class Builder {
        private final BcCode.Builder code = new BcCode.Builder();
        private final ConstPool.Builder consts = new ConstPool.Builder();

        /**
         * Append a constant and return its index.
         */
        public <S extends SEXP> ConstPool.TypedIdx<S> addConst(S c) {
            return consts.add(c);
        }

        /**
         * Append an instruction.
         */
        public void addInstr(BcInstr instr) {
            code.add(instr);
        }

        /**
         * Append a collection of constants and return its index.
         */
        public <S extends SEXP> ImmutableList<ConstPool.TypedIdx<S>> addAllConsts(Collection<? extends S> c) {
            return consts.addAll(c);
        }

        /**
         * Append instructions.
         */
        public void addAllInstrs(Collection<? extends BcInstr> c) {
            code.addAll(c);
        }

        /**
         * Finish building the bytecode.
         *
         * @return The bytecode.
         */
        public Bc build() {
            return new Bc(code.build(), consts.build());
        }
    }

}
