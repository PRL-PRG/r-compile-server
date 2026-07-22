package org.prlprg.fir.ir.callee;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.type.Signature;

/// A call to a statically-known function. The closure-with-env is the owning statement's argument
/// at index 0.
public record StaticFnCallee(FunctionRef functionRef, boolean isDispatch, Signature signature)
    implements Callee {
  public StaticFnCallee(Function function, boolean isDispatch, Signature signature) {
    this(new FunctionRef(function), isDispatch, signature);
  }

  public Function function() {
    return functionRef.get();
  }

  /// The worst version that will be dispatched, or `null` if none exist (invalid).
  public @Nullable Abstraction minVersion() {
    return function().guess(signature);
  }

  /// The exact version that will be dispatched. `null` if dynamic or none exist.
  public @Nullable Abstraction exactVersion() {
    return isDispatch ? null : minVersion();
  }
}
