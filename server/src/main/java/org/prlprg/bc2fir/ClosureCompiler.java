package org.prlprg.bc2fir;

import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.parameter.ParameterDefinition;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.session.RSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Streams;

/// Compiles {@linkplain CloSXP R closures} into {@linkplain Function FIŘ functions}.
public class ClosureCompiler {
  /// Compile the closure, add it to the module, and return it.
  ///
  /// @throws IllegalArgumentException If `r` is `null` and `closure` has AST default arguments
  /// or an AST body.
  public static Function compile(@Nullable RSession r, Module module, String name, CloSXP closure) {
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

    var output =
        module.addFunction(
            name,
            closure.parameters().stream()
                .gather(
                    Streams.mapWithIndex(
                        (p, i) -> compileParameter(r, closure, module, i, p.tag(), p.value())))
                .toList());
    var outputBaseline = output.baseline();
    var outputCfg = Objects.requireNonNull(outputBaseline.cfg(), "baseline is never a stub");

    // Compile initial environment with parameters.
    var outputCursor = new CFGCursor(outputCfg);
    outputCursor.insert(new Statement(new MkEnv()));
    for (var i = 0; i < output.parameterDefinitions().size(); i++) {
      var parameterDefinition = output.parameterDefinitions().get(i);
      var parameter = outputBaseline.parameters().get(i);

      outputBaseline.addLocal(new Local(parameterDefinition.name(), Type.ANY));
      outputCursor.insert(
          new Statement(new Store(parameterDefinition.name(), new Read(parameter.variable()))));
    }

    CFGCompiler.compile(r, outputCfg, bc);

    return output;
  }

  private static ParameterDefinition compileParameter(
      @Nullable RSession r,
      CloSXP closure,
      Module module,
      int index,
      @Nullable String name,
      SEXP ast) {
    var name1 = name == null ? "p" + index : name;
    var nameForDef = Variable.named(name1);

    if (ast.equals(SEXPs.MISSING_ARG)) {
      return new ParameterDefinition(nameForDef);
    }

    // Compile parameter

    // Compile AST into bytecode if needed
    Bc bc;
    if (ast instanceof BCodeSXP bcSxp) {
      bc = bcSxp.bc();
    } else {
      if (r == null) {
        throw new ClosureCompilerUnsupportedException(
            "RSession is required to compile AST default argument: " + name1, closure);
      }
      var astThunk = SEXPs.closure(SEXPs.list(), ast, r.globalEnv());
      bc =
          new BCCompiler(astThunk, r)
              .compile()
              .orElseThrow(
                  () ->
                      new ClosureCompilerUnsupportedException(
                          "Failed to compile AST default argument: " + name1, closure));
    }

    // Compile bytecode into FIŘ
    var bcThunk = new Abstraction(module, List.of());
    var bcThunkCfg = Objects.requireNonNull(bcThunk.cfg());
    CFGCompiler.compile(r, bcThunkCfg, bc);

    return new ParameterDefinition(nameForDef, bcThunk);
  }
}
