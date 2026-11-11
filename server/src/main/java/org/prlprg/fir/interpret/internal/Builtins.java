package org.prlprg.fir.interpret.internal;

import com.google.common.collect.ImmutableList;
import java.math.BigDecimal;
import java.math.MathContext;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.function.BiFunction;
import java.util.function.DoubleBinaryOperator;
import java.util.function.DoubleUnaryOperator;
import java.util.function.IntBinaryOperator;
import java.util.function.Predicate;
import java.util.stream.IntStream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.RMath;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BuiltinOrSpecialSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RawSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;
import org.prlprg.sexp.VectorSXP;

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

  private static Type[] borrowed(Type[] types) {
    return Arrays.stream(types).map(t -> t.withOwnership(Ownership.BORROWED)).toArray(Type[]::new);
  }

  /// Signature of a non-generic `[<-` (`numArgs == 4`, which takes a trailing missing `...`) or
  /// `[[<-` (`numArgs == 3`) version.
  private static Signature subAssignSig(
      Type returnType, int numArgs, Type x, Type i, Type valueType) {
    return numArgs == 4
        ? sig(returnType, Effects.IMPURE, x, i, valueType, Type.MISSING)
        : sig(returnType, Effects.IMPURE, x, i, valueType);
  }

  /// The [GlobalModules#BASE] copy of a closure in GNU-R's base environment, which is what a
  /// dynamic call reaches. Its [GlobalModules#BUILTINS] copy (if any) is the `.Internal` it calls,
  /// whose parameters differ.
  private static Function baseFunction(String name) {
    return Objects.requireNonNull(GlobalModules.BASE.localFunction(Variable.named(name)));
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
    // Only the generic versions (`builtins.fir` declares no others)
    registerGenericBinaryMathBuiltin(interpreter, "%%", RMath::fmod, null);
    registerGenericBinaryMathBuiltin(interpreter, "%/%", RMath::idiv, null);

    // Binary math operators, to real
    registerBinaryMathToRealBuiltin(interpreter, "/", (a, b) -> a / b);
    registerBinaryMathToRealBuiltin(interpreter, "^", RMath::pow);

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

    // Bitwise logical operations
    registerBitwiseNot(interpreter);
    registerBitwiseBinaryBuiltin(interpreter, "bitwAnd", (a, b) -> a & b);
    registerBitwiseBinaryBuiltin(interpreter, "bitwOr", (a, b) -> a | b);
    registerBitwiseBinaryBuiltin(interpreter, "bitwXor", (a, b) -> a ^ b);
    registerBitwiseShiftBuiltin(interpreter, "bitwShiftL", (a, n) -> a << n);
    registerBitwiseShiftBuiltin(interpreter, "bitwShiftR", (a, n) -> a >>> n);

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

    // vector
    registerVector(interpreter);

    // sum, max
    registerSum(interpreter);
    registerMax(interpreter);

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
    registerUnaryMath1ToRealBuiltin(interpreter, "gamma", Builtins::gamma, false);
    registerUnaryMath1ToRealBuiltin(interpreter, "digamma", Builtins::digamma, false);
    registerUnaryMath1ToRealBuiltin(interpreter, "trigamma", Builtins::trigamma, false);
    registerUnaryMath1ToRealBuiltin(interpreter, "cospi", x -> Math.cos(x * Math.PI), false);
    registerUnaryMath1ToRealBuiltin(interpreter, "sinpi", x -> Math.sin(x * Math.PI), false);
    registerUnaryMath1ToRealBuiltin(interpreter, "tanpi", x -> Math.tan(x * Math.PI), false);

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

    // print, cat
    registerPrint(interpreter);
    registerCat(interpreter);

    // is.na, list, lapply, seq
    registerIsNa(interpreter);
    registerList(interpreter);
    registerLapply(interpreter);
    registerSeq(interpreter);

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
    registerIsTypeBuiltin(interpreter, "is.null", sexp -> sexp instanceof NilSXP, false);
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

    // attr, names<-
    registerAttr(interpreter);
    registerNamesAssign(interpreter);

    // c
    registerC(interpreter);

    // Reflective environment access
    registerSubstitute(interpreter);
    registerSysFrame(interpreter);

    // Intrinsics
    interpreter.registerExternal(
        "setInvisible", sig(Type.ANY_VALUE_SEXP, Effects.NONE), Builtins::setInvisible);
    interpreter.registerExternal(
        "setVisible", sig(Type.ANY_VALUE_SEXP, Effects.NONE), Builtins::setVisible);
    interpreter.registerExternal(
        "checkMissing",
        sig(Type.ANY_VALUE_SEXP, Effects.IMPURE, Type.ANY_SEXP),
        Builtins::checkMissing);
    interpreter.registerExternal(
        "toForSeq",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_VALUE_SEXP),
        Builtins::toForSeq);
    interpreter.registerExternal(
        "naToFalse", sig(Type.BOOLEAN, Effects.NONE, Type.BOXED_LOGICAL), Builtins::naToFalse0);
    interpreter.registerExternal(
        "naToFalse", sig(Type.BOOLEAN, Effects.NONE, Type.LOGICAL), Builtins::naToFalse1);
    interpreter.registerExternal(
        "naToTrue", sig(Type.BOOLEAN, Effects.NONE, Type.BOXED_LOGICAL), Builtins::naToTrue0);
    interpreter.registerExternal(
        "naToTrue", sig(Type.BOOLEAN, Effects.NONE, Type.LOGICAL), Builtins::naToTrue1);

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
    registerGenericBinaryMathBuiltin(interpreter, name, fn, unaryFn);

    // Scalar binary: (I, I) --> I
    interpreter.registerExternal(
        name,
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Int(intArith(interpreter, fn, a, b));
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
              var a = RMath.fromInt(((Value.Int) args.getFirst()).value());
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
              var b = RMath.fromInt(((Value.Int) args.get(1)).value());
              return new Value.Real(fn.applyAsDouble(a, b));
            }));

    // Scalar unary (only for +/-): (I, miss) --> I, (R, miss) --> R
    if (unaryFn != null) {
      interpreter.registerExternal(
          name,
          sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) ->
                  new Value.Int(intArith1(unaryFn, ((Value.Int) args.getFirst()).value()))));
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

  /// Registers the generic version `(*, *) -+> V` of a binary math operator that keeps integers
  /// (`unaryFn` is its unary version, if it has one). It covers v0, vector binary (v1-v4), and
  /// unary boxed (v9-v11 for +/-).
  private static void registerGenericBinaryMathBuiltin(
      InternalInterpreter interpreter,
      String name,
      DoubleBinaryOperator fn,
      @Nullable DoubleUnaryOperator unaryFn) {
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
  }

  /// Apply binary math op on SEXPs, preserving int type (for +, -, *, %%, %/%)
  private static SEXP applyBinaryPreservingInt(
      SEXP s1, SEXP s2, DoubleBinaryOperator fn, InternalInterpreter interpreter, String ctx) {
    // Try scalar first
    if (s1.asScalarInteger().isPresent() && s2.asScalarInteger().isPresent()) {
      return SEXPs.integer(
          intArith(interpreter, fn, s1.asScalarInteger().get(), s2.asScalarInteger().get()));
    } else if (s1.asScalarReal().isPresent() && s2.asScalarReal().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s1.asScalarReal().get(), s2.asScalarReal().get()));
    } else if (s1.asScalarInteger().isPresent() && s2.asScalarReal().isPresent()) {
      return SEXPs.real(
          fn.applyAsDouble(RMath.fromInt(s1.asScalarInteger().get()), s2.asScalarReal().get()));
    } else if (s1.asScalarReal().isPresent() && s2.asScalarInteger().isPresent()) {
      return SEXPs.real(
          fn.applyAsDouble(s1.asScalarReal().get(), RMath.fromInt(s2.asScalarInteger().get())));
    }
    // Vector operations
    if (s1 instanceof VectorSXP<?> v1
        && s2 instanceof VectorSXP<?> v2
        && (v1.isEmpty()
            || v2.isEmpty()
            || Math.max(v1.size(), v2.size()) % Math.min(v1.size(), v2.size()) != 0)) {
      throw interpreter.failUnsupported(
          "Mock `" + ctx + "` only recycles a non-empty operand whose length divides the other's");
    }
    switch (s1) {
      case IntSXP i1 when s2 instanceof IntSXP i2 -> {
        int len = Math.max(i1.size(), i2.size());
        return SEXPs.integer(
            IntStream.range(0, len)
                .map(i -> intArith(interpreter, fn, i1.get(i % i1.size()), i2.get(i % i2.size())))
                .toArray());
      }
      case RealSXP r1 when s2 instanceof RealSXP r2 -> {
        int len = Math.max(r1.size(), r2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(i -> fn.applyAsDouble(r1.get(i % r1.size()), r2.get(i % r2.size())))
                .toArray());
      }
      case LglSXP l1 when s2 instanceof LglSXP l2 -> {
        int len = Math.max(l1.size(), l2.size());
        return SEXPs.integer(
            IntStream.range(0, len)
                .map(
                    i ->
                        intArith(
                            interpreter,
                            fn,
                            l1.get(i % l1.size()).toInt(),
                            l2.get(i % l2.size()).toInt()))
                .toArray());
      }
      case IntSXP i1 when s2 instanceof RealSXP r2 -> {
        int len = Math.max(i1.size(), r2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(
                    i ->
                        fn.applyAsDouble(
                            RMath.fromInt(i1.get(i % i1.size())), r2.get(i % r2.size())))
                .toArray());
      }
      case IntSXP i1 when s2 instanceof LglSXP l2 -> {
        int len = Math.max(i1.size(), l2.size());
        return SEXPs.integer(
            IntStream.range(0, len)
                .map(
                    i ->
                        intArith(
                            interpreter, fn, i1.get(i % i1.size()), l2.get(i % l2.size()).toInt()))
                .toArray());
      }
      case RealSXP r1 when s2 instanceof IntSXP i2 -> {
        int len = Math.max(r1.size(), i2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(
                    i ->
                        fn.applyAsDouble(
                            r1.get(i % r1.size()), RMath.fromInt(i2.get(i % i2.size()))))
                .toArray());
      }
      case RealSXP r1 when s2 instanceof LglSXP l2 -> {
        int len = Math.max(r1.size(), l2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(
                    i ->
                        fn.applyAsDouble(
                            r1.get(i % r1.size()), RMath.fromInt(l2.get(i % l2.size()).toInt())))
                .toArray());
      }
      case LglSXP l1 when s2 instanceof IntSXP i2 -> {
        int len = Math.max(l1.size(), i2.size());
        return SEXPs.integer(
            IntStream.range(0, len)
                .map(
                    i ->
                        intArith(
                            interpreter, fn, l1.get(i % l1.size()).toInt(), i2.get(i % i2.size())))
                .toArray());
      }
      case LglSXP l1 when s2 instanceof RealSXP r2 -> {
        int len = Math.max(l1.size(), r2.size());
        return SEXPs.real(
            IntStream.range(0, len)
                .mapToDouble(
                    i ->
                        fn.applyAsDouble(
                            RMath.fromInt(l1.get(i % l1.size()).toInt()), r2.get(i % r2.size())))
                .toArray());
      }
      default -> {}
    }
    throw interpreter.failUnsupported("`" + ctx + "` generic requires logical or numeric args");
  }

  /// Apply unary math op on SEXP, preserving int type (for +, -)
  private static SEXP applyUnaryPreservingInt(
      SEXP s, DoubleUnaryOperator fn, InternalInterpreter interpreter, String ctx) {
    // Try scalar first
    if (s.asScalarInteger().isPresent()) {
      return SEXPs.integer(intArith1(fn, s.asScalarInteger().get()));
    } else if (s.asScalarReal().isPresent()) {
      return SEXPs.real(fn.applyAsDouble(s.asScalarReal().get()));
    }
    // Vector operations
    return switch (s) {
      case IntSXP iv ->
          SEXPs.integer(IntStream.range(0, iv.size()).map(i -> intArith1(fn, iv.get(i))).toArray());
      case RealSXP rv ->
          SEXPs.real(
              IntStream.range(0, rv.size())
                  .mapToDouble(i -> fn.applyAsDouble(rv.get(i)))
                  .toArray());
      case LglSXP lv ->
          SEXPs.integer(
              IntStream.range(0, lv.size()).map(i -> intArith1(fn, lv.get(i).toInt())).toArray());
      default ->
          throw interpreter.failUnsupported(
              "`" + ctx + "` unary requires a logical or numeric arg");
    };
  }

  /// GNU-R's integer arithmetic: `NA` if an argument is `NA` or the result is `NaN`. GNU-R warns
  /// if the result doesn't fit, which this doesn't implement.
  private static int intArith(
      InternalInterpreter interpreter, DoubleBinaryOperator fn, int a, int b) {
    if (a == Constants.NA_INT || b == Constants.NA_INT) {
      return Constants.NA_INT;
    }
    var result = fn.applyAsDouble(a, b);
    if (Math.abs(result) > Integer.MAX_VALUE) {
      throw interpreter.failUnsupported("Mock integer arithmetic overflows (GNU-R warns)");
    }
    return intResult(result);
  }

  /// [#intArith(InternalInterpreter, DoubleBinaryOperator, int, int)] for a unary operation.
  private static int intArith1(DoubleUnaryOperator fn, int a) {
    return a == Constants.NA_INT ? Constants.NA_INT : intResult(fn.applyAsDouble(a));
  }

  private static int intResult(double result) {
    return Double.isNaN(result) || Math.abs(result) > Integer.MAX_VALUE
        ? Constants.NA_INT
        : (int) result;
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
              var a = RMath.fromInt(((Value.Int) args.getFirst()).value());
              var b = RMath.fromInt(((Value.Int) args.get(1)).value());
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
              var a = RMath.fromInt(((Value.Int) args.getFirst()).value());
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
              var b = RMath.fromInt(((Value.Int) args.get(1)).value());
              return new Value.Real(fn.applyAsDouble(a, b));
            }));
  }

  // endregion

  // region comparison builtins

  /// GNU-R's scalar comparison: `NA` if an argument is `NA` or `NaN`.
  private static Logical compare(DoubleBinaryPredicate pred, double a, double b) {
    return Double.isNaN(a) || Double.isNaN(b)
        ? Logical.NA
        : pred.test(a, b) ? Logical.TRUE : Logical.FALSE;
  }

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
              return new Value.Sexp(SEXPs.logical(compare(pred, a, b)));
            }));
    // Scalar --> L: (I, I) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = RMath.fromInt(((Value.Int) args.getFirst()).value());
              var b = RMath.fromInt(((Value.Int) args.get(1)).value());
              return new Value.Lgl(compare(pred, a, b));
            }));
    // Scalar --> L: (R, R) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(compare(pred, a, b));
            }));
    // Scalar --> L: (I, R) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = RMath.fromInt(((Value.Int) args.getFirst()).value());
              var b = ((Value.Real) args.get(1)).value();
              return new Value.Lgl(compare(pred, a, b));
            }));
    // Scalar --> L: (R, I) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, Type.REAL, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Real) args.getFirst()).value();
              var b = RMath.fromInt(((Value.Int) args.get(1)).value());
              return new Value.Lgl(compare(pred, a, b));
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
                return new Value.Sexp(
                    SEXPs.logical(compare((a, b) -> (a == b) == isEqual, d1, d2)));
              }
              // Try string comparison
              if (s1.asScalarString().isPresent() && s2.asScalarString().isPresent()) {
                var a = s1.asScalarString().get();
                var b = s2.asScalarString().get();
                if (Constants.isNaString(a) || Constants.isNaString(b)) {
                  return new Value.Sexp(SEXPs.logical(Logical.NA));
                }
                return new Value.Sexp(SEXPs.logical(isEqual == a.equals(b)));
              }
              throw interpreter.failUnsupported(
                  "Mock `" + name + "` not implemented for these argument types");
            }));
    // (*, *) --> B | L
    registerBinaryBoolAndLogical(
        interpreter,
        name,
        Type.ANY_SEXP,
        (lhs, rhs) -> {
          boolean eq = lhs.box() == rhs.box();
          return isEqual == eq ? Logical.TRUE : Logical.FALSE;
        });
    // (L, L) --> B | L
    registerBinaryBoolAndLogical(
        interpreter,
        name,
        Type.LOGICAL,
        (lhs, rhs) -> {
          var a = ((Value.Lgl) lhs).value();
          var b = ((Value.Lgl) rhs).value();
          boolean eq = a == b;
          return a == Logical.NA || b == Logical.NA
              ? Logical.NA
              : isEqual == eq ? Logical.TRUE : Logical.FALSE;
        });
    // (I, I) --> B | L
    registerBinaryBoolAndLogical(
        interpreter,
        name,
        Type.INTEGER,
        (lhs, rhs) -> {
          var a = ((Value.Int) lhs).value();
          var b = ((Value.Int) rhs).value();
          boolean eq = a == b;
          return a == Constants.NA_INT || b == Constants.NA_INT
              ? Logical.NA
              : isEqual == eq ? Logical.TRUE : Logical.FALSE;
        });
    // (R, R) --> B | L
    registerBinaryBoolAndLogical(
        interpreter,
        name,
        Type.REAL,
        (lhs, rhs) -> {
          var a = ((Value.Real) lhs).value();
          var b = ((Value.Real) rhs).value();
          boolean eq = a == b;
          return Double.isNaN(a) || Double.isNaN(b)
              ? Logical.NA
              : isEqual == eq ? Logical.TRUE : Logical.FALSE;
        });
    // (S, S) --> B | L
    registerBinaryBoolAndLogical(
        interpreter,
        name,
        Type.STRING,
        (lhs, rhs) -> {
          var a = ((Value.Str) lhs).value();
          var b = ((Value.Str) rhs).value();
          boolean eq = a.equals(b);
          return Constants.isNaString(a) || Constants.isNaString(b)
              ? Logical.NA
              : isEqual == eq ? Logical.TRUE : Logical.FALSE;
        });
  }

  private static void registerBinaryBoolAndLogical(
      InternalInterpreter interpreter,
      String name,
      Type arg,
      BiFunction<Value, Value, Logical> pred) {
    // (T, T) --> B
    interpreter.registerExternal(
        name,
        sig(Type.BOOLEAN, Effects.NONE, arg, arg),
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Bool(pred.apply(args.getFirst(), args.get(1)) == Logical.TRUE)));
    // (T, T) --> L
    interpreter.registerExternal(
        name,
        sig(Type.LOGICAL, Effects.NONE, arg, arg),
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Lgl(pred.apply(args.getFirst(), args.get(1)))));
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

  // region bitwise builtins

  private static void registerBitwiseNot(InternalInterpreter interpreter) {
    // Generic: (*) -+> V
    interpreter.registerExternal(
        "bitwNot",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || !(args.getFirst() instanceof Value.Sexp(var sexp))) {
                throw interpreter.fail("`bitwNot` generic takes 1 sexp");
              }
              var a = bitwiseOperand(sexp, interpreter, "bitwNot");
              return new Value.Sexp(SEXPs.integer(bitwiseNot(a)));
            }));
    // (I) --> I
    interpreter.registerExternal(
        "bitwNot",
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Int(bitwiseNot(((Value.Int) args.getFirst()).value()))));
  }

  private static void registerBitwiseBinaryBuiltin(
      InternalInterpreter interpreter, String name, IntBinaryOperator op) {
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
              var a = bitwiseOperand(s1, interpreter, name);
              var b = bitwiseOperand(s2, interpreter, name);
              return new Value.Sexp(SEXPs.integer(bitwiseBinary(a, b, op)));
            }));
    // (I, I) --> I
    interpreter.registerExternal(
        name,
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var b = ((Value.Int) args.get(1)).value();
              return new Value.Int(bitwiseBinary(a, b, op));
            }));
  }

  private static void registerBitwiseShiftBuiltin(
      InternalInterpreter interpreter, String name, IntBinaryOperator op) {
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
              var a = bitwiseOperand(s1, interpreter, name);
              var n = sexpToInt(s2, interpreter, name);
              return new Value.Sexp(SEXPs.integer(bitwiseShift(a, n, op)));
            }));
    // (I, I) --> I
    interpreter.registerExternal(
        name,
        sig(Type.INTEGER, Effects.NONE, Type.INTEGER, Type.INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var a = ((Value.Int) args.getFirst()).value();
              var n = ((Value.Int) args.get(1)).value();
              return new Value.Int(bitwiseShift(a, n, op));
            }));
  }

  /// `~a`, propagating `NA`.
  private static int bitwiseNot(int a) {
    return a == Constants.NA_INT ? Constants.NA_INT : ~a;
  }

  /// Bitwise binary op, propagating `NA`.
  /// An operand of a generic bitwise builtin: GNU-R rejects a logical one, and warns about a real
  /// one that isn't an integer.
  private static int bitwiseOperand(SEXP sexp, InternalInterpreter interpreter, String name) {
    if (sexp instanceof LglSXP) {
      throw interpreter.fail("'a' and 'b' must have the same type");
    }
    var real = sexp.asScalarReal();
    if (real.isPresent()
        && !Double.isNaN(real.get())
        && !(Math.abs(real.get()) <= Integer.MAX_VALUE)) {
      throw interpreter.failUnsupported("Mock `" + name + "` of a real outside the integers");
    }
    return sexpToInt(sexp, interpreter, name);
  }

  private static int bitwiseBinary(int a, int b, IntBinaryOperator op) {
    return a == Constants.NA_INT || b == Constants.NA_INT ? Constants.NA_INT : op.applyAsInt(a, b);
  }

  /// Bitwise shift, propagating `NA` and treating an out-of-range shift count as `NA`.
  private static int bitwiseShift(int a, int n, IntBinaryOperator op) {
    return a == Constants.NA_INT || n < 0 || n > 31 ? Constants.NA_INT : op.applyAsInt(a, n);
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
    // `[` reads out of range as `NA` (`NULL` for lists), whereas `[[` errors.
    var outOfRangeIsNa = name.equals("[");
    // See `builtins.fir`: only `[` with a length-1 index can't fail.
    var scalarIndexEffects = outOfRangeIsNa ? Effects.NONE : Effects.IMPURE;

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
            (_, _, strictArgs, _) -> {
              var args = specialArgs(interpreter, strictArgs);
              if (args.size() != 4) {
                throw interpreter.fail("`" + name + "` generic takes 4 arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof ListOrVectorSXP<?> vector)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-vector objects");
              }
              if (vector instanceof NilSXP) {
                return new Value.Sexp(SEXPs.NULL);
              }
              // `drop` (of `[`) or `exact` (of `[[`); `FALSE` only changes a matrix subscript or a
              // partial name match.
              var option = args.get(3).box();
              var isDefault = option == SEXPs.MISSING_ARG || option.equals(SEXPs.TRUE);
              if (!isDefault && !option.equals(SEXPs.FALSE)) {
                throw interpreter.failUnsupported(
                    "Mock `"
                        + name
                        + "` only takes `"
                        + (outOfRangeIsNa ? "drop" : "exact")
                        + " = FALSE` with one subscript");
              }
              int idx = positionSubscript(interpreter, name, args.get(1).box());
              if (!outOfRangeIsNa && idx < 0 && idx != Constants.NA_INT) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` doesn't implement a negative subscript");
              }
              if (!outOfRangeIsNa && idx == Constants.NA_INT && vector instanceof VecSXP) {
                // `[[` of a list reads `NA` as `NULL`.
                return new Value.Sexp(SEXPs.NULL);
              }
              return new Value.Sexp(
                  subscriptLoad(interpreter, vector, idx - 1, outOfRangeIsNa).box());
            }));
    // v5-9: (v(T)b, I, miss, miss) --> T for T = L, I, R, S. `[` with a length-1 index can't fail
    // (out of range reads as `NA`), so it's pure; `[[` fails, so it isn't (see `builtins.fir`).
    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    Type[] borrowedVecTypes = borrowed(vecTypes);
    Type[] scalarTypes = {Type.LOGICAL, Type.INTEGER, Type.REAL, Type.STRING};
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          name,
          sig(
              scalarTypes[t],
              scalarIndexEffects,
              borrowedVecTypes[t],
              Type.INTEGER,
              Type.MISSING,
              Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                int idx = ((Value.Int) args.get(1)).value();
                return subscriptLoad(interpreter, vector, idx - 1, outOfRangeIsNa);
              }));
    }
    // The real-index versions coerce and forward, which is what GNU-R does with a real subscript.
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          name,
          sig(
              scalarTypes[t],
              scalarIndexEffects,
              borrowedVecTypes[t],
              Type.REAL,
              Type.MISSING,
              Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                int idx = realToInt(((Value.Real) args.get(1)).value());
                return subscriptLoad(interpreter, vector, idx - 1, outOfRangeIsNa);
              }));
    }

    // v1-4: (v(T)b, v(I), miss, miss) --> v(T) for T = L, I, R, S, and the real-index versions,
    // whose indices this coerces up front.
    for (var indexType : List.of(Type.SHARED_INTEGER_VECTOR, Type.SHARED_REAL_VECTOR)) {
      for (int t = 0; t < 4; t++) {
        interpreter.registerExternal(
            name,
            sig(
                vecTypes[t],
                Effects.IMPURE,
                borrowedVecTypes[t],
                indexType,
                Type.MISSING,
                Type.MISSING),
            ExternalVersion.strict(
                (_, _, args, _) -> {
                  var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                  var indices = toIntegerIndices(args.get(1).box(), interpreter, name);
                  // For vector indexing, build result by loading each index
                  if (indices.size() == 1) {
                    return subscriptLoad(interpreter, vector, indices.get(0) - 1, outOfRangeIsNa);
                  }
                  // For multiple indices, build a result
                  var results = new SEXP[indices.size()];
                  for (int i = 0; i < indices.size(); i++) {
                    var loaded =
                        subscriptLoad(interpreter, vector, indices.get(i) - 1, outOfRangeIsNa);
                    results[i] = valueToSexp(loaded);
                  }
                  return new Value.Sexp(buildVector(results, vector));
                }));
      }
    }
  }

  /// The position that the numeric scalar subscript `index` of a generic `[`, `[[`, `[<-`, or
  /// `[[<-` selects. A logical `[[` subscript selects like an integer one; a logical `[` one is a
  /// mask, which this doesn't implement.
  private static int positionSubscript(InternalInterpreter interpreter, String name, SEXP index) {
    if (index instanceof LglSXP && !name.startsWith("[[")) {
      throw interpreter.failUnsupported(
          "Mock `" + name + "` doesn't implement a logical subscript");
    }
    return sexpToInt(index, interpreter, name);
  }

  /// Reject a sub-assignment subscript these versions don't implement.
  ///
  /// GNU-R does something different for each of them -- past the end grows the vector, `0` and `NA`
  /// assign nothing, a negative one assigns to everything else -- and none of that is a write into
  /// `vector`, which is all these versions (and `SubscriptWrite`) do. Reporting it as unsupported
  /// keeps it from being mistaken for an R error.
  private static void checkInRange(
      InternalInterpreter interpreter, String name, ListOrVectorSXP<?> vector, int index) {
    if (index < 1 || index > vector.size()) {
      throw interpreter.failUnsupported(
          "Mock `"
              + name
              + "` only assigns within the vector, got subscript "
              + index
              + " for a vector of size "
              + vector.size());
    }
  }

  /// A copy of `vector` for a generic sub-assignment of `value` to write into. Like GNU-R, it
  /// coerces an atomic vector up to `value`'s type (logical < integer < real < string).
  private static ListOrVectorSXP<?> subAssignTarget(
      InternalInterpreter interpreter, String name, ListOrVectorSXP<?> vector, SEXP value) {
    if (vector instanceof VecSXP) {
      return vector.copy();
    }
    var vectorRank = atomicRank(vector);
    var valueRank = atomicRank(value);
    if (valueRank == -1) {
      throw interpreter.failUnsupported(
          "Mock `" + name + "` only assigns an atomic value into an atomic vector");
    }
    if (vectorRank == -1 || valueRank <= vectorRank) {
      return vector.copy();
    }
    if (vector.hasAttributes()) {
      throw interpreter.failUnsupported(
          "Mock `" + name + "` doesn't coerce a vector with attributes");
    }
    return (ListOrVectorSXP<?>) concatToType(SEXPs.dots(vector), valueRank, interpreter);
  }

  /// The element that a generic sub-assignment of `value` stores into a list: `[[<-` stores
  /// `value`, `[<-` the element of a length-1 `value`.
  private static Value listElement(InternalInterpreter interpreter, String name, SEXP value) {
    if (value instanceof NilSXP) {
      throw interpreter.failUnsupported("Mock `" + name + "` doesn't delete list elements");
    }
    if (name.equals("[[<-")) {
      return new Value.Sexp(value);
    }
    if (!(value instanceof ListOrVectorSXP<?> values) || values.size() != 1) {
      throw interpreter.failUnsupported("Mock `" + name + "` only assigns a length-1 value");
    }
    return new Value.Sexp(interpreter.subscriptLoad(values, 0).box());
  }

  /// The subscript `indices` as integers, coercing a real vector the way GNU-R coerces a real
  /// subscript (which is what the real-index versions are defined to do).
  private static IntSXP toIntegerIndices(
      SEXP indices, InternalInterpreter interpreter, String name) {
    return switch (indices) {
      case IntSXP ints -> ints;
      case RealSXP reals -> {
        var ints = new int[reals.size()];
        for (var i = 0; i < ints.length; i++) {
          ints[i] = realToInt(reals.get(i));
        }
        yield SEXPs.integer(ints);
      }
      default -> throw interpreter.fail("`" + name + "` index must be an integer or real vector");
    };
  }

  /// [InternalInterpreter#subscriptLoad], except that when `outOfRangeIsNa`, an index outside the
  /// vector reads as `NA` (`NULL` for lists) instead of failing.
  ///
  /// That's how R's `[` behaves; `[[` is the one that errors.
  private static Value subscriptLoad(
      InternalInterpreter interpreter,
      ListOrVectorSXP<?> vector,
      int index,
      boolean outOfRangeIsNa) {
    if (outOfRangeIsNa && vector instanceof VecSXP v && index >= 0 && index < v.size()) {
      // `[` of a list is a list, which keeps the element's name.
      var element = SEXPs.vec(v.get(index));
      var names = v.names();
      return new Value.Sexp(names.isEmpty() ? element : element.withNames(names.get(index)));
    }
    if (!outOfRangeIsNa || (index >= 0 && index < vector.size())) {
      return interpreter.subscriptLoad(vector, index);
    }

    return switch (vector) {
      case LglSXP _ -> new Value.Lgl(Logical.NA);
      case IntSXP _ -> new Value.Int(Constants.NA_INT);
      case RealSXP _ -> new Value.Real(Constants.NA_REAL);
      case StrSXP _ -> new Value.Str(Constants.NA_STRING);
      case VecSXP _ -> new Value.Sexp(SEXPs.vec(SEXPs.NULL));
      case ListSXP _ -> new Value.Sexp(SEXPs.list(SEXPs.NULL));
      case DotsListSXP _ -> new Value.Sexp(SEXPs.dots(SEXPs.NULL));
      case ExprSXP _ -> new Value.Sexp(SEXPs.expr(SEXPs.NULL));
      default ->
          throw interpreter.failUnsupported("Out-of-range `[` on a " + vector.type() + " vector");
    };
  }

  // endregion

  // region sub-assignment operators

  private static void registerSubAssign(InternalInterpreter interpreter, String name, int numArgs) {
    // Generic: (*, *, *, *) -+> V for `[<-`, (*, *, *) -+> V for `[[<-`
    var genericParams = new Type[numArgs];
    Arrays.fill(genericParams, Type.ANY_SEXP);
    interpreter.registerExternal(
        name,
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, genericParams),
        ExternalVersion.strict(
            (_, _, strictArgs, _) -> {
              var args = specialArgs(interpreter, strictArgs);
              if (args.size() != numArgs) {
                throw interpreter.fail("`" + name + "` generic takes " + numArgs + " arguments");
              }
              if (!(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof ListOrVectorSXP<?> vector)) {
                throw interpreter.failUnsupported(
                    "Mock `" + name + "` not implemented for non-vector objects");
              }
              int idx = positionSubscript(interpreter, name, args.get(1).box());
              var value = args.get(2).box();
              var result = subAssignTarget(interpreter, name, vector, value);
              checkInRange(interpreter, name, result, idx);
              interpreter.subscriptStore(
                  result,
                  idx - 1,
                  result instanceof VecSXP
                      ? listElement(interpreter, name, value)
                      : sexpToValueOfType(value, result.type(), interpreter, name));
              return new Value.Sexp(result);
            }));

    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    Type[] scalarTypes = {Type.LOGICAL, Type.INTEGER, Type.REAL, Type.STRING};

    // Every non-generic version returns a fresh vector: the ones that borrow `x` copy it, the ones
    // that own it mutate it in place (they're only called with an argument nothing else holds).
    //
    // The borrowed versions must be registered *first*: a borrowed parameter accepts an owned
    // argument, so their signature also matches the owned versions, and registering the owned
    // implementations afterward is what overrides those (see
    // [InternalInterpreter#registerExternal]).
    for (var ownership : List.of(Ownership.BORROWED, Ownership.OWNED)) {
      var inPlace = ownership == Ownership.OWNED;
      for (int t = 0; t < 4; t++) {
        var x = vecTypes[t].withOwnership(ownership);
        var returnType = vecTypes[t].withOwnership(Ownership.FRESH);

        // v5-v8: (v(T)<ownership>, I, T[, miss]) --> v(T)f, and the `R`-index version, which
        // coerces and forwards like GNU-R does with a real subscript.
        for (var indexType : List.of(Type.INTEGER, Type.REAL)) {
          interpreter.registerExternal(
              name,
              subAssignSig(returnType, numArgs, x, indexType, scalarTypes[t]),
              ExternalVersion.strict(
                  (_, _, args, _) -> {
                    var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                    int idx =
                        args.get(1) instanceof Value.Real(var real)
                            ? realToInt(real)
                            : ((Value.Int) args.get(1)).value();
                    var value = args.get(2);
                    ListOrVectorSXP<?> result = inPlace ? vector : vector.copy();
                    checkInRange(interpreter, name, result, idx);
                    interpreter.subscriptStore(result, idx - 1, value);
                    return new Value.Sexp(result);
                  }));
        }

        // v1-v4: (v(T)<ownership>, v(I), v(T)[, miss]) --> v(T)f, and the `v(R)`-index version
        for (var indexType : List.of(Type.SHARED_INTEGER_VECTOR, Type.SHARED_REAL_VECTOR)) {
          interpreter.registerExternal(
              name,
              subAssignSig(returnType, numArgs, x, indexType, vecTypes[t]),
              ExternalVersion.strict(
                  (_, _, args, _) -> {
                    var vector = (ListOrVectorSXP<?>) args.getFirst().box();
                    var indices = toIntegerIndices(args.get(1).box(), interpreter, name);
                    var values = args.get(2);
                    ListOrVectorSXP<?> result = inPlace ? vector : vector.copy();
                    for (int i = 0; i < indices.size(); i++) {
                      checkInRange(interpreter, name, result, indices.get(i));
                    }
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
            (_, _, strictArgs, _) -> {
              var args = specialArgs(interpreter, strictArgs);
              if (args.size() != 2) {
                throw interpreter.fail("`rep` generic takes 2 arguments");
              }
              var value = args.getFirst();
              int times;
              if (args.get(1) instanceof Value.Sexp(var sexp) && sexp instanceof DotsListSXP dots) {
                if (dots.size() != 1) {
                  throw interpreter.failUnsupported("Mock `rep` dots must have exactly 1 value");
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

  // region vector

  /// `vector(mode, length)`: a vector of `length` `FALSE`s, `0`s, `""`s or `NULL`s. A missing
  /// argument takes the base closure's default (`mode = "logical"`, `length = 0L`).
  private static void registerVector(InternalInterpreter interpreter) {
    // (*, *) -+> V
    interpreter.registerExternal(
        "vector",
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var modeArg = args.get(0).box();
              var lengthArg = args.get(1).box();
              var mode =
                  modeArg == SEXPs.MISSING_ARG
                      ? "logical"
                      : modeArg
                          .asScalarString()
                          .orElseThrow(() -> interpreter.fail("`vector` mode must be a string"));
              var length =
                  lengthArg == SEXPs.MISSING_ARG ? 0 : sexpToInt(lengthArg, interpreter, "vector");
              if (length < 0 || length == Constants.NA_INT || lengthArg instanceof LglSXP) {
                throw interpreter.fail("`vector`: invalid 'length' argument");
              }
              return new Value.Sexp(
                  switch (mode) {
                    case "logical" -> SEXPs.logical(Collections.nCopies(length, Logical.FALSE));
                    case "integer" -> SEXPs.integer(new int[length]);
                    case "numeric", "double" -> SEXPs.real(new double[length]);
                    case "character" -> SEXPs.string(Collections.nCopies(length, ""));
                    case "list" -> SEXPs.vec(Collections.<SEXP>nCopies(length, SEXPs.NULL));
                    default ->
                        throw interpreter.failUnsupported(
                            "Mock `vector` not implemented for mode " + mode);
                  });
            }));
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
                throw interpreter.failUnsupported("Mock `sum` dots must have exactly 1 value");
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
        long sum = 0;
        for (var v : i) {
          if (v == Constants.NA_INT) yield SEXPs.integer(Constants.NA_INT);
          sum += v;
        }
        // GNU-R gives a real sum if it doesn't fit.
        yield Math.abs(sum) > Integer.MAX_VALUE ? SEXPs.real(sum) : SEXPs.integer((int) sum);
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

  private static void registerMax(InternalInterpreter interpreter) {
    // v0: (dots) -+> V
    interpreter.registerExternal(
        "max",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`max` takes 1 argument (dots)");
              }
              if (dots.hasTags()) {
                throw interpreter.failUnsupported("Mock `max` doesn't support named arguments");
              }
              return new Value.Sexp(maxSexp(dots.values(), interpreter));
            }));
  }

  /// GNU-R's `max` of logical, integer, and real vectors: an integer unless one is real, and
  /// `NA` if an element is `NA` (a real `NA` trumps `NaN`).
  private static SEXP maxSexp(List<SEXP> args, InternalInterpreter interpreter) {
    if (!args.stream()
        .allMatch(
            a ->
                a instanceof NilSXP
                    || a instanceof LglSXP
                    || a instanceof IntSXP
                    || a instanceof RealSXP)) {
      throw interpreter.failUnsupported("Mock `max` requires logical, integer, or real vectors");
    }
    var elems = args.stream().flatMap(a -> ((ListOrVectorSXP<?>) a).stream()).toList();
    if (elems.isEmpty()) {
      throw interpreter.failUnsupported("Mock `max` of no elements (GNU-R warns and gives -Inf)");
    }
    // Even an empty real argument makes the result real
    if (args.stream().noneMatch(a -> a instanceof RealSXP)) {
      var ints = elems.stream().mapToInt(Builtins::elemToInt).toArray();
      return SEXPs.integer(
          Arrays.stream(ints).anyMatch(i -> i == Constants.NA_INT)
              ? Constants.NA_INT
              : Arrays.stream(ints).max().orElseThrow());
    }
    var max = Double.NEGATIVE_INFINITY;
    for (var elem : elems) {
      var x = elem instanceof Double d ? d : RMath.fromInt(elemToInt(elem));
      if (Constants.isNaReal(max)) {
        break;
      } else if (Double.isNaN(x)) {
        max = Constants.isNaReal(x) ? x : max + x;
      } else if (x > max) {
        max = x;
      }
    }
    return SEXPs.real(max);
  }

  private static int elemToInt(Object elem) {
    return switch (elem) {
      case Integer i -> i;
      case Logical l -> l.toInt();
      default -> throw new IllegalArgumentException("Not an integer or logical: " + elem);
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
              } else if (sexp.asScalarLogical().isPresent()) {
                var l = sexp.asScalarLogical().get();
                return new Value.Sexp(
                    SEXPs.integer(l == Logical.NA ? Constants.NA_INT : l.toInt()));
              }
              throw interpreter.failUnsupported(
                  "Mock `abs` generic only takes a logical, integer, or real scalar");
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

  /// Registers a function of one number, which keeps `NA` and `NaN` like GNU-R's `math1`.
  private static void registerUnaryMath1ToRealBuiltin(
      InternalInterpreter interpreter, String name, DoubleUnaryOperator f) {
    registerUnaryMath1ToRealBuiltin(interpreter, name, f, true);
  }

  /// [#registerUnaryMath1ToRealBuiltin(InternalInterpreter, String, DoubleUnaryOperator)], and
  /// the unboxed `(I) --> R` and `(R) --> R` versions only if `hasScalarVersions`.
  private static void registerUnaryMath1ToRealBuiltin(
      InternalInterpreter interpreter,
      String name,
      DoubleUnaryOperator f,
      boolean hasScalarVersions) {
    DoubleUnaryOperator fn = x -> RMath.math1(f, x);
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
    if (hasScalarVersions) {
      // (I) --> R
      interpreter.registerExternal(
          name,
          sig(Type.REAL, Effects.NONE, Type.INTEGER),
          ExternalVersion.strict(
              (_, _, args, _) ->
                  new Value.Real(
                      fn.applyAsDouble(RMath.fromInt(((Value.Int) args.getFirst()).value())))));
      // (R) --> R
      interpreter.registerExternal(
          name,
          sig(Type.REAL, Effects.NONE, Type.REAL),
          ExternalVersion.strict(
              (_, _, args, _) ->
                  new Value.Real(fn.applyAsDouble(((Value.Real) args.getFirst()).value()))));
    }
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
                          .mapToDouble(i -> fn.applyAsDouble(RMath.fromInt(vec.get(i))))
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

  /// `log(x, base)`, which is GNU-R's `math2` of `logbase`.
  private static double log(double x, double base) {
    return RMath.math2(RMath::logBase, x, base);
  }

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
              double base =
                  s2.equals(SEXPs.MISSING_ARG) ? Math.E : sexpToDouble(s2, interpreter, "log");
              return new Value.Sexp(SEXPs.real(log(x, base)));
            }));
    // (I, miss) --> R, (R, miss) --> R
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(log(RMath.fromInt(((Value.Int) args.getFirst()).value()), Math.E))));
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) ->
                new Value.Real(log(((Value.Real) args.getFirst()).value(), Math.E))));
    // (v(I), miss) --> v(R), (v(R), miss) --> v(R)
    interpreter.registerExternal(
        "log",
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.SHARED_INTEGER_VECTOR, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (IntSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, xv.size())
                          .mapToDouble(i -> log(RMath.fromInt(xv.get(i)), Math.E))
                          .toArray()));
            }));
    interpreter.registerExternal(
        "log",
        sig(Type.SHARED_REAL_VECTOR, Effects.NONE, Type.SHARED_REAL_VECTOR, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var xv = (RealSXP) args.getFirst().box();
              return new Value.Sexp(
                  SEXPs.real(
                      IntStream.range(0, xv.size())
                          .mapToDouble(i -> log(xv.get(i), Math.E))
                          .toArray()));
            }));
    // (I, R) --> R
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.INTEGER, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var x = RMath.fromInt(((Value.Int) args.getFirst()).value());
              var base = ((Value.Real) args.get(1)).value();
              return new Value.Real(log(x, base));
            }));
    // (R, R) --> R
    interpreter.registerExternal(
        "log",
        sig(Type.REAL, Effects.NONE, Type.REAL, Type.REAL),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var x = ((Value.Real) args.getFirst()).value();
              var base = ((Value.Real) args.get(1)).value();
              return new Value.Real(log(x, base));
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
                              i -> log(RMath.fromInt(xv.get(i % xv.size())), bv.get(i % bv.size())))
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
                          .mapToDouble(i -> log(xv.get(i % xv.size()), bv.get(i % bv.size())))
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
              return new Value.Sexp(seqLen(interpreter, n));
            }));
    // v1: (v1(I)) -~> v(I)
    interpreter.registerExternal(
        "seq_len",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.IMPURE, Type.BOXED_INTEGER),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var vec = (IntSXP) args.getFirst().box();
              return new Value.Sexp(seqLen(interpreter, vec.get(0)));
            }));
  }

  private static IntSXP seqLen(InternalInterpreter interpreter, int n) {
    if (n < 0 || n == Constants.NA_INT) {
      throw interpreter.fail("argument must be coercible to non-negative integer");
    }
    return SEXPs.integer(IntStream.rangeClosed(1, n).toArray());
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
    // v2-v4: (R, miss) --> I, (v1(R), miss) --> v1(I), (v(R), miss) --> v(I); and without `miss`,
    // the `realToIndex` intrinsic that `SpecializeRealIndex` inserts
    var scalar =
        ExternalVersion.strict(
            (_, _, args, _) -> new Value.Int(realToInt(((Value.Real) args.getFirst()).value())));
    var vector1 =
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var reals = (RealSXP) args.getFirst().box();
              return new Value.Sexp(SEXPs.integer(realToInt(reals.get(0))));
            });
    var vector =
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var reals = (RealSXP) args.getFirst().box();
              var ints = new int[reals.size()];
              for (var i = 0; i < ints.length; i++) {
                ints[i] = realToInt(reals.get(i));
              }
              return new Value.Sexp(SEXPs.integer(ints));
            });
    interpreter.registerExternal(
        "as.integer", sig(Type.INTEGER, Effects.NONE, Type.REAL, Type.MISSING), scalar);
    interpreter.registerExternal(
        "as.integer",
        sig(Type.BOXED_INTEGER, Effects.NONE, Type.BOXED_REAL, Type.MISSING),
        vector1);
    interpreter.registerExternal(
        "as.integer",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.SHARED_REAL_VECTOR, Type.MISSING),
        vector);
    interpreter.registerExternal("realToIndex", sig(Type.INTEGER, Effects.NONE, Type.REAL), scalar);
    interpreter.registerExternal(
        "realToIndex", sig(Type.BOXED_INTEGER, Effects.NONE, Type.BOXED_REAL), vector1);
    interpreter.registerExternal(
        "realToIndex",
        sig(Type.SHARED_INTEGER_VECTOR, Effects.NONE, Type.SHARED_REAL_VECTOR),
        vector);
  }

  /// R's real-to-integer coercion: truncate toward zero, and anything that doesn't fit is `NA`.
  private static int realToInt(double value) {
    return Double.isNaN(value) || value <= Integer.MIN_VALUE || value >= Integer.MAX_VALUE + 1.0
        ? Constants.NA_INT
        : (int) value;
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
              return new Value.Sexp(sexpToLogicals(sexp, interpreter, "as.logical"));
            }));
    // v1: (V, miss) --> v(L)
    interpreter.registerExternal(
        "as.logical",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Sexp(sexpToLogicals(sexp, interpreter, "as.logical"));
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
              return new Value.Bool(
                  condition(sexpToLogical(sexp, interpreter, "as.logical"), interpreter));
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
              return new Value.Bool(condition(lgl, interpreter));
            }));
  }

  /// The `B` versions of `as.logical` are the condition of `if` and `while`, which error on `NA`.
  private static boolean condition(Logical l, InternalInterpreter interpreter) {
    if (l == Logical.NA) {
      throw interpreter.fail("missing value where TRUE/FALSE needed");
    }
    return l == Logical.TRUE;
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
              return new Value.Sexp(SEXPs.string(sexpToString(sexp, interpreter, "as.character")));
            }));
    // v1: (V, miss) --> S
    interpreter.registerExternal(
        "as.character",
        sig(Type.STRING, Effects.NONE, Type.ANY_VALUE_SEXP, Type.MISSING),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              var sexp = args.getFirst().box();
              return new Value.Str(sexpToString(sexp, interpreter, "as.character"));
            }));
  }

  // endregion

  // region missing

  private static void registerMissing(InternalInterpreter interpreter) {
    // v0: (*) --> v(L). Fir2C calls GNU-R's `missing`, which reads a symbol's or string's binding.
    interpreter.registerExternal(
        "missing",
        sig(Type.SHARED_LOGICAL_VECTOR, Effects.NONE, Type.ANY_SEXP),
        (runtime, _, args, _) ->
            new Value.Sexp(SEXPs.logical(isMissing(runtime, args.getFirst()))));
    // v1: (*) --> B. Fir2C compares the argument with the missing argument.
    interpreter.registerExternal(
        "missing",
        sig(Type.BOOLEAN, Effects.NONE, Type.ANY_SEXP),
        (_, _, args, _) -> new Value.Bool(isMissingArg(args.getFirst())));
  }

  /// Whether `arg` is the missing argument. Doesn't force a promise.
  private static boolean isMissingArg(Value arg) {
    return arg.equals(new Value.Sexp(SEXPs.MISSING_ARG));
  }

  /// `missing(arg)`. *Not* [strict][ExternalVersion#strict]. A symbol, the unevaluated argument
  /// of the special, or a one-element string (GNU-R reads it as a symbol), names a variable: it
  /// checks the variable's binding without forcing it, like GNU-R, and a promise of another symbol
  /// is missing if that symbol is missing in the promise's environment. Reading that environment
  /// is reflective (it observes the caller's frame), so it's marked
  /// [reflective][org.prlprg.fir.feedback.AbstractionFeedback#reflectiveEnvs]. Any other argument
  /// is missing only if it is the missing argument. A parameter's default bound at the closure's
  /// entry is missing until the variable is bound again (GNU-R's `MISSING` mark).
  private static boolean isMissing(InternalInterpreter runtime, Value arg) {
    var name =
        switch (arg) {
          case Value.Sexp(RegSymSXP symbol) -> symbol.name();
          case Value.Sexp(StrSXP string) when string.size() == 1 -> string.get(0);
          default -> null;
        };
    if (name == null) {
      return isMissingArg(arg);
    }
    SEXP binding = runtime.load(Variable.named(name));
    if (runtime.isMarkedMissing(name, binding)) {
      return true;
    }
    while (binding instanceof PromSXP promise
        && promise.boundVal() == null
        && promise.expr() instanceof RegSymSXP promiseSymbol) {
      runtime.recordReflectiveEnv(promise.env());
      binding = promise.env().getLocal(promiseSymbol.name()).orElse(null);
    }
    return binding == SEXPs.MISSING_ARG;
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
    // v1-v4: (v(T), miss) -+> V for T = L, I, R, S
    Type[] vecTypes = {
      Type.SHARED_LOGICAL_VECTOR,
      Type.SHARED_INTEGER_VECTOR,
      Type.SHARED_REAL_VECTOR,
      Type.SHARED_STRING_VECTOR
    };
    for (int t = 0; t < 4; t++) {
      interpreter.registerExternal(
          "print",
          sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, vecTypes[t], Type.MISSING),
          ExternalVersion.strict(
              (_, _, args, _) -> {
                var sexp = args.getFirst().box();
                System.out.println(sexp);
                return args.getFirst();
              }));
    }
  }

  private static void registerCat(InternalInterpreter interpreter) {
    // v0: (dots, *, *, *, *, *) -+> V
    interpreter.registerExternal(
        baseFunction("cat"),
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.REFLECT,
            Type.DOTS,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP,
            Type.ANY_SEXP),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 6
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`cat` takes 6 arguments, the first dots");
              }
              var file = args.get(1).box();
              if (!(file == SEXPs.MISSING_ARG || file.asScalarString().equals(Optional.of("")))
                  || IntStream.range(3, 6).anyMatch(i -> args.get(i).box() != SEXPs.MISSING_ARG)) {
                throw interpreter.failUnsupported(
                    "Mock `cat` only supports `...` and `sep` (to stdout, no fill)");
              }
              var sepArg = args.get(2).box();
              if (!(sepArg == SEXPs.MISSING_ARG || sepArg instanceof StrSXP)) {
                throw interpreter.fail("invalid 'sep' specification");
              }
              var sep = sepArg instanceof StrSXP s ? s : SEXPs.string(" ");
              System.out.print(catString(dots.values(), sep, interpreter));
              return Value.NULL;
            }));
  }

  /// What GNU-R's `cat` prints: the elements of `objects`, separated by `sep` (recycled), and a
  /// newline at the end if a separator contains one.
  private static String catString(List<SEXP> objects, StrSXP sep, InternalInterpreter interpreter) {
    var out = new StringBuilder();
    var ntot = 0;
    for (var iobj = 0; iobj < objects.size(); iobj++) {
      var object = objects.get(iobj);
      if (iobj != 0 && !(object instanceof NilSXP)) {
        out.append(catSep(sep, ntot++));
      }
      var elements = catElements(object, iobj, interpreter);
      for (var i = 0; i < elements.size(); i++) {
        out.append(elements.get(i));
        if (i < elements.size() - 1) {
          out.append(catSep(sep, ntot++));
        }
      }
    }
    if (sep.stream().anyMatch(s -> s.contains("\n"))) {
      out.append('\n');
    }
    return out.toString();
  }

  private static String catSep(StrSXP sep, int ntot) {
    return sep.isEmpty() ? "" : sep.get(ntot % sep.size());
  }

  private static List<String> catElements(SEXP object, int iobj, InternalInterpreter interpreter) {
    return switch (object) {
      case NilSXP _ -> List.of();
      case RegSymSXP s -> List.of(s.name());
      case StrSXP s -> s.stream().map(e -> Constants.isNaString(e) ? "NA" : e).toList();
      case LglSXP l -> l.stream().map(e -> e == Logical.NA ? "NA" : e.toString()).toList();
      case IntSXP i ->
          i.stream().map(e -> e == Constants.NA_INT ? "NA" : String.valueOf(e)).toList();
      case RealSXP r -> r.stream().map(e -> formatReal(e, 7)).toList();
      case ListOrVectorSXP<?> v when v.isEmpty() -> List.of();
      default ->
          throw interpreter.fail(
              "argument "
                  + (iobj + 1)
                  + " (type '"
                  + object.type()
                  + "') cannot be handled by 'cat'");
    };
  }

  /// GNU-R's `formatReal` of one element with `significant` digits (7 by default, 15 in
  /// `as.character`): fixed notation, unless scientific notation is shorter.
  private static String formatReal(double x, int significant) {
    if (Constants.isNaReal(x)) return "NA";
    if (Double.isNaN(x)) return "NaN";
    if (Double.isInfinite(x)) return x > 0 ? "Inf" : "-Inf";
    if (x == 0) return "0";
    var rounded = new BigDecimal(x).round(new MathContext(significant)).stripTrailingZeros();
    var fixed = rounded.toPlainString();
    var digits = rounded.unscaledValue().abs().toString();
    var exponent = rounded.precision() - rounded.scale() - 1;
    var sci =
        (x < 0 ? "-" : "")
            + digits.charAt(0)
            + (digits.length() > 1 ? "." + digits.substring(1) : "")
            + (exponent < 0 ? "e-" : "e+")
            + String.format("%02d", Math.abs(exponent));
    return fixed.length() <= sci.length() ? fixed : sci;
  }

  // endregion

  // region is.na

  private static void registerIsNa(InternalInterpreter interpreter) {
    // v0: (*) -+> V
    interpreter.registerExternal(
        "is.na",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var x)
                      && x instanceof PrimVectorSXP<?> vector
                      && !(x instanceof ComplexSXP || x instanceof RawSXP)
                      && !x.hasAttributes())) {
                throw interpreter.failUnsupported(
                    "Mock `is.na` only supports a logical, integer, real, or string vector without attributes");
              }
              return new Value.Sexp(
                  SEXPs.logical(
                      vector.stream()
                          .map(
                              e ->
                                  e == Logical.NA
                                          || (e instanceof Integer i && i == Constants.NA_INT)
                                          || (e instanceof Double d && d.isNaN())
                                          || (e instanceof String s && Constants.isNaString(s))
                                      ? Logical.TRUE
                                      : Logical.FALSE)
                          .toList()));
            }));
  }

  // endregion

  // region list

  private static void registerList(InternalInterpreter interpreter) {
    // v0: (dots) -+> V
    interpreter.registerExternal(
        "list",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof DotsListSXP dots)) {
                throw interpreter.fail("`list` takes 1 argument (dots)");
              }
              var list = SEXPs.vec(dots.values());
              return new Value.Sexp(dots.hasTags() ? list.withNames(dots.names()) : list);
            }));
  }

  // endregion

  // region lapply

  /// Like GNU-R, this forces `X` and `FUN`, and calls `FUN(X[[i]], ...)` with a promise of
  /// `X[[i]]` and the unforced `...`.
  private static void registerLapply(InternalInterpreter interpreter) {
    // v0: (*, *, dots) -+> V
    interpreter.registerExternal(
        baseFunction("lapply"),
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.ANY_SEXP, Type.ANY_SEXP, Type.DOTS),
        (_, _, args, env) -> {
          if (args.size() != 3
              || !(interpreter.eval(args.get(0)) instanceof Value.Sexp(var x))
              || !(interpreter.eval(args.get(1)) instanceof Value.Sexp(var fun))
              || !(args.get(2) instanceof Value.Sexp(var dots))) {
            throw interpreter.fail("`lapply` takes 3 sexp arguments");
          }
          if (!(fun instanceof CloSXP closure)) {
            throw interpreter.failUnsupported("Mock `lapply` only supports a closure `FUN`");
          }
          if (!(x instanceof VectorSXP<?> vector)
              || vector.attributes().keySet().stream().anyMatch(k -> !k.equals("names"))) {
            throw interpreter.failUnsupported(
                "Mock `lapply` only supports a vector `X` with no attributes but names");
          }
          if (!(dots instanceof DotsListSXP) && dots != SEXPs.MISSING_ARG) {
            throw interpreter.fail("`lapply` third argument must be dots");
          }
          List<TaggedElem> extraArgs =
              dots instanceof DotsListSXP ? List.of(new TaggedElem("...", dots)) : List.of();
          var results =
              IntStream.range(0, vector.size())
                  .mapToObj(
                      i -> {
                        var element =
                            SEXPs.promise(
                                SEXPs.lang(
                                    SEXPs.symbol("[["), SEXPs.symbol("X"), SEXPs.symbol("i")),
                                interpreter.subscriptLoad(vector, i).box(),
                                env);
                        var callArgs =
                            ImmutableList.<TaggedElem>builder()
                                .add(new TaggedElem(element))
                                .addAll(extraArgs)
                                .build();
                        return interpreter.callClosure(closure, SEXPs.list(callArgs)).box();
                      })
                  .toList();
          var names = vector.attributes().get("names");
          return new Value.Sexp(
              SEXPs.vec(
                  results,
                  names == null ? Attributes.NONE : Attributes.NONE.including("names", names)));
        });
  }

  // endregion

  // region seq

  /// `seq`, which dispatches to `seq.default`. Only supports `from`, `to` and optionally `by`,
  /// each a finite numeric scalar without attributes.
  private static void registerSeq(InternalInterpreter interpreter) {
    // v0: (dots) -+> V
    interpreter.registerExternal(
        baseFunction("seq"),
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS),
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1
                  || !(args.getFirst() instanceof Value.Sexp(var sexp)
                      && sexp instanceof DotsListSXP dots)) {
                throw interpreter.failUnsupported("Mock `seq` requires arguments");
              }
              var formals = List.of("from", "to", "by");
              var matched = new SEXP[formals.size()];
              var positional = new ArrayList<SEXP>();
              for (var arg : dots) {
                if (!arg.hasTag()) {
                  positional.add(arg.value());
                } else if (formals.contains(arg.tag())
                    && matched[formals.indexOf(arg.tag())] == null) {
                  matched[formals.indexOf(arg.tag())] = arg.value();
                } else {
                  throw interpreter.failUnsupported("Mock `seq` only supports `from`, `to`, `by`");
                }
              }
              for (var i = 0; i < matched.length && !positional.isEmpty(); i++) {
                if (matched[i] == null) {
                  matched[i] = positional.removeFirst();
                }
              }
              if (!positional.isEmpty() || matched[0] == null || matched[1] == null) {
                throw interpreter.failUnsupported("Mock `seq` only supports `from`, `to`, `by`");
              }
              for (var arg : matched) {
                if (arg != null
                    && !(arg instanceof PrimVectorSXP<?> v
                        && (v instanceof IntSXP || v instanceof RealSXP)
                        && v.size() == 1
                        && !v.hasAttributes()
                        && Double.isFinite(sexpToDouble(arg, interpreter, "seq")))) {
                  throw interpreter.failUnsupported(
                      "Mock `seq` only supports finite numeric scalars without attributes");
                }
              }
              return new Value.Sexp(seqDefault(matched[0], matched[1], matched[2], interpreter));
            }));
  }

  /// GNU-R's `seq.default(from, to, by)`, where `by` may be missing (`null`).
  private static SEXP seqDefault(
      SEXP fromSexp, SEXP toSexp, @Nullable SEXP bySexp, InternalInterpreter interpreter) {
    var from = sexpToDouble(fromSexp, interpreter, "seq");
    var to = sexpToDouble(toSexp, interpreter, "seq");
    if (bySexp == null) {
      return colonSeq(from, to);
    }
    var by = sexpToDouble(bySexp, interpreter, "seq");
    var isIntegerDel = fromSexp instanceof IntSXP && toSexp instanceof IntSXP;
    var del = to - from;
    if (del == 0 && to == 0) {
      return toSexp;
    }
    var n = del / by;
    if (!Double.isFinite(n)) {
      if (by == 0 && del == 0) {
        return fromSexp;
      }
      throw interpreter.fail("invalid '(to - from)/by' in seq(.)");
    }
    if (n < 0) {
      throw interpreter.fail("wrong sign in 'by' argument");
    }
    if (n > Integer.MAX_VALUE) {
      throw interpreter.fail("'by' argument is much too small");
    }
    if (Math.abs(del) / Math.max(Math.abs(to), Math.abs(from)) < 100 * Math.ulp(1.0)) {
      return fromSexp;
    }
    if (isIntegerDel) {
      var count = (int) n + 1;
      if (bySexp instanceof IntSXP) {
        var fromInt = (int) from;
        var byInt = (int) by;
        return SEXPs.integer(IntStream.range(0, count).map(i -> i * byInt + fromInt).toArray());
      }
      return SEXPs.real(IntStream.range(0, count).mapToDouble(i -> i * by + from).toArray());
    }
    var count = (int) (n + 1e-10) + 1;
    return SEXPs.real(
        IntStream.range(0, count)
            .mapToDouble(i -> from + i * by)
            .map(x -> by > 0 ? Math.min(x, to) : Math.max(x, to))
            .toArray());
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
    // v1: (V, v1(S), miss, miss) --> V
    interpreter.registerExternal(
        "attr",
        sig(
            Type.ANY_VALUE_SEXP,
            Effects.NONE,
            Type.ANY_VALUE_SEXP,
            Type.BOXED_STRING,
            Type.MISSING,
            Type.MISSING),
        ExternalVersion.strict(
            (_, _, _, _) -> {
              throw interpreter.failUnsupported("Mock `attr` not yet fully implemented");
            }));
  }

  private static void registerNamesAssign(InternalInterpreter interpreter) {
    // v0: (*, *) -+> V (`builtins.fir` declares no other)
    interpreter.registerExternal(
        "names<-",
        SIG_GENERIC_2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 2
                  || !(args.get(0) instanceof Value.Sexp(var x))
                  || !(args.get(1) instanceof Value.Sexp(var value))) {
                throw interpreter.fail("`names<-` takes 2 sexp arguments");
              }
              return new Value.Sexp(namesAssign(x, value, interpreter));
            }));
  }

  /// GNU-R's `names<-` on a vector: `NULL` removes the names, and a shorter character vector is
  /// padded with `NA`.
  private static SEXP namesAssign(SEXP x, SEXP value, InternalInterpreter interpreter) {
    if (!(x instanceof VectorSXP<?> vector)) {
      throw interpreter.failUnsupported("Mock `names<-` only supports vectors, not " + x.type());
    }
    var attributes = vector.attributes();
    if (value instanceof NilSXP) {
      return vector.copy().withAttributes(attributes.excluding("names"));
    }
    if (!(value instanceof StrSXP names) || names.hasAttributes()) {
      throw interpreter.failUnsupported("Mock `names<-` only supports a plain character vector");
    }
    if (names.size() > vector.size()) {
      throw interpreter.fail(
          "'names' attribute ["
              + names.size()
              + "] must be the same length as the vector ["
              + vector.size()
              + "]");
    }
    var padded =
        IntStream.range(0, vector.size())
            .mapToObj(i -> i < names.size() ? names.get(i) : Constants.NA_STRING)
            .toList();
    return vector.copy().withAttributes(attributes.including("names", SEXPs.string(padded)));
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
              if (dots.names().stream().anyMatch(x -> !x.isEmpty())
                  || dots.values().stream()
                      .anyMatch(v -> v instanceof ListOrVectorSXP<?> l && !l.names().isEmpty())) {
                throw interpreter.failUnsupported(
                    "Mock `c` doesn't support named arguments or arguments with names");
              }

              // Determine the widest element type
              int widest = 0;
              for (var te : dots) {
                int w = atomicRank(te.value());
                if (w == -1) {
                  throw interpreter.failUnsupported(
                      "Mock `c` doesn't support non-primitive arguments");
                }
                if (w > widest) widest = w;
              }

              // Collect all values into the widest type
              return new Value.Sexp(concatToType(dots, widest, interpreter));
            }));
  }

  /// The rank of `sexp`'s type in GNU-R's coercion order (`concatToType`'s `targetType`):
  /// 0 = logical, 1 = integer, 2 = real, 3 = string, or -1 if it's none of them.
  private static int atomicRank(SEXP sexp) {
    return switch (sexp) {
      case LglSXP _ -> 0;
      case IntSXP _ -> 1;
      case RealSXP _ -> 2;
      case StrSXP _ -> 3;
      default -> -1;
    };
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
              for (int i = 0; i < l.size(); i++) res[idx++] = RMath.fromInt(l.get(i).toInt());
            }
            case IntSXP iv -> {
              for (int i = 0; i < iv.size(); i++) res[idx++] = RMath.fromInt(iv.get(i));
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
              for (int i = 0; i < l.size(); i++)
                res[idx++] = l.get(i) == Logical.NA ? Constants.NA_STRING : l.get(i).toString();
            }
            case IntSXP iv -> {
              for (int i = 0; i < iv.size(); i++)
                res[idx++] =
                    iv.get(i) == Constants.NA_INT ? Constants.NA_STRING : String.valueOf(iv.get(i));
            }
            case RealSXP rv -> {
              for (int i = 0; i < rv.size(); i++)
                res[idx++] =
                    Constants.isNaReal(rv.get(i)) ? Constants.NA_STRING : formatReal(rv.get(i), 15);
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

  // region reflective environment access

  /// `substitute(expr, env = ...)`, only supporting `substitute(symbol)` (no explicit `env`).
  ///
  /// Substituting happens in the current environment, which is marked
  /// [reflective][org.prlprg.fir.feedback.AbstractionFeedback#reflectiveEnvs].
  private static void registerSubstitute(InternalInterpreter interpreter) {
    // (dots) -+> V. *Not* `strict`, because `substitute`'s argument is unevaluated.
    interpreter.registerExternal(
        "substitute",
        sig(Type.ANY_VALUE_SEXP, Effects.REFLECT, Type.DOTS),
        (runtime, _, args, _) -> {
          if (args.size() != 1
              || !(args.getFirst() instanceof Value.Sexp(var sexp)
                  && sexp instanceof DotsListSXP dots)) {
            throw interpreter.fail("`substitute` requires a `...` argument");
          }
          if (dots.size() != 1) {
            throw interpreter.failUnsupported(
                "Mock `substitute` only supports `substitute(symbol)` (one argument)");
          }
          if (!(dots.get(0).value() instanceof RegSymSXP symbol)) {
            throw interpreter.failUnsupported("Mock `substitute` only supports a symbol argument");
          }

          // Substituting reads the current environment reflectively.
          var env = runtime.currentEnvironment();
          runtime.recordReflectiveEnv(env);

          // Substitute the symbol with its binding (if any), and a promise with its expression
          // (repeatedly, like GNU-R); otherwise return the symbol itself.
          SEXP result = env.getLocal(symbol.name()).orElse(symbol);
          while (result instanceof PromSXP promise) {
            if (InternalInterpreter.isPromiseCodeStub(promise.expr())) {
              throw interpreter.fail("the source expression of this promise is not available");
            }
            result = promise.expr();
          }
          return new Value.Sexp(result);
        });
  }

  /// `sys.frame(which)`, only supporting non-positive `which` (`-1` = caller's frame).
  ///
  /// The calling frame's environment is marked
  /// [reflective][org.prlprg.fir.feedback.AbstractionFeedback#reflectiveEnvs], and so is the
  /// returned one, which the vendored GNU-R doesn't mark but the code reads reflectively.
  private static void registerSysFrame(InternalInterpreter interpreter) {
    // (*) -+> V, which matches the builtin's variadic `(dots)` version (used by direct calls) and
    // the base `(which:*)` version (used by dynamic calls).
    interpreter.registerExternal(
        "sys.frame",
        SIG_GENERIC_1,
        ExternalVersion.strict(
            (runtime, _, args, _) -> {
              if (args.size() != 1) {
                throw interpreter.fail("`sys.frame` takes 1 argument");
              }
              // The builtin is variadic, so its single argument may be wrapped in a `...`.
              SEXP whichSexp;
              if (args.getFirst() instanceof Value.Sexp(var s) && s instanceof DotsListSXP dots) {
                if (dots.size() != 1) {
                  throw interpreter.failUnsupported(
                      "Mock `sys.frame` only supports a single `which` argument");
                }
                whichSexp = dots.get(0).value();
              } else {
                whichSexp = args.getFirst().box();
              }
              var which = sexpToInt(whichSexp, interpreter, "sys.frame");

              // The vendored GNU-R marks the frame that calls `sys.frame`, and `0` is the global
              // environment.
              runtime.recordReflectiveEnv(runtime.relativeFrameEnvironment(0));
              var env = which == 0 ? runtime.globalEnv() : runtime.relativeFrameEnvironment(which);
              runtime.recordReflectiveEnv(env);
              return new Value.Sexp(env);
            }));
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
    // GNU-R's `STARTFOR`: a factor loops over its labels, another object without dispatch.
    if (!vector.isObject()) {
      return new Value.Sexp(vector);
    }
    var attributes = Objects.requireNonNull(vector.attributes());
    if (attributes.get("class") instanceof StrSXP classes
        && classes.stream().anyMatch("factor"::equals)
        && vector instanceof IntSXP codes
        && attributes.get("levels") instanceof StrSXP levels) {
      return new Value.Sexp(
          SEXPs.string(
              codes.stream()
                  .map(c -> c == Constants.NA_INT ? Constants.NA_STRING : levels.get(c - 1))
                  .toList()));
    }
    return new Value.Sexp(vector.withAttributes(Attributes.NONE));
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

  private static Value naToTrue0(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`naToTrue` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Sexp(var sexp) && sexp.asScalarLogical().isPresent())) {
      throw interpreter.fail("`naToTrue< v(L) --> B >` requires a scalar logical SEXP");
    }
    return new Value.Bool(sexp.asScalarLogical().get() != Logical.FALSE);
  }

  private static Value naToTrue1(
      InternalInterpreter interpreter, Abstraction callee, List<Value> args, EnvSXP env) {
    if (args.size() != 1) {
      throw interpreter.fail("`naToTrue` takes 1 argument");
    }
    if (!(args.getFirst() instanceof Value.Lgl(var sexp))) {
      throw interpreter.fail("`naToTrue< L --> B >` requires a logical argument");
    }
    return new Value.Bool(sexp != Logical.FALSE);
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

  /// The [strict][ExternalVersion#strict] arguments of a GNU-R special, evaluated the way the
  /// special evaluates them. A special receives unevaluated code (`bc2fir` passes the source
  /// arguments of `CALLSPECIAL` as constants), so a symbol, also one inside `...`, is looked up in
  /// the caller's environment, and its value forced.
  ///
  /// A symbol that reaches the special as a value is looked up too, as in GNU-R.
  private static List<Value> specialArgs(InternalInterpreter interpreter, List<Value> args) {
    return args.stream()
        .map(
            arg ->
                arg instanceof Value.Sexp(var sexp)
                    ? new Value.Sexp(evalSpecialArg(interpreter, sexp))
                    : arg)
        .toList();
  }

  private static SEXP evalSpecialArg(InternalInterpreter interpreter, SEXP arg) {
    return switch (arg) {
      case RegSymSXP symbol when symbol.isEllipsis() ->
          throw interpreter.failUnsupported("Mock special with a `...` argument");
      case RegSymSXP symbol ->
          interpreter.eval(new Value.Sexp(interpreter.load(Variable.named(symbol.name())))).box();
      case DotsListSXP dots ->
          dots.stream()
              .map(te -> new TaggedElem(te.tag(), evalSpecialArg(interpreter, te.value())))
              .collect(SEXPs.toDots());
      default -> arg;
    };
  }

  private static Value sexpToValueOfType(
      SEXP sexp, SEXPType type, InternalInterpreter interpreter, String ctx) {
    return switch (type) {
      case REAL -> new Value.Real(sexpToDouble(sexp, interpreter, ctx));
      case INT -> new Value.Int(sexpToInt(sexp, interpreter, ctx));
      case LGL -> new Value.Lgl(sexpToLogical(sexp, interpreter, ctx));
      case STR -> new Value.Str(sexpToString(sexp, interpreter, ctx));
      default -> throw interpreter.failUnsupported("Unsupported target type for " + ctx);
    };
  }

  private static double sexpToDouble(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarInteger().isPresent()) return RMath.fromInt(sexp.asScalarInteger().get());
    if (sexp.asScalarReal().isPresent()) return sexp.asScalarReal().get();
    if (sexp.asScalarLogical().isPresent())
      return RMath.fromInt(sexp.asScalarLogical().get().toInt());
    throw interpreter.failUnsupported("Mock " + ctx + " only implemented for a numeric scalar");
  }

  private static @Nullable Double sexpToDoubleOpt(SEXP sexp) {
    if (sexp.asScalarReal().isPresent()) return sexp.asScalarReal().get();
    if (sexp.asScalarInteger().isPresent()) return RMath.fromInt(sexp.asScalarInteger().get());
    if (sexp.asScalarLogical().isPresent())
      return RMath.fromInt(sexp.asScalarLogical().get().toInt());
    return null;
  }

  private static int sexpToInt(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarInteger().isPresent()) return sexp.asScalarInteger().get();
    if (sexp.asScalarReal().isPresent())
      return sexp.asScalarReal().get().isNaN()
          ? Constants.NA_INT
          : (int) sexp.asScalarReal().get().doubleValue();
    if (sexp.asScalarLogical().isPresent()) return sexp.asScalarLogical().get().toInt();
    throw interpreter.failUnsupported("Mock " + ctx + " only implemented for numeric scalar");
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
    throw interpreter.failUnsupported(
        "Mock " + ctx + " only implemented for scalar convertible to logical");
  }

  /// GNU-R's `as.logical` of a logical, integer, or real vector: each element, without attributes.
  private static LglSXP sexpToLogicals(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (!(sexp instanceof LglSXP || sexp instanceof IntSXP || sexp instanceof RealSXP)) {
      throw interpreter.failUnsupported(
          "Mock " + ctx + " only implemented for a logical, integer, or real vector");
    }
    return SEXPs.logical(
        ((PrimVectorSXP<?>) sexp)
            .stream()
                .map(
                    e ->
                        switch (e) {
                          case Logical l -> l;
                          case Integer i ->
                              i == Constants.NA_INT
                                  ? Logical.NA
                                  : (i != 0 ? Logical.TRUE : Logical.FALSE);
                          case Double d ->
                              Double.isNaN(d)
                                  ? Logical.NA
                                  : (d != 0.0 ? Logical.TRUE : Logical.FALSE);
                          default -> throw new AssertionError(e);
                        })
                .toList());
  }

  /// GNU-R's `as.character` of a scalar.
  private static String sexpToString(SEXP sexp, InternalInterpreter interpreter, String ctx) {
    if (sexp.asScalarString().isPresent()) return sexp.asScalarString().get();
    if (sexp.asScalarInteger().isPresent()) {
      var i = sexp.asScalarInteger().get();
      return i == Constants.NA_INT ? Constants.NA_STRING : String.valueOf(i);
    }
    if (sexp.asScalarReal().isPresent()) {
      var r = sexp.asScalarReal().get();
      return Constants.isNaReal(r) ? Constants.NA_STRING : formatReal(r, 15);
    }
    if (sexp.asScalarLogical().isPresent()) {
      var l = sexp.asScalarLogical().get();
      return l == Logical.NA ? Constants.NA_STRING : l.toString();
    }
    throw interpreter.failUnsupported("Mock " + ctx + " only implemented for an atomic scalar");
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
