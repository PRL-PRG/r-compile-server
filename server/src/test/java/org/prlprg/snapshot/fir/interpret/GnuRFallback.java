package org.prlprg.snapshot.fir.interpret;

import com.google.common.collect.ImmutableSet;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.IntStream;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.interpret.internal.Fallback;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.ArgumentMatcher;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.S4SXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;

/// Runs in the tests' GNU-R session what the interpreter doesn't support: a call of a base or
/// attached function whose arguments and result are data or closures of the interpreter (see
/// [#encode] and [#decode]), and the lookup of a name that an attached package binds.
///
/// GNU-R gets the call as a language object. An argument that is a promise is forced first, and
/// keeps its code if that's a symbol (bound to the value in the environment of the call), so that
/// e.g. `cbind(a, b)` names its columns. A special builtin (e.g. `rep`) gets the code of its
/// arguments, with the variables in it bound to their values. A closure of the interpreter is a
/// closure in GNU-R that calls back: the interpreter runs it, and can run calls in GNU-R again
/// meanwhile. The RNG state is the interpreter's (`.Random.seed` of its global environment): it
/// goes to GNU-R and back with each call and callback, and GNU-R's session keeps its own.
final class GnuRFallback implements Fallback {
  /// Functions that read or write state that only the interpreter or only the GNU-R session has
  /// (frames, environments, handlers of conditions that the interpreter raises, session settings,
  /// connections, clocks), besides those that read their caller's context or promises.
  private static final @Unmodifiable Set<String> DENIED =
      ImmutableSet.<String>builder()
          .addAll(GlobalModules.CONTEXT_READERS)
          .addAll(GlobalModules.PROMISE_READERS)
          .add("environment", "environment<-", "parent.env", "parent.env<-", "new.env")
          .add("eval", "evalq", "eval.parent", "local", "with", "within", "forceAndCall")
          .add("assign", "get", "get0", "mget", "exists", "rm", "remove", "delayedAssign")
          .add("attach", "detach", "source", "sys.source", "makeActiveBinding")
          .add("tryCatch", "try", "withCallingHandlers", "signalCondition")
          .add("RNGkind", "setwd", "Sys.setenv", "Sys.setlocale", "setClass", "setGeneric")
          .add("setMethod", "setValidity", "setRefClass", "readline", "readLines", "scan", "file")
          .add("textConnection", "rawConnection", "url", "gzfile", "pipe", "open", "close", "sink")
          .add("stdin", "Sys.time", "Sys.Date", "date", "proc.time", "system.time", "Sys.sleep")
          .add("system", "system2", "quit", "q", "gc", "gctorture", "browser", "debug", "trace")
          .build();

  /// Functions that read the code of their arguments, which GNU-R gets in place of the values.
  private static final @Unmodifiable Set<String> UNEVALUATED =
      ImmutableSet.of("library", "require", "::", ":::");

  /// Evaluates `input$call` with the variables `input$bind` and the RNG state `input$seed`.
  /// Returns the value, the new RNG state and the output, or the error message. Functions are
  /// looked up from the first attached package, because the global environment has what other
  /// examples left. `.rcs$closure` is what a closure of the interpreter calls (see [#proxy]).
  private static final String CALL =
      """
      (function() {
        g <- globalenv()
        seed <- function() get0(".Random.seed", g, inherits = FALSE)
        if (is.null(.rcs$closure)) {
          .rcs$closure <- function(id, ...) {
            res <- .rcs_callback(list(id, list(...), seed()))
            if (!is.null(res[[2]])) assign(".Random.seed", res[[2]], g)
            res[[1]]
          }
        }
        if (input$top) {
          old <- seed()
          on.exit(
            if (!is.null(old)) {
              assign(".Random.seed", old, g)
            } else if (!is.null(seed())) {
              rm(".Random.seed", envir = g)
            })
          if (is.null(input$seed) && !is.null(old)) rm(".Random.seed", envir = g)
        }
        if (!is.null(input$seed)) assign(".Random.seed", input$seed, g)
        env <- new.env(parent = as.environment(2L))
        for (name in names(input$bind)) assign(name, input$bind[[name]], env)
        tryCatch({
          out <- utils::capture.output(value <- eval(input$call, env))
          list(value, seed(), out)
        }, error = conditionMessage)
      })()""";

  /// About 1 s to 3 s of round trips for each run of the interpreter.
  private static final long BUDGET = 10_000;

  private final Map<String, Boolean> attachedFunctions = new HashMap<>();
  private final Map<String, SEXP> attachedVariables = new HashMap<>();
  private boolean changedOptions = false;
  /// Whether a `set.seed` ran, so that the RNG state doesn't come from the clock.
  private boolean seeded = false;
  /// The closures of the interpreter that GNU-R got, by the number it calls them back with.
  private final List<CloSXP> proxied = new ArrayList<>();
  /// How many calls are running in GNU-R (nested in callbacks).
  private int depth = 0;
  /// What the calls and callbacks of this run cost so far, in round trips with small data (about
  /// 0.3 ms each; see [#spend] and [#size]).
  private long cost = 0;

  /// Thrown when a call can't run in GNU-R, with the reason.
  private static final class Decline extends RuntimeException {
    Decline(String reason) {
      super(reason, null, false, false);
    }
  }

  @Override
  public @Nullable Value call(
      InternalInterpreter interpreter,
      Function function,
      Abstraction version,
      List<Value> arguments) {
    var name = function.name().name();
    if (!canRun(interpreter, function)) {
      return null;
    }

    try {
      var bindings = new LinkedHashMap<String, SEXP>();
      var call =
          SEXPs.lang(SEXPs.symbol(name), callArguments(interpreter, function, arguments, bindings));
      if (isInternal(function)) {
        call = SEXPs.lang(SEXPs.symbol(".Internal"), call);
      }
      return new Value.Sexp(run(interpreter, name, call, bindings));
    } catch (Decline e) {
      throw interpreter.failUnsupported("GNU-R can't run `" + name + "`: " + e.getMessage());
    }
  }

  /// A function that runs `code` (a call of a base or attached function) in GNU-R, with the
  /// variables of `environment` as they are when it runs.
  Runnable later(InternalInterpreter interpreter, LangSXP code, EnvSXP environment) {
    var name = code.funName().orElse("");
    if (DENIED.contains(name)) {
      throw interpreter.failUnsupported("GNU-R can't run `" + name + "`");
    }
    return () -> {
      try {
        var bindings = new LinkedHashMap<String, SEXP>();
        bindVariables(interpreter, environment, code, bindings);
        run(interpreter, name, code, bindings);
      } catch (Decline e) {
        throw interpreter.failUnsupported("GNU-R can't run `" + name + "`: " + e.getMessage());
      }
    };
  }

  /// The value of `call` in GNU-R, where `bindings` are its variables.
  private SEXP run(
      InternalInterpreter interpreter, String name, LangSXP call, Map<String, SEXP> bindings) {
    if (name.equals("options") && !changedOptions) {
      eval(".rcs$options <- options(); NULL", SEXPs.NULL);
      changedOptions = true;
    }

    spend(interpreter, call);
    bindings.values().forEach(value -> spend(interpreter, value));
    var input =
        SEXPs.vec(
                call,
                SEXPs.vec(List.copyOf(bindings.values())).withNames(List.copyOf(bindings.keySet())),
                seed(interpreter),
                depth == 0 ? SEXPs.TRUE : SEXPs.FALSE)
            .withNames(List.of("call", "bind", "seed", "top"));
    SEXP output;
    depth++;
    try {
      output = GNUR.instance().eval(CALL, input, message -> callback(interpreter, message));
    } finally {
      depth--;
    }
    switch (output) {
      case VecSXP result when result.size() == 3 -> {
        spend(interpreter, result.get(0));
        var value = decode(result.get(0));
        if (name.equals("set.seed")) {
          seeded = true;
        }
        setSeed(interpreter, result.get(1));
        ((StrSXP) result.get(2)).forEach(System.out::println);
        if (name.equals("library") || name.equals("require")) {
          attachedFunctions.clear();
        }
        return value;
      }
      case StrSXP message when message.size() == 1 -> throw interpreter.fail(message.get(0));
      case SEXP other -> throw interpreter.fail("`" + name + "` in GNU-R returned " + other);
    }
  }

  /// Runs the closure that GNU-R calls: `message` has its number (see [#proxy]), the arguments
  /// and the RNG state. Returns the value and the new RNG state.
  private SEXP callback(InternalInterpreter interpreter, SEXP message) {
    var parts = (VecSXP) message;
    var closure = proxied.get(((IntSXP) parts.get(0)).get(0));
    var values = (VecSXP) parts.get(1);
    var names = values.names();
    spend(interpreter, values);
    setSeed(interpreter, parts.get(2));

    // Like a closure that GNU-R's `lapply` calls, it gets forced promises.
    var arguments =
        IntStream.range(0, values.size())
            .mapToObj(
                i -> {
                  var value = decode(values.get(i));
                  return new TaggedElem(
                      names.isEmpty() ? "" : names.get(i),
                      value instanceof RegSymSXP || value instanceof LangSXP
                          ? value
                          : SEXPs.promise(value, value, interpreter.globalEnv()));
                })
            .collect(SEXPs.toList());
    var result = encode(interpreter, interpreter.callClosure(closure, arguments).box());
    spend(interpreter, result);
    return SEXPs.vec(result, seed(interpreter));
  }

  /// Count a round trip with `data`, and stop the run if it's over [#BUDGET], so that an example
  /// which e.g. subscripts a large vector in a long loop costs a bounded time.
  private void spend(InternalInterpreter interpreter, SEXP data) {
    cost += 1 + (size(data) >> 14);
    if (cost > BUDGET) {
      throw interpreter.failUnsupported("GNU-R calls cost more than the budget");
    }
  }

  /// What `data` costs to send, where a number costs 1 (about 20 ns; an object or a string costs
  /// 8, and attributes 32).
  private static long size(SEXP data) {
    var attributes = data.attributes();
    return 8
        + (attributes == null || attributes.isEmpty()
            ? 0
            : 32 + attributes.values().stream().mapToLong(GnuRFallback::size).sum())
        + switch (data) {
          case StrSXP strings -> 8L * strings.size();
          case PrimVectorSXP<?> vector -> vector.size();
          case VecSXP list -> list.stream().mapToLong(GnuRFallback::size).sum();
          case LangSXP lang -> lang.args().stream().mapToLong(a -> size(a.value())).sum();
          default -> 0;
        };
  }

  private static SEXP seed(InternalInterpreter interpreter) {
    return interpreter.globalEnv().getLocal(".Random.seed").orElse(SEXPs.NULL);
  }

  private void setSeed(InternalInterpreter interpreter, SEXP seed) {
    if (seed instanceof NilSXP) {
      return;
    }
    if (!seeded) {
      throw new Decline("it uses the RNG without `set.seed`");
    }
    interpreter.globalEnv().set(".Random.seed", seed);
  }

  private static SEXP eval(String source, SEXP input) {
    return GNUR.instance()
        .eval(
            source,
            input,
            _ -> {
              throw new IllegalStateException("Unexpected callback");
            });
  }

  /// Restores what the calls this ran changed in the GNU-R session, and starts a new budget.
  void restoreSession() {
    cost = 0;
    if (changedOptions) {
      eval("options(.rcs$options); NULL", SEXPs.NULL);
      changedOptions = false;
    }
  }

  private static boolean canRun(InternalInterpreter interpreter, Function function) {
    if (DENIED.contains(function.name().name())) {
      return false;
    }
    var owner = function.owner();
    return owner == GlobalModules.BASE
        || (owner == GlobalModules.BUILTINS
            && (!isInternal(function)
                || GNUR.instance().getSession().isBuiltinInternal(function.name().name())))
        || interpreter.isAttached(function);
  }

  /// Whether `function` is what a base closure calls with `.Internal` (e.g. `nchar`), not a
  /// function of the base environment.
  private static boolean isInternal(Function function) {
    if (function.owner() != GlobalModules.BUILTINS) {
      return false;
    }
    var base = GlobalModules.BASE.localFunction(function.name());
    return base == null || GlobalModules.isBaseClosure(base);
  }

  /// The arguments of the call in GNU-R: positional, except those that GNU-R only matches by name
  /// (a parameter after `...` or after a missing one). `[<-` and `[[<-` have their value last.
  private List<TaggedElem> callArguments(
      InternalInterpreter interpreter,
      Function function,
      List<Value> arguments,
      Map<String, SEXP> bindings) {
    var name = function.name().name();
    var formals = function.parameterNames();
    var isSubAssign = name.equals("[<-") || name.equals("[[<-");
    var isSubscript = isSubAssign || name.equals("[") || name.equals("[[");
    var isSpecial = GNUR.instance().getSession().isSpecial(name);

    var result = new ArrayList<TaggedElem>();
    TaggedElem last = null;
    var mustName = false;
    // Missing arguments by position, which are empty arguments only if another one follows.
    var missing = 0;
    for (var i = 0; i < arguments.size(); i++) {
      // A version with another number of parameters than the function takes them by position.
      var formal = arguments.size() == formals.size() ? formals.get(i).name() : "";
      // A subscript has its matrix and its indices by position, also the empty ones.
      var canName =
          !formal.isEmpty()
              && !ArgumentMatcher.isPositionalOnly(formal)
              && !(isSubscript && (formal.equals("x") || formal.equals("i")));
      var argument = arguments.get(i).box();

      if (argument == SEXPs.MISSING_ARG && !formal.equals("...")) {
        if (canName) {
          mustName = true;
        } else {
          missing++;
        }
        continue;
      }
      for (; missing > 0; missing--) {
        result.add(new TaggedElem(SEXPs.MISSING_ARG));
      }
      if (formal.equals("...")
          || (argument instanceof DotsListSXP && !(argument instanceof NilSXP))) {
        if (argument instanceof DotsListSXP dots) {
          for (var element : dots) {
            result.add(
                new TaggedElem(
                    element.tag(),
                    expression(interpreter, name, isSpecial, element.value(), bindings)));
          }
        } else if (argument != SEXPs.MISSING_ARG) {
          result.add(new TaggedElem(expression(interpreter, name, isSpecial, argument, bindings)));
        }
        mustName = true;
      } else {
        var expression = expression(interpreter, name, isSpecial, argument, bindings);
        if (isSubAssign && formal.equals("value")) {
          last = new TaggedElem("value", expression);
        } else {
          result.add(new TaggedElem(mustName && canName ? formal : "", expression));
        }
      }
    }
    if (last != null) {
      result.add(last);
    }
    return result;
  }

  /// The code of an argument whose value in the interpreter is `argument`.
  private SEXP expression(
      InternalInterpreter interpreter,
      String function,
      boolean isSpecial,
      SEXP argument,
      Map<String, SEXP> bindings) {
    return switch (argument) {
      case SEXP missing when missing == SEXPs.MISSING_ARG -> missing;
      case PromSXP promise when UNEVALUATED.contains(function) && isCode(promise.expr()) ->
          promise.expr();
      case PromSXP promise -> {
        var value = interpreter.force(promise);
        var builtin = builtinName(interpreter, value);
        if (builtin != null) {
          yield SEXPs.symbol(builtin);
        }
        yield promise.expr() instanceof RegSymSXP symbol
                && !symbol.name().equals("...")
                && bind(interpreter, symbol.name(), value, bindings)
            ? symbol
            : constant(interpreter, value);
      }
      case RegSymSXP _, LangSXP _ when isSpecial -> {
        bindVariables(interpreter, interpreter.currentEnvironment(), argument, bindings);
        yield argument;
      }
      default -> {
        var builtin = builtinName(interpreter, argument);
        yield builtin != null ? SEXPs.symbol(builtin) : constant(interpreter, argument);
      }
    };
  }

  private static boolean isCode(SEXP expr) {
    return expr instanceof RegSymSXP
        || expr instanceof StrSXP
        || (expr instanceof LangSXP && !InternalInterpreter.isPromiseCodeStub(expr));
  }

  /// The name of the base or attached function that `value` is the interpreter's closure of.
  private static @Nullable String builtinName(InternalInterpreter interpreter, SEXP value) {
    if (!(value instanceof CloSXP closure)) {
      return null;
    }
    var function = interpreter.extractClosure(closure);
    return function != null
            && (function.owner() == GlobalModules.BASE || interpreter.isAttached(function))
        ? function.name().name()
        : null;
  }

  /// `value` as code that evaluates to it.
  private SEXP constant(InternalInterpreter interpreter, SEXP value) {
    var encoded = encode(interpreter, value);
    return encoded instanceof RegSymSXP || encoded instanceof LangSXP
        ? SEXPs.lang(SEXPs.symbol("quote"), encoded)
        : encoded;
  }

  /// Bind `name` to `value`, unless it's bound to another value. Returns whether it's bound to
  /// `value` now.
  private boolean bind(
      InternalInterpreter interpreter, String name, SEXP value, Map<String, SEXP> bindings) {
    var encoded = encode(interpreter, value);
    var bound = bindings.computeIfAbsent(name, _ -> encoded);
    return bound == encoded || (bound instanceof CloSXP && bound.equals(encoded));
  }

  /// Bind the variables of `code` that `environment` or one of its parents below base binds.
  private void bindVariables(
      InternalInterpreter interpreter, EnvSXP environment, SEXP code, Map<String, SEXP> bindings) {
    switch (code) {
      case RegSymSXP symbol when symbol.name().equals("...") ->
          throw new Decline("its code has `...`");
      case RegSymSXP symbol -> {
        for (var env = environment; !(env instanceof BaseEnvSXP); env = env.parent()) {
          var value = env.getLocal(symbol.name()).orElse(null);
          if (value != null) {
            var forced = value instanceof PromSXP promise ? interpreter.force(promise) : value;
            if (builtinName(interpreter, forced) == null) {
              bind(interpreter, symbol.name(), forced, bindings);
            }
            break;
          }
        }
      }
      case LangSXP lang -> {
        bindVariables(interpreter, environment, lang.fun(), bindings);
        lang.args()
            .forEach(
                argument -> bindVariables(interpreter, environment, argument.value(), bindings));
      }
      default -> {}
    }
  }

  /// `sexp` for GNU-R: itself if it's data, and with [proxies][#proxy] for the interpreter's
  /// closures (which can also be elements of a list).
  private SEXP encode(InternalInterpreter interpreter, SEXP sexp) {
    return switch (sexp) {
      case CloSXP closure -> proxy(interpreter, closure);
      case VecSXP vec when vec.stream().anyMatch(CloSXP.class::isInstance) ->
          SEXPs.vec(vec.stream().map(e -> encode(interpreter, e)).toList(), vec.attributes());
      case SEXP data when isData(data) -> data;
      default -> throw new Decline("an argument isn't data (" + sexp.type() + ")");
    };
  }

  /// A value of GNU-R for the interpreter: the inverse of [#encode].
  private SEXP decode(SEXP sexp) {
    return switch (sexp) {
      case CloSXP closure
          when closure.body() instanceof LangSXP body
              && body.fun().equals(PROXY_FUNCTION)
              && body.arg(0) instanceof IntSXP id ->
          proxied.get(id.get(0));
      case VecSXP vec when vec.stream().anyMatch(CloSXP.class::isInstance) ->
          SEXPs.vec(vec.stream().map(this::decode).toList(), vec.attributes());
      case SEXP data when isData(data) -> data;
      default -> throw new Decline("a value of GNU-R isn't data (" + sexp.type() + ")");
    };
  }

  private static final SEXP PROXY_FUNCTION =
      SEXPs.lang(SEXPs.symbol("$"), SEXPs.symbol(".rcs"), SEXPs.symbol("closure"));

  /// `function(...) .rcs$closure(n, ...)`, which runs `closure` in the interpreter (see
  /// [#callback]).
  private SEXP proxy(InternalInterpreter interpreter, CloSXP closure) {
    if (interpreter.extractClosure(closure) == null) {
      throw new Decline("an argument is a closure that isn't the interpreter's");
    }
    var id = IntStream.range(0, proxied.size()).filter(i -> proxied.get(i) == closure).findFirst();
    if (id.isEmpty()) {
      proxied.add(closure);
    }
    return SEXPs.closure(
        SEXPs.list(new TaggedElem("...", SEXPs.MISSING_ARG)),
        SEXPs.lang(PROXY_FUNCTION, SEXPs.integer(id.orElse(proxied.size() - 1)), SEXPs.DOTS_SYMBOL),
        interpreter.globalEnv());
  }

  /// Whether `sexp` means the same in GNU-R as in the interpreter: no environment, promise or
  /// closure in it.
  static boolean isData(SEXP sexp) {
    var attributes = sexp.attributes();
    return (attributes == null || attributes.values().stream().allMatch(GnuRFallback::isData))
        && switch (sexp) {
          case NilSXP _, PrimVectorSXP<?> _, S4SXP _, RegSymSXP _ -> true;
          case VecSXP vec -> vec.stream().allMatch(GnuRFallback::isData);
          case ExprSXP expr -> expr.stream().allMatch(GnuRFallback::isData);
          case LangSXP lang ->
              isData(lang.fun())
                  && lang.args().stream()
                      .allMatch(a -> a.value() == SEXPs.MISSING_ARG || isData(a.value()));
          default -> false;
        };
  }

  @Override
  public boolean isAttachedFunction(String name) {
    return !DENIED.contains(name)
        && attachedFunctions.computeIfAbsent(
            name,
            _ ->
                eval(
                        "exists(input, envir = as.environment(2L), mode = 'function')",
                        SEXPs.string(name))
                    .equals(SEXPs.TRUE));
  }

  @Override
  public @Nullable SEXP attachedVariable(String name) {
    return attachedVariables.computeIfAbsent(
        name,
        _ -> {
          var value =
              eval(
                  """
                  local({
                    value <- get0(input, envir = as.environment(2L))
                    if (is.function(value) || is.environment(value)) NULL else list(value)
                  })""",
                  SEXPs.string(name));
          return value instanceof VecSXP vec && vec.size() == 1 && isData(vec.get(0))
              ? vec.get(0)
              : null;
        });
  }
}
