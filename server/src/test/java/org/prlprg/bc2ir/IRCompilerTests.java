package org.prlprg.bc2ir;

/// ** Test our {@linkplain ClosureCompiler IR closure compiler} specifically. */
// public class IRCompilerTests extends RClosureTestsUsingIRCompiler {
//  @Test
//  public void inlineForReturn() throws Exception {
//    testClosure(
//        """
//      function(x) for (i in x) if (i) return() else 1
//    """);
//  }
//
//  @Override
//  protected void onIRGenerationFailure(Throwable e) {
//    throw new AssertionError("Failed to generate IR", e);
//  }
//
//  @Override
//  protected void testClosure(Closure ir) {
//    // Test verify
//    ir.verify();
//
//    // Debug print if verbose
//    printlnIfVerbose(ir);
//  }
// }
