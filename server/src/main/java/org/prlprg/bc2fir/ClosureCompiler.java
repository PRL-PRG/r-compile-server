package org.prlprg.bc2fir;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.session.RSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Streams;

/// Compiles {@linkplain CloSXP R closures} into {@linkplain Function FIŘ functions}.
public class ClosureCompiler {
  /// Compile the closure, add it to the module, and return it.
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(@Nullable RSession r, Module module, String name, CloSXP closure) {
    var parameterNames =
        closure.parameters().stream()
            .gather(
                Streams.mapWithIndex((p, i) -> Variable.named(p.tag() == null ? "p" + i : p.tag())))
            .toList();

    Bc bc;
    if (closure.body() instanceof BCodeSXP bcSxp) {
      bc = bcSxp.bc();
    } else {
      if (r == null) {
        throw new ClosureCompilerUnsupportedException(
            "RSession is required to compile AST body", closure);
      }
      var bodyThunk = SEXPs.closure(SEXPs.list(), closure.body(), r.globalEnv());
      bc =
          new BCCompiler(bodyThunk, r)
              .compile()
              .orElseThrow(
                  () ->
                      new ClosureCompilerUnsupportedException(
                          "Failed to compile AST body", closure));
    }

    var output = module.addFunction(name, parameterNames, false);
    var outputBaseline = output.baseline();
    var outputCfg = Objects.requireNonNull(outputBaseline.cfg(), "baseline is never a stub");
    var outputCursor = new CFGCursor(outputCfg);

    var cfgCompiler = new CFGCompiler(r, outputCursor, bc);

    cfgCompiler.compileClosureEntry(parameterNames, closure.parameters().values());
    cfgCompiler.compileBc();

    return output;
  }
}
