package org.prlprg.fir.feedback;

import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Stream;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.parseprint.ModuleFeedbackPrintContext;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Streams;

/// Feedback for a closure version ([Abstraction]).
public class AbstractionFeedback {
  /// Create a feedback for a single-[Abstraction] module, only for use in tests.
  public static AbstractionFeedback standaloneForTesting(Abstraction abstraction) {
    return new MockModuleFeedback(abstraction.module()).get(abstraction);
  }

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
  /// `mkenv` statements whose environments were reflectively accessed.
  public final Set<Statement> reflectiveEnvs = new LinkedHashSet<>();
  /// `prom` statements whose promises were recorded to escape (outlive the stack frame they were
  /// created in, then get forced afterwards).
  public final Set<Statement> escapingPromises = new LinkedHashSet<>();

  AbstractionFeedback(ModuleFeedback module) {
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

  /// All registers we recorded any feedback for, ordered by when feedback was first recorded.
  public @UnmodifiableView Set<Register> recordedRegisters() {
    return Collections.unmodifiableSet(allRecorded.keySet());
  }

  /// Set how many times this abstraction was called (when re-reading recorded feedback).
  public void setNumCalls(int numCalls) {
    this.numCalls = numCalls;
  }

  /// Set how many times we recorded feedback for `register` (when re-reading recorded feedback).
  public void setTimes(Register register, int times) {
    allRecorded.put(register, times);
  }

  /// Reset the call counter to 0.
  public void resetCalls() {
    numCalls = 0;
  }

  /// Create a deep copy.
  private AbstractionFeedback copy() {
    var copy = new AbstractionFeedback(module);
    copy.numCalls = this.numCalls;
    copy.types.putAll(this.types);
    copy.callees.putAll(this.callees);
    copy.constants.putAll(this.constants);
    copy.forceCount.putAll(this.forceCount);
    copy.allRecorded.putAll(this.allRecorded);
    copy.reflectiveEnvs.addAll(this.reflectiveEnvs);
    copy.escapingPromises.addAll(this.escapingPromises);
    return copy;
  }

  /// Create a deep copy.
  ///
  /// @param src The [Abstraction] this contains feedback for.
  /// @param dst The [Abstraction] the copy will contain feedback for, which must be
  ///            structurally equivalent.
  AbstractionFeedback copy(Abstraction src, Abstraction dst) {
    var copy = copy();

    var statements = new HashMap<Statement, Statement>();
    Streams.zip(streamStatements(src), streamStatements(dst), Map::entry)
        .forEach(e -> statements.put(e.getKey(), e.getValue()));

    remap(copy.reflectiveEnvs, statements);
    remap(copy.escapingPromises, statements);
    return copy;
  }

  private static Stream<Statement> streamStatements(Abstraction abstraction) {
    return abstraction
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .flatMap(bb -> bb.statements().stream());
  }

  private static void remap(Set<Statement> statements, Map<Statement, Statement> mapping) {
    var remapped = statements.stream().map(mapping::get).filter(Objects::nonNull).toList();
    statements.clear();
    statements.addAll(remapped);
  }

  @Override
  public String toString() {
    return Printer.toString(this, forPrinting());
  }

  /// Feedback can be printed without any surrounding information (constants are printed in full),
  /// so this forwards to [ModuleFeedbackPrintContext] and callers can just `p.print(feedback)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(forPrinting()).print(this);
  }

  private static ModuleFeedbackPrintContext.AbstractionFeedbackPrintContext forPrinting() {
    return new ModuleFeedbackPrintContext().forAbstraction();
  }
}
