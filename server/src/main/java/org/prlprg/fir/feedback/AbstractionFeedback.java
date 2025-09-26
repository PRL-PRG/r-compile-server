package org.prlprg.fir.feedback;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/// Feedback for a closure version ([org.prlprg.fir.ir.abstraction.Abstraction]).
public class AbstractionFeedback {
  /// Inferred types.
  ///
  /// `null` = nothing recorded, [Type#ANY] = different types recorded. Both are equivalent to
  /// [Type#ANY] when checked.
  public final Map<Register, TypeFeedback> types = new HashMap<>();
  /// Inferred calls.
  ///
  /// `null` = nothing recorded, `Optional.empty()` = different things recorded. Both are
  /// equivalent to `null` when checked, but only the former lets something be recorded
  // eventually.
  public final Map<Register, Optional<Function>> callees = new HashMap<>();
  /// Inferred constants.
  ///
  /// `null` = nothing recorded, `Optional.empty()` = different things recorded. Both are
  /// equivalent to `null` when checked, but only the former lets something be recorded
  // eventually.
  public final Map<Register, Optional<SEXP>> constants = new HashMap<>();
  /// All registers we recorded any feedback for, and how much times we recorded for each.
  ///
  /// Note that some registers' returned feedback may be equivalent to if we recorded nothing,
  /// if we recorded useless feedback (e.g. different callees).
  ///
  /// Registers are ordered by when feedback was first recorded for them.
  private final Map<Register, Integer> allRecorded = new LinkedHashMap<>();

  public void recordType(Register register, Type type) {
    types.computeIfAbsent(register, _ -> new TypeFeedback()).record(type);

    recordCommon(register);
  }

  public void recordCallee(Register register, Function callee) {
    var oldCallee = callees.get(register);
    var updatedCallee =
        oldCallee == null
            ? Optional.of(callee)
            : oldCallee.flatMap(o -> o == callee ? Optional.of(callee) : Optional.empty());
    callees.put(register, updatedCallee);

    recordCommon(register);
  }

  public void recordConstant(Register register, SEXP value) {
    var oldConstant = constants.get(register);
    var updatedConstant =
        oldConstant == null
            ? Optional.of(value)
            : oldConstant.flatMap(o -> o.equals(value) ? Optional.of(value) : Optional.empty());
    constants.put(register, updatedConstant);

    recordCommon(register);
  }

  private void recordCommon(Register register) {
    // Insert if necessary, then increment how many times we recorded `register`.
    if (!allRecorded.containsKey(register)) {
      allRecorded.put(register, 0);
    }
    allRecorded.put(register, allRecorded.get(register) + 1);
  }

  public TypeFeedback type(Register register) {
    return types.getOrDefault(register, TypeFeedback.EMPTY);
  }

  public @Nullable Function callee(Register register) {
    return callees.getOrDefault(register, Optional.empty()).orElse(null);
  }

  public @Nullable SEXP constant(Register register) {
    return constants.getOrDefault(register, Optional.empty()).orElse(null);
  }

  /// How many times we recorded feedback for `register`.
  public int times(Register register) {
    return allRecorded.getOrDefault(register, 0);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("[ ");
    w.runIndented(
        () -> {
          var wroteAny = false;

          for (var register : allRecorded.keySet()) {
            if (wroteAny) {
              w.write('\n');
            } else {
              wroteAny = true;
            }

            w.write("reg ");
            p.print(register);
            print(register, p);
            w.write('\n');
          }
        });
    w.write(']');
  }

  /// Print the register's feedback. Prints nothing if it has none.
  public void print(Register register, Printer p) {
    var w = p.writer();

    var type = type(register);
    var callee = callee(register);
    var constant = constant(register);
    var times = times(register);

    if (times != 0) {
      w.write(" {");

      if (callee != null) {
        w.write("call");
      } else if (constant != null) {
        w.write("const");
      } else if (!type.isEmpty()) {
        w.write(':');
        p.print(type);
      } else {
        w.write('_');
      }

      w.write(", ");
      p.print(times);
      w.write("x}");
    }
  }
}
