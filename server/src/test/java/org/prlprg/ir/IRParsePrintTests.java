package org.prlprg.ir;

import org.prlprg.ir.closure.Closure;
import org.prlprg.sexp.SEXP;

/**
 * Test parsing and printing IR.
 *
 * <p>Specifically tests parsing and printing {@link Closure}s. All the other IR types are contained
 * within at least one of these {@link Closure}s. The closures are generated from the {@linkplain
 * org.prlprg.bc2ir.ClosureCompiler IR closure compiler}.
 *
 * <p>Implicitly, this also tests parsing and printing {@link SEXP}s (within the IR).
 */
//public class IRParsePrintTests extends RClosureTestsUsingIRCompiler {
//  @Override
//  protected void testClosure(Closure ir) {
//    // Test round-trip print/parse/print
//    var irString =
//        assertDoesNotThrow(() -> Printer.toString(ir, SEXPPrintOptions.FULL), "Failed to print IR");
//
//    Closure ir1;
//    try {
//      ir1 = Parser.fromString(irString, Closure.class);
//    } catch (ParseException e) {
//      var msg =
//          "Failed to re-parse printed IR:\n"
//              + Strings2.region(irString, e.position().line(), e.position().column());
//      throw new AssertionError(msg, e);
//    } catch (Throwable e) {
//      var msg =
//          "Uncaught exception while re-parsing printed IR:\n" + Strings2.entireRegion(irString);
//      throw new AssertionError(msg, e);
//    }
//    String ir1String;
//    try {
//      ir1String = Printer.toString(ir1, SEXPPrintOptions.FULL);
//    } catch (Throwable e) {
//      var msg = "Exception while re-printing re-parsed IR:\n" + Strings2.entireRegion(irString);
//      throw new AssertionError(msg, e);
//    }
//
//    assertEquals(
//        irString,
//        ir1String,
//        "IR re-printed doesn't match originally printed (round-trip failure).");
//
//    // Debug print if verbose
//    printlnIfVerbose(ir);
//  }
//}
