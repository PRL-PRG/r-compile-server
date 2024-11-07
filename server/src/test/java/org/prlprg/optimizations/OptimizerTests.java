package org.prlprg.optimizations;

/**
 * Test optimizing the IR.
 *
 * <p>Specifically tests optimizing {@link Closure}s' versions (currently only the baseline
 * version). Promises are are implicitly tested because they are in some of these {@link Closure}s.
 * The closures are generated from the {@linkplain org.prlprg.bc2ir.ClosureCompiler IR closure
 * compiler}.
 */
// public class OptimizerTests extends RClosureTestsUsingIRCompiler {
//  @Override
//  protected void testClosure(Closure ir) {
//    optimize(ir.baselineVersion());
//
//    // Debug print if verbose
//    printlnIfVerbose(ir);
//  }
// }
