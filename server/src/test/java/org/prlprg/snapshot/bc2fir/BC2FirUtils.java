package org.prlprg.snapshot.bc2fir;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.session.RSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;

public final class BC2FirUtils {
  /// Compile every closure bound in `rModuleEnv` into a function of a new module.
  ///
  /// The functions' baselines are unevaluated: the bytecode of a closure (and of its inner
  /// closures, whose functions aren't in the module until then) is only compiled when the
  /// baseline's body is accessed, which is also when anything unsupported is reported. Use
  /// [Module#evaluateAll()] to compile everything.
  ///
  /// If `strict`, every function is marked strict, including the ones added later.
  ///
  /// If `bytecodes` is non-`null`, the GNU-R bytecode of every function is recorded in it (also
  /// when its function is added).
  public static Module compile(
      EnvSXP rModuleEnv, RSession session, boolean strict, @Nullable ModuleBcOriginMap bytecodes) {
    var firModule = new Module();
    if (strict) {
      firModule.addObserver(
          (String func, List<Object> _, @Nullable Object returnValue) -> {
            if (func.equals("Module#addFunction") && returnValue instanceof Function function) {
              function.userProperties().setStrict(true);
            }
          });
    }

    for (var binding : rModuleEnv.bindings()) {
      var funName = binding.getKey();
      if (!(binding.getValue() instanceof CloSXP funSexpNotCompiled)) {
        throw new IllegalArgumentException(
            "Currently non-closures can't be compiled into FIŘ:\n"
                + funName
                + " <- "
                + binding.getValue());
      }

      var funSexp = funSexpNotCompiled;
      if (!(funSexp.body() instanceof BCodeSXP)) {
        var funBc =
            new BCCompiler(funSexpNotCompiled, session)
                .compile()
                .orElseThrow(BCCompilerUnsupportedException::new);
        funSexp =
            SEXPs.closure(
                funSexpNotCompiled.parameters(),
                SEXPs.bcode(funBc),
                funSexpNotCompiled.env(),
                funSexpNotCompiled.attributes());
      }

      BC2FirClosureCompiler.compile(session, firModule, funName, funSexp, bytecodes);
    }
    return firModule;
  }

  private BC2FirUtils() {
    // Utility class, no instances allowed.
  }
}
