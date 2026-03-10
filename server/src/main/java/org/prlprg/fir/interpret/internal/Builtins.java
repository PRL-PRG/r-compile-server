package org.prlprg.fir.interpret.internal;

import java.util.Arrays;
import java.util.List;
import java.util.function.DoubleBinaryOperator;
import java.util.function.DoubleUnaryOperator;
import java.util.function.Predicate;
import java.util.stream.IntStream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.RawSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.VecSXP;

/// Java implementations of GNU-R builtins for [InternalInterpreter] (specifically
/// [InternalInterpreter#registerExternal(String, ExternalVersion)]).
///
/// Note that these are only behaviorally equivalent to GNU-R implementations in some common
/// scenarios. They're not a complete substitute for GNU-R, but a way to test functions which
/// have issues when compiled to C, and a way to provide basic functionality to language-agnostic
/// IR code.
public final class Builtins {
  // region functional interfaces
  @FunctionalInterface
  private interface DoubleBinaryPredicate {
    boolean test(double a, double b);
  }

  @FunctionalInterface
  private interface LogicalBinaryOp {
    Logical apply(Logical a, Logical b);
  }

  // endregion

  /// Register all builtins and intrinsics that are implemented.
  public static void registerBuiltins(InternalInterpreter interpreter) {
    // Binary math operators, preserving int (versions 0-8)
    registerBinaryMathBuiltin(interpreter, "+", Double::sum);
    registerBinaryMathBuiltin(interpreter, "-", (a, b) -> a - b);
    registerBinaryMathBuiltin(interpreter, "*", (a, b) -> a * b);

    // Binary math operators, to real (versions 0-8)
    registerBinaryMathToRealBuiltin(interpreter, "/", (a, b) -> a / b);
    registerBinaryMathToRealBuiltin(interpreter, "^", Math::pow);

    // Unary +/- (versions 9-13)
    registerUnaryPlusMinusBuiltin(interpreter, "+", x -> x);
    registerUnaryPlusMinusBuiltin(interpreter, "-", x -> -x);

    // Comparison operators (versions 0-8)
    registerBinaryComparisonBuiltin(interpreter, "<", (a, b) -> a < b);
    registerBinaryComparisonBuiltin(interpreter, "<=", (a, b) -> a <= b);
    registerBinaryComparisonBuiltin(interpreter, ">", (a, b) -> a > b);
    registerBinaryComparisonBuiltin(interpreter, ">=", (a, b) -> a >= b);

    // Equality operators (versions 0-9)
    registerEqualityBuiltin(interpreter, "==", true);
    registerEqualityBuiltin(interpreter, "!=", false);

    // Logical operators (versions 0-2)
    registerBinaryLogicalBuiltin(interpreter, "&", Builtins::logicalAnd);
    registerBinaryLogicalBuiltin(interpreter, "|", Builtins::logicalOr);
    registerBinaryLogicalBuiltin(interpreter, "xor", Builtins::logicalXor);

    // Logical scalar operators (versions 0-2)
    registerBinaryScalarLogicalBuiltin(interpreter, "&&", Builtins::logicalAnd);
    registerBinaryScalarLogicalBuiltin(interpreter, "||", Builtins::logicalOr);

    // Logical not (versions 0-6)
    registerLogicalNot(interpreter);

    // Colon operator (versions 0-6)
    registerColon(interpreter);

    // Index operators (versions 0-8)
    registerIndex(interpreter, "[");
    registerIndex(interpreter, "[[");

    // Sub-assignment operators (versions 0-8)
    registerSubAssign(interpreter, "[<-", 4);
    registerSubAssign(interpreter, "[[<-", 3);

    // Dollar access (versions 0-1)
    registerDollar(interpreter);
    registerDollarAssign(interpreter);

    // rep (versions 0-8)
    registerRep(interpreter);

    // sum (versions 0-3)
    registerSum(interpreter);

    // Unary math1, preserving int (versions 0-4)
    registerAbsBuiltin(interpreter);

    // Unary math1, to real (versions 0-4)
    registerUnaryMath1ToRealBuiltin(interpreter, "sqrt", Math::sqrt);
    registerUnaryMath1ToRealBuiltin(interpreter, "exp", Math::exp);
    registerUnaryMath1ToRealBuiltin(interpreter, "floor", Math::floor);
    registerUnaryMath1ToRealBuiltin(interpreter, "ceiling", Math::ceil);
    registerUnaryMath1ToRealBuiltin(interpreter, "sign", Math::signum);
    registerUnaryMath1ToRealBuiltin(interpreter, "expm1", Math::expm1);
    registerUnaryMath1ToRealBuiltin(interpreter, "log1p", Math::log1p);
    registerUnaryMath1ToRealBuiltin(interpreter, "cos", Math::cos);
    registerUnaryMath1ToRealBuiltin(interpreter, "sin", Math::sin);
    registerUnaryMath1ToRealBuiltin(interpreter, "tan", Math::tan);
    registerUnaryMath1ToRealBuiltin(interpreter, "acos", Math::acos);
    registerUnaryMath1ToRealBuiltin(interpreter, "asin", Math::asin);
    registerUnaryMath1ToRealBuiltin(interpreter, "atan", Math::atan);
    registerUnaryMath1ToRealBuiltin(interpreter, "cosh", Math::cosh);
    registerUnaryMath1ToRealBuiltin(interpreter, "sinh", Math::sinh);
    registerUnaryMath1ToRealBuiltin(interpreter, "tanh", Math::tanh);
    registerUnaryMath1ToRealBuiltin(interpreter, "acosh", x -> Math.log(x + Math.sqrt(x * x - 1)));
    registerUnaryMath1ToRealBuiltin(interpreter, "asinh", x -> Math.log(x + Math.sqrt(x * x + 1)));
    registerUnaryMath1ToRealBuiltin(interpreter, "atanh", x -> 0.5 * Math.log((1 + x) / (1 - x)));
    registerUnaryMath1ToRealBuiltin(interpreter, "lgamma", x -> Math.log(Math.abs(gamma(x))));
    registerUnaryMath1ToRealBuiltin(interpreter, "gamma", Builtins::gamma);
    registerUnaryMath1ToRealBuiltin(interpreter, "digamma", Builtins::digamma);
    registerUnaryMath1ToRealBuiltin(interpreter, "trigamma", Builtins::trigamma);
    registerUnaryMath1ToRealBuiltin(interpreter, "cospi", x -> Math.cos(x * Math.PI));
    registerUnaryMath1ToRealBuiltin(interpreter, "sinpi", x -> Math.sin(x * Math.PI));
    registerUnaryMath1ToRealBuiltin(interpreter, "tanpi", x -> Math.tan(x * Math.PI));

    // log (versions 0-4)
    registerLog(interpreter);

    // length (versions 0-1)
    registerLength(interpreter);

    // seq_along (versions 0-1), seq_len (versions 0-2)
    registerSeqAlong(interpreter);
    registerSeqLen(interpreter);

    // Type conversion (versions 0-1)
    registerAsInteger(interpreter);
    registerAsLogical(interpreter);
    registerAsCharacter(interpreter);

    // missing (versions 0-1)
    registerMissing(interpreter);

    // Error handling (version 0 only)
    registerStop(interpreter);
    registerWarning(interpreter);
    registerStopifnot(interpreter);

    // print (versions 0-4)
    registerPrint(interpreter);

    // unclass (versions 0-1)
    registerUnclass(interpreter);

    // Type checking (versions 0-1)
    registerIsTypeBuiltin(
        interpreter,
        "is.vector",
        sexp ->
            (sexp instanceof LglSXP
                    || sexp instanceof IntSXP
                    || sexp instanceof RealSXP
                    || sexp instanceof StrSXP)
                && !sexp.hasAttributes(),
        true);
    registerIsTypeBuiltin(
        interpreter,
        "is.numeric",
        sexp -> sexp instanceof IntSXP || sexp instanceof RealSXP,
        false);
    registerIsTypeBuiltin(interpreter, "is.integer", sexp -> sexp instanceof IntSXP, false);
    registerIsTypeBuiltin(interpreter, "is.double", sexp -> sexp instanceof RealSXP, false);
    registerIsTypeBuiltin(interpreter, "is.logical", sexp -> sexp instanceof LglSXP, false);
    registerIsTypeBuiltin(interpreter, "is.complex", sexp -> sexp instanceof ComplexSXP, false);
    registerIsTypeBuiltin(interpreter, "is.raw", sexp -> sexp instanceof RawSXP, false);
    registerIsTypeBuiltin(
        interpreter,
        "is.function",
        sexp -> sexp instanceof CloSXP || sexp instanceof BuiltinOrSpecialSXP,
        false);
    registerIsTypeBuiltin(interpreter, "is.environment", sexp -> sexp instanceof EnvSXP, false);
    registerIsTypeBuiltin(interpreter, "is.list", sexp -> sexp instanceof VecSXP, false);
    registerIsTypeBuiltin(interpreter, "is.character", sexp -> sexp instanceof StrSXP, false);
    registerIsTypeBuiltin(interpreter, "is.object", _ -> false, false);
    registerIsTypeBuiltin(interpreter, "is.symbol", sexp -> sexp instanceof SymSXP, false);

    // inherits (versions 0-1)
    registerInherits(interpreter);

    // attr (versions 0-1)
    registerAttr(interpreter);

    // c (version 0)
    registerC(interpreter);

    // Intrinsics
    interpreter.registerExternal("setInvisible", 0, Builtins::setInvisible);
    interpreter.registerExternal("setVisible", 0, Builtins::setVisible);
    interpreter.registerExternal("checkMissing", 0, Builtins::checkMissing);
    interpreter.registerExternal("toForSeq", 0, Builtins::toForSeq);
  }

  // region binary math builtins (versions 0-8)

  private static void registerBinaryMathBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryOperator fn) {
    // v0: (*, *) -+> V  (generic SEXP)
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp-scalar numbers");
              }
              if (s1.asScalarInteger().isPresent() && s2.asScalarInteger().isPresent()) {
                return new Value.Sexp(
                    SEXPs.integer(
                        (int)
                            fn.applyAsDouble(
                                s1.asScalarInteger().get(), s2.asScalarInteger().get())));
              } else if (s1.asScalarReal().isPresent() && s2.asScalarReal().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(fn.applyAsDouble(s1.asScalarReal().get(), s2.asScalarReal().get())));
              } else if (s1.asScalarInteger().isPresent() && s2.asScalarReal().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        fn.applyAsDouble(s1.asScalarInteger().get(), s2.asScalarReal().get())));
              } else if (s1.asScalarReal().isPresent() && s2.asScalarInteger().isPresent()) {
                return new Value.Sexp(
                    SEXPs.real(
                        fn.applyAsDouble(s1.asScalarReal().get(), s2.asScalarInteger().get())));
              }
              throw interpreter.fail("`" + name + "`.0 takes 2 scalar integers or reals");
            }));
    // v1: (I, I) --> I
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Int((int) fn.applyAsDouble(a, b));
            }));
    // v2: (R, R) --> R
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v3: (I, R) --> R
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v4: (R, I) --> R
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v5: (v(I), v(I)) --> v(I)
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.integer(
                      IntStream.range(0, Math.max(i1.size(), i2.size()))
                          .map(
                              i ->
                                  (int)
                                      fn.applyAsDouble(
                                          i1.get(i % i1.size()), i2.get(i % i2.size())))
                          .toArray()));
            }));
    // v6: (v(R), v(R)) --> v(R)
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(r1.size(), r2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(r1.get(i % r1.size()), r2.get(i % r2.size())))
                          .toArray()));
            }));
    // v7: (v(I), v(R)) --> v(R)
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(i1.size(), r2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(i1.get(i % i1.size()), r2.get(i % r2.size())))
                          .toArray()));
            }));
    // v8: (v(R), v(I)) --> v(R)
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(r1.size(), i2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(r1.get(i % r1.size()), i2.get(i % i2.size())))
                          .toArray()));
            }));
  }

  private static void registerBinaryMathToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryOperator fn) {
    // v0: (*, *) -+> V  (generic SEXP, always returns real)
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp-scalar numbers");
              }
              double a = sexpToDouble(s1, interpreter, name + ".0");
              double b = sexpToDouble(s2, interpreter, name + ".0");
              return new Value.Sexp(SEXPs.real(fn.applyAsDouble(a, b)));
            }));
    // v1: (I, I) --> R
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v2: (R, R) --> R
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v3: (I, R) --> R
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v4: (R, I) --> R
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // v5-v8: vector versions, all return v(R)
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(i1.size(), i2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(i1.get(i % i1.size()), i2.get(i % i2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(r1.size(), r2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(r1.get(i % r1.size()), r2.get(i % r2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(i1.size(), r2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(i1.get(i % i1.size()), r2.get(i % r2.size())))
                          .toArray()));
            }));
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, Math.max(r1.size(), i2.size()))
                          .mapToDouble(
                              i -> fn.applyAsDouble(r1.get(i % r1.size()), i2.get(i % i2.size())))
                          .toArray()));
            }));
  }

  // endregion

  // region unary +/- (versions 9-13)

  private static void registerUnaryPlusMinusBuiltin(
      InternalInterpreter interpreter, String name, DoubleUnaryOperator fn) {
    // v9: (*, miss) -+> V
    interpreter.registerExternal(
        name,
        9,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`" + name + "`.9 takes 1 sexp-scalar number + miss");
              }
              if (sexp.asScalarInteger().isPresent()) {
                return new Value.Sexp(
                    SEXPs.integer((int) fn.applyAsDouble(sexp.asScalarInteger().get())));
              } else if (sexp.asScalarReal().isPresent()) {
                return new Value.Sexp(SEXPs.real(fn.applyAsDouble(sexp.asScalarReal().get())));
              }
              throw interpreter.fail("`" + name + "`.9 takes a scalar integer or real");
            }));
    // v10: (I, miss) --> I
    interpreter.registerExternal(
        name,
        10,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              return new Value.Int((int) fn.applyAsDouble(a));
            }));
    // v11: (R, miss) --> R
    interpreter.registerExternal(
        name,
        11,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              return new Value.Real(fn.applyAsDouble(a));
            }));
    // v12: (v(I), miss) --> v(I)
    interpreter.registerExternal(
        name,
        12,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.integer(
                      IntStream.range(0, vec.size())
                          .map(i -> (int) fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
    // v13: (v(R), miss) --> v(R)
    interpreter.registerExternal(
        name,
        13,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
  }

  // endregion

  // region comparison builtins (versions 0-8)

  private static void registerBinaryComparisonBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryPredicate pred) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp-scalar numbers");
              }
              double a = sexpToDouble(s1, interpreter, name + ".0");
              double b = sexpToDouble(s2, interpreter, name + ".0");
              return new Value.Sexp(SEXPs.logical(pred.test(a, b)));
            }));
    // v1: (I, I) --> L
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // v2: (R, R) --> L
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // v3: (I, R) --> L
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // v4: (R, I) --> L
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // v5: (v(I), v(I)) --> v(L)
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(i1.size(), i2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                res[i] =
                    pred.test(i1.get(i % i1.size()), i2.get(i % i2.size()))
                        ? Logical.TRUE
                        : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v6: (v(R), v(R)) --> v(L)
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(r1.size(), r2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                res[i] =
                    pred.test(r1.get(i % r1.size()), r2.get(i % r2.size()))
                        ? Logical.TRUE
                        : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v7: (v(I), v(R)) --> v(L)
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(i1.size(), r2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                res[i] =
                    pred.test(i1.get(i % i1.size()), r2.get(i % r2.size()))
                        ? Logical.TRUE
                        : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v8: (v(R), v(I)) --> v(L)
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(r1.size(), i2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                res[i] =
                    pred.test(r1.get(i % r1.size()), i2.get(i % i2.size()))
                        ? Logical.TRUE
                        : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
  }

  // endregion

  // region equality builtins (versions 0-9)

  private static void registerEqualityBuiltin(
      InternalInterpreter interpreter, String name, boolean isEqual) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexp args");
              }
              // Try closure identity comparison first
              if (s1 instanceof CloSXP && s2 instanceof CloSXP) {
                boolean eq = s1 == s2;
                return new Value.Sexp(SEXPs.logical(isEqual == eq));
              }
              // Try numeric comparison
              var d1 = sexpToDoubleOpt(s1);
              var d2 = sexpToDoubleOpt(s2);
              if (d1 != null && d2 != null) {
                boolean eq = d1.equals(d2);
                return new Value.Sexp(SEXPs.logical(isEqual == eq));
              }
              // Try string comparison
              if (s1.asScalarString().isPresent() && s2.asScalarString().isPresent()) {
                boolean eq = s1.asScalarString().get().equals(s2.asScalarString().get());
                return new Value.Sexp(SEXPs.logical(isEqual == eq));
              }
              throw interpreter.failUnsupported(
                  "Mock `" + name + "` not implemented for these argument types");
            }));
    // v1: (L, L) --> L
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Lgl) args.getFirst()).value();
              var b = ((Value.Lgl) args.get(1)).value();
              if (a == Logical.NA || b == Logical.NA) return new Value.Lgl(Logical.NA);
              boolean eq = a == b;
              return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
            }));
    // v2: (I, I) --> L
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              boolean eq = a == b;
              return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
            }));
    // v3: (R, R) --> L
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              boolean eq = a == b;
              return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
            }));
    // v4: (S, S) --> L
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Str) args.getFirst()).value();
              var b = ((Value.Str) args.get(1)).value();
              boolean eq = a.equals(b);
              return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
            }));
    // v5: (v(L), v(L)) --> v(L)
    interpreter.registerExternal(
        name,
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var l1 = (LglSXP) ((Value.Sexp) args.getFirst()).value();
              var l2 = (LglSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(l1.size(), l2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                var a = l1.get(i % l1.size());
                var b = l2.get(i % l2.size());
                if (a == Logical.NA || b == Logical.NA) {
                  res[i] = Logical.NA;
                } else {
                  boolean eq = a == b;
                  res[i] = isEqual == eq ? Logical.TRUE : Logical.FALSE;
                }
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v6: (v(I), v(I)) --> v(L)
    interpreter.registerExternal(
        name,
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var i1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var i2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(i1.size(), i2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                boolean eq = i1.get(i % i1.size()).equals(i2.get(i % i2.size()));
                res[i] = isEqual == eq ? Logical.TRUE : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v7: (v(R), v(R)) --> v(L)
    interpreter.registerExternal(
        name,
        7,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var r1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var r2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(r1.size(), r2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                boolean eq = r1.get(i % r1.size()).equals(r2.get(i % r2.size()));
                res[i] = isEqual == eq ? Logical.TRUE : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v8: (v(S), v(S)) --> v(L)
    interpreter.registerExternal(
        name,
        8,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var s1 = (StrSXP) ((Value.Sexp) args.getFirst()).value();
              var s2 = (StrSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(s1.size(), s2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                boolean eq = s1.get(i % s1.size()).equals(s2.get(i % s2.size()));
                res[i] = isEqual == eq ? Logical.TRUE : Logical.FALSE;
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v9: (cls, cls) --> L  (closure identity comparison)
    interpreter.registerExternal(
        name,
        9,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var c1 = (CloSXP) ((Value.Sexp) args.getFirst()).value();
              var c2 = (CloSXP) ((Value.Sexp) args.get(1)).value();
              boolean eq = c1 == c2;
              return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
            }));
  }

  // endregion

  // region logical builtins (versions 0-2)

  private static void registerBinaryLogicalBuiltin(
      InternalInterpreter interpreter, String name, LogicalBinaryOp op) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexps");
              }
              if ((s1 instanceof ListOrVectorSXP<?> l1 && l1.size() != 1)
                  || (s2 instanceof ListOrVectorSXP<?> l2 && l2.size() != 1)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-sexp-scalars");
              }
              var a = sexpToLogical(s1, interpreter, name);
              var b = sexpToLogical(s2, interpreter, name);
              return new Value.Sexp(SEXPs.logical(op.apply(a, b)));
            }));
    // v1: (L, L) --> L
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Lgl) args.getFirst()).value();
              var b = ((Value.Lgl) args.get(1)).value();
              return new Value.Lgl(op.apply(a, b));
            }));
    // v2: (v(L), v(L)) --> v(L)
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var l1 = (LglSXP) ((Value.Sexp) args.getFirst()).value();
              var l2 = (LglSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(l1.size(), l2.size());
              var res = new Logical[len];
              for (int i = 0; i < len; i++) {
                res[i] = op.apply(l1.get(i % l1.size()), l2.get(i % l2.size()));
              }
              return new Value.Sexp(SEXPs.logical(res));
            }));
  }

  private static void registerBinaryScalarLogicalBuiltin(
      InternalInterpreter interpreter, String name, LogicalBinaryOp op) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "`.0 takes 2 sexps");
              }
              if ((s1 instanceof ListOrVectorSXP<?> l1 && l1.size() != 1)
                  || (s2 instanceof ListOrVectorSXP<?> l2 && l2.size() != 1)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-sexp-scalars");
              }
              var a = sexpToLogical(s1, interpreter, name);
              var b = sexpToLogical(s2, interpreter, name);
              return new Value.Sexp(SEXPs.logical(op.apply(a, b)));
            }));
    // v1: (L, L) --> L
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Lgl) args.getFirst()).value();
              var b = ((Value.Lgl) args.get(1)).value();
              return new Value.Lgl(op.apply(a, b));
            }));
    // v2: (v(L), v(L)) --> v(L)
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var l1 = (LglSXP) ((Value.Sexp) args.getFirst()).value();
              var l2 = (LglSXP) ((Value.Sexp) args.get(1)).value();
              if (l1.size() != 1 || l2.size() != 1) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-sexp-scalars");
              }
              return new Value.Lgl(op.apply(l1.get(0), l2.get(0)));
            }));
  }

  private static void registerLogicalNot(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "!",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`!`.0 takes 1 sexp-scalar");
              }
              var l = sexpToLogical(sexp, interpreter, "!");
              return new Value.Sexp(SEXPs.logical(logicalNot(l)));
            }));
    // v1: (L) --> L
    interpreter.registerExternal(
        "!",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Lgl) args.getFirst()).value();
              return new Value.Lgl(logicalNot(a));
            }));
    // v2: (I) --> L
    interpreter.registerExternal(
        "!",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              return new Value.Lgl(intToLogicalNot(a));
            }));
    // v3: (R) --> L
    interpreter.registerExternal(
        "!",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              return new Value.Lgl(realToLogicalNot(a));
            }));
    // v4: (v(L)) --> v(L)
    interpreter.registerExternal(
        "!",
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (LglSXP) ((Value.Sexp) args.getFirst()).value();
              var res = new Logical[vec.size()];
              for (int i = 0; i < vec.size(); i++) res[i] = logicalNot(vec.get(i));
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v5: (v(I)) --> v(L)
    interpreter.registerExternal(
        "!",
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var res = new Logical[vec.size()];
              for (int i = 0; i < vec.size(); i++) res[i] = intToLogicalNot(vec.get(i));
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v6: (v(R)) --> v(L)
    interpreter.registerExternal(
        "!",
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var res = new Logical[vec.size()];
              for (int i = 0; i < vec.size(); i++) res[i] = realToLogicalNot(vec.get(i));
              return new Value.Sexp(SEXPs.logical(res));
            }));
  }

  // endregion

  // region colon operator (versions 0-6)

  private static void registerColon(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        ":",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`:`.0 takes 2 sexp-scalar numbers");
              }
              double start = sexpToDouble(s1, interpreter, ":");
              double end = sexpToDouble(s2, interpreter, ":");
              return new Value.Sexp(colonSeq(start, end));
            }));
    // v1: (I, I) --> v(I)
    interpreter.registerExternal(
        ":",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int start = ((Value.Int) args.getFirst()).value();
              int end = ((Value.Int) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // v2: (I, R) --> v(I)
    interpreter.registerExternal(
        ":",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int start = ((Value.Int) args.getFirst()).value();
              double end = ((Value.Real) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // v3: (R, R) --> V
    interpreter.registerExternal(
        ":",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double start = ((Value.Real) args.getFirst()).value();
              double end = ((Value.Real) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // v4: (v(I), v(I)) --> v(I)  (use first elements)
    interpreter.registerExternal(
        ":",
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var v2 = (IntSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(colonSeq(v1.get(0), v2.get(0)));
            }));
    // v5: (v(I), v(R)) --> v(I)
    interpreter.registerExternal(
        ":",
        5,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var v2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(colonSeq(v1.get(0), v2.get(0)));
            }));
    // v6: (v(R), v(R)) --> V
    interpreter.registerExternal(
        ":",
        6,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var v2 = (RealSXP) ((Value.Sexp) args.get(1)).value();
              return new Value.Sexp(colonSeq(v1.get(0), v2.get(0)));
            }));
  }

  private static SEXP colonSeq(double start, double end) {
    boolean coerceToInt = start == (int) start;
    int size = (int) (Math.abs(end - start) + 1);
    int step = start <= end ? 1 : -1;
    if (coerceToInt) {
      int[] result = new int[size];
      for (int i = 0; i < size; i++) result[i] = (int) start + i * step;
      return SEXPs.integer(result);
    } else {
      double[] result = new double[size];
      for (int i = 0; i < size; i++) result[i] = start + i * step;
      return SEXPs.real(result);
    }
  }

  // endregion

  // region index operators (versions 0-8)

  private static void registerIndex(InternalInterpreter interpreter, String name) {
    // v0: generic
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 4) {
                throw interpreter.fail("`" + name + "`.0 takes 4 arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof ListOrVectorSXP<?> vector)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-vector objects");
              }
              int idx = sexpToInt(((Value.Sexp) args.get(1)).value(), interpreter, name);
              return interpreter.subscriptLoad(vector, idx - 1);
            }));
    // v1-v4: scalar index (v(T), I, miss...) --> T
    for (int v = 1; v <= 4; v++) {
      interpreter.registerExternal(
          name,
          v,
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) ((Value.Sexp) args.getFirst()).value();
                int idx = ((Value.Int) args.get(1)).value();
                return interpreter.subscriptLoad(vector, idx - 1);
              }));
    }
    // v5-v8: vector index (v(T), v(I), miss...) --> v(T)
    for (int v = 5; v <= 8; v++) {
      interpreter.registerExternal(
          name,
          v,
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) ((Value.Sexp) args.getFirst()).value();
                var indices = (IntSXP) ((Value.Sexp) args.get(1)).value();
                // For vector indexing, build result by loading each index
                // For now, use subscriptLoad for each element
                if (indices.size() == 1) {
                  return interpreter.subscriptLoad(vector, indices.get(0) - 1);
                }
                // For multiple indices, build a result
                var results = new SEXP[indices.size()];
                for (int i = 0; i < indices.size(); i++) {
                  var loaded = interpreter.subscriptLoad(vector, indices.get(i) - 1);
                  results[i] = valueToSexp(loaded);
                }
                return new Value.Sexp(buildVector(results, vector));
              }));
    }
  }

  // endregion

  // region sub-assignment operators (versions 0-8)

  private static void registerSubAssign(InternalInterpreter interpreter, String name, int numArgs) {
    // v0: generic
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != numArgs) {
                throw interpreter.fail("`" + name + "`.0 takes " + numArgs + " arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof ListOrVectorSXP<?> vector)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-vector objects");
              }
              int idx = sexpToInt(((Value.Sexp) args.get(1)).value(), interpreter, name);
              var value = args.get(2);
              var result = vector.copy();
              interpreter.subscriptStore(result, idx - 1, value);
              return new Value.Sexp(result);
            }));
    // v1-v4: scalar sub-assign (v(T), I, T, miss?) --> v(T)
    for (int v = 1; v <= 4; v++) {
      interpreter.registerExternal(
          name,
          v,
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) ((Value.Sexp) args.getFirst()).value();
                int idx = ((Value.Int) args.get(1)).value();
                var value = args.get(2);
                var result = vector.copy();
                interpreter.subscriptStore(result, idx - 1, value);
                return new Value.Sexp(result);
              }));
    }
    // v5-v8: vector sub-assign (v(T), v(I), v(T), miss?) --> v(T)
    for (int v = 5; v <= 8; v++) {
      interpreter.registerExternal(
          name,
          v,
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) ((Value.Sexp) args.getFirst()).value();
                var indices = (IntSXP) ((Value.Sexp) args.get(1)).value();
                var values = args.get(2);
                var result = vector.copy();
                if (values instanceof Value.Sexp(var valuesSexp)
                    && valuesSexp instanceof ListOrVectorSXP<?> valuesVec) {
                  for (int i = 0; i < indices.size(); i++) {
                    interpreter.subscriptStore(
                        result, indices.get(i) - 1, interpreter.subscriptLoad(valuesVec, i));
                  }
                } else {
                  // Single value assigned to multiple indices
                  for (int i = 0; i < indices.size(); i++) {
                    interpreter.subscriptStore(result, indices.get(i) - 1, values);
                  }
                }
                return new Value.Sexp(result);
              }));
    }
  }

  // endregion

  // region dollar access (versions 0-1)

  private static void registerDollar(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        "$",
        0,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$` not yet fully implemented");
            }));
    // v1: (V, V) --> V
    interpreter.registerExternal(
        "$",
        1,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$` not yet fully implemented");
            }));
  }

  private static void registerDollarAssign(InternalInterpreter interpreter) {
    // v0: (*, *, *) -+> V
    interpreter.registerExternal(
        "$<-",
        0,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$<-` not yet fully implemented");
            }));
    // v1: (V, V, V) --> V
    interpreter.registerExternal(
        "$<-",
        1,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$<-` not yet fully implemented");
            }));
  }

  // endregion

  // region rep (versions 0-8)

  private static void registerRep(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> V
    interpreter.registerExternal(
        "rep",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) {
                throw interpreter.fail("`rep`.0 takes 2 arguments");
              }
              var value = args.getFirst();
              int times;
              if (args.get(1) instanceof Value.Sexp(var sexp) && sexp instanceof DotsListSXP dots) {
                if (dots.size() != 1) {
                  throw interpreter.fail("Mock `rep` dots must have exactly 1 value");
                }
                times = sexpToInt(dots.get(0).value(), interpreter, "rep");
              } else {
                throw interpreter.fail("`rep`.0 second argument must be dots");
              }
              if (!(value instanceof Value.Sexp(var valueSexp))) {
                throw interpreter.fail("`rep`.0 first argument must be an SEXP");
              }
              return new Value.Sexp(repScalarSexp(valueSexp, times, interpreter));
            }));
    // v1: (L, I) --> v(L)
    interpreter.registerExternal(
        "rep",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var val = ((Value.Lgl) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new Logical[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // v2: (I, I) --> v(I)
    interpreter.registerExternal(
        "rep",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int val = ((Value.Int) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new int[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.integer(res));
            }));
    // v3: (R, I) --> v(R)
    interpreter.registerExternal(
        "rep",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double val = ((Value.Real) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new double[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.real(res));
            }));
    // v4: (S, I) --> v(S)
    interpreter.registerExternal(
        "rep",
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var val = ((Value.Str) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new String[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.string(res));
            }));
    // v5-v8: (v(T), v(I)) --> v(T) - each element repeated by corresponding times value
    registerRepVector(interpreter, 5);
    registerRepVector(interpreter, 6);
    registerRepVector(interpreter, 7);
    registerRepVector(interpreter, 8);
  }

  private static void registerRepVector(InternalInterpreter interpreter, int version) {
    interpreter.registerExternal(
        "rep",
        version,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vector = (ListOrVectorSXP<?>) ((Value.Sexp) args.getFirst()).value();
              var timesVec = (IntSXP) ((Value.Sexp) args.get(1)).value();
              // If timesVec is scalar, repeat whole vector that many times
              if (timesVec.size() == 1) {
                int times = timesVec.get(0);
                return new Value.Sexp(repVector(vector, times));
              }
              // Otherwise, repeat each element by corresponding times
              return new Value.Sexp(repVectorEach(vector, timesVec, interpreter));
            }));
  }

  private static SEXP repScalarSexp(SEXP value, int times, InternalInterpreter interpreter) {
    if (value.asScalarInteger().isPresent()) {
      var res = new int[times];
      Arrays.fill(res, value.asScalarInteger().get());
      return SEXPs.integer(res);
    } else if (value.asScalarReal().isPresent()) {
      var res = new double[times];
      Arrays.fill(res, value.asScalarReal().get());
      return SEXPs.real(res);
    } else if (value.asScalarLogical().isPresent()) {
      var res = new Logical[times];
      Arrays.fill(res, value.asScalarLogical().get());
      return SEXPs.logical(res);
    } else if (value.asScalarString().isPresent()) {
      var res = new String[times];
      Arrays.fill(res, value.asScalarString().get());
      return SEXPs.string(res);
    }
    throw interpreter.failUnsupported("Mock `rep` not implemented for this value type");
  }

  private static SEXP repVector(ListOrVectorSXP<?> vector, int times) {
    switch (vector) {
      case IntSXP intVec -> {
        var res = new int[intVec.size() * times];
        for (int t = 0; t < times; t++)
          for (int i = 0; i < intVec.size(); i++) res[t * intVec.size() + i] = intVec.get(i);
        return SEXPs.integer(res);
      }
      case RealSXP realVec -> {
        var res = new double[realVec.size() * times];
        for (int t = 0; t < times; t++)
          for (int i = 0; i < realVec.size(); i++) res[t * realVec.size() + i] = realVec.get(i);
        return SEXPs.real(res);
      }
      case LglSXP lglVec -> {
        var res = new Logical[lglVec.size() * times];
        for (int t = 0; t < times; t++)
          for (int i = 0; i < lglVec.size(); i++) res[t * lglVec.size() + i] = lglVec.get(i);
        return SEXPs.logical(res);
      }
      case StrSXP strVec -> {
        var res = new String[strVec.size() * times];
        for (int t = 0; t < times; t++)
          for (int i = 0; i < strVec.size(); i++) res[t * strVec.size() + i] = strVec.get(i);
        return SEXPs.string(res);
      }
      default ->
          throw new UnsupportedOperationException("rep not implemented for vector type: " + vector);
    }
  }

  private static SEXP repVectorEach(
      ListOrVectorSXP<?> vector, IntSXP timesVec, InternalInterpreter interpreter) {
    int totalSize = 0;
    for (int i = 0; i < timesVec.size(); i++) totalSize += timesVec.get(i);

    switch (vector) {
      case IntSXP intVec -> {
        var res = new int[totalSize];
        int idx = 0;
        for (int i = 0; i < intVec.size(); i++)
          for (int t = 0; t < timesVec.get(i % timesVec.size()); t++) res[idx++] = intVec.get(i);
        return SEXPs.integer(res);
      }
      case RealSXP realVec -> {
        var res = new double[totalSize];
        int idx = 0;
        for (int i = 0; i < realVec.size(); i++)
          for (int t = 0; t < timesVec.get(i % timesVec.size()); t++) res[idx++] = realVec.get(i);
        return SEXPs.real(res);
      }
      case LglSXP lglVec -> {
        var res = new Logical[totalSize];
        int idx = 0;
        for (int i = 0; i < lglVec.size(); i++)
          for (int t = 0; t < timesVec.get(i % timesVec.size()); t++) res[idx++] = lglVec.get(i);
        return SEXPs.logical(res);
      }
      case StrSXP strVec -> {
        var res = new String[totalSize];
        int idx = 0;
        for (int i = 0; i < strVec.size(); i++)
          for (int t = 0; t < timesVec.get(i % timesVec.size()); t++) res[idx++] = strVec.get(i);
        return SEXPs.string(res);
      }
      default -> throw interpreter.failUnsupported("rep not implemented for this vector type");
    }
  }

  // endregion

  // region sum (versions 0-3)

  private static void registerSum(InternalInterpreter interpreter) {
    // v0: (dots, *) -+> V
    interpreter.registerExternal(
        "sum",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) {
                throw interpreter.fail("`sum`.0 takes 2 arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`sum`.0 first argument must be dots");
              }
              if (dots.size() != 1) {
                throw interpreter.fail("Mock `sum` dots must have exactly 1 value");
              }
              var arg = dots.get(0).value();
              return new Value.Sexp(sumSexp(arg, interpreter));
            }));
    // v1: (v(L), miss) --> I
    interpreter.registerExternal(
        "sum",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (LglSXP) ((Value.Sexp) args.getFirst()).value();
              int sum = 0;
              for (var v : vec) {
                if (v == Logical.NA) return new Value.Int(Constants.NA_INT);
                if (v == Logical.TRUE) sum++;
              }
              return new Value.Int(sum);
            }));
    // v2: (v(I), miss) --> I
    interpreter.registerExternal(
        "sum",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              int sum = 0;
              for (var v : vec) {
                if (v == Constants.NA_INT) return new Value.Int(Constants.NA_INT);
                sum += v;
              }
              return new Value.Int(sum);
            }));
    // v3: (v(R), miss) --> R
    interpreter.registerExternal(
        "sum",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              double sum = 0.0;
              for (var v : vec) sum += v;
              return new Value.Real(sum);
            }));
  }

  private static SEXP sumSexp(SEXP arg, InternalInterpreter interpreter) {
    return switch (arg) {
      case IntSXP i -> {
        int sum = 0;
        for (var v : i) {
          if (v == Constants.NA_INT) yield SEXPs.integer(Constants.NA_INT);
          sum += v;
        }
        yield SEXPs.integer(sum);
      }
      case RealSXP r -> {
        double sum = 0.0;
        for (var v : r) sum += v;
        yield SEXPs.real(sum);
      }
      case LglSXP l -> {
        int sum = 0;
        for (var v : l) {
          if (v == Logical.NA) yield SEXPs.integer(Constants.NA_INT);
          if (v == Logical.TRUE) sum++;
        }
        yield SEXPs.integer(sum);
      }
      default ->
          throw interpreter.failUnsupported("Mock `sum` requires an int, real, or logical vector");
    };
  }

  // endregion

  // region unary math builtins (versions 0-4)

  private static void registerAbsBuiltin(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "abs",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`" + "abs" + "`.0 takes 1 sexp-scalar number");
              }
              if (sexp.asScalarInteger().isPresent()) {
                return new Value.Sexp(SEXPs.integer(Math.abs(sexp.asScalarInteger().get())));
              } else if (sexp.asScalarReal().isPresent()) {
                return new Value.Sexp(SEXPs.real(Math.abs(sexp.asScalarReal().get())));
              }
              throw interpreter.fail("`" + "abs" + "`.0 takes 1 scalar integer or real");
            }));
    // v1: (I) --> I
    interpreter.registerExternal(
        "abs",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Int(Math.abs(((Value.Int) args.getFirst()).value()))));
    // v2: (R) --> R
    interpreter.registerExternal(
        "abs",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Real(Math.abs(((Value.Real) args.getFirst()).value()))));
    // v3: (v(I)) --> v(I)
    interpreter.registerExternal(
        "abs",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.integer(
                      IntStream.range(0, vec.size()).map(i -> Math.abs(vec.get(i))).toArray()));
            }));
    // v4: (v(R)) --> v(R)
    interpreter.registerExternal(
        "abs",
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> Math.abs(vec.get(i)))
                          .toArray()));
            }));
  }

  private static void registerUnaryMath1ToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleUnaryOperator fn) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`" + name + "`.0 takes 1 sexp-scalar number");
              }
              double d = sexpToDouble(sexp, interpreter, name + ".0");
              return new Value.Sexp(SEXPs.real(fn.applyAsDouble(d)));
            }));
    // v1: (I) --> R
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(fn.applyAsDouble(((Value.Int) args.getFirst()).value()))));
    // v2: (R) --> R
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(fn.applyAsDouble(((Value.Real) args.getFirst()).value()))));
    // v3: (v(I)) --> v(R)
    interpreter.registerExternal(
        name,
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
    // v4: (v(R)) --> v(R)
    interpreter.registerExternal(
        name,
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
  }

  // endregion

  // region log (versions 0-4)

  private static void registerLog(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        "log",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`log`.0 takes 2 sexp-scalar numbers");
              }
              double x = sexpToDouble(s1, interpreter, "log.0");
              double base = sexpToDouble(s2, interpreter, "log.0");
              return new Value.Sexp(SEXPs.real(Math.log(x) / Math.log(base)));
            }));
    // v1: (I, R) --> R
    interpreter.registerExternal(
        "log",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double x = ((Value.Int) args.getFirst()).value();
              double base = ((Value.Real) args.get(1)).value();
              return new Value.Real(Math.log(x) / Math.log(base));
            }));
    // v2: (R, R) --> R
    interpreter.registerExternal(
        "log",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double x = ((Value.Real) args.getFirst()).value();
              double base = ((Value.Real) args.get(1)).value();
              return new Value.Real(Math.log(x) / Math.log(base));
            }));
    // v3: (v(I), v(R)) --> v(R)
    interpreter.registerExternal(
        "log",
        3,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              var bv = (RealSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(xv.size(), bv.size());
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, len)
                          .mapToDouble(
                              i ->
                                  Math.log(xv.get(i % xv.size())) / Math.log(bv.get(i % bv.size())))
                          .toArray()));
            }));
    // v4: (v(R), v(R)) --> v(R)
    interpreter.registerExternal(
        "log",
        4,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (RealSXP) ((Value.Sexp) args.getFirst()).value();
              var bv = (RealSXP) ((Value.Sexp) args.get(1)).value();
              int len = Math.max(xv.size(), bv.size());
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, len)
                          .mapToDouble(
                              i ->
                                  Math.log(xv.get(i % xv.size())) / Math.log(bv.get(i % bv.size())))
                          .toArray()));
            }));
  }

  // endregion

  // region length, seq_along, seq_len

  private static void registerLength(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "length",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`length`.0 takes 1 sexp argument");
              }
              if (sexp instanceof ListOrVectorSXP<?> vector) {
                return new Value.Sexp(SEXPs.integer(vector.size()));
              }
              return new Value.Sexp(SEXPs.integer(1));
            }));
    // v1: (V) --> I
    interpreter.registerExternal(
        "length",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = ((Value.Sexp) args.getFirst()).value();
              if (sexp instanceof ListOrVectorSXP<?> vector) {
                return new Value.Int(vector.size());
              }
              return new Value.Int(1);
            }));
  }

  private static void registerSeqAlong(InternalInterpreter interpreter) {
    // v0: (*) -+> v(I)
    interpreter.registerExternal(
        "seq_along",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`seq_along`.0 takes 1 sexp argument");
              }
              int len = sexp instanceof ListOrVectorSXP<?> v ? v.size() : 1;
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, len).toArray()));
            }));
    // v1: (V) --> I  (returns length, used as loop bound)
    interpreter.registerExternal(
        "seq_along",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = ((Value.Sexp) args.getFirst()).value();
              int len = sexp instanceof ListOrVectorSXP<?> v ? v.size() : 1;
              return new Value.Int(len);
            }));
  }

  private static void registerSeqLen(InternalInterpreter interpreter) {
    // v0: (*) -+> v(I)
    interpreter.registerExternal(
        "seq_len",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`seq_len`.0 takes 1 sexp argument");
              }
              int n = sexpToInt(sexp, interpreter, "seq_len.0");
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, n).toArray()));
            }));
    // v1: (I) --> I  (returns n, used as loop bound)
    interpreter.registerExternal(
        "seq_len", 1, ExternalVersion.strict((_, _, args, _) -> args.getFirst()));
    // v2: (v(I)) --> v(I)
    interpreter.registerExternal(
        "seq_len",
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) ((Value.Sexp) args.getFirst()).value();
              int n = vec.get(0);
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, n).toArray()));
            }));
  }

  // endregion

  // region type conversion (versions 0-1)

  private static void registerAsInteger(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> v(I)
    interpreter.registerExternal(
        "as.integer",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.integer`.0 takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.integer(sexpToInt(sexp, interpreter, "as.integer")));
            }));
    // v1: (V) --> I
    interpreter.registerExternal(
        "as.integer",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = ((Value.Sexp) args.getFirst()).value();
              return new Value.Int(sexpToInt(sexp, interpreter, "as.integer"));
            }));
  }

  private static void registerAsLogical(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> L
    interpreter.registerExternal(
        "as.logical",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.logical`.0 takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.logical(sexpToLogical(sexp, interpreter, "as.logical")));
            }));
    // v1: (V) --> L
    interpreter.registerExternal(
        "as.logical",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = ((Value.Sexp) args.getFirst()).value();
              return new Value.Lgl(sexpToLogical(sexp, interpreter, "as.logical"));
            }));
  }

  private static void registerAsCharacter(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> S
    interpreter.registerExternal(
        "as.character",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.character`.0 takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.string(sexpToString(sexp)));
            }));
    // v1: (V) --> S
    interpreter.registerExternal(
        "as.character",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = ((Value.Sexp) args.getFirst()).value();
              return new Value.Str(sexpToString(sexp));
            }));
  }

  // endregion

  // region missing (versions 0-1)

  private static void registerMissing(InternalInterpreter interpreter) {
    var missingVal = new Value.Sexp(SEXPs.MISSING_ARG);
    // v0: (*) --> v(L)
    interpreter.registerExternal(
        "missing",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              boolean isMissing = args.getFirst().equals(missingVal);
              return new Value.Sexp(SEXPs.logical(isMissing));
            }));
    // v1: (*) --> B
    interpreter.registerExternal(
        "missing",
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              boolean isMissing = args.getFirst().equals(missingVal);
              return new Value.Bool(isMissing);
            }));
  }

  // endregion

  // region error handling (version 0 only)

  private static void registerStop(InternalInterpreter interpreter) {
    interpreter.registerExternal(
        "stop",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 3) throw interpreter.fail("`stop` takes 3 arguments");
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`stop` first argument must be dots");
              }
              if (!dots.isEmpty() && dots.get(0).value().asScalarString().isPresent()) {
                throw interpreter.fail(dots.get(0).value().asScalarString().get());
              }
              throw interpreter.fail("stop() called");
            }));
  }

  private static void registerWarning(InternalInterpreter interpreter) {
    interpreter.registerExternal(
        "warning",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 5) throw interpreter.fail("`warning` takes 5 arguments");
              if (args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots
                  && !dots.isEmpty()
                  && dots.get(0).value().asScalarString().isPresent()) {
                System.err.println("Warning: " + dots.get(0).value().asScalarString().get());
              }
              return Value.NULL;
            }));
  }

  private static void registerStopifnot(InternalInterpreter interpreter) {
    interpreter.registerExternal(
        "stopifnot",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 4) throw interpreter.fail("`stopifnot` takes 4 arguments");
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`stopifnot` first argument must be dots");
              }
              for (int i = 0; i < dots.size(); i++) {
                var val = dots.get(i).value();
                if (val.asScalarLogical().isPresent()
                    && val.asScalarLogical().get() != Logical.TRUE) {
                  String msg =
                      dots.size() > i + 1 && dots.get(i + 1).value().asScalarString().isPresent()
                          ? dots.get(i + 1).value().asScalarString().get()
                          : "stopifnot failed";
                  throw interpreter.fail(msg);
                }
              }
              return Value.NULL;
            }));
  }

  // endregion

  // region print (versions 0-4)

  private static void registerPrint(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> V
    interpreter.registerExternal(
        "print",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) throw interpreter.fail("`print` takes 2 arguments");
              if (args.getFirst() instanceof Value.Sexp(var sexp)) {
                System.out.println(sexp);
              } else {
                System.out.println(args.getFirst());
              }
              return args.getFirst();
            }));
    // v1-v4: (v(T), miss) --> v(T)
    for (int v = 1; v <= 4; v++) {
      interpreter.registerExternal(
          "print",
          v,
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var sexp = ((Value.Sexp) args.getFirst()).value();
                System.out.println(sexp);
                return args.getFirst();
              }));
    }
  }

  // endregion

  // region unclass (versions 0-1)

  private static void registerUnclass(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "unclass",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              // Strip class attribute - for now just return as-is
              return args.getFirst();
            }));
    // v1: (V) --> V
    interpreter.registerExternal(
        "unclass", 1, ExternalVersion.strict((_, _, args, _) -> args.getFirst()));
  }

  // endregion

  // region is.* type checking (versions 0-1)

  private static void registerIsTypeBuiltin(
      InternalInterpreter interpreter, String name, Predicate<SEXP> check, boolean hasModeArg) {
    // v0: (*) or (*, *) -+> L
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != (hasModeArg ? 2 : 1)) {
                throw interpreter.fail(
                    "`" + name + "` takes " + (hasModeArg ? 2 : 1) + " arguments");
              }

              SEXP sexp;
              if (args.getFirst() instanceof Value.Sexp(var s)) {
                sexp = s;
              } else {
                // Unboxed values: wrap to check
                sexp = valueToSexp(args.getFirst());
              }
              return new Value.Sexp(SEXPs.logical(check.test(sexp)));
            }));
    // v1: (V) --> L  or  (V, miss) --> L
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != (hasModeArg ? 2 : 1)) {
                throw interpreter.fail(
                    "`" + name + "` takes " + (hasModeArg ? 2 : 1) + " arguments");
              }
              if (hasModeArg && !args.get(1).equals(new Value.Sexp(SEXPs.MISSING_ARG))) {
                throw interpreter.fail("`" + name + "` does not support a mode argument");
              }

              var sexp = ((Value.Sexp) args.getFirst()).value();
              return new Value.Lgl(check.test(sexp) ? Logical.TRUE : Logical.FALSE);
            }));
  }

  // endregion

  // region inherits (versions 0-1)

  private static void registerInherits(InternalInterpreter interpreter) {
    // v0: (*, *, *) -+> L
    interpreter.registerExternal(
        "inherits",
        0,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              // Simplified: no class support, always FALSE
              return new Value.Sexp(SEXPs.logical(false));
            }));
    // v1: (V, V, miss) --> L
    interpreter.registerExternal(
        "inherits", 1, ExternalVersion.strict((_, _, _, _) -> new Value.Lgl(Logical.FALSE)));
  }

  // endregion

  // region attr (versions 0-1)

  private static void registerAttr(InternalInterpreter interpreter) {
    // v0: (*, *, *, *) -+> V
    interpreter.registerExternal(
        "attr",
        0,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `attr` not yet fully implemented");
            }));
    // v1: (V, S, miss, miss) --> V
    interpreter.registerExternal(
        "attr",
        1,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `attr` not yet fully implemented");
            }));
  }

  // endregion

  // region c (version 0)

  private static void registerC(InternalInterpreter interpreter) {
    // v0: (dots) --> V
    interpreter.registerExternal(
        "c",
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1) throw interpreter.fail("`c` takes 1 argument (dots)");
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`c` requires a `...` argument");
              }
              if (dots.isEmpty()) return Value.NULL;

              // Determine the widest element type
              int widest = 0; // 0=lgl, 1=int, 2=real, 3=str
              for (var te : dots) {
                int w =
                    switch (te.value()) {
                      case LglSXP _ -> 0;
                      case IntSXP _ -> 1;
                      case RealSXP _ -> 2;
                      case StrSXP _ -> 3;
                      default ->
                          throw interpreter.failUnsupported(
                              "Mock `c` doesn't support non-primitive arguments");
                    };
                if (w > widest) widest = w;
              }

              // Collect all values into the widest type
              return new Value.Sexp(concatToType(dots, widest, interpreter));
            }));
  }

  private static SEXP concatToType(
      DotsListSXP dots, int targetType, InternalInterpreter interpreter) {
    // Count total elements
    int total = 0;
    for (var te : dots) {
      total += ((ListOrVectorSXP<?>) te.value()).size();
    }

    return switch (targetType) {
      case 0 -> { // logical
        var res = new Logical[total];
        int idx = 0;
        for (var te : dots) {
          var vec = (LglSXP) te.value();
          for (int i = 0; i < vec.size(); i++) res[idx++] = vec.get(i);
        }
        yield SEXPs.logical(res);
      }
      case 1 -> { // integer
        var res = new int[total];
        int idx = 0;
        for (var te : dots) {
          switch (te.value()) {
            case LglSXP l -> {
              for (int i = 0; i < l.size(); i++) res[idx++] = l.get(i).toInt();
            }
            case IntSXP iv -> {
              for (int i = 0; i < iv.size(); i++) res[idx++] = iv.get(i);
            }
            default ->
                throw interpreter.failUnsupported("Mock `c` unexpected type for int coercion");
          }
        }
        yield SEXPs.integer(res);
      }
      case 2 -> { // real
        var res = new double[total];
        int idx = 0;
        for (var te : dots) {
          switch (te.value()) {
            case LglSXP l -> {
              for (int i = 0; i < l.size(); i++) res[idx++] = l.get(i).toInt();
            }
            case IntSXP iv -> {
              for (int i = 0; i < iv.size(); i++) res[idx++] = iv.get(i);
            }
            case RealSXP rv -> {
              for (int i = 0; i < rv.size(); i++) res[idx++] = rv.get(i);
            }
            default ->
                throw interpreter.failUnsupported("Mock `c` unexpected type for real coercion");
          }
        }
        yield SEXPs.real(res);
      }
      case 3 -> { // string
        var res = new String[total];
        int idx = 0;
        for (var te : dots) {
          switch (te.value()) {
            case LglSXP l -> {
              for (int i = 0; i < l.size(); i++) res[idx++] = l.get(i).toString();
            }
            case IntSXP iv -> {
              for (int i = 0; i < iv.size(); i++) res[idx++] = String.valueOf(iv.get(i));
            }
            case RealSXP rv -> {
              for (int i = 0; i < rv.size(); i++) res[idx++] = String.valueOf(rv.get(i));
            }
            case StrSXP sv -> {
              for (int i = 0; i < sv.size(); i++) res[idx++] = sv.get(i);
            }
            default ->
                throw interpreter.failUnsupported("Mock `c` unexpected type for string coercion");
          }
        }
        yield SEXPs.string(res);
      }
      default -> throw interpreter.failUnsupported("Mock `c` unknown target type");
    };
  }

  // endregion

  // region intrinsics

  private static Value setInvisible(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (!args.isEmpty()) {
      throw interpreter.fail("`setInvisible` takes 0 arguments");
    }
    return Value.NULL;
  }

  private static Value setVisible(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (!args.isEmpty()) {
      throw interpreter.fail("`setVisible` takes 0 arguments");
    }
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
    return new Value.Sexp(vector);
  }

  // endregion

  // region helper methods

  private static double sexpToDouble(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarInteger().isPresent()) return sexp.asScalarInteger().get();
    if (sexp.asScalarReal().isPresent()) return sexp.asScalarReal().get();
    if (sexp.asScalarLogical().isPresent()) return sexp.asScalarLogical().get().toInt();
    throw interpreter.fail(ctx + " requires a numeric scalar");
  }

  private static @Nullable Double sexpToDoubleOpt(SEXP sexp) {
    if (sexp.asScalarReal().isPresent()) return sexp.asScalarReal().get();
    if (sexp.asScalarInteger().isPresent()) return (double) sexp.asScalarInteger().get();
    if (sexp.asScalarLogical().isPresent()) return (double) sexp.asScalarLogical().get().toInt();
    return null;
  }

  private static int sexpToInt(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarInteger().isPresent()) return sexp.asScalarInteger().get();
    if (sexp.asScalarReal().isPresent()) return (int) sexp.asScalarReal().get().doubleValue();
    if (sexp.asScalarLogical().isPresent()) return sexp.asScalarLogical().get().toInt();
    throw interpreter.fail(ctx + " requires a numeric scalar");
  }

  private static Logical sexpToLogical(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarLogical().isPresent()) return sexp.asScalarLogical().get();
    if (sexp.asScalarInteger().isPresent()) {
      int v = sexp.asScalarInteger().get();
      if (v == Constants.NA_INT) return Logical.NA;
      return v == 0 ? Logical.FALSE : Logical.TRUE;
    }
    if (sexp.asScalarReal().isPresent()) {
      double v = sexp.asScalarReal().get();
      if (Double.isNaN(v)) return Logical.NA;
      return v == 0.0 ? Logical.FALSE : Logical.TRUE;
    }
    throw interpreter.failUnsupported(ctx + " requires a scalar convertible to logical");
  }

  private static String sexpToString(SEXP sexp) {
    if (sexp.asScalarString().isPresent()) return sexp.asScalarString().get();
    if (sexp.asScalarInteger().isPresent()) return String.valueOf(sexp.asScalarInteger().get());
    if (sexp.asScalarReal().isPresent()) return String.valueOf(sexp.asScalarReal().get());
    if (sexp.asScalarLogical().isPresent()) return sexp.asScalarLogical().get().toString();
    return sexp.toString();
  }

  private static SEXP valueToSexp(Value value) {
    return switch (value) {
      case Value.Sexp(var s) -> s;
      case Value.Int(var i) -> SEXPs.integer(i);
      case Value.Real(var r) -> SEXPs.real(r);
      case Value.Lgl(var l) -> SEXPs.logical(l);
      case Value.Str(var s) -> SEXPs.string(s);
      case Value.Bool(var b) -> SEXPs.logical(b);
    };
  }

  private static SEXP buildVector(SEXP[] elements, ListOrVectorSXP<?> template) {
    return switch (template) {
      case IntSXP _ -> {
        var res = new int[elements.length];
        for (int i = 0; i < elements.length; i++) res[i] = elements[i].asScalarInteger().orElse(0);
        yield SEXPs.integer(res);
      }
      case RealSXP _ -> {
        var res = new double[elements.length];
        for (int i = 0; i < elements.length; i++) res[i] = elements[i].asScalarReal().orElse(0.0);
        yield SEXPs.real(res);
      }
      case LglSXP _ -> {
        var res = new Logical[elements.length];
        for (int i = 0; i < elements.length; i++)
          res[i] = elements[i].asScalarLogical().orElse(Logical.NA);
        yield SEXPs.logical(res);
      }
      case StrSXP _ -> {
        var res = new String[elements.length];
        for (int i = 0; i < elements.length; i++) res[i] = elements[i].asScalarString().orElse("");
        yield SEXPs.string(res);
      }
      default -> SEXPs.vec(elements);
    };
  }

  // Logical operations with three-valued logic (R semantics)
  private static Logical logicalAnd(Logical a, Logical b) {
    if (a == Logical.FALSE || b == Logical.FALSE) return Logical.FALSE;
    if (a == Logical.TRUE && b == Logical.TRUE) return Logical.TRUE;
    return Logical.NA;
  }

  private static Logical logicalOr(Logical a, Logical b) {
    if (a == Logical.TRUE || b == Logical.TRUE) return Logical.TRUE;
    if (a == Logical.FALSE && b == Logical.FALSE) return Logical.FALSE;
    return Logical.NA;
  }

  private static Logical logicalXor(Logical a, Logical b) {
    if (a == Logical.NA || b == Logical.NA) return Logical.NA;
    return a != b ? Logical.TRUE : Logical.FALSE;
  }

  private static Logical logicalNot(Logical a) {
    return switch (a) {
      case TRUE -> Logical.FALSE;
      case FALSE -> Logical.TRUE;
      case NA -> Logical.NA;
    };
  }

  private static Logical intToLogicalNot(int v) {
    if (v == Constants.NA_INT) return Logical.NA;
    return v == 0 ? Logical.TRUE : Logical.FALSE;
  }

  private static Logical realToLogicalNot(double v) {
    if (Double.isNaN(v)) return Logical.NA;
    return v == 0.0 ? Logical.TRUE : Logical.FALSE;
  }

  // Gamma and related functions (Lanczos approximation)
  private static double gamma(double x) {
    if (x <= 0 && x == Math.floor(x)) return Double.POSITIVE_INFINITY;
    if (x < 0.5) return Math.PI / (Math.sin(Math.PI * x) * gamma(1 - x));
    x -= 1;
    double[] p = {
      0.99999999999980993, 676.5203681218851, -1259.1392167224028,
      771.32342877765313, -176.61502916214059, 12.507343278686905,
      -0.13857109526572012, 9.9843695780195716e-6, 1.5056327351493116e-7
    };
    double a = p[0];
    double t = x + 7.5;
    for (int i = 1; i < p.length; i++) a += p[i] / (x + i);
    return Math.sqrt(2 * Math.PI) * Math.pow(t, x + 0.5) * Math.exp(-t) * a;
  }

  private static double digamma(double x) {
    // Asymptotic expansion for large x
    if (x >= 10) {
      double r = 0;
      double t = 1.0 / (x * x);
      return r + Math.log(x) - 0.5 / x - t * (1.0 / 12 - t * (1.0 / 120 - t * (1.0 / 252)));
    }
    // Recurrence relation for small x
    if (x < 1) {
      return digamma(x + 1) - 1.0 / x;
    }
    double result = 0;
    while (x < 10) {
      result -= 1.0 / x;
      x += 1;
    }
    double t = 1.0 / (x * x);
    return result + Math.log(x) - 0.5 / x - t * (1.0 / 12 - t * (1.0 / 120 - t * (1.0 / 252)));
  }

  private static double trigamma(double x) {
    if (x < 1) {
      return trigamma(x + 1) + 1.0 / (x * x);
    }
    double result = 0;
    while (x < 10) {
      result += 1.0 / (x * x);
      x += 1;
    }
    double t = 1.0 / (x * x);
    return result + 1.0 / x + 0.5 * t + t / x * (1.0 / 6 - t * (1.0 / 30 - t * (1.0 / 42)));
  }

  // endregion

  private Builtins() {}
}
