package org.prlprg.fir.interpret.internal;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.List;
import java.util.function.DoubleBinaryOperator;
import java.util.function.DoubleUnaryOperator;
import java.util.function.Predicate;
import java.util.stream.IntStream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
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
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.VecSXP;

/// Java implementations of GNU-R builtins for [InternalInterpreter] (specifically
/// [InternalInterpreter#registerExternal(String, Signature, ExternalVersion)]).
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

  // region common signatures
  private static Signature sig(Type returnType, Effects effects, Type... paramTypes) {
    return new Signature(ImmutableList.copyOf(paramTypes), returnType, effects);
  }

  private static final Signature SIG_GENERIC_2 =
      sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.ANY_SEXP);
  private static final Signature SIG_GENERIC_1 =
      sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP);

  // endregion

  /// Register all builtins and intrinsics that are implemented.
  public static void registerBuiltins(InternalInterpreter interpreter) {
    // Binary math operators, preserving int
    registerBinaryMathBuiltin(interpreter, "+", Double::sum, x -> x);
    registerBinaryMathBuiltin(interpreter, "-", (a, b) -> a - b, x -> -x);
    registerBinaryMathBuiltin(interpreter, "*", (a, b) -> a * b, null);

    // Binary math operators, to real
    registerBinaryMathToRealBuiltin(interpreter, "/", (a, b) -> a / b);
    registerBinaryMathToRealBuiltin(interpreter, "^", Math::pow);

    // Comparison operators
    registerBinaryComparisonBuiltin(interpreter, "<", (a, b) -> a < b, true);
    registerBinaryComparisonBuiltin(interpreter, "<=", (a, b) -> a <= b, true);
    registerBinaryComparisonBuiltin(interpreter, ">", (a, b) -> a > b, false);
    registerBinaryComparisonBuiltin(interpreter, ">=", (a, b) -> a >= b, false);

    // Equality operators
    registerEqualityBuiltin(interpreter, "==", true);
    registerEqualityBuiltin(interpreter, "!=", false);

    // Logical operators
    registerBinaryLogicalBuiltin(interpreter, "&", Builtins::logicalAnd);
    registerBinaryLogicalBuiltin(interpreter, "|", Builtins::logicalOr);
    registerBinaryLogicalBuiltin(interpreter, "xor", Builtins::logicalXor);

    // Logical scalar operators
    registerBinaryScalarLogicalBuiltin(interpreter, "&&", Builtins::logicalAnd);
    registerBinaryScalarLogicalBuiltin(interpreter, "||", Builtins::logicalOr);

    // Logical not
    registerLogicalNot(interpreter);

    // Colon operator
    registerColon(interpreter);

    // Index operators
    registerIndex(interpreter, "[");
    registerIndex(interpreter, "[[");

    // Sub-assignment operators
    registerSubAssign(interpreter, "[<-", 4);
    registerSubAssign(interpreter, "[[<-", 3);

    // Dollar access
    registerDollar(interpreter);
    registerDollarAssign(interpreter);

    // rep
    registerRep(interpreter);

    // sum
    registerSum(interpreter);

    // Unary math1, preserving int
    registerAbsBuiltin(interpreter);

    // Unary math1, to real
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

    // log
    registerLog(interpreter);

    // length
    registerLength(interpreter);

    // seq_along, seq_len
    registerSeqAlong(interpreter);
    registerSeqLen(interpreter);

    // Type conversion
    registerAsInteger(interpreter);
    registerAsLogical(interpreter);
    registerAsCharacter(interpreter);

    // missing
    registerMissing(interpreter);

    // Error handling
    registerStop(interpreter);
    registerWarning(interpreter);
    registerStopifnot(interpreter);

    // print
    registerPrint(interpreter);

    // unclass
    registerUnclass(interpreter);

    // Type checking
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

    // inherits
    registerInherits(interpreter);

    // attr
    registerAttr(interpreter);

    // c
    registerC(interpreter);

    // Intrinsics
    interpreter.registerExternal(
        "setInvisible", sig(Type.ANY_VALUE_SEXP, Effects.NONE), Builtins::setInvisible);
    interpreter.registerExternal(
        "setVisible", sig(Type.ANY_VALUE_SEXP, Effects.NONE), Builtins::setVisible);
    interpreter.registerExternal(
        "checkMissing",
        sig(Type.ANY_VALUE_SEXP, Effects.IMPURE, Type.ANY_VALUE_SEXP),
        Builtins::checkMissing);
    interpreter.registerExternal(
        "toForSeq",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_VALUE_SEXP),
        Builtins::toForSeq);
    interpreter.registerExternal(
        "naToFalse", sig(Type.BOOLEAN, Effects.NONE, Type.BOXED_LOGICAL), Builtins::naToFalse0);
    interpreter.registerExternal(
        "naToFalse", sig(Type.BOOLEAN, Effects.NONE, Type.LOGICAL), Builtins::naToFalse1);

    // box: scalar → vector
    interpreter.registerExternal(
        "box", sig(Type.BOXED_LOGICAL, Effects.NONE, Type.LOGICAL), Builtins::boxLogical);
    interpreter.registerExternal(
        "box", sig(Type.BOXED_INTEGER, Effects.NONE, Type.INTEGER), Builtins::boxInteger);
    interpreter.registerExternal(
        "box", sig(Type.BOXED_REAL, Effects.NONE, Type.REAL), Builtins::boxReal);
    interpreter.registerExternal(
        "box", sig(Type.BOXED_STRING, Effects.NONE, Type.STRING), Builtins::boxString);

    // unbox: vector → scalar
    interpreter.registerExternal(
        "unbox",
        sig(Type.LOGICAL, Effects.NONE, Type.BOXED_LOGICAL.withOwnership(Ownership.BORROWED)),
        Builtins::unboxLogical);
    interpreter.registerExternal(
        "unbox",
        sig(Type.INTEGER, Effects.NONE, Type.BOXED_INTEGER.withOwnership(Ownership.BORROWED)),
        Builtins::unboxInteger);
    interpreter.registerExternal(
        "unbox",
        sig(Type.REAL, Effects.NONE, Type.BOXED_REAL.withOwnership(Ownership.BORROWED)),
        Builtins::unboxReal);
    interpreter.registerExternal(
        "unbox",
        sig(Type.STRING, Effects.NONE, Type.BOXED_STRING.withOwnership(Ownership.BORROWED)),
        Builtins::unboxString);
  }

  // region binary math builtins

  private static void registerBinaryMathBuiltin(
      InternalInterpreter interpreter,
      String name,
      DoubleBinaryOperator fn,
      @Nullable DoubleUnaryOperator unaryFn) {
    // Generic: (*, *) -+> V — covers v0, vector binary (v1-v4), and unary boxed (v9-v11 for +/-)
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) {
                throw interpreter.fail("`" + name + "` generic takes 2 args");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var s1))) {
                throw interpreter.fail("`" + name + "` generic takes sexp args");
              }
              // Handle unary case: second arg is MISSING_ARG
              if (args.get(1) instanceof Value.Sexp(var s2m) && s2m.equals(SEXPs.MISSING_ARG)) {
                if (unaryFn == null) {
                  throw interpreter.fail("`" + name + "` has no unary version");
                }
                return new Value.Sexp(applyUnaryPreservingInt(s1, unaryFn, interpreter, name));
              }
              // Binary case
              if (!(args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexp args");
              }
              return new Value.Sexp(applyBinaryPreservingInt(s1, s2, fn, interpreter, name));
            }));

    // Scalar binary: (I, I) --> I
    interpreter.registerExternal(
        name,
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Int((int) fn.applyAsDouble(a, b));
            }));
    // Scalar binary: (R, R) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // Scalar binary: (I, R) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // Scalar binary: (R, I) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));

    // Scalar unary (only for +/-): (I, miss) --> I, (R, miss) --> R
    if (unaryFn != null) {
      interpreter.registerExternal(
          name,
          sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Int) args.getFirst()).value();
                return new Value.Int((int) unaryFn.applyAsDouble(a));
              }));
      interpreter.registerExternal(
          name,
          sig(Type.REAL, Effects.NONE, Type.REAL, Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Real) args.getFirst()).value();
                return new Value.Real(unaryFn.applyAsDouble(a));
              }));
    }
  }

  /// Apply binary math op on SEXPs, preserving int type (for +, -, *)
  private static SEXP applyBinaryPreservingInt(
      SEXP s1, SEXP s2, DoubleBinaryOperator fn, InternalInterpreter interpreter, String ctx) {
    // Try scalar first
    if (s1.asScalarInteger().isPresent() && s2.asScalarInteger().isPresent()) {
      return SEXPs.integer(
          (int) fn.applyAsDouble(s1.asScalarInteger().get(), s2.asScalarInteger().get()));
    } else if (s1.asScalarReal().isPresent() && s2.asScalarReal().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s1.asScalarReal().get(), s2.asScalarReal().get()));
    } else if (s1.asScalarInteger().isPresent() && s2.asScalarReal().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s1.asScalarInteger().get(), s2.asScalarReal().get()));
    } else if (s1.asScalarReal().isPresent() && s2.asScalarInteger().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s1.asScalarReal().get(), s2.asScalarInteger().get()));
    }
    // Vector operations
    switch (s1) {
      case IntSXP i1 when s2 instanceof IntSXP i2 -> {
        int len = Math.max(i1.size(), i2.size());
        return SEXPs.integer(
            IntStream.range(0, len)
                .map(i -> (int) fn.applyAsDouble(i1.get(i % i1.size()), i2.get(i % i2.size())))
                .toArray());
      }
      case RealSXP r1 when s2 instanceof RealSXP r2 -> {
        int len = Math.max(r1.size(), r2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(i -> fn.applyAsDouble(r1.get(i % r1.size()), r2.get(i % r2.size())))
                .toArray());
      }
      case IntSXP i1 when s2 instanceof RealSXP r2 -> {
        int len = Math.max(i1.size(), r2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(i -> fn.applyAsDouble(i1.get(i % i1.size()), r2.get(i % r2.size())))
                .toArray());
      }
      case RealSXP r1 when s2 instanceof IntSXP i2 -> {
        int len = Math.max(r1.size(), i2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(i -> fn.applyAsDouble(r1.get(i % r1.size()), i2.get(i % i2.size())))
                .toArray());
      }
      default -> {}
    }
    throw interpreter.fail("`" + ctx + "` generic requires numeric args");
  }

  /// Apply unary math op on SEXP, preserving int type (for +, -)
  private static SEXP applyUnaryPreservingInt(
      SEXP s, DoubleUnaryOperator fn, InternalInterpreter interpreter, String ctx) {
    // Try scalar first
    if (s.asScalarInteger().isPresent()) {
      return SEXPs.integer((int) fn.applyAsDouble(s.asScalarInteger().get()));
    } else if (s.asScalarReal().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s.asScalarReal().get()));
    }
    // Vector operations
    if (s instanceof IntSXP iv) {
      return SEXPs.integer(
          IntStream.range(0, iv.size()).map(i -> (int) fn.applyAsDouble(iv.get(i))).toArray());
    } else if (s instanceof RealSXP rv) {
      return SEXPs.real(
          IntStream.range(0, rv.size()).mapToDouble(i -> fn.applyAsDouble(rv.get(i))).toArray());
    }
    throw interpreter.fail("`" + ctx + "` unary requires a numeric arg");
  }

  private static void registerBinaryMathToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleBinaryOperator fn) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexp-scalar numbers");
              }
              double a = sexpToDouble(s1, interpreter, name);
              double b = sexpToDouble(s2, interpreter, name);
              return new Value.Sexp(SEXPs.real(fn.applyAsDouble(a, b)));
            }));
    // Scalar: (I, I) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // Scalar: (R, R) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // Scalar: (I, R) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
    // Scalar: (R, I) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
  }

  // endregion

  // region comparison builtins

  private static void registerBinaryComparisonBuiltin(
      InternalInterpreter interpreter,
      String name,
      DoubleBinaryPredicate pred,
      boolean hasBoolean) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexp-scalar numbers");
              }
              double a = sexpToDouble(s1, interpreter, name);
              double b = sexpToDouble(s2, interpreter, name);
              return new Value.Sexp(SEXPs.logical(pred.test(a, b)));
            }));
    // Scalar --> L: (I, I) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // Scalar --> L: (R, R) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // Scalar --> L: (I, R) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));
    // Scalar --> L: (R, I) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.REAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Lgl(pred.test(a, b) ? Logical.TRUE : Logical.FALSE);
            }));

    // For < and <=: also scalar --> B
    if (hasBoolean) {
      // (I, I) --> B
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.INTEGER, Type.INTEGER),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Int) args.getFirst()).value();
                var b = ((Value.Int) args.get(1)).value();
                return new Value.Bool(pred.test(a, b));
              }));
      // (R, R) --> B
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.REAL, Type.REAL),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Real) args.getFirst()).value();
                var b = ((Value.Real) args.get(1)).value();
                return new Value.Bool(pred.test(a, b));
              }));
      // (I, R) --> B
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.INTEGER, Type.REAL),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Int) args.getFirst()).value();
                var b = ((Value.Real) args.get(1)).value();
                return new Value.Bool(pred.test(a, b));
              }));
      // (R, I) --> B
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.REAL, Type.INTEGER),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var a = ((Value.Real) args.getFirst()).value();
                var b = ((Value.Int) args.get(1)).value();
                return new Value.Bool(pred.test(a, b));
              }));
    }
  }

  // endregion

  // region equality builtins

  private static void registerEqualityBuiltin(
      InternalInterpreter interpreter, String name, boolean isEqual) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexp args");
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
    // Scalar --> B: (L, L) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.LOGICAL, Type.LOGICAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Lgl) args.getFirst()).value();
              var b = ((Value.Lgl) args.get(1)).value();
              if (a == Logical.NA || b == Logical.NA) {
                // NA comparison: return Bool(false) for ==, Bool(true) for !=?
                // Actually NA comparisons should yield NA, but B type has no NA.
                // Keep same logic as before but return Bool.
                return new Value.Bool(false);
              }
              boolean eq = a == b;
              return new Value.Bool(isEqual == eq);
            }));
    // Scalar --> B: (I, I) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              boolean eq = a == b;
              return new Value.Bool(isEqual == eq);
            }));
    // Scalar --> B: (R, R) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              boolean eq = a == b;
              return new Value.Bool(isEqual == eq);
            }));
    // Scalar --> B: (S, S) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.STRING, Type.STRING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Str) args.getFirst()).value();
              var b = ((Value.Str) args.get(1)).value();
              boolean eq = a.equals(b);
              return new Value.Bool(isEqual == eq);
            }));
    // (cls, cls) --> B for ==, (cls, cls) --> L for !=
    if (isEqual) {
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.ANY_SEXP, Type.ANY_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var c1 = (CloSXP) args.getFirst().box();
                var c2 = (CloSXP) args.get(1).box();
                boolean eq = c1 == c2;
                return new Value.Bool(eq);
              }));
    } else {
      interpreter.registerExternal(
          name,
          sig(Type.LOGICAL, Effects.NONE, Type.CLOSURE, Type.CLOSURE),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var c1 = (CloSXP) args.getFirst().box();
                var c2 = (CloSXP) args.get(1).box();
                boolean eq = c1 == c2;
                return new Value.Lgl(isEqual == eq ? Logical.TRUE : Logical.FALSE);
              }));
    }
  }

  // endregion

  // region logical builtins

  private static void registerBinaryLogicalBuiltin(
      InternalInterpreter interpreter, String name, LogicalBinaryOp op) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexps");
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
    // (B, B) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.BOOLEAN, Type.BOOLEAN),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Bool) args.getFirst()).value() ? Logical.TRUE : Logical.FALSE;
              var b = ((Value.Bool) args.get(1)).value() ? Logical.TRUE : Logical.FALSE;
              var result = op.apply(a, b);
              return new Value.Bool(result == Logical.TRUE);
            }));
  }

  private static void registerBinaryScalarLogicalBuiltin(
      InternalInterpreter interpreter, String name, LogicalBinaryOp op) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`" + name + "` generic takes 2 sexps");
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
    // (B, B) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, Type.BOOLEAN, Type.BOOLEAN),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Bool) args.getFirst()).value() ? Logical.TRUE : Logical.FALSE;
              var b = ((Value.Bool) args.get(1)).value() ? Logical.TRUE : Logical.FALSE;
              var result = op.apply(a, b);
              return new Value.Bool(result == Logical.TRUE);
            }));
  }

  private static void registerLogicalNot(InternalInterpreter interpreter) {
    // Generic: (*) -+> V
    interpreter.registerExternal(
        "!",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`!` generic takes 1 sexp-scalar");
              }
              var l = sexpToLogical(sexp, interpreter, "!");
              return new Value.Sexp(SEXPs.logical(logicalNot(l)));
            }));
    // (B) --> B
    interpreter.registerExternal(
        "!",
        sig(Type.BOOLEAN, Effects.NONE, Type.BOOLEAN),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Bool) args.getFirst()).value();
              return new Value.Bool(!a);
            }));
    // (I) --> L
    interpreter.registerExternal(
        "!",
        sig(Type.LOGICAL, Effects.NONE, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              return new Value.Lgl(intToLogicalNot(a));
            }));
    // (R) --> L
    interpreter.registerExternal(
        "!",
        sig(Type.LOGICAL, Effects.NONE, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              return new Value.Lgl(realToLogicalNot(a));
            }));
  }

  // endregion

  // region colon operator

  private static void registerColon(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        ":",
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`:` generic takes 2 sexp-scalar numbers");
              }
              double start = sexpToDouble(s1, interpreter, ":");
              double end = sexpToDouble(s2, interpreter, ":");
              return new Value.Sexp(colonSeq(start, end));
            }));
    // (I, I) --> v(I)
    interpreter.registerExternal(
        ":",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int start = ((Value.Int) args.getFirst()).value();
              int end = ((Value.Int) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // (I, R) --> v(I)
    interpreter.registerExternal(
        ":",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int start = ((Value.Int) args.getFirst()).value();
              double end = ((Value.Real) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // (R, R) --> V
    interpreter.registerExternal(
        ":",
        sig(Type.ANY_VALUE_SEXP, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double start = ((Value.Real) args.getFirst()).value();
              double end = ((Value.Real) args.get(1)).value();
              return new Value.Sexp(colonSeq(start, end));
            }));
    // (v(I), v(I)) --> v(I)  (use first elements)
    interpreter.registerExternal(
        ":",
        sig(
            Type.SHARED_INTEGER_VECTOR,
            Effects.NONE,
            Type.SHARED_INTEGER_VECTOR,
            Type.SHARED_INTEGER_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (IntSXP) args.getFirst().box();
              var v2 = (IntSXP) args.get(1).box();
              return new Value.Sexp(colonSeq(v1.get(0), v2.get(0)));
            }));
    // (v(I), v(R)) --> v(I)
    interpreter.registerExternal(
        ":",
        sig(
            Type.SHARED_INTEGER_VECTOR,
            Effects.NONE,
            Type.SHARED_INTEGER_VECTOR,
            Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (IntSXP) args.getFirst().box();
              var v2 = (RealSXP) args.get(1).box();
              return new Value.Sexp(colonSeq(v1.get(0), v2.get(0)));
            }));
    // (v(R), v(R)) --> V
    interpreter.registerExternal(
        ":",
        sig(Type.ANY_VALUE_SEXP, Effects.NONE, Type.SHARED_REAL_VECTOR, Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var v1 = (RealSXP) args.getFirst().box();
              var v2 = (RealSXP) args.get(1).box();
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

  // region index operators

  private static void registerIndex(InternalInterpreter interpreter, String name) {
    // Generic: (*, *, *, *) -+> V for [, (*, *, dots, *) -+> V for [[
    // Both have 4 params in generic form with all being ANY
    interpreter.registerExternal(
        name,
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.REFLECT,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 4) {
                throw interpreter.fail("`" + name + "` generic takes 4 arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof ListOrVectorSXP<?> vector)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-vector objects");
              }
              int idx = sexpToInt(args.get(1).box(), interpreter, name);
              return new Value.Sexp(interpreter.subscriptLoad(vector, idx - 1).box());
            }));
    // v5-9: (v(T), I, miss, miss) --> T for T = L, I, R, S
    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    Type[] scalarTypes = {Type.LOGICAL, Type.INTEGER, Type.REAL, Type.STRING};
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          name,
          sig(scalarTypes[t], Effects.NONE, vecTypes[t], Type.INTEGER, Type.MISSING, Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                int idx = ((Value.Int) args.get(1)).value();
                return interpreter.subscriptLoad(vector, idx - 1);
              }));
    }
    // v1-4: (v(T), v(I), miss, miss) --> v(T) for T = L, I, R, S
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          name,
          sig(
              vecTypes[t],
              Effects.NONE,
              vecTypes[t],
              Type.SHARED_INTEGER_VECTOR,
              Type.MISSING,
              Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                var indices = (IntSXP) args.get(1).box();
                // For vector indexing, build result by loading each index
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

  // region sub-assignment operators

  private static void registerSubAssign(InternalInterpreter interpreter, String name, int numArgs) {
    // Generic
    if (numArgs == 4) {
      // [<-: (*, *, *, *) -+> V
      interpreter.registerExternal(
          name,
          sig(
              Type.ANY_VALUE_SEXP,
              Effects.REFLECT,
              Type.ANY_SEXP,
              Type.ANY_SEXP,
              Type.ANY_SEXP,
              Type.ANY_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                if (args.size() != 4) {
                  throw interpreter.fail("`" + name + "` generic takes 4 arguments");
                }
                if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                    && sexp instanceof ListOrVectorSXP<?> vector)) {
                  throw interpreter.failUnsupported(
                      "Mock `" + name + "` not implemented for non-vector objects");
                }
                int idx = sexpToInt(args.get(1).box(), interpreter, name);
                var value = sexpToValueOfType(args.get(2).box(), vector.type(), interpreter, name);
                var result = vector.copy();
                interpreter.subscriptStore(result, idx - 1, value);
                return new Value.Sexp(result);
              }));
    } else {
      // [[<-: (*, *, *) -+> V
      interpreter.registerExternal(
          name,
          sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.ANY_SEXP, Type.ANY_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                if (args.size() != 3) {
                  throw interpreter.fail("`" + name + "` generic takes 3 arguments");
                }
                if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                    && sexp instanceof ListOrVectorSXP<?> vector)) {
                  throw interpreter.failUnsupported(
                      "Mock `" + name + "` not implemented for non-vector objects");
                }
                int idx = sexpToInt(args.get(1).box(), interpreter, name);
                var value = sexpToValueOfType(args.get(2).box(), vector.type(), interpreter, name);
                var result = vector.copy();
                interpreter.subscriptStore(result, idx - 1, value);
                return new Value.Sexp(result);
              }));
    }

    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    Type[] scalarTypes = {Type.LOGICAL, Type.INTEGER, Type.REAL, Type.STRING};

    if (numArgs == 4) {
      // [<-: v5-v8: (v(T), I, T, miss) --> v(T)
      for (int t = 0; t < 4; t++) {
        interpreter.registerExternal(
            name,
            sig(vecTypes[t], Effects.NONE, vecTypes[t], Type.INTEGER, scalarTypes[t], Type.MISSING),
            ExternalVersion.strict(
                (_, _, args, _) -> {
                  var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                  int idx = ((Value.Int) args.get(1)).value();
                  var value = args.get(2);
                  var result = vector.copy();
                  interpreter.subscriptStore(result, idx - 1, value);
                  return new Value.Sexp(result);
                }));
      }
      // [<-: v1-v4: (v(T), v(I), v(T), miss) --> v(T)
      for (int t = 0; t < 4; t++) {
        interpreter.registerExternal(
            name,
            sig(
                vecTypes[t],
                Effects.NONE,
                vecTypes[t],
                Type.SHARED_INTEGER_VECTOR,
                vecTypes[t],
                Type.MISSING),
            ExternalVersion.strict(
                (_, _, args, _) -> {
                  var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                  var indices = (IntSXP) args.get(1).box();
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
    } else {
      // [[<-: v5-v8: (v(T), I, T) --> v(T)
      for (int t = 0; t < 4; t++) {
        interpreter.registerExternal(
            name,
            sig(vecTypes[t], Effects.NONE, vecTypes[t], Type.INTEGER, scalarTypes[t]),
            ExternalVersion.strict(
                (_, _, args, _) -> {
                  var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                  int idx = ((Value.Int) args.get(1)).value();
                  var value = args.get(2);
                  var result = vector.copy();
                  interpreter.subscriptStore(result, idx - 1, value);
                  return new Value.Sexp(result);
                }));
      }
      // [[<-: v1-v4: (v(T), v(I), v(T)) --> v(T)
      for (int t = 0; t < 4; t++) {
        interpreter.registerExternal(
            name,
            sig(vecTypes[t], Effects.NONE, vecTypes[t], Type.SHARED_INTEGER_VECTOR, vecTypes[t]),
            ExternalVersion.strict(
                (_, _, args, _) -> {
                  var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                  var indices = (IntSXP) args.get(1).box();
                  var values = args.get(2);
                  var result = vector.copy();
                  if (values instanceof Value.Sexp(var valuesSexp)
                      && valuesSexp instanceof ListOrVectorSXP<?> valuesVec) {
                    for (int i = 0; i < indices.size(); i++) {
                      interpreter.subscriptStore(
                          result, indices.get(i) - 1, interpreter.subscriptLoad(valuesVec, i));
                    }
                  } else {
                    for (int i = 0; i < indices.size(); i++) {
                      interpreter.subscriptStore(result, indices.get(i) - 1, values);
                    }
                  }
                  return new Value.Sexp(result);
                }));
      }
    }
  }

  // endregion

  // region dollar access

  private static void registerDollar(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V
    interpreter.registerExternal(
        "$",
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$` not yet fully implemented");
            }));
    // v1: (V, V) --> V
    interpreter.registerExternal(
        "$",
        sig(Type.ANY_VALUE_SEXP, Effects.NONE, Type.ANY_VALUE_SEXP, Type.ANY_VALUE_SEXP),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$` not yet fully implemented");
            }));
  }

  private static void registerDollarAssign(InternalInterpreter interpreter) {
    // v0: (*, *, *) -+> V
    interpreter.registerExternal(
        "$<-",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.ANY_SEXP, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$<-` not yet fully implemented");
            }));
    // v1: (V, V, V) --> V
    interpreter.registerExternal(
        "$<-",
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.NONE,
            Type.ANY_VALUE_SEXP,
            Type.ANY_VALUE_SEXP,
            Type.ANY_VALUE_SEXP),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `$<-` not yet fully implemented");
            }));
  }

  // endregion

  // region rep

  private static void registerRep(InternalInterpreter interpreter) {
    // Generic: (*, dots) -+> V
    interpreter.registerExternal(
        "rep",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) {
                throw interpreter.fail("`rep` generic takes 2 arguments");
              }
              var value = args.getFirst();
              int times;
              if (args.get(1) instanceof Value.Sexp(var sexp) && sexp instanceof DotsListSXP dots) {
                if (dots.size() != 1) {
                  throw interpreter.fail("Mock `rep` dots must have exactly 1 value");
                }
                times = sexpToInt(dots.get(0).value(), interpreter, "rep");
              } else {
                throw interpreter.fail("`rep` generic second argument must be dots");
              }
              if (!(value instanceof Value.Sexp(var valueSexp))) {
                throw interpreter.fail("`rep` generic first argument must be an SEXP");
              }
              return new Value.Sexp(repScalarSexp(valueSexp, times, interpreter));
            }));

    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };

    // Scalar: (T, I) --> v(T) for T = L, I, R, S
    // (L, I) --> v(L)
    interpreter.registerExternal(
        "rep",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.LOGICAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var val = ((Value.Lgl) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new Logical[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.logical(res));
            }));
    // (I, I) --> v(I)
    interpreter.registerExternal(
        "rep",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              int val = ((Value.Int) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new int[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.integer(res));
            }));
    // (R, I) --> v(R)
    interpreter.registerExternal(
        "rep",
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.REAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double val = ((Value.Real) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new double[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.real(res));
            }));
    // (S, I) --> v(S)
    interpreter.registerExternal(
        "rep",
        sig(Type.SHARED_STRING_VECTOR, Effects.NONE, Type.STRING, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var val = ((Value.Str) args.getFirst()).value();
              int times = ((Value.Int) args.get(1)).value();
              var res = new String[times];
              Arrays.fill(res, val);
              return new Value.Sexp(SEXPs.string(res));
            }));

    // Vector: (v(T), v(I)) --> v(T) for T = L, I, R, S
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          "rep",
          sig(vecTypes[t], Effects.NONE, vecTypes[t], Type.SHARED_INTEGER_VECTOR),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                var timesVec = (IntSXP) args.get(1).box();
                // If timesVec is scalar, repeat whole vector that many times
                if (timesVec.size() == 1) {
                  int times = timesVec.get(0);
                  return new Value.Sexp(repVector(vector, times));
                }
                // Otherwise, repeat each element by corresponding times
                return new Value.Sexp(repVectorEach(vector, timesVec, interpreter));
              }));
    }
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

  // region sum

  private static void registerSum(InternalInterpreter interpreter) {
    // v0: (dots, *) -+> V
    interpreter.registerExternal(
        "sum",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2) {
                throw interpreter.fail("`sum` generic takes 2 arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`sum` first argument must be dots");
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
        sig(Type.INTEGER, Effects.NONE, Type.SHARED_LOGICAL_VECTOR, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (LglSXP) args.getFirst().box();
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
        sig(Type.INTEGER, Effects.NONE, Type.SHARED_INTEGER_VECTOR, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) args.getFirst().box();
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
        sig(Type.REAL, Effects.NONE, Type.SHARED_REAL_VECTOR, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) args.getFirst().box();
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

  // region unary math builtins

  private static void registerAbsBuiltin(InternalInterpreter interpreter) {
    // Generic: (*) -+> V
    interpreter.registerExternal(
        "abs",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`abs` generic takes 1 sexp-scalar number");
              }
              if (sexp.asScalarInteger().isPresent()) {
                return new Value.Sexp(SEXPs.integer(Math.abs(sexp.asScalarInteger().get())));
              } else if (sexp.asScalarReal().isPresent()) {
                return new Value.Sexp(SEXPs.real(Math.abs(sexp.asScalarReal().get())));
              }
              throw interpreter.fail("`abs` generic takes 1 scalar integer or real");
            }));
    // (I) --> I
    interpreter.registerExternal(
        "abs",
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Int(Math.abs(((Value.Int) args.getFirst()).value()))));
    // (R) --> R
    interpreter.registerExternal(
        "abs",
        sig(Type.REAL, Effects.NONE, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Real(Math.abs(((Value.Real) args.getFirst()).value()))));
    // (v(I)) --> v(I)
    interpreter.registerExternal(
        "abs",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.SHARED_INTEGER_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.integer(
                      IntStream.range(0, vec.size()).map(i -> Math.abs(vec.get(i))).toArray()));
            }));
    // (v(R)) --> v(R)
    interpreter.registerExternal(
        "abs",
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> Math.abs(vec.get(i)))
                          .toArray()));
            }));
  }

  private static void registerUnaryMath1ToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleUnaryOperator fn) {
    // Generic: (*) -+> V
    interpreter.registerExternal(
        name,
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`" + name + "` generic takes 1 sexp-scalar number");
              }
              double d = sexpToDouble(sexp, interpreter, name);
              return new Value.Sexp(SEXPs.real(fn.applyAsDouble(d)));
            }));
    // (I) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(fn.applyAsDouble(((Value.Int) args.getFirst()).value()))));
    // (R) --> R
    interpreter.registerExternal(
        name,
        sig(Type.REAL, Effects.NONE, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(fn.applyAsDouble(((Value.Real) args.getFirst()).value()))));
    // (v(I)) --> v(R)
    interpreter.registerExternal(
        name,
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.SHARED_INTEGER_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
    // (v(R)) --> v(R)
    interpreter.registerExternal(
        name,
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (RealSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, vec.size())
                          .mapToDouble(i -> fn.applyAsDouble(vec.get(i)))
                          .toArray()));
            }));
  }

  // endregion

  // region log

  private static void registerLog(InternalInterpreter interpreter) {
    // Generic: (*, *) -+> V
    interpreter.registerExternal(
        "log",
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.getFirst() instanceof Value.Sexp(var s1)
                      && args.get(1) instanceof Value.Sexp(var s2))) {
                throw interpreter.fail("`log` generic takes 2 sexp-scalar numbers");
              }
              double x = sexpToDouble(s1, interpreter, "log");
              double base = sexpToDouble(s2, interpreter, "log");
              return new Value.Sexp(SEXPs.real(Math.log(x) / Math.log(base)));
            }));
    // (I, R) --> R
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double x = ((Value.Int) args.getFirst()).value();
              double base = ((Value.Real) args.get(1)).value();
              return new Value.Real(Math.log(x) / Math.log(base));
            }));
    // (R, R) --> R
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              double x = ((Value.Real) args.getFirst()).value();
              double base = ((Value.Real) args.get(1)).value();
              return new Value.Real(Math.log(x) / Math.log(base));
            }));
    // (v(I), v(R)) --> v(R)
    interpreter.registerExternal(
        "log",
        sig(
            Type.SHARED_REAL_VECTOR,
            Effects.NONE,
            Type.SHARED_INTEGER_VECTOR,
            Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (IntSXP) args.getFirst().box();
              var bv = (RealSXP) args.get(1).box();
              int len = Math.max(xv.size(), bv.size());
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, len)
                          .mapToDouble(
                              i ->
                                  Math.log(xv.get(i % xv.size())) / Math.log(bv.get(i % bv.size())))
                          .toArray()));
            }));
    // (v(R), v(R)) --> v(R)
    interpreter.registerExternal(
        "log",
        sig(
            Type.SHARED_REAL_VECTOR,
            Effects.NONE,
            Type.SHARED_REAL_VECTOR,
            Type.SHARED_REAL_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (RealSXP) args.getFirst().box();
              var bv = (RealSXP) args.get(1).box();
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
    // v0-1: (*) -+> V
    interpreter.registerExternal(
        "length",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`length` generic takes 1 sexp argument");
              }
              if (sexp instanceof ListOrVectorSXP<?> vector) {
                return new Value.Sexp(SEXPs.integer(vector.size()));
              }
              return new Value.Sexp(SEXPs.integer(1));
            }));
    // v2: (V) --> I
    interpreter.registerExternal(
        "length",
        sig(Type.INTEGER, Effects.NONE, Type.ANY_VALUE_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
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
        sig(Type.SHARED_INTEGER_VECTOR, Effects.REFLECT, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`seq_along` generic takes 1 sexp argument");
              }
              int len = sexp instanceof ListOrVectorSXP<?> v ? v.size() : 1;
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, len).toArray()));
            }));
    // v1: (V) --> I  (returns length, used as loop bound)
    interpreter.registerExternal(
        "seq_along",
        sig(Type.INTEGER, Effects.NONE, Type.ANY_VALUE_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              int len = sexp instanceof ListOrVectorSXP<?> v ? v.size() : 1;
              return new Value.Int(len);
            }));
  }

  private static void registerSeqLen(InternalInterpreter interpreter) {
    // v0: (*) -+> v(I)
    interpreter.registerExternal(
        "seq_len",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.REFLECT, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`seq_len` generic takes 1 sexp argument");
              }
              int n = sexpToInt(sexp, interpreter, "seq_len");
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, n).toArray()));
            }));
    // v1: (I) --> I
    interpreter.registerExternal(
        "seq_len",
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER),
        ExternalVersion.strict((_, _, args, _) -> args.getFirst()));
    // v2: (v(I)) --> v(I)
    interpreter.registerExternal(
        "seq_len",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.SHARED_INTEGER_VECTOR),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) args.getFirst().box();
              int n = vec.get(0);
              return new Value.Sexp(SEXPs.integer(IntStream.rangeClosed(1, n).toArray()));
            }));
  }

  // endregion

  // region type conversion

  private static void registerAsInteger(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> v(I)
    interpreter.registerExternal(
        "as.integer",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.REFLECT, Type.ANY_SEXP, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.integer` generic takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.integer(sexpToInt(sexp, interpreter, "as.integer")));
            }));
    // v1: (V, miss) --> I
    interpreter.registerExternal(
        "as.integer",
        sig(Type.INTEGER, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Int(sexpToInt(sexp, interpreter, "as.integer"));
            }));
  }

  private static void registerAsLogical(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> v(L)
    interpreter.registerExternal(
        "as.logical",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.REFLECT, Type.ANY_SEXP, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.logical` generic takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.logical(sexpToLogical(sexp, interpreter, "as.logical")));
            }));
    // v1: (V, miss) --> v(L)
    interpreter.registerExternal(
        "as.logical",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Sexp(SEXPs.logical(sexpToLogical(sexp, interpreter, "as.logical")));
            }));
    // v2: (V, miss) --> L
    interpreter.registerExternal(
        "as.logical",
        sig(Type.LOGICAL, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Lgl(sexpToLogical(sexp, interpreter, "as.logical"));
            }));
    // v3: (V, miss) --> B
    interpreter.registerExternal(
        "as.logical",
        sig(Type.BOOLEAN, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              var l = sexpToLogical(sexp, interpreter, "as.logical");
              return new Value.Bool(l == Logical.TRUE);
            }));
    // v3: (L, miss) --> B
    interpreter.registerExternal(
        "as.logical",
        sig(Type.BOOLEAN, Effects.NONE, Type.LOGICAL, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (!(args.getFirst() instanceof Value.Lgl(var lgl))) {
                throw interpreter.fail("`as.logical` first argument must be logical");
              }
              return new Value.Bool(lgl == Logical.TRUE);
            }));
  }

  private static void registerAsCharacter(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> S
    interpreter.registerExternal(
        "as.character",
        sig(Type.SHARED_STRING_VECTOR, Effects.REFLECT, Type.ANY_SEXP, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`as.character` generic takes (sexp, dots)");
              }
              return new Value.Sexp(SEXPs.string(sexpToString(sexp)));
            }));
    // v1: (V, miss) --> S
    interpreter.registerExternal(
        "as.character",
        sig(Type.STRING, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Str(sexpToString(sexp));
            }));
  }

  // endregion

  // region missing

  private static void registerMissing(InternalInterpreter interpreter) {
    var missingVal = new Value.Sexp(SEXPs.MISSING_ARG);
    // v0: (*) --> v(L)
    interpreter.registerExternal(
        "missing",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              boolean isMissing = args.getFirst().equals(missingVal);
              return new Value.Sexp(SEXPs.logical(isMissing));
            }));
    // v1: (*) --> B
    interpreter.registerExternal(
        "missing",
        sig(Type.BOOLEAN, Effects.NONE, Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              boolean isMissing = args.getFirst().equals(missingVal);
              return new Value.Bool(isMissing);
            }));
  }

  // endregion

  // region error handling

  private static void registerStop(InternalInterpreter interpreter) {
    interpreter.registerExternal(
        "stop",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS, Type.ANY_SEXP, Type.ANY_SEXP),
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
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.REFLECT,
            Type.DOTS,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
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
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.REFLECT,
            Type.DOTS,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
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

  // region print

  private static void registerPrint(InternalInterpreter interpreter) {
    // v0: (*, dots) -+> V
    interpreter.registerExternal(
        "print",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.DOTS),
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
    // v1-v4: (v(T), miss) --> v(T) for T = L, I, R, S
    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          "print",
          sig(vecTypes[t], Effects.NONE, vecTypes[t], Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var sexp = args.getFirst().box();
                System.out.println(sexp);
                return args.getFirst();
              }));
    }
  }

  // endregion

  // region unclass

  private static void registerUnclass(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "unclass",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              // Strip class attribute - for now just return as-is
              return args.getFirst();
            }));
    // v1: (V) --> V
    interpreter.registerExternal(
        "unclass",
        sig(Type.ANY_VALUE_SEXP, Effects.NONE, Type.ANY_VALUE_SEXP),
        ExternalVersion.strict((_, _, args, _) -> args.getFirst()));
  }

  // endregion

  // region is.* type checking

  private static void registerIsTypeBuiltin(
      InternalInterpreter interpreter, String name, Predicate<SEXP> check, boolean hasModeArg) {
    // v0: generic --> v(L)
    if (hasModeArg) {
      // is.vector: (*, miss) -+> v(L)
      interpreter.registerExternal(
          name,
          sig(Type.SHARED_LOGICAL_VECTOR, Effects.REFLECT, Type.ANY_SEXP, Type.ANY_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                if (args.size() != 2) {
                  throw interpreter.fail("`" + name + "` takes 2 arguments");
                }
                SEXP sexp;
                if (args.getFirst() instanceof Value.Sexp(var s)) {
                  sexp = s;
                } else {
                  sexp = valueToSexp(args.getFirst());
                }
                return new Value.Sexp(SEXPs.logical(check.test(sexp)));
              }));
    } else {
      // Other is.*: (*) -+> v(L)
      interpreter.registerExternal(
          name,
          sig(Type.SHARED_LOGICAL_VECTOR, Effects.REFLECT, Type.ANY_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                if (args.size() != 1) {
                  throw interpreter.fail("`" + name + "` takes 1 argument");
                }
                SEXP sexp;
                if (args.getFirst() instanceof Value.Sexp(var s)) {
                  sexp = s;
                } else {
                  sexp = valueToSexp(args.getFirst());
                }
                return new Value.Sexp(SEXPs.logical(check.test(sexp)));
              }));
    }

    // v1: for is.vector: (V, miss) --> v(L); for others: (V) --> B
    if (hasModeArg) {
      // is.vector v1: (V, miss) --> v(L)
      interpreter.registerExternal(
          name,
          sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var sexp = args.getFirst().box();
                return new Value.Sexp(SEXPs.logical(check.test(sexp)));
              }));
    } else {
      // Other is.* v1: (V) --> B
      interpreter.registerExternal(
          name,
          sig(Type.BOOLEAN, Effects.NONE, Type.ANY_VALUE_SEXP),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var sexp = args.getFirst().box();
                return new Value.Bool(check.test(sexp));
              }));
    }
  }

  // endregion

  // region inherits

  private static void registerInherits(InternalInterpreter interpreter) {
    // v0: (*, *, *) -+> v(L)
    interpreter.registerExternal(
        "inherits",
        sig(
            Type.SHARED_LOGICAL_VECTOR,
            Effects.REFLECT,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              // Simplified: no class support, always FALSE
              return new Value.Sexp(SEXPs.logical(false));
            }));
    // v1: (V, S, B) --> B
    interpreter.registerExternal(
        "inherits",
        sig(Type.BOOLEAN, Effects.NONE, Type.ANY_VALUE_SEXP, Type.STRING, Type.BOOLEAN),
        ExternalVersion.strict((_, _, _, _) -> new Value.Bool(false)));
  }

  // endregion

  // region attr

  private static void registerAttr(InternalInterpreter interpreter) {
    // v0: (*, *, *, *) -+> V
    interpreter.registerExternal(
        "attr",
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.REFLECT,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `attr` not yet fully implemented");
            }));
    // v1: (V, S, miss, miss) --> V
    interpreter.registerExternal(
        "attr",
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.NONE,
            Type.ANY_VALUE_SEXP,
            Type.STRING,
            Type.MISSING,
            Type.MISSING),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `attr` not yet fully implemented");
            }));
  }

  // endregion

  // region c

  private static void registerC(InternalInterpreter interpreter) {
    // v0: (dots) --> V
    interpreter.registerExternal(
        "c",
        sig(Type.ANY_VALUE_SEXP, Effects.NONE, Type.DOTS),
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

  private static Value naToFalse0(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`naToFalse` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarLogical().isPresent())) {
      throw interpreter.fail("`naToFalse< v(L) --> B >` requires a scalar logical SEXP");
    }
    return new Value.Bool(sexp.asScalarLogical().get() == Logical.TRUE);
  }

  private static Value naToFalse1(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`naToFalse` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Lgl(var sexp))) {
      throw interpreter.fail("`naToFalse< L --> B >` requires a logical argument");
    }
    return new Value.Bool(sexp == Logical.TRUE);
  }

  // box: L → v1(L)
  private static Value boxLogical(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`box` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Lgl(var lgl))) {
      throw interpreter.fail("`box< L --> v1(L) >` requires a logical scalar argument");
    }
    return new Value.Sexp(SEXPs.logical(lgl));
  }

  // box: I → v1(I)
  private static Value boxInteger(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`box` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Int(var i))) {
      throw interpreter.fail("`box< I --> v1(I) >` requires an integer scalar argument");
    }
    return new Value.Sexp(SEXPs.integer(i));
  }

  // box: R → v1(R)
  private static Value boxReal(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`box` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Real(var r))) {
      throw interpreter.fail("`box< R --> v1(R) >` requires a real scalar argument");
    }
    return new Value.Sexp(SEXPs.real(r));
  }

  // box: S → v1(S)
  private static Value boxString(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`box` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Str(var s))) {
      throw interpreter.fail("`box< S --> v1(S) >` requires a string scalar argument");
    }
    return new Value.Sexp(SEXPs.string(s));
  }

  // unbox: v1(L) → L
  private static Value unboxLogical(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`unbox` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarLogical().isPresent())) {
      throw interpreter.fail("`unbox< v1(L) --> L >` requires a scalar logical SEXP");
    }
    return new Value.Lgl(sexp.asScalarLogical().get());
  }

  // unbox: v1(I) → I
  private static Value unboxInteger(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`unbox` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarInteger().isPresent())) {
      throw interpreter.fail("`unbox< v1(I) --> I >` requires a scalar integer SEXP");
    }
    return new Value.Int(sexp.asScalarInteger().get());
  }

  // unbox: v1(R) → R
  private static Value unboxReal(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`unbox` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarReal().isPresent())) {
      throw interpreter.fail("`unbox< v1(R) --> R >` requires a scalar real SEXP");
    }
    return new Value.Real(sexp.asScalarReal().get());
  }

  // unbox: v1(S) → S
  private static Value unboxString(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`unbox` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarString().isPresent())) {
      throw interpreter.fail("`unbox< v1(S) --> S >` requires a scalar string SEXP");
    }
    return new Value.Str(sexp.asScalarString().get());
  }

  // endregion

  // region helper methods

  private static Value sexpToValueOfType(
      SEXP sexp, SEXPType type, InternalInterpreter interpreter, String ctx) {
    return switch (type) {
      case REAL -> new Value.Real(sexpToDouble(sexp, interpreter, ctx));
      case INT -> new Value.Int(sexpToInt(sexp, interpreter, ctx));
      case LGL -> new Value.Lgl(sexpToLogical(sexp, interpreter, ctx));
      case STR -> new Value.Str(sexpToString(sexp));
      default -> throw interpreter.failUnsupported("Unsupported target type for " + ctx);
    };
  }

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
