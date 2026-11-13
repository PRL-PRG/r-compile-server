package org.prlprg.snapshot.fir.interpret;

import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import org.prlprg.examples.SexpResult;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.internal.ExternalVersion;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;

/// Wraps [InternalInterpreter] for tests.
final class TestInterpreter {
  private final InternalInterpreter interpreter;

  public TestInterpreter(Module module) {
    interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    registerRng(interpreter);
  }

  /// Record feedback in `feedback` instead of starting with none.
  public TestInterpreter(Module module, MockModuleFeedback feedback) {
    interpreter = new InternalInterpreter(module, feedback);
    registerBuiltins(interpreter);
    registerRng(interpreter);
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

  // region RNG

  /// The RNG functions of base and of `stats`, which the interpreter runs in GNU-R.
  private static final List<String> RNG_BASE = List.of("set.seed", "sample", "sample.int");

  private static final List<String> RNG_STATS =
      List.of(
          "rnorm",
          "runif",
          "rbinom",
          "rexp",
          "rpois",
          "rgamma",
          "rbeta",
          "rt",
          "rchisq",
          "rlnorm",
          "rgeom",
          "rcauchy",
          "rweibull",
          "rlogis",
          "rnbinom",
          "rhyper");

  /// Calls `input$f` with `input$args` in GNU-R, with `.Random.seed` set to `input$seed`. Returns
  /// the value and the new seed, or the error message (an error would kill the R process). Then
  /// restores the session's own seed, so the interpreter and the R code of other tests don't share
  /// an RNG state. `stats`' namespace has the base functions too.
  private static final String RNG_CALL =
      """
      env <- globalenv()
      old <- get0(".Random.seed", env, inherits = FALSE)
      if (!is.null(input$seed)) assign(".Random.seed", input$seed, env)
      res <- tryCatch(
        list(do.call(get(input$f, asNamespace("stats")), input$args), get(".Random.seed", env)),
        error = conditionMessage)
      if (is.null(old)) {
        if (exists(".Random.seed", env, inherits = FALSE)) rm(".Random.seed", envir = env)
      } else {
        assign(".Random.seed", old, env)
      }
      res""";

  /// The interpreter keeps the RNG state where GNU-R does, in `.Random.seed` of the global
  /// environment. Without it (no `set.seed` yet), a call is unsupported, since GNU-R would seed
  /// from the clock.
  private static void registerRng(InternalInterpreter interpreter) {
    for (var name : RNG_BASE) {
      var function = Objects.requireNonNull(GlobalModules.BASE.localFunction(Variable.named(name)));
      interpreter.registerExternal(
          function, function.baseline().signature(), inGnuR(name, function.parameterNames()));
    }
    for (var name : RNG_STATS) {
      interpreter.registerAttached(name, inGnuR(name, List.of(NamedVariable.DOTS)));
    }
  }

  private static ExternalVersion inGnuR(String name, List<NamedVariable> parameters) {
    return ExternalVersion.strict(
        (interpreter, _, args, _) -> {
          var seed = interpreter.globalEnv().getLocal(".Random.seed").orElse(null);
          if (seed == null && !name.equals("set.seed")) {
            throw interpreter.failUnsupported("`" + name + "` without `set.seed`");
          }
          var rArgs = new ArrayList<TaggedElem>();
          for (var i = 0; i < args.size(); i++) {
            switch (args.get(i).box()) {
              case DotsListSXP dots -> dots.forEach(rArgs::add);
              case SEXP arg when arg == SEXPs.MISSING_ARG -> {}
              case SEXP arg -> rArgs.add(new TaggedElem(parameters.get(i).name(), arg));
            }
          }
          if (!rArgs.stream().allMatch(a -> isPlainData(a.value()))) {
            throw interpreter.failUnsupported("`" + name + "` of an argument that isn't data");
          }
          var input =
              SEXPs.vec(
                      SEXPs.string(name),
                      SEXPs.vec(rArgs.stream().map(TaggedElem::value).toList())
                          .withNames(rArgs.stream().map(TaggedElem::tag).toList()),
                      seed == null ? SEXPs.NULL : seed)
                  .withNames(List.of("f", "args", "seed"));
          return switch (GNUR.instance().eval(RNG_CALL, input)) {
            case VecSXP v when v.size() == 2 -> {
              interpreter.globalEnv().set(".Random.seed", v.get(1));
              yield new Value.Sexp(v.get(0));
            }
            case StrSXP message when message.size() == 1 -> throw interpreter.fail(message.get(0));
            case SEXP other -> throw interpreter.fail("`" + name + "` in GNU-R returned " + other);
          };
        });
  }

  private static boolean isPlainData(SEXP sexp) {
    return switch (sexp) {
      case PrimVectorSXP<?> _, NilSXP _ -> true;
      case VecSXP v -> v.stream().allMatch(TestInterpreter::isPlainData);
      default -> false;
    };
  }

  // endregion
}
