package org.prlprg.fir.interpret.internal;

import static org.prlprg.fir.interpret.internal.PrintStack.printFrame;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.Lists;

/// Runtime stack frame for FIŘ interpretation, managing register and environment bindings.
final class StackFrame {
  private final Function function;
  /// If there are multiple, that's because we're in a promise being forced.
  private final List<SubFrame> subFrames = new ArrayList<>();
  private final Map<Register, Value> registers = new LinkedHashMap<>();
  /// Promises created while this frame was live, so that when the frame exits (in [
  /// InternalInterpreter#call][InternalInterpreter]) they can all be marked
  /// [escaped][PromiseCode#escaped].
  private final List<PromiseCode> createdPromises = new ArrayList<>();
  /// Shared with [InternalInterpreter]: maps user-created environments to the `mkenv` statement
  /// that created them. [#mkEnv()] adds to it; [#put(NamedVariable, Value)] reads it to reject
  /// stores to elided environments.
  private final Map<EnvSXP, Statement> userEnvPositions;
  private EnvSXP environment;
  private int numEnvsPushed = 0;
  /// Whether this frame has [deopt-restored][#markDeoptRestored()].
  private boolean deoptRestored = false;

  StackFrame(Function function, EnvSXP parentEnv, Map<EnvSXP, Statement> userEnvPositions) {
    this.function = function;
    environment = parentEnv;
    this.userEnvPositions = userEnvPositions;
  }

  Function function() {
    return function;
  }

  @UnmodifiableView
  List<CFGCursor> positions() {
    return Lists.mapLazy(subFrames, sf -> sf.position);
  }

  CFGCursor position(int index) {
    if (index < 0 || index >= subFrames.size()) {
      throw new IndexOutOfBoundsException("Invalid position index: " + index);
    }
    return subFrames.get(index).position;
  }

  /// Enters a sub-frame for `position`'s [`CFG`][org.prlprg.fir.ir.cfg.CFG].
  public void enter(CFGCursor position, ModuleFeedback feedback) {
    var scope = position.cfg().scope();
    var scopeFeedback = feedback.get(scope);
    subFrames.add(new SubFrame(position, scopeFeedback));
  }

  public void exit() {
    if (subFrames.isEmpty()) {
      throw new IllegalStateException("No sub-frame to exit from");
    }

    subFrames.removeLast();
  }

  public @UnmodifiableView Map<Register, Value> registers() {
    return registers;
  }

  public EnvSXP environment() {
    return environment;
  }

  public Abstraction scope() {
    if (subFrames.isEmpty()) {
      throw new IllegalStateException("Stack frame has no sub-frame (empty/invalid state)");
    }
    return subFrames.getLast().position.cfg().scope();
  }

  public AbstractionFeedback scopeFeedback() {
    if (subFrames.isEmpty()) {
      throw new IllegalStateException("Stack frame has no sub-frame (empty/invalid state)");
    }
    return subFrames.getLast().scopeFeedback;
  }

  /// Lookup a register's value.
  public @Nullable Value get(Register register) {
    return registers.get(register);
  }

  /// Lookup a named variable's value in the environment.
  public @Nullable Value get(NamedVariable nv) {
    return environment.get(nv.name()).map(Value.Sexp::new).orElse(null);
  }

  /// Function lookup named variable.
  public @Nullable CloSXP getFunction(
      NamedVariable variable, java.util.function.Function<PromSXP, SEXP> forcer) {
    return environment.getFunction(variable.name(), forcer).orElse(null);
  }

  /// Set a local register's value.
  public void put(Register register, Value value) {
    registers.put(register, value);
  }

  /// Store a named variable's value in the environment.
  public void put(NamedVariable nv, Value value) {
    if (!(value instanceof Value.Sexp(var sexp))) {
      throw new IllegalArgumentException(
          "Can't store non-SEXP (" + value + ") under named variable (" + nv + ")");
    }
    var position = userEnvPositions.get(environment);
    if (position != null
        && InternalInterpreter.mkEnvTypeOf(position) == MkEnvType.ELIDED
        && !deoptRestored
        && !isInDeoptBranch()) {
      throw new IllegalStateException(
          "Local store to an elided environment: " + nv + " at:\n" + position);
    }
    environment.set(nv.name(), sexp);
  }

  /// Record that this frame deoptimized and is now running the restore CFG (the baseline).
  public void markDeoptRestored() {
    deoptRestored = true;
  }

  /// Whether the statement being interpreted is in a deopt branch.
  private boolean isInDeoptBranch() {
    var bb = currentStatement().parentBB();
    return bb != null && bb.jump().expression() instanceof Deopt;
  }

  /// Records a promise created while this frame is live (see [#createdPromises]).
  public void addPromise(PromiseCode promise) {
    createdPromises.add(promise);
  }

  /// Marks every promise created while this frame was live as [escaped][PromiseCode#escaped] (this
  /// frame has exited, so forcing one now reads a gone stack frame). Called when the frame returns.
  public void markPromisesEscaped() {
    for (var promise : createdPromises) {
      promise.escaped = true;
    }
    createdPromises.clear();
  }

  public void mkEnv() {
    environment = new UserEnvSXP(environment);
    userEnvPositions.put(environment, currentStatement());
    numEnvsPushed++;
  }

  /// The [Statement] the current sub-frame's cursor is at (e.g. the `mkenv` or `prom` being
  /// executed). Its enclosing promises are derivable statically from the IR (see
  /// [CfgHierarchy][org.prlprg.fir.analyze.cfg.CfgHierarchy]).
  Statement currentStatement() {
    var cursor = subFrames.getLast().position;
    return (Statement) Objects.requireNonNull(cursor.instruction());
  }

  public void popEnv() {
    if (numEnvsPushed == 0) {
      throw new IllegalStateException("Stack frame popped more environments than it pushed");
    }

    environment = environment.parent();
    numEnvsPushed--;
  }

  /// Runs `body` with [#environment] temporarily set to `environment`.
  ///
  /// Forcing a promise has to read and write the environment the `prom` captured, not whichever
  /// one this frame is on now: by then the frame may have `popenv`'d, and if the promise escaped
  /// the frame has returned entirely, so [#environment] is the *enclosing* environment and every
  /// lookup in the promise body would silently resolve there instead.
  public <T> T withEnvironment(EnvSXP environment, java.util.function.Supplier<T> body) {
    var previous = this.environment;
    var previousNumEnvsPushed = numEnvsPushed;
    this.environment = environment;
    numEnvsPushed = 0;
    try {
      return body.get();
    } finally {
      this.environment = previous;
      numEnvsPushed = previousNumEnvsPushed;
    }
  }

  @Override
  public String toString() {
    return Printer.use(p -> printFrame(this, p));
  }

  private record SubFrame(CFGCursor position, AbstractionFeedback scopeFeedback) {}
}
