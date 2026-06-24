package org.prlprg.fir.feedback;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.position.CfgPosition;
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
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

/// Feedback for a closure version ([org.prlprg.fir.ir.abstraction.Abstraction]).
public class AbstractionFeedback {
  private final ModuleFeedback module;
  /// How many times this abstraction was called.
  private int numCalls = 0;
  /// Inferred types.
  ///
  /// `null` = nothing recorded, [Type#ANY_SEXP] = different types recorded. Both are equivalent to
  /// [Type#ANY_SEXP] when checked.
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
  /// How many times the promise assigned to the register was forced.
  public final Map<Register, Integer> forceCount = new HashMap<>();
  /// All registers we recorded any feedback for, and how much times we recorded for each.
  ///
  /// Note that some registers' returned feedback may be equivalent to if we recorded nothing,
  /// if we recorded useless feedback (e.g. different callees).
  ///
  /// Registers are ordered by when feedback was first recorded for them.
  private final Map<Register, Integer> allRecorded = new LinkedHashMap<>();
  /// `mkenv` instructions whose environments were reflectively accessed.
  public final Set<CfgPosition> reflectiveEnvs = new LinkedHashSet<>();

  public AbstractionFeedback(ModuleFeedback module) {
    this.module = module;
  }

  public ModuleFeedback module() {
    return module;
  }

  /// Increment the call counter.
  public void recordCall() {
    numCalls++;
  }

  /// Record that the register was assigned a value of type `type`
  public void recordType(Register register, Type type) {
    types.computeIfAbsent(register, _ -> new TypeFeedback()).record(type);
  }

  /// Record that the register was assigned a closure whose function is `callee`
  public void recordCallee(Register register, Function callee) {
    var oldCallee = callees.get(register);
    var updatedCallee =
        oldCallee == null
            ? Optional.of(callee)
            : oldCallee.flatMap(o -> o == callee ? Optional.of(callee) : Optional.empty());
    callees.put(register, updatedCallee);
  }

  /// Record that the register was assigned exactly `value`
  public void recordConstant(Register register, Value value) {
    var oldConstant = constants.get(register);
    var updatedConstant =
        oldConstant == null
            ? Optional.of(value)
            : oldConstant.flatMap(o -> o.equals(value) ? Optional.of(value) : Optional.empty());
    constants.put(register, updatedConstant);
  }

  /// Record that the promise assigned to `assignee` was forced (somewhere else, the promise is
  /// statically associated with its assignee)
  public void recordForce(Register assignee) {
    var assignedForceCount = forceCount(assignee);
    assignedForceCount++;
    forceCount.put(assignee, assignedForceCount);
  }

  /// Record that `register` was assigned
  public void recordAssign(Register register) {
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

  /// Get the promise feedback for the given promise (empty if none recorded).
  public int forceCount(Register assignee) {
    return forceCount.getOrDefault(assignee, 0);
  }

  /// How many times we recorded feedback for `register`.
  public int times(Register register) {
    return allRecorded.getOrDefault(register, 0);
  }

  /// Reset the call counter to 0.
  public void resetCalls() {
    numCalls = 0;
  }

  /// Create a deep copy.
  public AbstractionFeedback copy() {
    var copy = new AbstractionFeedback(module);
    copy.numCalls = this.numCalls;
    copy.types.putAll(this.types);
    copy.callees.putAll(this.callees);
    copy.constants.putAll(this.constants);
    copy.forceCount.putAll(this.forceCount);
    copy.allRecorded.putAll(this.allRecorded);
    copy.reflectiveEnvs.addAll(this.reflectiveEnvs);
    return copy;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  public record ParseContext(
      ModuleFeedback moduleFeedback, Module module, SEXPParseContext forSexps) {}

  public record PrintContext(SEXPPrintContext forSexps) {}

  @ParseMethod
  private AbstractionFeedback(Parser p, ParseContext ctx) {
    var s = p.scanner();
    module = ctx.moduleFeedback;

    numCalls = s.readUInt();
    s.assertAndSkip("x");

    s.assertAndSkip('[');

    while (!s.trySkip(']')) {
      if (s.trySkip("reg ")) {
        var register = p.parse(Register.class);
        parse(register, p, ctx);
      } else if (s.trySkip("env ")) {
        var pos = p.parse(CfgPosition.class);
        reflectiveEnvs.add(pos);
      } else {
        throw s.fail("\"reg\" or \"env\"", s.readIdentifierOrKeyword());
      }
    }
  }

  /// Parse feedback and assign it to the register. Parses nothing if it has none.
  private void parse(Register register, Parser p, ParseContext ctx) {
    var s = p.scanner();
    var module = ctx.module;
    var p2 = p.withContext(ctx.forSexps());

    if (s.trySkip('!')) {
      var assignedForceCount = s.readUInt();
      forceCount.put(register, assignedForceCount);
    }

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
    p.withContext(new PrintContext(new SEXPPrintContext(SEXPPrintOptions.FULL))).print(this);
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

          for (var env : reflectiveEnvs) {
            w.write("env ");
            p.print(env);
          }
        });
    w.write("\n]");
  }

  /// Print the register's feedback. Prints nothing if it has none.
  public void print(Register register, Printer p, PrintContext ctx) {
    var w = p.writer();
    var p2 = p.withContext(ctx.forSexps());

    var type = types.get(register);
    var callee = callees.get(register);
    var constant = constants.get(register);
    var assignedForceCount = forceCount.get(register);
    var times = times(register);

    if (times != 0) {
      if (assignedForceCount != null) {
        w.write(" !");
        p.print(assignedForceCount);
      }

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
