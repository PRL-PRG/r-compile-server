package org.prlprg.fir.interpret.internal;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;

/// Interpreter-side data for a promise stub (see [InternalInterpreter]'s promise map).
///
/// Mutable [#escaped] is set when the creating [#frame] exits (see [
/// StackFrame#markPromisesEscaped][StackFrame]).
final class PromiseCode {
  final Promise expression;
  final StackFrame frame;
  final @Nullable Register assignee;
  /// Scope (version) whose CFG contains the `prom` instruction that created this promise; where the
  /// force feedback is recorded (whether or not the promise escaped).
  final Abstraction scope;
  /// [ScopePosition] of the `prom` instruction that created this promise (for escape feedback), so
  /// its enclosing promises are known when running the promise body.
  final @Nullable ScopePosition position;
  /// Whether the creating [#frame] has exited (so forcing this promise now is an escape).
  boolean escaped = false;

  PromiseCode(
      Promise expression,
      StackFrame frame,
      @Nullable Register assignee,
      Abstraction scope,
      @Nullable ScopePosition position) {
    this.expression = expression;
    this.frame = frame;
    this.assignee = assignee;
    this.scope = scope;
    this.position = position;
  }
}
