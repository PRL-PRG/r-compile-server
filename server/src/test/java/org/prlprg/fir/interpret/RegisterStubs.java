package org.prlprg.fir.interpret;

import org.prlprg.fir.interpret.internal.ExternalVersion;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXPs;

class RegisterStubs {
  public static void registerStubs(Interpreter interpreter) {
    switch (interpreter) {
      case InternalInterpreter internalInterpreter -> registerStubs(internalInterpreter);
      case GnurInterpreter gnurInterpreter -> registerStubs(gnurInterpreter);
      default ->
          throw new UnsupportedOperationException(
              "Unsupported interpreter type: " + interpreter.getClass().getName());
    }
  }

  /// Hijack unimplemented functions in the examples, e.g. `inc`.
  public static void registerStubs(InternalInterpreter interpreter) {
    registerIfDefined(
        interpreter,
        "inc",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
            throw interpreter1.fail("`inc`'s arguments must consist of one scalar integer");
          }
          var arg = args.getFirst().asScalarInteger().get();

          return SEXPs.integer(arg + 1);
        });
    registerIfDefined(
        interpreter,
        "dec",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
            throw interpreter1.fail("`dec`'s arguments must consist of one scalar integer");
          }
          var arg = args.getFirst().asScalarInteger().get();

          return SEXPs.integer(arg - 1);
        });
    registerIfDefined(
        interpreter,
        "add",
        (interpreter1, _, args, _) -> {
          if (args.size() != 2
              || args.getFirst().asScalarInteger().isEmpty()
              || args.get(1).asScalarInteger().isEmpty()) {
            throw interpreter1.fail("`add`'s arguments must consist of two scalar integers");
          }
          var arg0 = args.getFirst().asScalarInteger().get();
          var arg1 = args.get(1).asScalarInteger().get();

          return SEXPs.integer(arg0 + arg1);
        });
    registerIfDefined(
        interpreter,
        "if0",
        (interpreter1, _, args, _) -> {
          if (args.size() != 3
              || args.getFirst().asScalarInteger().isEmpty()
              || !(args.get(1) instanceof PromSXP ifTrue)
              || !(args.get(2) instanceof PromSXP ifFalse)) {
            throw interpreter1.fail(
                "`if0`'s arguments must consist of one scalar integer and two promises");
          }
          var condition = args.getFirst().asScalarInteger().get();

          return condition == 0 ? interpreter.force(ifTrue) : interpreter.force(ifFalse);
        });
    registerIfDefined(
        interpreter,
        "provide",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1) {
            throw interpreter1.fail("`provide`'s arguments must consist of one value");
          }
          var nextProvided = provided(interpreter).appended("", args.getFirst());
          setProvided(interpreter, nextProvided);
          return SEXPs.NULL;
        });
    registerIfDefined(
        interpreter,
        "require",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1) {
            throw interpreter1.fail("`require`'s arguments must consist of one value");
          }
          var provided = provided(interpreter);
          if (provided.isEmpty()) {
            throw interpreter1.fail("No value was `require`d");
          }
          var nextProvided = provided.fromIndex(1);
          if (!args.getFirst().equals(provided.value(0))) {
            throw interpreter1.fail(
                "`require`d value doesn't match the first `provide`d value: expected "
                    + args.getFirst()
                    + " but got "
                    + provided.value(0)
                    + "\nrest = "
                    + nextProvided);
          }
          setProvided(interpreter, nextProvided);
          return SEXPs.NULL;
        });
    registerIfDefined(
        interpreter,
        "print",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1) {
            throw interpreter1.fail("`print`'s arguments must consist of one value");
          }
          System.out.println("PRINT " + args.getFirst());
          return SEXPs.NULL;
        });
    registerIfDefined(
        interpreter,
        "keepLive",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1) {
            throw interpreter1.fail("`keepLive`'s arguments must consist of one value");
          }
          // Keeps the argument alive
          return SEXPs.NULL;
        });
    registerIfDefined(
        interpreter,
        "blackBox",
        (interpreter1, _, args, _) -> {
          if (args.size() != 1) {
            throw interpreter1.fail("`blackBox`'s arguments must consist of one value");
          }
          return args.getFirst();
        });
  }

  private static void registerIfDefined(
      InternalInterpreter interpreter, String functionName, ExternalVersion javaClosure) {
    if (interpreter.module().localFunction(Variable.named(functionName)) != null) {
      interpreter.registerExternal(functionName, javaClosure);
    }
  }

  private static ListSXP provided(InternalInterpreter interpreter) {
    var sexp = interpreter.globalEnv().getLocal("provided").orElse(SEXPs.list());
    if (!(sexp instanceof ListSXP listSXP)) {
      throw interpreter.fail("expected `provided` to be a list, but got: " + sexp);
    }
    return listSXP;
  }

  private static void setProvided(InternalInterpreter interpreter, ListSXP values) {
    interpreter.globalEnv().set("provided", values);
  }

  private RegisterStubs() {
    // Static class
  }
}
