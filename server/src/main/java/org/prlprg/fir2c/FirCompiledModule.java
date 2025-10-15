package org.prlprg.fir2c;

import com.google.common.collect.ImmutableMap;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.VecSXP;

/// Result of translating a FIŘ module.
///
/// @param cModule The rendered C translation unit.
/// @param compiledFunctionDispatches Map of FIŘ [Function]s to the generated C function metadata
/// for their dynamic-dispatch functions.
/// @param compiledVersions Map of FIŘ [Abstraction]s to the generated C function metadata.
/// @param compiledPromises Map of FIŘ [Promise]s to the generated C function metadata.
/// @param constantPool Constant pool mirrored in the generated code, compatible with
/// `Rsh_const`.
public record FirCompiledModule(
    CModule cModule,
    ImmutableMap<Function, FirCompiledDispatchIndex> compiledFunctionDispatches,
    ImmutableMap<Abstraction, FirCompiledVersionIndex> compiledVersions,
    ImmutableMap<Promise, FirCompiledPromiseIndex> compiledPromises,
    VecSXP constantPool) {

  /// Metadata describing the C entry point for a particular FIŘ [Function]'s dispatch.
  public record FirCompiledDispatchIndex(String cFunctionName) {}

  /// Metadata describing the C entry point for a particular FIŘ [Abstraction].
  public record FirCompiledVersionIndex(String cFunctionName) {}

  /// Metadata describing the C entry point for a particular FIŘ [Promise].
  public record FirCompiledPromiseIndex(String cFunctionName) {}
}
