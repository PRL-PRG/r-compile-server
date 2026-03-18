package org.prlprg.fir.feedback;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Optional;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/// Feedback for a closure version ([org.prlprg.fir.ir.abstraction.Abstraction]).
public class AbstractionFeedback {
  /// How many times this abstraction was called.
  private int numCalls = 0;
  /// Inferred types.
  ///
  /// `null` = nothing recorded, [Type#ANY] = different types recorded. Both are equivalent to
  /// [Type#ANY] when checked.
  public final Map<Register, TypeFeedback> types = new HashMap<>();
  /// Inferred calls.
  ///
  /// `null` = nothing recorded, `Optional.empty()` = different things recorded. Both are
  /// equivalent to `null` when checked, but only the former lets something be recorded
  /// eventually.
  public final Map<Register, Optional<Function>> callees = new HashMap<>();
  /// Inferred constants.
  ///
  /// `null` = nothing recorded, `Optional.empty()` = different things recorded. Both are
  /// equivalent to `null` when checked, but only the former lets something be recorded
  /// eventually.
  public final Map<Register, Optional<Value>> constants = new HashMap<>();
  /// All registers we recorded any feedback for, and how much times we recorded for each.
  ///
  /// Note that some registers' returned feedback may be equivalent to if we recorded nothing,
  /// if we recorded useless feedback (e.g. different callees).
  ///
  /// Registers are ordered by when feedback was first recorded for them.
  private final Map<Register, Integer> allRecorded = new LinkedHashMap<>();

  public AbstractionFeedback() {}

  /// Increment the call counter.
  public void recordCall() {
    numCalls++;
  }

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

  public void recordConstant(Register register, Value value) {
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

  /// How many times this abstraction was called.
  public int numCalls() {
    return numCalls;
  }

  public TypeFeedback type(Register register) {
    return types.getOrDefault(register, TypeFeedback.EMPTY);
  }

  public @Nullable Function callee(Register register) {
    return callees.getOrDefault(register, Optional.empty()).orElse(null);
  }

  public @Nullable Value constant(Register register) {
    return constants.getOrDefault(register, Optional.empty()).orElse(null);
  }

  /// How many times we recorded feedback for `register`.
  public int times(Register register) {
    return allRecorded.getOrDefault(register, 0);
  }

  /// Reset the call counter to 0.
  public void resetCalls() {
    numCalls = 0;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  public record ParseContext(Module module, SEXPParseContext forSexps) {}

  public record PrintContext(SEXPPrintContext forSexps) {}

  @ParseMethod
  private AbstractionFeedback(Parser p, ParseContext ctx) {
    var s = p.scanner();

    numCalls = s.readUInt();
    s.assertAndSkip("x");

    s.assertAndSkip('[');

    while (!s.trySkip(']')) {
      s.assertAndSkip("reg ");
      var register = p.parse(Register.class);
      parse(register, p, ctx);
    }
  }

  /// Parse feedback and assign it to the register. Parses nothing if it has none.
  private void parse(Register register, Parser p, ParseContext ctx) {
    var s = p.scanner();
    var module = ctx.module();
    var p2 = p.withContext(ctx.forSexps());

    if (s.trySkip('-')) {
      if (s.trySkip('_')) {
        callees.put(register, Optional.empty());
      } else {
        var calleeName = p2.parse(NamedVariable.class);
        var callee = module.lookupFunction(calleeName);
        if (callee == null) {
          throw s.fail("No such function: " + calleeName);
        }
        callees.put(register, Optional.of(callee));
      }
    }

    if (s.trySkip('=')) {
      if (s.trySkip('_')) {
        constants.put(register, Optional.empty());
      } else {
        var value = p2.parse(Value.class);
        constants.put(register, Optional.of(value));
      }
    }

    if (s.trySkip(':')) {
      var type = p.parse(TypeFeedback.class);
      types.put(register, type);
    }

    s.assertAndSkip("(");
    var times = s.readUInt();
    s.assertAndSkip("x)");
    allRecorded.put(register, times);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new PrintContext(new SEXPPrintContext())).print(this);
  }

  @PrintMethod
  private void print(Printer p, PrintContext ctx) {
    var w = p.writer();

    p.print(numCalls);
    w.write("x\n");

    if (allRecorded.isEmpty()) {
      w.write("[]");
      return;
    }

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
            print(register, p, ctx);
          }
        });
    w.write("\n]");
  }

  /// Print the register's feedback. Prints nothing if it has none.
  public void print(Register register, Printer p, PrintContext ctx) {
    var w = p.writer();
    var forSexps = ctx.forSexps();
    var p2 = p.withContext(forSexps);

    var type = types.get(register);
    var callee = callees.get(register);
    var constant = constants.get(register);
    var times = times(register);

    if (times != 0) {
      if (callee != null) {
        w.write(" -");
        if (callee.isPresent()) {
          p.print(callee.get().name());
        } else {
          w.write("_");
        }
      }

      if (constant != null) {
        w.write(" =");
        if (constant.isPresent()) {
          p2.print(constant.get());
        } else {
          w.write("_");
        }
      }

      if (type != null) {
        w.write(" :");
        p.print(type);
      }

      w.write(" (");
      p.print(times);
      w.write("x)");
    }
  }
}
