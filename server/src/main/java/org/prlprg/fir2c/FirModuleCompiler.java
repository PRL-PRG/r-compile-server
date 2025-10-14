package org.prlprg.fir2c;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Register;

/** Compiles FIŘ modules into C translation units. */
final class FirModuleCompiler {
  static final String PARAM_ENVIRONMENT = "RHO";
  static final String PARAM_CONSTANT_POOL = "CCP";
  static final String PARAM_ARGUMENTS = "ARGS";
  static final String PARAM_ARG_COUNT = "NARGS";

  private final Module module;
  private final FirCompilationOptions options;
  private final FirConstantPool constantPool = new FirConstantPool();
  private final CModuleUnit cModule = new CModuleUnit();
  private final Map<Abstraction, FirCompiledModule.FirCompiledVersion> compiledVersions =
      new LinkedHashMap<>();
  private final IdentifierMangler mangler = new IdentifierMangler();

  FirModuleCompiler(Module module, FirCompilationOptions options) {
    this.module = module;
    this.options = options;
  }

  FirCompiledModule compile() {
    cModule.addInclude("runtime.h");

    for (var function : module.localFunctions()) {
      compileFunction(function);
    }
    var constantPoolSxp = constantPool.toVector();

    return new FirCompiledModule(cModule, Map.copyOf(compiledVersions), constantPoolSxp);
  }

  private void compileFunction(Function function) {
    for (var versionIndex : function.versionIndices()) {
      var version = function.version(versionIndex);

      if (version.isStub()) {
        continue;
      }

      var cName = mangledFunctionName(function, versionIndex);
      var parameters = cFunctionParameters(version.parameters());
      var cFunction = cModule.addFunction("SEXP", cName, parameters);

      var emitter =
          new FirVersionEmitter(
              options, constantPool, function, versionIndex, version, cFunction, mangler);
      emitter.emit();

      compiledVersions.put(
          version, new FirCompiledModule.FirCompiledVersion(function, versionIndex, cName));
    }
  }

  private List<String> cFunctionParameters(List<Parameter> parameters) {
    var params =
        List.of(
            "SEXP %s".formatted(PARAM_ENVIRONMENT),
            "SEXP %s".formatted(PARAM_CONSTANT_POOL),
            "SEXP const *%s".formatted(PARAM_ARGUMENTS),
            "int %s".formatted(PARAM_ARG_COUNT));

    if (parameters.isEmpty()) {
      return params;
    }

    // We store the FIŘ parameter names as comments to aid debugging.
    var signature =
        parameters.stream()
            .map(Parameter::variable)
            .map(Register::name)
            .collect(Collectors.joining(", "));
    return List.of(
        params.get(0), params.get(1), params.get(2), params.get(3) + " /* " + signature + " */");
  }

  private String mangledFunctionName(Function function, int versionIndex) {
    var base = "%s_v%d".formatted(function.name().name(), versionIndex);
    return mangler.unique(base);
  }
}
