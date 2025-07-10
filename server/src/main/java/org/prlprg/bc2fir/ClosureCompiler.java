package org.prlprg.bc2fir;

import java.util.List;
import org.prlprg.fir.binding.Parameter;
import org.prlprg.fir.cfg.Abstraction;
import org.prlprg.fir.module.Function;
import org.prlprg.fir.module.Module;
import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Register;
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

  private static Abstraction createBaseline(Function output, ListSXP params) {
    var baseline = new Abstraction(output.owner(), defaultParams(params));
    output.addVersion(baseline);
    return baseline;
  }

  private static List<Parameter> defaultParams(ListSXP params) {
    return params.stream().map(p -> new Parameter(new Register("r" + p.tag()), Type.ANY)).toList();
  }
}
