package org.prlprg.fir.ir.argument;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.variable.Register;

/// A statement or jump argument. Essentially a "zero cost" instruction,
/// because we want to reuse instructions that aren't zero-cost (CSE, GVN).
@Immutable
public sealed interface Argument permits Constant, Consume, Read {
  @Nullable Register variable();

  /// Register this argument's occurrence as a [Use] of its register. No-op for [Constant].
  void addUse(Use use);

  /// Un-register this argument's occurrence as a [Use] of its register. No-op for [Constant].
  void removeUse(Use use);
}
