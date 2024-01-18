package org.prlprg.sexp;

import java.util.List;

public interface SEXPConsts {
    public static final LglSXP TRUE = new LglSXP(List.of(1));

    public static final LglSXP FALSE = new LglSXP(List.of(0));

    public static final NilSXP NULL = NilSXP.INSTANCE;

    public static final SymSXP MISSING_ARG = new SymSXP("") {
        @Override
        public String toString() {
            return "MISSING_ARG";
        }
    };

    public static final SymSXP ELIPSIS = new SymSXP("...") {
        @Override
        public String toString() {
            return "ELIPSIS";
        }
    };

    public static final EnvSXP GLOBAL_ENV = new EnvSXP() {
        @Override
        public String toString() {
            return "GLOBAL_ENV";
        }
    };

    public static final EnvSXP BASE_ENV = new EnvSXP() {
        @Override
        public String toString() {
            return "BASE_ENV";
        }
    };


    public static final EnvSXP EMPTY_ENV = new EnvSXP() {
        @Override
        public String toString() {
            return "EMPTY_ENV";
        }
    };

    // according to Arith.h
    int NA_INT = Integer.MIN_VALUE;

    // according to Arith.h
    int NA_LOGICAL = Integer.MIN_VALUE;

    Double NA_REAL = Double.NaN;

    String NA_STRING = new String("NA_STRING");
}
