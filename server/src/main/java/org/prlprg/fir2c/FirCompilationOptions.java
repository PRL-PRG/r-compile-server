package org.prlprg.fir2c;

/**
 * Configuration flags for the FIŘ to C compiler.
 *
 * <p>The initial translator is intentionally small, but the options object gives the architecture
 * room to grow without reworking method signatures in the public entry points.
 */
public record FirCompilationOptions(
    /** Emit run-time arity checks before evaluating the function body. */
    boolean checkArity,
    /** Emit a comment trail describing the original FIR constructs in the generated C. */
    boolean emitDebugComments) {

  public static final FirCompilationOptions DEFAULT = new FirCompilationOptions(true, true);
}
