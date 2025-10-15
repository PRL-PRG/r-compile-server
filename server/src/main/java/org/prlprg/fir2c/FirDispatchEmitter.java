package org.prlprg.fir2c;

import static org.prlprg.fir2c.Module2CCompiler.VAR_ENV;
import static org.prlprg.fir2c.Module2CCompiler.VAR_POOL;
import static org.prlprg.fir2c.Module2CCompiler.VAR_SEXP_PARAMS;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir2c.CModule.CFunction;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledVersionIndex;

/// Emits C for a [Function]'s dynamic-dispatch function.
final class FirDispatchEmitter {
  // Input
  private final ImmutableSet<Option> options;
  private final Function function;

  // Output
  private final CFunction cFunction;
  private final ImmutableMap<Abstraction, FirCompiledVersionIndex> compiledVersions;
  private final ConstantPool constantPool;

  // State
  private final IdentifierMangler mangler;

  FirDispatchEmitter(
      ImmutableSet<Option> options,
      Function function,
      CFunction cFunction,
      ImmutableMap<Abstraction, FirCompiledVersionIndex> compiledVersions,
      ConstantPool constantPool,
      IdentifierMangler mangler) {
    this.options = options;
    this.function = function;
    this.cFunction = cFunction;
    this.compiledVersions = compiledVersions;
    this.constantPool = constantPool;
    this.mangler = mangler;

    emit();
  }

  // region emit
  private void emit() {
    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cFunction.comment(
          "FIR %s dynamic dispatch (%s)", function.name().name(), function.parameterNames());
    }

    // TODO: Actually dispatch based on argument types.
    var baselineIndex = compiledVersions.get(function.baseline());
    assert baselineIndex != null;
    cFunction.stmt(
        "return %s(%s, %s, %s);",
        baselineIndex.cFunctionName(), VAR_POOL, VAR_ENV, VAR_SEXP_PARAMS);
  }

  // endregion emit
}
