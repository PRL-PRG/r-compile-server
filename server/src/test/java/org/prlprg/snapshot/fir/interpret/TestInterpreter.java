package org.prlprg.snapshot.fir.interpret;

import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Arrays;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/// Wraps [InternalInterpreter] for tests.
final class TestInterpreter {
  private final InternalInterpreter interpreter;

  public TestInterpreter(Module module) {
    interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
  }

  /// Record feedback in `feedback` instead of starting with none.
  public TestInterpreter(Module module, MockModuleFeedback feedback) {
    interpreter = new InternalInterpreter(module, feedback);
    registerBuiltins(interpreter);
  }

  public InterpretOutput call(String functionName, SEXP... arguments) {
    SexpResult result;
    try {
      var argValues = Arrays.stream(arguments).map(Value.Sexp::new).toArray(Value[]::new);
      result = new Ok(interpreter.call(functionName, argValues).box());
    } catch (InterpretException e) {
      result = new Error(e, e instanceof InternalInterpretUnsupportedException);
    }
    return new InterpretOutput(
        result, interpreter.feedback(), Printer.toString(interpreter.module()));
  }

  public MockModuleFeedback feedback() {
    return interpreter.feedback();
  }
}
