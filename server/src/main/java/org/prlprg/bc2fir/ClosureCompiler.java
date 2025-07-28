package org.prlprg.bc2fir;

import java.util.List;
import java.util.Objects;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ListSXP;

/// Compiles {@linkplain CloSXP R closures} into {@linkplain Function FIŘ functions}.
public final class ClosureCompiler {
  /// Compile the closure, add it to the module, and return it.
  public static Function compile(Module module, String name, CloSXP closure) {
    if (!(closure.body() instanceof BCodeSXP bcSxp)) {
      throw new ClosureCompilerUnsupportedException(
          "AST closure must be converted into bytecode first", closure);
    }

    var output = module.addFunction(name);
    var baseline = createBaseline(output, closure.parameters());
    CFGCompiler.compile(baseline.cfg(), bcSxp.bc());
    return output;
  }

  /// TODO: Add a third parameter to this method, `arguments`, which specifies the positional and
  /// named arguments. Then we'll compile a baseline which accepts those arguments, and assigns
  /// default values when necessary (uses `params.get(i).value()`).
  private static Abstraction createBaseline(Function output, ListSXP params) {
    var compiledParams = defaultParams(params);
    var baseline = output.addVersion(compiledParams);

    var baselineCursor = new CFGCursor(baseline.cfg());
    for (var i = 0; i < compiledParams.size(); i++) {
      var paramName =
          Objects.requireNonNull(
              params.get(i).tag(),
              "functions we compile can never have parameters without names, right? Maybe we must handle this case");
      var paramNamedVar = Variable.named(paramName);
      var paramReg = compiledParams.get(i).variable();

      baseline.addLocal(new Local(paramNamedVar, Type.ANY));
      baselineCursor.insert(new Assign(paramNamedVar, paramReg));
    }

    return baseline;
  }

  private static List<Parameter> defaultParams(ListSXP params) {
    // TODO: Prevent register name from conflicting with other parameters parameters or locals
    //  (including those defined later, so we can't just check `params`).
    return params.stream()
        .map(p -> new Parameter(Variable.register("r" + p.tag()), Type.ANY))
        .toList();
  }
}
