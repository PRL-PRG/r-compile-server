package org.prlprg.fir.interpret.internal;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.sexp.SEXP;

/// Another implementation of R, which runs what [InternalInterpreter] doesn't support: a call of a
/// base or attached function that has no [ExternalVersion], or whose `ExternalVersion` doesn't
/// support its arguments, and the lookup of a name that only an attached package binds.
public interface Fallback {
  /// The value of `version` of `function` called with `arguments` (which aren't forced), or
  /// `null` if this doesn't run such a call.
  ///
  /// @throws org.prlprg.fir.interpret.InterpretException if the call fails, or (unsupported) if
  /// this can't run the call with these arguments.
  @Nullable Value call(
      InternalInterpreter interpreter,
      Function function,
      Abstraction version,
      List<Value> arguments);

  /// Whether an attached package binds `name` to a function.
  boolean isAttachedFunction(String name);

  /// The value an attached package binds `name` to, or `null` if there's none this supports.
  @Nullable SEXP attachedVariable(String name);
}
