package org.prlprg.bc2fir;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.SequencedMap;
import java.util.function.ToIntFunction;
import java.util.stream.Collectors;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc.BcLabel;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.rds.LabelMapping;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

/// Translates what the copy-and-patch JIT recorded while a baseline ran its GNU-R bytecode into
/// FIŘ feedback for the baseline (see `server/doc/bytecode-baseline-feedback.md`).
///
/// The JIT keys what it records by bytecode offset. [#feedbackOffsets(Abstraction,
/// FunctionBcOrigin)] maps each offset to the register the feedback describes. A `GETVAR` that
/// pushes a parameter's argument ([FunctionBcOrigin#parameterReads()]) also describes the
/// parameter, so that optimizations which specialize on parameter types can use it. The
/// translation prints a [MockModuleFeedback] and parses it back against the module.
public final class BcRecordingFeedback {
  /// One baseline's recording.
  ///
  /// @param function The name of the baseline's function.
  /// @param recording An R list with the elements `calls` (how many times the bytecode ran),
  ///     `branch`, `var_call` (rcp's export, unchanged), and `fun` (`bcids`, `counters`, and
  ///     `callees`: each the name of the function the instruction loaded, or `NULL`). It may have
  ///     other elements.
  public record Recording(String function, VecSXP recording) {
    /// The recordings in the list `Fir_serialized_feedback` returns: each element is a recording
    /// that also has the element `function`. `NULL` is no recordings.
    public static @Unmodifiable List<Recording> listOf(SEXP recordings) {
      return switch (recordings) {
        case NilSXP _ -> List.of();
        case VecSXP list ->
            list.stream()
                .map(
                    e -> {
                      var entry = (VecSXP) e;
                      return new Recording(string(element(entry, "function")), entry);
                    })
                .toList();
        default ->
            throw new IllegalArgumentException("Recordings must be a list or NULL: " + recordings);
      };
    }
  }

  /// Type codes the JIT records for a value: a `SEXPTYPE`, except that unboxed scalars and
  /// vectors without attributes get their own codes (mirrored from
  /// `client/rcp/rcp/src/stencils/stencils_recording.c`).
  private static final int CLOSXP = 3;

  private static final int PROMSXP = 5;
  private static final int SPECIALSXP = 7;
  private static final int BUILTINSXP = 8;
  private static final int LGLSXP_SCALAR = 11;
  private static final int LGLSXP_VECTOR = 12;
  private static final int DOTSXP = 17;
  private static final int ANYSXP = 18;
  private static final int INTSXP_SCALAR = 26;
  private static final int INTSXP_VECTOR = 27;
  private static final int REALSXP_SCALAR = 28;
  private static final int REALSXP_VECTOR = 29;
  private static final int STRSXP_SCALAR = 30;
  private static final int STRSXP_VECTOR = 31;

  /// The register each recorded instruction's feedback describes, keyed by the instruction's
  /// offset into the encoded bytecode (what the JIT keys its recording by), ascending.
  ///
  /// Only registers `baseline` has are included: the feedback is parsed against it.
  public static SequencedMap<Integer, String> feedbackOffsets(
      Abstraction baseline, FunctionBcOrigin origin) {
    var labels = LabelMapping.toGNUR(origin.bc().code());
    var baselineRegisters =
        baseline.streamRegisters().map(Register::name).collect(Collectors.toSet());

    var offsets = new LinkedHashMap<Integer, String>();
    origin.feedbackRegisters().entrySet().stream()
        .sorted(Map.Entry.comparingByKey())
        .filter(e -> baselineRegisters.contains(e.getValue()))
        .forEach(e -> offsets.put(labels.extract(new BcLabel(e.getKey())), e.getValue()));
    return offsets;
  }

  /// The name of the parameter whose argument each `GETVAR` in
  /// [FunctionBcOrigin#parameterReads()] pushes, keyed by the instruction's offset into the
  /// encoded bytecode, but only the `GETVAR` of each parameter that ran most often (the first of
  /// those): one in a rarely taken branch runs less often than the function is called.
  ///
  /// Only `GETVAR`s in `offsets` are considered.
  private static Map<Integer, String> parameterOffsets(
      FunctionBcOrigin origin, Map<Integer, String> offsets, Group varCall) {
    var labels = LabelMapping.toGNUR(origin.bc().code());
    ToIntFunction<Integer> times =
        offset -> {
          var j = varCall.indexOf(offset);
          return j == null ? 0 : varCall.ints(0, j);
        };
    var best = new LinkedHashMap<String, Integer>();
    origin.parameterReads().entrySet().stream()
        .map(e -> Map.entry(labels.extract(new BcLabel(e.getKey())), e.getValue()))
        .filter(e -> offsets.containsKey(e.getKey()))
        .sorted(Map.Entry.comparingByKey())
        .forEach(
            e ->
                best.merge(
                    e.getValue(),
                    e.getKey(),
                    (a, b) -> times.applyAsInt(b) > times.applyAsInt(a) ? b : a));
    return best.entrySet().stream()
        .collect(Collectors.toMap(Map.Entry::getValue, Map.Entry::getKey));
  }

  /// The feedback `recordings` describe, or `null` if there are none.
  ///
  /// @throws IllegalArgumentException If a recording's function isn't in `module` or has no
  ///     bytecode in `bytecodes`, or a recording is malformed.
  public static @Nullable MockModuleFeedback translate(
      Module module, ModuleBcOriginMap bytecodes, List<Recording> recordings) {
    var text = print(module, bytecodes, recordings);
    return text == null
        ? null
        : Parser.fromString(text, MockModuleFeedback.class, new ModuleFeedbackParseContext(module));
  }

  /// The printed [MockModuleFeedback] `recordings` describe, or `null` if there are none.
  ///
  /// A version's number of calls is the recording's `calls`. A register's number of recordings
  /// is its instruction's counter, and instructions that never ran are omitted. A parameter's
  /// feedback is that of its `GETVAR` with the highest counter. Its number of recordings, and of
  /// hits of its type, is the lesser of that counter and `calls`. A parameter whose type isn't
  /// definitely a value is omitted.
  public static @Nullable String print(
      Module module, ModuleBcOriginMap bytecodes, List<Recording> recordings) {
    if (recordings.isEmpty()) {
      return null;
    }

    var out = new StringBuilder("feedback {");
    for (var recording : recordings) {
      printBaseline(out, module, bytecodes, recording);
    }
    return out.append("\n}").toString();
  }

  private static void printBaseline(
      StringBuilder out, Module module, ModuleBcOriginMap bytecodes, Recording recording) {
    var function = function(module, recording.function());
    var baseline = function.baseline();
    var origin = bytecodes.get(recording.function());
    if (origin == null) {
      throw new IllegalArgumentException("No bytecode for function " + recording.function());
    }

    var data = recording.recording();
    var branch = Group.of(element(data, "branch"), "taken", "not_taken");
    var varCall = Group.of(element(data, "var_call"), "counters", "types");
    var fun = Group.of(element(data, "fun"), "counters", "callees");
    var calls = element(data, "calls") instanceof IntSXP i && i.size() == 1 ? i.get(0) : 0;

    out.append("\n  ")
        .append(Printer.toString(function.name()))
        .append("< ")
        .append(Printer.toString(baseline.signature()))
        .append(" > = ")
        .append(calls)
        .append("x\n  [");

    // `feedbackOffsets` evaluates the baseline, which records the parameter reads.
    var offsets = feedbackOffsets(baseline, origin);
    var parameters = parameterOffsets(origin, offsets, varCall);
    for (var e : offsets.entrySet()) {
      var offset = e.getKey();
      var register = e.getValue();

      // Every instruction is in exactly one group, which determines what kind of feedback it
      // recorded.
      Integer j;
      if ((j = varCall.indexOf(offset)) != null) {
        // `GETVAR`/`CALL` record the type of the value they push.
        var times = varCall.ints(0, j);
        if (times == 0) {
          continue;
        }
        var type = recordedTypes(varCall.ints(1, j));

        out.append("\n    reg ").append(register);
        if (type != null) {
          out.append(" :").append(type);
        }
        out.append(" (").append(times).append("x)");

        // The parameter's type is read from its hits, not its union, so it must print them. A
        // `GETVAR` in a loop runs more often than the function is called.
        var parameter = parameters.get(offset);
        if (parameter != null && type != null && !type.equals("*")) {
          var hits = Math.min(times, calls);
          out.append("\n    reg ")
              .append(parameter)
              .append(" :")
              .append(type)
              .append("[")
              .append(type)
              .append(" ")
              .append(hits)
              .append("x] (")
              .append(hits)
              .append("x)");
        }
      } else if ((j = fun.indexOf(offset)) != null) {
        // `GETFUN` records the function it loaded, if it always loaded the same one.
        var times = fun.ints(0, j);
        if (times == 0) {
          continue;
        }
        // A callee that isn't a function of the module is recorded like an ambiguous one: as
        // feedback that can't be speculated on.
        var callee = calleeName(module, ((VecSXP) fun.column(1)).get(j));

        out.append("\n    reg ")
            .append(register)
            .append(" -")
            .append(callee == null ? "_" : callee)
            .append(" (")
            .append(times)
            .append("x)");
      } else if ((j = branch.indexOf(offset)) != null) {
        // `BRIFNOT` counts each outcome. It jumps iff the condition is false, so a jump that was
        // never taken means the condition was always true.
        var taken = branch.ints(0, j);
        var notTaken = branch.ints(1, j);
        if (taken + notTaken == 0) {
          continue;
        }

        out.append("\n    reg ")
            .append(register)
            .append(" =")
            .append(taken == 0 ? "TRUE" : notTaken == 0 ? "FALSE" : "_")
            .append(" (")
            .append(taken + notTaken)
            .append("x)");
      }
    }

    out.append("\n  ]");
  }

  /// One of the recording's groups: `bcids` and the parallel columns named `columns`.
  private record Group(Map<Integer, Integer> indices, List<SEXP> columns) {
    static Group of(SEXP group, String... columns) {
      var list = (VecSXP) group;
      var indices = new LinkedHashMap<Integer, Integer>();
      var bcids = (IntSXP) element(list, "bcids");
      for (var i = 0; i < bcids.size(); i++) {
        indices.putIfAbsent(bcids.get(i), i);
      }
      return new Group(indices, List.of(element(list, columns[0]), element(list, columns[1])));
    }

    @Nullable Integer indexOf(int bcid) {
      return indices.get(bcid);
    }

    SEXP column(int column) {
      return columns.get(column);
    }

    int ints(int column, int index) {
      return ((IntSXP) column(column)).get(index);
    }
  }

  /// The printed FIŘ type of every value the JIT recorded in `bitmap` (a set of `1 << type`
  /// bits), or `null` if it recorded nothing.
  ///
  /// The bitmap doesn't say how often each type was recorded, so several types become their
  /// union, which is the top value type (`V`), or the top type (`*`) if one isn't definitely a
  /// value.
  private static @Nullable String recordedTypes(int bitmap) {
    String single = null;
    for (var type = 0; type < Integer.SIZE; type++) {
      if ((bitmap & (1 << type)) == 0) {
        continue;
      }
      var name = recordedType(type);
      if (name == null) {
        return "*";
      }
      if (single == null) {
        single = name;
      } else if (!single.equals(name)) {
        return "V";
      }
    }
    return single;
  }

  /// The printed FIŘ type of a value the JIT recorded `type` for, or `null` if it's not
  /// definitely a value.
  ///
  /// The JIT records a `SEXPTYPE` for anything with attributes or that is ALTREP, so those get the
  /// top value type (`V`) instead of e.g. `v(I)`.
  private static @Nullable String recordedType(int type) {
    return switch (type) {
      case CLOSXP, SPECIALSXP, BUILTINSXP -> "cls";
      case DOTSXP -> "dots";
      case LGLSXP_SCALAR -> "v1(L)";
      case LGLSXP_VECTOR -> "v(L)";
      case INTSXP_SCALAR -> "v1(I)";
      case INTSXP_VECTOR -> "v(I)";
      case REALSXP_SCALAR -> "v1(R)";
      case REALSXP_VECTOR -> "v(R)";
      case STRSXP_SCALAR -> "v1(S)";
      case STRSXP_VECTOR -> "v(S)";
      // A promise isn't a value, and `ANYSXP` is never actually recorded.
      case PROMSXP, ANYSXP -> null;
      default -> "V";
    };
  }

  /// The printed name of the function `callee` names, or `null` if it's `NULL` or not a function
  /// of `module`.
  private static @Nullable String calleeName(Module module, SEXP callee) {
    if (!(callee instanceof StrSXP s && s.isSimpleScalar())) {
      return null;
    }
    var name = Variable.named(s.get(0));
    return module.localFunction(name) == null ? null : Printer.toString(name);
  }

  /// The function of `module` named `name`, which may be an inner closure's, whose function is
  /// only added once the enclosing function's baseline is evaluated. Evaluates the unevaluated
  /// baselines one at a time, in module order, until the function exists.
  private static Function function(Module module, String name) {
    var variable = Variable.named(name);
    var function = module.localFunction(variable);
    while (function == null) {
      module.localFunctions().stream()
          .map(Function::baseline)
          .filter(baseline -> !baseline.isStub() && !baseline.isEvaluated())
          .findFirst()
          .orElseThrow(() -> new IllegalArgumentException("No such function: " + name))
          .body();
      function = module.localFunction(variable);
    }
    return function;
  }

  private static SEXP element(VecSXP list, String name) {
    var index = list.names().indexOf(name);
    if (index == -1) {
      throw new IllegalArgumentException("Recording has no element `" + name + "`: " + list);
    }
    return list.get(index);
  }

  private static String string(SEXP sexp) {
    if (!(sexp instanceof StrSXP s && s.isSimpleScalar())) {
      throw new IllegalArgumentException("Expected a string, got: " + sexp);
    }
    return s.get(0);
  }

  private BcRecordingFeedback() {}
}
