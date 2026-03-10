package org.prlprg.fir.interpret.internal;

import java.util.List;
import java.util.function.DoubleBinaryOperator;
import java.util.function.DoubleUnaryOperator;
import java.util.stream.IntStream;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Java implementations of GNU-R builtins for [InternalInterpreter] (specifically
/// [InternalInterpreter#registerExternal(String, ExternalVersion)]).
///
/// Note that these are only behaviorally equivalent to GNU-R implementations in some common
/// scenarios. They're not a complete substitute for GNU-R, but a way to test functions which
/// have issues when compiled to C, and a way to provide basic functionality to language-agnostic
/// IR code.
public final class Builtins {
  /// Register all builtins and intrinsics that are implemented.
  public static void registerBuiltins(InternalInterpreter interpreter) {
    // TODO: refactor
    //  - Abstract builtins like `+`, similar to how `abs` is abstracted via `registerMathBuiltin`
    //  - Give other builtins some specific versions. Also requires modifying `builtins.fir`
    // Builtins
    registerBinaryMathBuiltin(interpreter, "+", Double::sum);
    registerBinaryMathBuiltin(interpreter, "-", (a, b) -> a - b);
    registerBinaryMathBuiltin(interpreter, "*", (a, b) -> a * b);
    registerBinaryMathToRealBuiltin(interpreter, "/", (a, b) -> a / b);
    registerBinaryMathToRealBuiltin(interpreter, "^", Math::pow);
    registerUnaryMath1Builtin(interpreter, "abs", Math::abs);
    registerUnaryMath1Builtin(interpreter, "sqrt", Math::sqrt);
    registerUnaryMath1Builtin(interpreter, "floor", Math::floor);
    // TODO: Abstract these where possible, and convert them to take `Value`
    /*interpreter.registerExternal("==", ExternalVersion.strict(Builtins::equal));
    interpreter.registerExternal("!=", ExternalVersion.strict(Builtins::notEqual));
    interpreter.registerExternal("<", ExternalVersion.strict(Builtins::less));
    interpreter.registerExternal("<=", ExternalVersion.strict(Builtins::lessEqual));
    interpreter.registerExternal(">", ExternalVersion.strict(Builtins::greater));
    interpreter.registerExternal(">=", ExternalVersion.strict(Builtins::greaterEqual));
    interpreter.registerExternal("rep", ExternalVersion.strict(Builtins::rep));
    interpreter.registerExternal("[", ExternalVersion.strict(Builtins::index));
    interpreter.registerExternal("[<-", ExternalVersion.strict(Builtins::subAssign));
    interpreter.registerExternal("[[", ExternalVersion.strict(Builtins::index2));
    interpreter.registerExternal("[[<-", ExternalVersion.strict(Builtins::subAssign2));
    interpreter.registerExternal(":", ExternalVersion.strict(Builtins::colon));
    interpreter.registerExternal("c", ExternalVersion.strict(Builtins::c));
    interpreter.registerExternal("length", ExternalVersion.strict(Builtins::length));
    interpreter.registerExternal("sum", Builtins::sum);
    interpreter.registerExternal("as.logical", ExternalVersion.strict(Builtins::asLogical));
    interpreter.registerExternal("is.object", ExternalVersion.strict(Builtins::isObject));
    interpreter.registerExternal("stop", ExternalVersion.strict(Builtins::stop));
    interpreter.registerExternal("warning", ExternalVersion.strict(Builtins::warning));
    interpreter.registerExternal("stopifnot", ExternalVersion.strict(Builtins::stopifnot));
    interpreter.registerExternal("print", ExternalVersion.strict(Builtins::print)); */

    // Intrinsics
    interpreter.registerExternal("setInvisible", 0, Builtins::setInvisible);
    interpreter.registerExternal("setVisible", 0, Builtins::setVisible);
    interpreter.registerExternal("checkMissing", 0, Builtins::checkMissing);
    interpreter.registerExternal("toForSeq", 0, Builtins::toForSeq);
  }

  private static void registerBinaryMathBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryOperator javaFunction) {
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(SEXP sexp1)
                      && args.get(1) instanceof Value.Sexp(SEXP sexp2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp-scalar numbers");
              }
              if (sexp1.asScalarInteger().isPresent() && sexp2.asScalarInteger().isPresent()) {
                int arg0 = sexp1.asScalarInteger().get();
                int arg1 = sexp2.asScalarInteger().get();
                return new Value.Sexp(SEXPs.integer((int) javaFunction.applyAsDouble(arg0, arg1)));
              } else if (sexp1.asScalarReal().isPresent() && sexp2.asScalarReal().isPresent()) {
                double arg0 = sexp1.asScalarReal().get();
                double arg1 = sexp2.asScalarReal().get();
                return new Value.Sexp(SEXPs.real(javaFunction.applyAsDouble(arg0, arg1)));
              } else if (sexp1.asScalarInteger().isPresent() && sexp2.asScalarReal().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        javaFunction.applyAsDouble(
                            sexp1.asScalarInteger().get(), sexp2.asScalarReal().get())));
              } else if (sexp1.asScalarReal().isPresent() && sexp2.asScalarInteger().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        javaFunction.applyAsDouble(
                            sexp1.asScalarReal().get(), sexp2.asScalarInteger().get())));
              } else {
                throw interpreter.fail("`" + name + "`.0 takes 2 scalar integers or reals");
              }
            }));
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Int(var int1)
                      && args.get(1) instanceof Value.Int(var int2))) {
                throw interpreter.fail("`" + name + "`.1 takes 2 scalar integers");
              }
              return new Value.Int((int) javaFunction.applyAsDouble(int1, int2));
            }));
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Real(var real1)
                      && args.get(1) instanceof Value.Real(var real2))) {
                throw interpreter.fail("`" + name + "`.2 takes 2 scalar reals");
              }
              return new Value.Real(javaFunction.applyAsDouble(real1, real2));
            }));
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Int(var int1)
                      && args.get(1) instanceof Value.Real(var real2))) {
                throw interpreter.fail("`" + name + "`.3 takes a scalar integer and scalar real");
              }
              return new Value.Real(javaFunction.applyAsDouble(int1, real2));
            }));
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Real(var real1)
                      && args.get(1) instanceof Value.Int(var int2))) {
                throw interpreter.fail("`" + name + "`.4 takes a scalar real and scalar integer");
              }
              return new Value.Real(javaFunction.applyAsDouble(real1, int2));
            }));
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof IntSXP int1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof IntSXP int2)) {
                throw interpreter.fail("`" + name + "`.5 takes 2 int vectors");
              }
              return new Value.Sexp(
                  SEXPs.integer(
                      IntStream.range(0, Math.max(int1.size(), int2.size()))
                          .map(
                              i ->
                                  (int)
                                      javaFunction.applyAsDouble(
                                          int1.get(i % int1.size()), int2.get(i % int2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof RealSXP real1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof RealSXP real2)) {
                throw interpreter.fail("`" + name + "`.6 takes 2 real vectors");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(real1.size(), real2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      real1.get(i % real1.size()), real2.get(i % real2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof IntSXP int1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof RealSXP real2)) {
                throw interpreter.fail(
                    "`" + name + "`.7 takes an integer vector and a real vector");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(int1.size(), real2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      int1.get(i % int1.size()), real2.get(i % real2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof RealSXP real1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof IntSXP int2)) {
                throw interpreter.fail(
                    "`" + name + "`.8 takes a real vector and an integer vector");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(real1.size(), int2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      real1.get(i % real1.size()), int2.get(i % int2.size())))
                          .toArray()));
            }));
  }

  private static void registerBinaryMathToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryOperator javaFunction) {
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(SEXP sexp1)
                      && args.get(1) instanceof Value.Sexp(SEXP sexp2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp-scalar numbers");
              }
              if (sexp1.asScalarInteger().isPresent() && sexp2.asScalarInteger().isPresent()) {
                int arg0 = sexp1.asScalarInteger().get();
                int arg1 = sexp2.asScalarInteger().get();
                return new Value.Sexp(SEXPs.real(javaFunction.applyAsDouble(arg0, arg1)));
              } else if (sexp1.asScalarReal().isPresent() && sexp2.asScalarReal().isPresent()) {
                double arg0 = sexp1.asScalarReal().get();
                double arg1 = sexp2.asScalarReal().get();
                return new Value.Sexp(SEXPs.real(javaFunction.applyAsDouble(arg0, arg1)));
              } else if (sexp1.asScalarInteger().isPresent() && sexp2.asScalarReal().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        javaFunction.applyAsDouble(
                            sexp1.asScalarInteger().get(), sexp2.asScalarReal().get())));
              } else if (sexp1.asScalarReal().isPresent() && sexp2.asScalarInteger().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        javaFunction.applyAsDouble(
                            sexp1.asScalarReal().get(), sexp2.asScalarInteger().get())));
              } else {
                throw interpreter.fail("`" + name + "`.0 takes 2 scalar integers or reals");
              }
            }));
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Int(var int1)
                      && args.get(1) instanceof Value.Int(var int2))) {
                throw interpreter.fail("`" + name + "`.1 takes 2 scalar integers");
              }
              return new Value.Real(javaFunction.applyAsDouble(int1, int2));
            }));
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Real(var real1)
                      && args.get(1) instanceof Value.Real(var real2))) {
                throw interpreter.fail("`" + name + "`.2 takes 2 scalar reals");
              }
              return new Value.Real(javaFunction.applyAsDouble(real1, real2));
            }));
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Int(var int1)
                      && args.get(1) instanceof Value.Real(var real2))) {
                throw interpreter.fail("`" + name + "`.3 takes a scalar integer and scalar real");
              }
              return new Value.Real(javaFunction.applyAsDouble(int1, real2));
            }));
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Real(var real1)
                      && args.get(1) instanceof Value.Int(var int2))) {
                throw interpreter.fail("`" + name + "`.4 takes a scalar real and scalar integer");
              }
              return new Value.Real(javaFunction.applyAsDouble(real1, int2));
            }));
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof IntSXP int1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof IntSXP int2)) {
                throw interpreter.fail("`" + name + "`.5 takes 2 int vectors");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(int1.size(), int2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      int1.get(i % int1.size()), int2.get(i % int2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof RealSXP real1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof RealSXP real2)) {
                throw interpreter.fail("`" + name + "`.6 takes 2 real vectors");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(real1.size(), real2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      real1.get(i % real1.size()), real2.get(i % real2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof IntSXP int1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof RealSXP real2)) {
                throw interpreter.fail(
                    "`" + name + "`.7 takes an integer vector and a real vector");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(int1.size(), real2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      int1.get(i % int1.size()), real2.get(i % real2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof RealSXP real1
                      && args.get(1) instanceof Value.Sexp(var sexp2)
                      && sexp2 instanceof IntSXP int2)) {
                throw interpreter.fail(
                    "`" + name + "`.8 takes a real vector and an integer vector");
              }
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(real1.size(), int2.size()))
                          .mapToDouble(
                              i ->
                                  javaFunction.applyAsDouble(
                                      real1.get(i % real1.size()), int2.get(i % int2.size())))
                          .toArray()));
            }));
  }

  private static void registerUnaryMath1Builtin(
      InternalInterpreter interpreter, String name, DoubleUnaryOperator javaFunction) {
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(SEXP sexp))) {
                throw interpreter.fail("`" + name + "`.0 takes 1 sexp-scalar number");
              }
              if (sexp.asScalarInteger().isPresent()) {
                int value = sexp.asScalarInteger().get();
                return new Value.Sexp(SEXPs.integer((int) javaFunction.applyAsDouble(value)));
              } else if (sexp.asScalarReal().isPresent()) {
                double value = sexp.asScalarReal().get();
                return new Value.Sexp(SEXPs.real(javaFunction.applyAsDouble(value)));
              } else {
                throw interpreter.fail("`" + name + "`.0 takes 1 scalar integer or real");
              }
            }));
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Int(var intValue))) {
                throw interpreter.fail("`" + name + "`.1 takes 1 scalar integer");
              }
              return new Value.Int((int) javaFunction.applyAsDouble(intValue));
            }));
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Real(var realValue))) {
                throw interpreter.fail("`" + name + "`.2 takes 1 scalar real");
              }
              return new Value.Real(javaFunction.applyAsDouble(realValue));
            }));
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof IntSXP intSxp)) {
                throw interpreter.fail("`" + name + "`.3 takes 1 integer vector");
              }
              return new Value.Sexp(
                  SEXPs.real(intSxp.stream().mapToDouble(javaFunction::applyAsDouble).toArray()));
            }));
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof RealSXP realSxp)) {
                throw interpreter.fail("`" + name + "`.4 takes 1 real vector");
              }
              return new Value.Sexp(
                  SEXPs.real(realSxp.stream().mapToDouble(javaFunction::applyAsDouble).toArray()));
            }));
  }

  // TODO: abstract these where possible, and finish covnerting to take `Value` instead of `SEXP`
  /* private static Value equal(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`==` takes 2 arguments");
    }

    var arg0Clo = args.getFirst().as(CloSXP.class);
    var arg1Clo = args.get(1).as(CloSXP.class);
    if (arg0Clo.isPresent() && arg1Clo.isPresent()) {
      return SEXPs.logical(arg0Clo.get() == arg1Clo.get());
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 == arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `==` not implemented for arguments except scalar logicals, numbers, and closures");
  }

  private static Value notEqual(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`!=` takes 2 arguments");
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 != arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `!=` not implemented for arguments except scalar logicals and numbers");
  }

  private static Value subtract(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`-` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.integer(arg0 - arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.real(arg0 - arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `-` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value multiply(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`*` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.integer(arg0 * arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.real(arg0 * arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `*` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value divide(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`/` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      if (arg1 == 0) {
        return SEXPs.real(
            arg0 == 0
                ? Double.NaN
                : (arg0 > 0 ? Double.POSITIVE_INFINITY : Double.NEGATIVE_INFINITY));
      }
      return SEXPs.real((double) arg0 / arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      if (arg1 == 0) {
        return SEXPs.real(
            arg0 == 0
                ? Double.NaN
                : (arg0 > 0 ? Double.POSITIVE_INFINITY : Double.NEGATIVE_INFINITY));
      }
      return SEXPs.real(arg0 / arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `/` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value less(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`<` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.logical(arg0 < arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 < arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `<` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value lessEqual(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`<=` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.logical(arg0 <= arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 <= arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `<=` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value greater(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`>` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.logical(arg0 > arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 > arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `>` not implemented for arguments except integers, reals, or logicals");
  }

  private static Value greaterEqual(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`>=` takes 2 arguments");
    }

    var arg0Int = asScalarIntegerOrLogical(args.getFirst());
    var arg1Int = asScalarIntegerOrLogical(args.get(1));

    if (arg0Int.isPresent() && arg1Int.isPresent()) {
      int arg0 = arg0Int.get();
      int arg1 = arg1Int.get();
      return SEXPs.logical(arg0 >= arg1);
    }

    var arg0Double = asScalarDouble(args.getFirst());
    var arg1Double = asScalarDouble(args.get(1));

    if (arg0Double.isPresent() && arg1Double.isPresent()) {
      double arg0 = arg0Double.get();
      double arg1 = arg1Double.get();
      return SEXPs.logical(arg0 >= arg1);
    }

    throw interpreter.failUnsupported(
        "Mock `>=` not implemented for arguments except integers, reals, or logicals");
  }

  private static Optional<Integer> asScalarIntegerOrLogical(SEXP sexp) {
    return sexp.asScalarInteger().or(() -> sexp.asScalarLogical().map(Logical::toInt));
  }

  private static Optional<Double> asScalarDouble(SEXP sexp) {
    return sexp.asScalarReal()
        .or(() -> sexp.asScalarInteger().map(Number::doubleValue))
        .or(() -> sexp.asScalarLogical().map(logical -> (double) logical.toInt()));
  }

  private static Value rep(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`rep` takes 2 arguments");
    }
    if (!(args.get(1) instanceof DotsListSXP dots)) {
      throw interpreter.fail("`rep` second argument must be a dots list");
    }
    if (dots.size() != 1) {
      throw interpreter.fail("Mock `rep` dots must have exactly 1 value");
    }

    var value = args.getFirst();
    var times = dots.value(0);

    int timesValue;
    if (times.asScalarInteger().isPresent()) {
      timesValue = times.asScalarInteger().get();
    } else if (times.asScalarReal().isPresent()) {
      // Convert real to integer, truncating
      timesValue = times.asScalarReal().get().intValue();
    } else {
      throw interpreter.failUnsupported("Mock `rep` requires numeric times argument");
    }
    if (timesValue < 0) {
      throw interpreter.fail("rep() argument 'times' must be >= 0");
    }

    if (timesValue == 0) {
      if (value.asScalarInteger().isPresent()) {
        return SEXPs.EMPTY_INTEGER;
      } else if (value.asScalarReal().isPresent()) {
        return SEXPs.EMPTY_REAL;
      } else {
        throw interpreter.failUnsupported("Mock `rep` not implemented for this value type");
      }
    }

    if (value.asScalarInteger().isPresent()) {
      int intValue = value.asScalarInteger().get();
      var result = new int[timesValue];
      Arrays.fill(result, intValue);
      return SEXPs.integer(result);
    } else if (value.asScalarReal().isPresent()) {
      double realValue = value.asScalarReal().get();
      var result = new double[timesValue];
      Arrays.fill(result, realValue);
      return SEXPs.real(result);
    } else if (value.asScalarLogical().isPresent()) {
      var logicalValue = value.asScalarLogical().get();
      var result = new Logical[timesValue];
      Arrays.fill(result, logicalValue);
      return SEXPs.logical(result);
    } else {
      throw interpreter.failUnsupported(
          "Mock `rep` not implemented for arguments except scalar integers, reals, and logicals");
    }
  }

  private static Value index(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    // Mock [ behaves the same as [[
    return index2(interpreter, callee, args, env);
  }

  private static Value subAssign(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 4) {
      throw interpreter.fail("`[<-` takes 4 arguments (last is a dots list)");
    }
    if (!(args.get(3) instanceof DotsListSXP dots)) {
      throw interpreter.fail("`[<-` fourth argument must be a dots list");
    }
    if (!dots.isEmpty()) {
      throw interpreter.fail("Mock `[<-` dots must be empty");
    }

    // Mock [[<- behaves the same as [<-, but with no fourth argument
    return subAssign2(interpreter, callee, args.subList(0, 3), env);
  }

  private static Value index2(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 4) {
      throw interpreter.fail("`[` and `[[` take 4 arguments");
    }
    if (!(args.get(2) instanceof DotsListSXP dots)) {
      throw interpreter.fail("`[` and `[[` third argument must be a dots list");
    }
    if (!dots.isEmpty()) {
      throw interpreter.fail("Mock `[` and `[[` dots must be empty");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw interpreter.failUnsupported("Mock `[` and `[[` not implemented for non-vector objects");
    }

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.get(1).asScalarInteger().isPresent()) {
      index1 = args.get(1).asScalarInteger().get();
    } else if (args.get(1).asScalarReal().isPresent()) {
      index1 = args.get(1).asScalarReal().get().intValue();
    } else {
      throw interpreter.failUnsupported("Mock `[` and `[[` require numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    var index0 = index1 - 1;

    return interpreter.subscriptLoad(vector, index0);
  }

  private static Value subAssign2(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 3) {
      throw interpreter.fail("`[<-` takes 3 arguments");
    }
    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw interpreter.failUnsupported(
          "Mock `[<-` and `[[<-` not implemented for non-vector objects");
    }

    var value = args.get(2);

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.get(1).asScalarInteger().isPresent()) {
      index1 = args.get(1).asScalarInteger().get();
    } else if (args.get(1).asScalarReal().isPresent()) {
      index1 = args.get(1).asScalarReal().get().intValue();
    } else {
      throw interpreter.failUnsupported("Mock `[<-` and `[[<-` require numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    int realIndex = index1 - 1;

    // Cast `value` to the correct type if possible.
    if (vector instanceof IntSXP && value.asScalarReal().isPresent()) {
      value = SEXPs.integer(value.asScalarReal().get().intValue());
    } else if (vector instanceof RealSXP && value.asScalarInteger().isPresent()) {
      value = SEXPs.real(value.asScalarInteger().get().doubleValue());
    }

    // We must copy the vector because FIŘ mutates in-place.
    var result = vector.copy();
    interpreter.subscriptStore(result, realIndex, value);
    return result;
  }

  private static Value colon(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`:` takes 2 arguments");
    }

    // Get start argument as double
    double start;
    if (args.getFirst().asScalarInteger().isPresent()) {
      start = args.getFirst().asScalarInteger().get().doubleValue();
    } else if (args.getFirst().asScalarReal().isPresent()) {
      start = args.getFirst().asScalarReal().get();
    } else {
      throw interpreter.failUnsupported("Mock `:` requires numeric start argument");
    }

    // Get end argument as double
    double end;
    if (args.get(1).asScalarInteger().isPresent()) {
      end = args.get(1).asScalarInteger().get().doubleValue();
    } else if (args.get(1).asScalarReal().isPresent()) {
      end = args.get(1).asScalarReal().get();
    } else {
      throw interpreter.failUnsupported("Mock `:` requires numeric end argument");
    }

    // Check if first argument has no decimal. If so, the doubles are coerced
    boolean coerceToInteger = start == (int) start;

    if (start == end) {
      if (coerceToInteger) {
        return SEXPs.integer((int) start);
      } else {
        return SEXPs.real(start);
      }
    }

    var size = (int) (Math.abs(end - start) + 1);
    var result = new double[size];

    if (start < end) {
      for (int i = 0; i < size; i++) {
        result[i] = start + i;
      }
    } else {
      for (int i = 0; i < size; i++) {
        result[i] = start - i;
      }
    }

    if (coerceToInteger) {
      var intResult = new int[size];
      for (int i = 0; i < size; i++) {
        intResult[i] = (int) result[i];
      }
      return SEXPs.integer(intResult);
    } else {
      return SEXPs.real(result);
    }
  }

  private static Value c(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`c` takes 1 argument (a dots list)");
    }
    if (!(args.getFirst() instanceof DotsListSXP realArgs)) {
      throw interpreter.fail("`c` requires a `...` argument");
    }

    if (realArgs.isEmpty()) {
      return Value.NULL;
    }

    PrimitiveKind primitiveKind = null;
    for (var arg : realArgs) {
      if (arg.hasTag()) {
        throw interpreter.failUnsupported("Mock `c` doesn't support named arguments");
      }
      var argPrimitiveKind =
          switch (arg.value()) {
            case LglSXP _ -> PrimitiveKind.LOGICAL;
            case IntSXP _ -> PrimitiveKind.INTEGER;
            case RealSXP _ -> PrimitiveKind.REAL;
            case StrSXP _ -> PrimitiveKind.STRING;
            default ->
                throw interpreter.failUnsupported(
                    "Mock `c` doesn't support non-primitive arguments");
          };
      primitiveKind =
          primitiveKind != null && argPrimitiveKind.ordinal() < primitiveKind.ordinal()
              ? primitiveKind
              : argPrimitiveKind;
    }

    if (primitiveKind == null) {
      return Value.NULL;
    }

    return interpreter.mkVector(
        new Kind.PrimitiveVector(primitiveKind),
        Lists.mapLazy(
            realArgs.names(),
            name ->
                name.isEmpty()
                    ? OptionalNamedVariable.empty()
                    : OptionalNamedVariable.of(Variable.named(name))),
        realArgs.values());
  }

  private static Value length(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`length` takes 1 argument");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw interpreter.failUnsupported("Mock `length` requires a vector argument");
    }

    return SEXPs.integer(vector.size());
  }

  private static Value sum(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`sum` takes 2 arguments");
    }
    if (!(args.getFirst() instanceof DotsListSXP dots)) {
      throw interpreter.fail("`sum` first argument must be a dots list");
    }
    if (dots.size() != 1) {
      throw interpreter.fail("Mock `sum` dots must have exactly 1 value");
    }
    if (!args.get(1).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `sum` second argument (`na.rm`) must be unset");
    }
    var arg = dots.value(0);

    return switch (arg) {
      case IntSXP i -> {
        // Sum of integers
        int sum = 0;
        for (var value : i) {
          if (value == NA_INT) {
            yield SEXPs.integer(Constants.NA_INT);
          }
          sum += value;
        }
        yield SEXPs.integer(sum);
      }
      case RealSXP r -> {
        // Sum of reals
        double sum = 0.0;
        for (var value : r) {
          sum += value;
        }
        yield SEXPs.real(sum);
      }
      case LglSXP l -> {
        // Sum of logicals, treating TRUE as 1 and FALSE as 0
        int sum = 0;
        for (var value : l) {
          boolean breakWithNa = false;
          switch (value) {
            case TRUE -> sum++;
            case FALSE -> {}
            case NA -> breakWithNa = true;
          }
          if (breakWithNa) {
            yield SEXPs.integer(Constants.NA_INT);
          }
        }
        yield SEXPs.integer(sum);
      }
      default ->
          throw interpreter.failUnsupported("Mock `sum` requires an int, real, or logical vector");
    };
  }

  private static Value asLogical(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`as.logical` takes 1 argument");
    }

    var arg = args.getFirst();

    if (arg.asScalarInteger().isPresent()) {
      int intValue = arg.asScalarInteger().get();
      if (intValue == 0) {
        return SEXPs.logical(Logical.FALSE);
      } else if (intValue == NA_INT) {
        return SEXPs.logical(Logical.NA);
      } else {
        return SEXPs.logical(Logical.TRUE);
      }
    } else if (arg.asScalarReal().isPresent()) {
      double realValue = arg.asScalarReal().get();
      if (realValue == 0.0) {
        return SEXPs.logical(Logical.FALSE);
      } else if (Double.isNaN(realValue)) {
        return SEXPs.logical(Logical.NA);
      } else {
        return SEXPs.logical(Logical.TRUE);
      }
    } else if (arg.asScalarLogical().isPresent()) {
      return SEXPs.logical(arg.asScalarLogical().get());
    } else {
      throw interpreter.failUnsupported(
          "Mock `as.logical` not implemented for arguments except scalar integers, reals, and logicals");
    }
  }

  private static Value isObject(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    // Currently there's no object support, so this is always `FALSE`.
    return SEXPs.FALSE;
  }

  private static Value stop(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 3) {
      throw interpreter.fail("`stop` takes 3 arguments");
    }
    if (!(args.getFirst() instanceof DotsListSXP dots)) {
      throw interpreter.fail("`stop` first argument must be a dots list");
    }
    if (!args.get(1).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `stop` second argument (`call.`) must be unset");
    }
    if (!args.get(2).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `stop` third argument (`domain`) must be unset");
    }
    if (dots.size() != 1) {
      throw interpreter.fail("Mock `stop` dots must have exactly 1 value");
    }
    if (dots.value(0).asScalarString().isEmpty()) {
      throw interpreter.fail("Mock `stop` message must be a string");
    }

    var message = dots.value(0).asScalarString().get();
    throw interpreter.fail(message);
  }

  private static Value warning(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 5) {
      throw interpreter.fail("`warning` takes 5 arguments");
    }
    if (!(args.getFirst() instanceof DotsListSXP dots)) {
      throw interpreter.fail("`warning` first argument must be a dots list");
    }
    if (!args.get(1).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `warning` second argument (`call.`) must be unset");
    }
    if (!args.get(2).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `warning` third argument (`immediate.`) must be unset");
    }
    if (!args.get(3).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `warning` fourth argument (`noBreaks.`) must be unset");
    }
    if (!args.get(4).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `warning` fifth argument (`domain`) must be unset");
    }
    if (dots.size() != 1) {
      throw interpreter.fail("Mock `warning` dots must have exactly 1 value");
    }
    if (dots.value(0).asScalarString().isEmpty()) {
      throw interpreter.fail("Mock `warning` message must be a string");
    }

    var message = dots.value(0).asScalarString().get();
    System.err.println("Warning: " + message);
    return Value.NULL;
  }

  private static Value stopifnot(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 4) {
      throw interpreter.fail("`stopifnot` takes 4 arguments");
    }
    if (!(args.getFirst() instanceof DotsListSXP dots)) {
      throw interpreter.fail("`stopifnot` first argument must be a dots list");
    }
    if (!args.get(1).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `stopifnot` second argument (`exprs`) must be unset");
    }
    if (!args.get(2).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `stopifnot` third argument (`exprObject`) must be unset");
    }
    if (!args.get(3).equals(SEXPs.MISSING_ARG)) {
      throw interpreter.fail("Mock `stopifnot` fourth argument (`local`) must be unset");
    }
    if (dots.size() != 1 && dots.size() != 2) {
      throw interpreter.fail("Mock `stopifnot` dots must have 1 or 2 values");
    }
    if (dots.value(0).asScalarLogical().isEmpty()) {
      throw interpreter.fail("Mock `stopifnot` condition must be a logical");
    }
    if (dots.size() == 2 && dots.value(1).asScalarString().isEmpty()) {
      throw interpreter.fail("Mock `stopifnot` message must be a string");
    }

    var condition = dots.value(0).asScalarLogical().get();
    var message = dots.size() == 2 ? dots.value(1).asScalarString().get() : "stopifnot failed";

    if (condition != Logical.TRUE) {
      throw interpreter.fail(message);
    }

    return Value.NULL;
  }

  private static Value print(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 2) {
      throw interpreter.fail("`print` takes 2 arguments");
    }
    if (!(args.get(1) instanceof DotsListSXP dots)) {
      throw interpreter.fail("`print` second argument must be a dots list");
    }
    if (!dots.isEmpty()) {
      throw interpreter.fail("Mock `print` dots must be empty");
    }

    var toPrint = args.getFirst();
    System.out.println(toPrint);
    return Value.NULL;
  } */

  private static Value setInvisible(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (!args.isEmpty()) {
      throw interpreter.fail("`setInvisible` takes 0 arguments");
    }

    // The interpreter doesn't have visibility
    return Value.NULL;
  }

  private static Value setVisible(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (!args.isEmpty()) {
      throw interpreter.fail("`setVisible` takes 0 arguments");
    }

    // The interpreter doesn't have visibility
    return Value.NULL;
  }

  private static Value checkMissing(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`checkMissing` takes 1 argument");
    }
    if (args.getFirst().equals(new Value.Sexp(SEXPs.MISSING_ARG))) {
      throw interpreter.fail("Argument is missing, with no default");
    }
    return Value.NULL;
  }

  private static Value toForSeq(
      InternalInterpreter interpreter, Abstraction version, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`toForSeq` takes 1 argument");
    }

    if (!(args.getFirst() instanceof Value.Sexp(var sexp)
        && sexp instanceof ListOrVectorSXP<?> vector)) {
      throw interpreter.fail("`toForSeq` requires a vector argument");
    }

    // Simply return the vector as-is after validation
    return new Value.Sexp(vector);
  }

  private Builtins() {}
}
