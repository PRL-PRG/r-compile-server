package org.prlprg.snapshot.fir.interpret;

import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Arrays;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Strings;

/// Wraps [InternalInterpreter] for tests.
final class TestInterpreter {
  private final InternalInterpreter interpreter;

  public TestInterpreter(Module module) {
    interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
  }

  public InterpretOutput call(String functionName, SEXP... arguments) {
    System.out.println("Test " + functionName + "(" + Strings.join(", ", arguments) + ")");
    @SuppressWarnings({"DataFlowIssue"})
    SexpResult[] result = new SexpResult[] {null};
    var checkpointTrace =
        interpreter
            .checkpointTrace()
            .track(
                () -> {
                  try {
                    var argValues =
                        Arrays.stream(arguments).map(Value.Sexp::new).toArray(Value[]::new);
                    var resultValue = interpreter.call(functionName, argValues);
                    result[0] = new Ok(resultValue.box());
                  } catch (InterpretException e) {
                    result[0] = new Error(e, e instanceof InternalInterpretUnsupportedException);
                  }
                });
    var checkpointTraceStr = Strings.join("\n", checkpointTrace);
    return new InterpretOutput(result[0], checkpointTraceStr, interpreter.feedback());
  }

  public ModuleFeedback feedback() {
    return interpreter.feedback();
  }
}
