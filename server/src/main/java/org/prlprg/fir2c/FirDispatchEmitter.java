package org.prlprg.fir2c;

import com.google.common.collect.ImmutableSet;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir2c.CModule.CFunction;
import org.prlprg.util.NotImplementedError;

/// Emits C for a [Function]'s dynamic-dispatch function.
final class FirDispatchEmitter {
  // Input
  private final ImmutableSet<Option> options;
  private final Function function;

  // Output
  private final CFunction cFunction;
  private final ConstantPool constantPool;

  // State
  private final IdentifierMangler mangler;

  FirDispatchEmitter(
      ImmutableSet<Option> options,
      Function function,
      CFunction cFunction,
      ConstantPool constantPool,
      IdentifierMangler mangler) {
    this.options = options;
    this.function = function;
    this.cFunction = cFunction;
    this.constantPool = constantPool;
    this.mangler = mangler;

    emit();
  }

  // region emit
  private void emit() {
    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cFunction.comment(
          "FIR "
              + function.name().name()
              + " dynamic dispatch ("
              + function.parameterNames()
              + ")");
    }

    throw new NotImplementedError();
  }

  // endregion emit
}
