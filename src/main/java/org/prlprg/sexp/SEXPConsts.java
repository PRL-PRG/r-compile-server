package org.prlprg.sexp;

import org.prlprg.primitive.Logical;

public interface SEXPConsts {
    NilSXP NULL = NilSXP.INSTANCE;

    SymSXP UNBOUND_VALUE = new SpecialSymSXP("UNBOUND_VALUE");

    SymSXP MISSING_ARG = new SpecialSymSXP("MISSING_ARG");

    SymSXP ELLIPSIS = new RegSymSXP("...");

    EnvSXP GLOBAL_ENV = new SpecialEnvSXP("GLOBAL_ENV");

    EnvSXP BASE_ENV = new SpecialEnvSXP("BASE_ENV");

    EnvSXP BASE_NAMESPACE = new SpecialEnvSXP("BASE_NAMESPACE");

    EnvSXP EMPTY_ENV = new SpecialEnvSXP("EMPTY_ENV");

    LglSXP TRUE = new LglSXP(Logical.TRUE);

    LglSXP FALSE = new LglSXP(Logical.FALSE);

    // according to Arith.h
    int NA_INT = Integer.MIN_VALUE;

    Logical NA_LOGICAL = Logical.NA;

    Double NA_REAL = Double.NaN;

    String NA_STRING = new String("NA_STRING");


    LglSXP NA_LOGICAL_SXP = new LglSXP(NA_LOGICAL);

    IntSXP NA_INT_SXP = new IntSXP(NA_INT);

    RealSXP NA_REAL_SXP = new RealSXP(NA_REAL);

    StrSXP NA_STRING_SXP = new StrSXP(NA_STRING);
}
