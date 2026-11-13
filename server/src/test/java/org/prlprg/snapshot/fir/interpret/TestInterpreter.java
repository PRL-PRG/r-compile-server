package org.prlprg.snapshot.fir.interpret;

import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import java.util.Arrays;
import java.util.Objects;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;

/// Wraps [InternalInterpreter] for tests. What it doesn't support runs in GNU-R ([GnuRFallback]).
final class TestInterpreter {
  private final InternalInterpreter interpreter;
  private final GnuRFallback fallback = new GnuRFallback();

  public TestInterpreter(Module module) {
    this(new InternalInterpreter(module));
  }

  /// Record feedback in `feedback` instead of starting with none.
  public TestInterpreter(Module module, MockModuleFeedback feedback) {
    this(new InternalInterpreter(module, feedback));
  }

  private TestInterpreter(InternalInterpreter interpreter) {
    this.interpreter = interpreter;
    registerBuiltins(interpreter);
    registerCaptureOutput(interpreter);
    registerOnExit();
    interpreter.setFallback(fallback);
  }

  public InterpretOutput call(String functionName, SEXP... arguments) {
    SexpResult result;
    try {
      var argValues = Arrays.stream(arguments).map(Value.Sexp::new).toArray(Value[]::new);
      result = new Ok(interpreter.call(functionName, argValues).box());
    } catch (InterpretException e) {
      result = new Error(e, e instanceof InternalInterpretUnsupportedException);
    } finally {
      fallback.restoreSession();
    }
    return new InterpretOutput(
        result, interpreter.feedback(), Printer.toString(interpreter.module()));
  }

  public MockModuleFeedback feedback() {
    return interpreter.feedback();
  }

  /// `on.exit` of one call that GNU-R can run (e.g. `on.exit(options(old))`).
  private void registerOnExit() {
    var function =
        Objects.requireNonNull(GlobalModules.BASE.localFunction(Variable.named("on.exit")));
    interpreter.registerExternal(
        function,
        function.baseline().signature(),
        (_, _, args, _) -> {
          if (!(args.getFirst().box() instanceof LangSXP code)
              || args.stream().skip(1).anyMatch(a -> a.box() != SEXPs.MISSING_ARG)) {
            throw interpreter.failUnsupported("Mock `on.exit` only supports one call");
          }
          interpreter.onExit(fallback.later(interpreter, code, interpreter.currentEnvironment()));
          return Value.NULL;
        });
  }

  /// `utils::capture.output` of unnamed arguments: the lines that forcing them prints. Unlike
  /// GNU-R, it doesn't print their visible values.
  private static void registerCaptureOutput(InternalInterpreter interpreter) {
    interpreter.registerAttached(
        "capture.output",
        (_, _, args, _) -> {
          if (!(args.getFirst().box() instanceof DotsListSXP dots)
              || dots.stream().anyMatch(TaggedElem::hasTag)) {
            throw interpreter.failUnsupported("Mock `capture.output` only supports `...`");
          }
          var out = System.out;
          var captured = new ByteArrayOutputStream();
          System.setOut(new PrintStream(captured, true));
          try {
            dots.forEach(element -> interpreter.eval(new Value.Sexp(element.value())));
          } finally {
            System.setOut(out);
          }
          return new Value.Sexp(SEXPs.string(captured.toString().lines().toList()));
        });
  }
}
