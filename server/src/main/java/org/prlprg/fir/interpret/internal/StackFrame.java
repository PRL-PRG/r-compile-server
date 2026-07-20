package org.prlprg.fir.interpret.internal;

import static org.prlprg.fir.interpret.internal.PrintStack.printFrame;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
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
  /// Shared with [InternalInterpreter]: maps user-created environments to the `mkenv` that created
  /// them. [#mkEnv()] adds to it; [#put(Variable, Value)] reads it to reject stores to elided
  /// environments.
  private final Map<EnvSXP, ScopePosition> userEnvPositions;
  private EnvSXP environment;
  private int numEnvsPushed = 0;

  StackFrame(Function function, EnvSXP parentEnv, Map<EnvSXP, ScopePosition> userEnvPositions) {
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
  ///
  /// `enclosing` is the chain of enclosing `prom` positions (outermost first) leading to this CFG:
  /// empty for a function body, and the creating promise's [ScopePosition]'s chain for a promise
  /// body. It's tracked here (instead of recomputed from the [
  /// hierarchy][org.prlprg.fir.analyze.cfg.CfgHierarchy]) so [#currentScopePosition()] knows the
  /// enclosing promises even when the promise escaped its creating frame.
  public void enter(CFGCursor position, List<CfgPosition> enclosing, ModuleFeedback feedback) {
    var scope = position.cfg().scope();
    var scopeFeedback = feedback.get(scope);
    subFrames.add(new SubFrame(position, enclosing, scopeFeedback));
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
    if (position != null && InternalInterpreter.mkEnvTypeOf(position) == MkEnvType.ELIDED) {
      throw new IllegalStateException(
          "Local store to an elided environment: " + nv + " at:\n" + position);
    }
    environment.set(nv.name(), sexp);
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
    userEnvPositions.put(environment, currentScopePosition());
    numEnvsPushed++;
  }

  /// The [CfgPosition] of the instruction the current sub-frame's cursor is at (e.g. the `mkenv`
  /// or `prom` being executed), within its own [CFG][org.prlprg.fir.ir.cfg.CFG].
  private CfgPosition currentCfgPosition() {
    var cursor = subFrames.getLast().position;
    return new CfgPosition(cursor.bb(), cursor.instructionIndex());
  }

  /// The [ScopePosition] of the instruction the current sub-frame's cursor is at (e.g. the `mkenv`
  /// or `prom` being executed), including its enclosing promises (see [#enter]).
  ScopePosition currentScopePosition() {
    return new ScopePosition(subFrames.getLast().enclosing, currentCfgPosition());
  }

  public void popEnv() {
    if (numEnvsPushed == 0) {
      throw new IllegalStateException("Stack frame popped more environments than it pushed");
    }

    environment = environment.parent();
    numEnvsPushed--;
  }

  @Override
  public String toString() {
    return Printer.use(p -> printFrame(this, p));
  }

  private record SubFrame(
      CFGCursor position, List<CfgPosition> enclosing, AbstractionFeedback scopeFeedback) {}
}
