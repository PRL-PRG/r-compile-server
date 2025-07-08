package org.prlprg.bc2fir;

import com.google.common.collect.ImmutableList;
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
    if (!(closure.body() instanceof BCodeSXP bc)) {
      throw new ClosureCompilerUnsupportedException(
          "AST closure must be converted into bytecode first", closure);
    }

    var output = module.addFunction(name);
    var baseline = createBaseline(output, closure.parameters());
    CFGCompiler.compileCFG(baseline.cfg(), bc);
    return output;
  }

  private static Abstraction createBaseline(Function output, ListSXP params) {
    var baseline = new Abstraction(output.owner(), defaultParams(params));
    output.addVersion(baseline);
    return baseline;
  }

  private static ImmutableList<Parameter> defaultParams(ListSXP params) {
    return params.stream()
        .map(p -> new Parameter(new Register("r" + p.tag()), Type.ANY))
        .collect(ImmutableList.toImmutableList());
  }
}
