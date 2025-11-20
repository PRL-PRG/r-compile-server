package org.prlprg.fir2c;

import com.google.common.collect.ImmutableMap;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.session.RSession;
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
  public record FirCompiledDispatchIndex(String cFunctionName, String... cInitialArgs) {
    public static FirCompiledDispatchIndex builtin(Function function, RSession session) {
      var builtinIndex = session.RFunTab().indexOf(function.name().name());
      if (builtinIndex == -1) {
        throw new IllegalArgumentException(
            "Function in FIŘ's builtins module isn't in `R_FunTab`: " + function.name());
      }
      return new FirCompiledDispatchIndex("Rsh_Fir_builtin", Integer.toString(builtinIndex));
    }

    public static FirCompiledDispatchIndex intrinsic(Function function) {
      var name = function.name().name();
      return new FirCompiledDispatchIndex("Rsh_Fir_intrinsic_" + name);
    }
  }

  /// Metadata describing the C entry point for a particular FIŘ [Abstraction].
  public record FirCompiledVersionIndex(String cFunctionName) {
    private static final ImmutableMap<String, String> BUILTINS_WITH_EXPLICIT_VERSIONS =
        ImmutableMap.of("+", "add");

    public static FirCompiledVersionIndex builtin(Function function, Abstraction version) {
      var name = function.name().name();
      var index = function.indexOf(version);

      if (!BUILTINS_WITH_EXPLICIT_VERSIONS.containsKey(name)) {
        throw new IllegalArgumentException(
            "Builtin doesn't have explicit versions: " + function.name());
      }
      var cName = BUILTINS_WITH_EXPLICIT_VERSIONS.get(name);
      return new FirCompiledVersionIndex("Rsh_Fir_builtin_" + cName + "_v" + index);
    }

    public static FirCompiledVersionIndex intrinsic(Function function, Abstraction version) {
      var name = function.name().name();
      var index = function.indexOf(version);

      return new FirCompiledVersionIndex("Rsh_Fir_intrinsic_" + name + "_v" + index);
    }
  }

  /// Metadata describing the C entry point for a particular FIŘ [Promise].
  public record FirCompiledPromiseIndex(String cFunctionName) {}
}
