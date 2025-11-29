package org.prlprg.bc2c;

import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

// we do not persist the performance counters
public record BC2CSnapshotTestResult(String code, SEXP value, PerformanceCounters pc,
                                     String output) {

  public SEXP toSEXP() {
    return SEXPs.vec(SEXPs.string(code), value, SEXPs.string(output));
  }

  public static BC2CSnapshotTestResult fromSEXP(SEXP sexp) {
    if (!(sexp instanceof VecSXP v) || v.size() != 3) {
      throw new IllegalArgumentException("Value must be a vector of size 3, got: " + sexp);
    }

    var codeSxp = v.get(0);
    var code =
        codeSxp
            .asScalarString()
            .orElseThrow(
                () -> new IllegalArgumentException("Expected code as string, got: " + codeSxp));

    var value = v.get(1);

    var outputSxp = v.get(2);
    var output =
        outputSxp
            .asScalarString()
            .orElseThrow(
                () ->
                    new IllegalArgumentException(
                        "Expected a string output, got: " + outputSxp));

    // the performance counters are not kept in the snapshot
    return new BC2CSnapshotTestResult(code, value, PerformanceCounters.EMPTY, output);
  }

}
