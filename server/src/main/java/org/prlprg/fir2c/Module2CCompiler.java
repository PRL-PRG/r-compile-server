package org.prlprg.fir2c;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledDispatchIndex;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledVersionIndex;

/// Compiles FIŘ modules into C translation units.
public final class Module2CCompiler {
  public static FirCompiledModule compile(Module module, Option... options) {
    return new Module2CCompiler(module, ImmutableSet.copyOf(options)).run();
  }

  static final String VAR_ENV = "RHO";
  static final String VAR_POOL = "CCP";
  static final String VAR_SEXP_PARAMS = "PARAMS";
  static final String VAR_SEXP_PARAM_TYPES = "PARAM_TYPES";

  // Input
  private final Module module;
  private final ImmutableSet<Option> options;

  // Output
  private final CModule cModule = new CModule();
  private final ImmutableMap.Builder<Function, FirCompiledDispatchIndex>
      compiledFunctionDispatches = ImmutableMap.builder();
  private final ImmutableMap.Builder<Abstraction, FirCompiledVersionIndex> compiledVersions =
      ImmutableMap.builder();
  private final ConstantPool constantPool = new ConstantPool();

  // State
  private final IdentifierMangler mangler = new IdentifierMangler();

  private Module2CCompiler(Module module, ImmutableSet<Option> options) {
    this.module = module;
    this.options = options;
  }

  private FirCompiledModule run() {
    cModule.addInclude("runtime.h");

    for (var function : module.localFunctions()) {
      var compiledVersionsForFunction =
          ImmutableMap.<Abstraction, FirCompiledVersionIndex>builder();
      for (var versionIndex : function.versionIndices()) {
        var version = function.version(versionIndex);
        var index = compileVersionFunction(function, versionIndex, version);
        compiledVersionsForFunction.put(version, index);
        compiledVersions.put(version, index);
      }

      var index = compileDispatchFunction(function, compiledVersionsForFunction.buildOrThrow());
      compiledFunctionDispatches.put(function, index);
    }

    return new FirCompiledModule(
        cModule,
        compiledFunctionDispatches.buildOrThrow(),
        compiledVersions.buildOrThrow(),
        constantPool.asVecSxp());
  }

  private FirCompiledVersionIndex compileVersionFunction(
      Function function, int versionIndex, Abstraction version) {
    var cName = versionCFunctionName(function, versionIndex);

    if (version.isStub()) {
      cModule.addStubFunction("SEXP", cName, versionCFunctionParameters);
    } else {
      var cFunction = cModule.addFunction("SEXP", cName, versionCFunctionParameters);
      new FirVersionEmitter(
          options, function, versionIndex, version, cFunction, constantPool, mangler);
    }

    return new FirCompiledVersionIndex(cName);
  }

  private FirCompiledDispatchIndex compileDispatchFunction(
      Function function, ImmutableMap<Abstraction, FirCompiledVersionIndex> compiledVersions) {
    var cName = dispatchCFunctionName(function);

    var cFunction = cModule.addFunction("SEXP", cName, dispatchCFunctionParameters);
    new FirDispatchEmitter(options, function, cFunction, compiledVersions, constantPool, mangler);

    return new FirCompiledDispatchIndex(cName);
  }

  private String dispatchCFunctionName(Function function) {
    return mangler.unique(function.name().name());
  }

  private static final List<String> dispatchCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "SEXP %s".formatted(VAR_SEXP_PARAMS),
          "Rsh_ParamTypes %s".formatted(VAR_SEXP_PARAM_TYPES));

  private String versionCFunctionName(Function function, int versionIndex) {
    return mangler.unique("%s_v%d".formatted(function.name().name(), versionIndex));
  }

  // TODO: Elide env if possible, and store each parameter as a C parameter instead of putting
  //  them in `VAR_SEXP_PARAMS`
  private static final List<String> versionCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "SEXP %s".formatted(VAR_SEXP_PARAMS));
}
