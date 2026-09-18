package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BASE;
import static org.prlprg.fir.GlobalModules.BUILTINS;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.primitive.Constants;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXPs;

/// Optimization that makes a `[`-family call with a *real* subscript take an integer one, by
/// coercing the subscript with `as.integer` and calling the integer-subscript version.
///
/// A subscript is a position, so GNU-R coerces a real one to an integer; `builtins.fir` declares a
/// real-subscript version for each integer-subscript one, defined to do exactly that and forward.
/// R's literals are reals, so `x[1] <- v` lands on those. Doing the coercion here instead leaves an
/// integer-subscript call, which is the one [SpecializeSubscript] can turn into an instruction (and
/// which [org.prlprg.fir.opt.Unbox] can unbox).
///
/// A constant subscript is coerced here and now, so the common `x[1]` doesn't pay for a call.
public record SpecializeRealIndex() implements SpecializeOptimization {
  private static final Set<NamedVariable> SUBSCRIPTS =
      Set.of(
          Variable.named("["), Variable.named("[["), Variable.named("[<-"), Variable.named("[[<-"));

  private static final Function AS_INTEGER =
      Objects.requireNonNull(BUILTINS.localFunction(Variable.named("as.integer")));

  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
  }

  @Override
  public Result run(
      BB bb,
      int statementIndex,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    if (!(statement.expression() instanceof Call(StaticFnCallee callee))) {
      return Result.UNCHANGED;
    }
    var function = callee.function();
    var owner = function.owner();
    if ((owner != BUILTINS && owner != BASE) || !SUBSCRIPTS.contains(function.name())) {
      return Result.UNCHANGED;
    }
    // Only a static call has one known version, and its parameter is what says the subscript is
    // real -- the argument may be a subtype.
    var version = callee.exactVersion();
    if (version == null) {
      return Result.UNCHANGED;
    }
    var signature = version.signature();
    if (statement.argCount() != signature.parameterTypes().size() + 1) {
      // Malformed call, don't touch it.
      return Result.UNCHANGED;
    }

    // The subscript comes after the callee's own argument (index 0) and the vector.
    var realType = signature.parameterTypes().get(1);
    var integerType = asIntegerIndexType(realType);
    if (integerType == null) {
      return Result.UNCHANGED;
    }
    var integerSignature = withIndexType(signature, integerType);
    if (function.guess(integerSignature) == null) {
      // Every real-subscript version has an integer-subscript one to forward to, so this shouldn't
      // happen; if it somehow does, leave the call alone rather than making it uncallable.
      return Result.UNCHANGED;
    }

    var newArgs = new ArrayList<>(statement.args());
    var folded = coerceConstant(statement.arg(2), integerType);
    if (folded != null) {
      newArgs.set(2, folded);
    } else {
      stageCoercion(statement.arg(2), realType, integerType, bb, statementIndex, scope, defer);
    }
    return new Result.Replace(
        new Call(new StaticFnCallee(function, false, integerSignature)), newArgs);
  }

  /// Stage an `as.integer` of `subscript` before the statement at `(bb, statementIndex)`, and the
  /// rewrite of that statement's subscript argument to its result.
  ///
  /// Both wait until the end of the pass, because inserting a statement invalidates the analyses
  /// the specializations share. That's also why the *argument* rewrite waits: `Specialize` commits
  /// staged insertions only once every specialization has run, so putting `as.integer`'s result
  /// into the call now would leave the rest of the pass reading a register whose defining statement
  /// isn't in any block -- and every walk of a register's definition runs in that window, with
  /// [org.prlprg.fir.analyze.resolve.OriginAnalysis] rejecting it outright.
  ///
  /// The call's *signature* is switched to the integer one right away, by the caller. That's what
  /// stops this from staging a second coercion if the statement is specialized again before the
  /// insertions commit -- an integer subscript is no longer a real one.
  private static void stageCoercion(
      Argument subscript,
      Type realType,
      Type integerType,
      BB bb,
      int statementIndex,
      Abstraction scope,
      DeferredInsertions defer) {
    var asInteger =
        new Statement(
            new Call(
                new StaticFnCallee(
                    AS_INTEGER,
                    false,
                    new Signature(
                        ImmutableList.of(realType, Type.MISSING), integerType, Effects.NONE))),
            List.of(Constant.ELIDED_CLOSURE, Constant.ELIDED_CLOSURE, MISSING));
    var integerSubscript = asInteger.setAssignee(scope.freshName("idx"), integerType);
    defer.stage(
        () -> {
          var call = bb.statements().get(statementIndex);
          asInteger.setArg(1, subscript);
          asInteger.insertBefore(call);
          call.setArg(2, new Read(integerSubscript));
        });
  }

  private static final Constant MISSING = new Constant(SEXPs.MISSING_ARG);

  /// `subscript` coerced now, if it's a scalar numeric constant, in `integerType`'s representation.
  private static @Nullable Constant coerceConstant(Argument subscript, Type integerType) {
    if (!(subscript instanceof Constant(var value))) {
      return null;
    }

    var position =
        switch (value) {
          case Value.Real(var real) -> asPosition(real);
          case Value.Int(var integer) -> integer;
          case Value.Sexp(RealSXP real) when real.isSimpleScalar() -> asPosition(real.get(0));
          case Value.Sexp(IntSXP integer) when integer.isSimpleScalar() -> integer.get(0);
          default -> null;
        };
    if (position == null) {
      return null;
    }

    return new Constant(
        integerType.equals(Type.INTEGER)
            ? new Value.Int(position)
            : new Value.Sexp(SEXPs.integer(position)));
  }

  /// GNU-R's real-to-integer subscript coercion: truncate toward zero, anything that doesn't fit is
  /// `NA` (which then reads as `NA` or fails, like any other out-of-range subscript).
  private static Integer asPosition(double real) {
    return Double.isNaN(real) || real <= Integer.MIN_VALUE || real > Integer.MAX_VALUE
        ? Constants.NA_INT
        : (int) real;
  }

  /// The integer subscript type matching `type`, or `null` if `type` isn't a real subscript.
  private static @Nullable Type asIntegerIndexType(Type type) {
    if (!type.isValue()) {
      return null;
    }
    return switch (type.kind()) {
      case Kind.PrimitiveScalar(var primitive) when primitive == PrimitiveKind.REAL -> Type.INTEGER;
      case Kind.PrimitiveVector(var isScalar, var primitive) when primitive == PrimitiveKind.REAL ->
          isScalar
              ? Type.primitiveVector1(PrimitiveKind.INTEGER, type.ownership())
              : Type.primitiveVector(PrimitiveKind.INTEGER, type.ownership());
      default -> null;
    };
  }

  private static Signature withIndexType(Signature signature, Type indexType) {
    var parameterTypes = new ArrayList<>(signature.parameterTypes());
    parameterTypes.set(1, indexType);
    return new Signature(
        ImmutableList.copyOf(parameterTypes),
        signature.parameterStrictnesses(),
        signature.returnType(),
        signature.effects());
  }
}
