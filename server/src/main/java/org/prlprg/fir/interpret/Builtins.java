package org.prlprg.fir.interpret;

import java.util.List;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Java implementations of GNU-R builtins for [Interpreter] (specifically
/// [Interpreter#registerExternalFunction(String, ExternalFunction)]).
///
/// Note that these are only behaviorally equivalent to GNU-R implementations in some common
/// scenarios. They're not a complete substitute for GNU-R, but a way to test functions which
/// have issues when compiled to C, and a way to provide basic functionality to language-agnostic
/// IR code.
public final class Builtins {
  /// Register all builtins and intrinsics that are implemented.
  public static void registerBuiltins(Interpreter interpreter) {
    // Builtins
    interpreter.registerExternalFunction("+", Builtins::add);
    interpreter.registerExternalFunction("==", Builtins::equal);
    interpreter.registerExternalFunction("c", Builtins::c);
  }

  private static SEXP add(Interpreter interpreter, Function callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`+` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      var arg0 = args.getFirst().asScalarInteger().get();
      var arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.integer(arg0 + arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      var arg0 = args.getFirst().asScalarReal().get();
      var arg1 = args.get(1).asScalarReal().get();
      return SEXPs.real(arg0 + arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `+` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP equal(Interpreter interpreter, Function callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`==` takes 2 arguments");
    }
    var arg0 = args.getFirst();
    var arg1 = args.get(1);

    return SEXPs.logical(arg0.equals(arg1));
  }

  private static SEXP c(Interpreter interpreter, Function callee, List<SEXP> args, EnvSXP env) {
    return interpreter.mkVector(args);
  }

  private Builtins() {}
}
