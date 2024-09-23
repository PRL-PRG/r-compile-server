package org.prlprg.bc2c;

import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;

import java.util.Arrays;

public record PerformanceCounters(int slowArith, int slowMath1) {
    public static PerformanceCounters EMPTY = empty();

    public static PerformanceCounters from(SEXP sexp) {
        if (!(sexp instanceof IntSXP v)) {
            throw new IllegalArgumentException("Expected int vector, got: " + sexp);
        }

        var fields = PerformanceCounters.class.getRecordComponents();

        var nums = v.coerceToInts();
        var names = v.names();
        if (names.size() != fields.length || names.size() != v.size()) {
            throw new IllegalArgumentException("Expected named int, got: " + sexp);
        }

        var constructor = PerformanceCounters.class.getConstructors()[0];
        try {
            var args = new Object[nums.length];
            System.arraycopy(nums, 0, args, 0, nums.length);
            return (PerformanceCounters) constructor.newInstance(args);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    private static PerformanceCounters empty() {
        var constructor = PerformanceCounters.class.getConstructors()[0];
        try {
            var args = new Object[constructor.getParameterCount()];
            Arrays.fill(args, 0);
            return (PerformanceCounters) constructor.newInstance(args);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
