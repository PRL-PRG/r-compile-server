package org.prlprg.bc2fir;

import org.jspecify.annotations.Nullable;
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
public final class BC2FirClosureCompiler {
  /// Compile the closure, add it to the module, and return it.
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(@Nullable RSession r, Module module, String name, CloSXP closure) {
    return compile(r, module, name, closure, null);
  }

  /// Compile the closure, add it to the module, and return it.
  ///
  /// The function's baseline is unevaluated: the bytecode is only compiled into its body when the
  /// body is first accessed, which is also when the functions of the closure's inner closures are
  /// added to the module (and when an unsupported bytecode is reported, by
  /// [BC2FirCFGCompilerUnsupportedException]). It has no fallback, because what runs instead of an
  /// unevaluated baseline is the bytecode itself.
  ///
  /// The body isn't cleaned up ([org.prlprg.fir.opt.Cleanup]): the compiler leaves unreachable
  /// blocks and other things behind, which the optimizations remove anyway.
  ///
  /// If `bytecodes` is non-`null`, records the closure's GNU-R bytecode in it (and, when the
  /// baseline is evaluated, that of every inner closure, as well as the baseline's feedback
  /// registers).
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(
      @Nullable RSession r,
      Module module,
      String name,
      CloSXP closure,
      @Nullable ModuleBcOriginMap bytecodes) {
    var parameterNames =
        closure.parameters().stream()
            .gather(Streams.mapWithIndex((p, i) -> Variable.named(p.hasTag() ? p.tag() : "p" + i)))
            .toList();

    Bc bc;
    if (closure.body() instanceof BCodeSXP bcSxp) {
      bc = bcSxp.bc();
    } else {
      if (r == null) {
        throw new BC2FirClosureCompilerUnsupportedException(
            "RSession is required to compile AST body", closure);
      }
      var bodyThunk = SEXPs.closure(SEXPs.list(), closure.body(), r.globalEnv());
      bc =
          new BCCompiler(bodyThunk, r)
              .compile()
              .orElseThrow(
                  () ->
                      new BC2FirClosureCompilerUnsupportedException(
                          "Failed to compile AST body", closure));
    }

    var origin = bytecodes == null ? null : bytecodes.record(name, bc, closure.parameters());

    // The baseline's signature doesn't depend on the bytecode, so only the body is lazy.
    return module.addFunction(
        Variable.named(name),
        parameterNames,
        body -> {
          var cfgCompiler = new BC2FirCFGCompiler(r, new CFGCursor(body), bc, bytecodes, origin);

          cfgCompiler.compileClosureEntry(parameterNames, closure.parameters().values());
          cfgCompiler.compileBc();
        });
  }
}
