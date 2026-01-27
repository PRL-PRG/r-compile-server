package org.prlprg.fir.interpret;

import static org.prlprg.fir.interpret.RegisterStubs.registerStubs;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Either;
import org.prlprg.util.Strings;

/// Wraps [InternalInterpreter] for tests.
final class TestInterpreter {
  private final InternalInterpreter interpreter;

  public TestInterpreter(Module module) {
    interpreter = new InternalInterpreter(module);
    registerStubs(interpreter);
  }

  public InterpretOutput call(String functionName, SEXP... arguments) {
    @SuppressWarnings({"unchecked", "DataFlowIssue"})
    Either<SEXP, String>[] returnValue = new Either[] {null};
    var checkpointTrace =
        interpreter
            .checkpointTrace()
            .track(
                () -> {
                  try {
                    returnValue[0] = Either.left(interpreter.call(functionName, arguments));
                  } catch (InterpretException e) {
                    returnValue[0] = Either.right(e.mainMessage());
                  }
                });
    var checkpointTraceStr = Strings.join("\n", checkpointTrace);
    return new InterpretOutput(returnValue[0], checkpointTraceStr, interpreter.feedback());
  }

  public ModuleFeedback feedback() {
    return interpreter.feedback();
  }
}
