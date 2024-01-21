package org.prlprg.primitive;

public final class Constants {
    // according to Arith.h
    public static final int NA_INT = Integer.MIN_VALUE;
    public static final double NA_REAL = Double.NaN;
    // This has to be a unique string, and we compare via direct equality
    @SuppressWarnings("StringOperationCanBeSimplified")
    public static final String NA_STRING = new String("!!!NA_STRING!!!");

    @SuppressWarnings("StringEquality")
    public static boolean isNaString(String s) {
        return s == NA_STRING;
    }

    private Constants() {
    }
}
