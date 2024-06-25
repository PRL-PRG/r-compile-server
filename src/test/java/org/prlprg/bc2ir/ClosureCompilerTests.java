package org.prlprg.bc2ir;

import static org.junit.Assume.assumeNoException;
import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.util.Tests.printlnIfVerbose;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc.RClosureTestsUsingBytecodeCompiler;
import org.prlprg.ir.closure.Closure;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;
import org.prlprg.util.Strings2;
import org.prlprg.util.UnreachableError;

/** Test our {@linkplain ClosureCompiler IR closure compiler} specifically. */
public class ClosureCompilerTests extends RClosureTestsUsingBytecodeCompiler {
  @Test
  public void inlineForReturn() {
    testClosure(
        """
      function(x) for (i in x) if (i) return() else 1
    """);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionsList")
  @Override
  public void stdlibFunctions(String reference) {
    var components = reference.split(":::");
    assert components.length == 2;
    var name = components[0] + "." + Names.unquoteIfNecessary(components[1]);

    testClosure(name, reference, 2);
  }

  /** {@link #testClosure(String, String, int)} with the closure's name set to the caller's name. */
  @Override
  protected void testClosure(String funCode, int optimizationLevel) {
    // https://stackoverflow.com/a/68674306
    var callerName =
        StackWalker.getInstance()
            .walk(
                stream ->
                    stream
                        .filter(m -> !m.getMethodName().equals("testAllIr"))
                        .findFirst()
                        .orElseThrow())
            .getMethodName();

    testClosure(callerName, funCode, optimizationLevel);
  }

  /**
   * Test generating the {@link Closure} IR, re-parsing, and verifying.
   *
   * <p>Maybe we want to separate, so some things are only generated, and we also load pre-generated
   * IR to run (in order to load pre-generated code, first we have to finalize the IR serialized
   * representation).
   */
  private void testClosure(String funName, String funCode, int optimizationLevel) {
    // Test compile
    var fun = compileSuccessfully(funCode, optimizationLevel);
    Closure ir;

    try {
      ir = ClosureCompiler.compileBaselineClosure(funName, fun);
    } catch (ClosureCompilerUnsupportedException e) {
      assumeNoException("Can't compile IR due to unsupported bytecode feature", e);
      throw new UnreachableError();
    }

    // Test round-trip print/parse/print
    var irString =
        assertDoesNotThrow(() -> Printer.toString(ir, SEXPPrintOptions.FULL), "Failed to print IR");

    Closure ir1;
    try {
      ir1 = Parser.fromString(irString, Closure.class);
    } catch (ParseException e) {
      var msg =
          "Failed to re-parse printed IR:\n"
              + Strings2.region(irString, e.position().line(), e.position().column());
      throw new AssertionError(msg, e);
    } catch (Throwable e) {
      var msg =
          "Uncaught exception while re-parsing printed IR:\n" + Strings2.entireRegion(irString);
      throw new AssertionError(msg, e);
    }
    String ir1String;
    try {
      ir1String = Printer.toString(ir1, SEXPPrintOptions.FULL);
    } catch (Throwable e) {
      var msg = "Exception while re-printing re-parsed IR:\n" + Strings2.entireRegion(irString);
      throw new AssertionError(msg, e);
    }

    assertEquals(
        irString,
        ir1String,
        "IR re-printed doesn't match originally printed (round-trip failure).");

    // Test verify
    ir.verify();

    // Debug print if verbose
    printlnIfVerbose(ir);
  }

  /**
   * Parse the closure and then compile it with a bytecode body.
   *
   * <p>"Successfully" = we want to make sure that any reported failure is on the ir end. So, we
   * compare our bytecode compiler against GNU-R, and if they don't match (or any other error occurs
   * within this function), we abort the test.
   *
   * <p>In the future if this is too slow, we can memoize it across runs: save the RDS of a closure
   * compiled from the first run, and load it on subsequent runs (maybe under a flag or something
   * automatic to detect when we must clear the cache).
   */
  private CloSXP compileSuccessfully(String funCode, int optimizationLevel) {
    CloSXP fun;
    try {
      fun = assertBytecode(funCode, optimizationLevel);
    } catch (Throwable e) {
      assumeNoException("Failed to get compiled GNU-R bytecode, so we can't test IR", e);
      throw new UnreachableError();
    }
    if (!(fun.body() instanceof BCodeSXP)) {
      abort(
          "Failed to get compiled GNU-R bytecode, so we can't test the IR: Java compiler returned NULL, so it probably contains the browser function.");
    }
    return fun;
  }
}
