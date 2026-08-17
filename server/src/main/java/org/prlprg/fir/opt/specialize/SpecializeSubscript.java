package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BASE;
import static org.prlprg.fir.GlobalModules.BUILTINS;

import com.google.common.collect.ImmutableList;
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
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.primitive.Constants;

/// Optimization that rewrites the simplest `[`/`[[` and `[<-`/`[[<-` calls into [SubscriptRead] and
/// [SubscriptWrite], which access the vector's memory directly instead of calling the builtin.
///
/// "Simplest" means the called version is one of the scalar-index ones, i.e. (for any scalar `X`)
/// `v(X)b,I,miss,miss` returning `X` for extract and `v(X)o,I,X[,miss] -~> v(X)f` for
/// sub-assignment. Only the sub-assignment versions that *own* the vector can become a
/// [SubscriptWrite]: it mutates the vector in place, so the call's result is the vector argument
/// itself, and that argument stops being `consume`d. ([org.prlprg.fir.opt.CallOwnedVersion] is what
/// makes a call use those versions, and
/// [org.prlprg.fir.opt.ConsumeDeadDup]/[org.prlprg.fir.opt.ElideConsumedDup] remove the `dup` it
/// inserts when it turns out to be redundant.)
///
/// R subscripts are 1-based and FIŘ's are 0-based, so the index is decremented (folded into the
/// constant when it is one).
public record SpecializeSubscript() implements SpecializeOptimization {
  private static final NamedVariable EXTRACT1 = Variable.named("[");
  private static final Set<NamedVariable> EXTRACTS = Set.of(EXTRACT1, Variable.named("[["));
  private static final Set<NamedVariable> SUBASSIGNS =
      Set.of(Variable.named("[<-"), Variable.named("[[<-"));

  /// `-`, used to make the R (1-based) index 0-based.
  private static final org.prlprg.fir.ir.module.Function MINUS =
      Objects.requireNonNull(BUILTINS.localFunction(Variable.named("-")));
  private static final Signature MINUS_INTEGERS =
      new Signature(ImmutableList.of(Type.INTEGER, Type.INTEGER), Type.INTEGER, Effects.NONE);
  private static final Constant ONE = new Constant(new Value.Int(1));

  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes();
  }

  @Override
  public Result run(
      BB bb,
      int index,
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
    if (owner != BUILTINS && owner != BASE) {
      return Result.UNCHANGED;
    }
    var isExtract = EXTRACTS.contains(function.name());
    if (!isExtract && !SUBASSIGNS.contains(function.name())) {
      return Result.UNCHANGED;
    }

    // Only a static call has one known version, which is what determines the layout below.
    var version = callee.exactVersion();
    if (version == null) {
      return Result.UNCHANGED;
    }
    var signature = version.signature();
    if (statement.argCount() != signature.parameterTypes().size() + 1) {
      // Malformed call, don't touch it.
      return Result.UNCHANGED;
    }
    if (isPending(statement.arg(2))) {
      // The index is defined by another sub-optimization's staged insertion, which isn't in the CFG
      // yet, so `zeroBased` would stage its decrement to be committed *before* that definition.
      // The next pass sees the committed statement and rewrites then.
      return Result.UNCHANGED;
    }

    // The call's arguments follow the callee's own argument (index 0).
    if (isExtract && isSimpleExtract(signature)) {
      // `[` reads out of range as `NA` and `[[` fails; `SubscriptRead` does whichever it's told to,
      // so each keeps its own behavior (and its own effects).
      var outOfRangeIsNa = function.name().equals(EXTRACT1);
      return new Result.Replace(
          new SubscriptRead(outOfRangeIsNa),
          List.of(statement.arg(1), zeroBased(statement.arg(2), bb, index, scope, defer)));
    }
    if (!isExtract
        && isSimpleSubAssign(signature)
        // An owned parameter can only be passed a fresh argument, and the only fresh arguments are
        // `consume`s of owned registers, which is what the vector to mutate must be.
        && statement.arg(1) instanceof Consume(var vector)) {
      // The version mutates `vector` and returns it, so the result *is* `vector`: forward the
      // assignee's uses (keeping each one's `consume`, which now applies to `vector`), and stop
      // consuming it here since it lives on.
      var assignee = statement.assignee();
      if (assignee != null) {
        for (var use : List.copyOf(assignee.uses())) {
          use.replaceWith(
              use.argument() instanceof Consume ? new Consume(vector) : new Read(vector));
        }
        statement.clearAssignee();
      }
      return new Result.Replace(
          new SubscriptWrite(),
          List.of(
              new Read(vector),
              zeroBased(statement.arg(2), bb, index, scope, defer),
              statement.arg(3)));
    }

    return Result.UNCHANGED;
  }

  /// Whether `argument` reads a register whose defining statement isn't in a CFG yet.
  private static boolean isPending(Argument argument) {
    return argument.variable() instanceof AssigneeOf assignee
        && assignee.statement().isStandalone();
  }

  /// The 1-based R index `oneBased` as the 0-based one [SubscriptRead] and [SubscriptWrite] take,
  /// staging a `-` before the statement at `(bb, index)` unless it can be folded.
  private static Argument zeroBased(
      Argument oneBased, BB bb, int index, Abstraction scope, DeferredInsertions defer) {
    if (oneBased instanceof Constant(Value.Int(var i)) && i != Constants.NA_INT) {
      return new Constant(new Value.Int(i - 1));
    }

    // The real index is only put in place by the staged insertion: until then this statement isn't
    // in a CFG, and a use pointing at an instruction that isn't confuses everything that walks a
    // register's uses.
    var decrement =
        new Statement(
            new Call(new StaticFnCallee(MINUS, false, MINUS_INTEGERS)),
            List.of(Constant.ELIDED_CLOSURE, ONE, ONE));
    var zeroBased = decrement.setAssignee(scope.freshName("idx"), Type.INTEGER);
    // Prepend before the (rewritten) statement, but only after the other specializations, because
    // inserting invalidates the analyses they share.
    defer.stage(
        () -> {
          decrement.setArg(1, oneBased);
          decrement.insertBefore(bb.statements().get(index));
        });
    return new Read(zeroBased);
  }

  /// Whether `signature` is `v(X)b,I,miss,miss --> X` for some scalar `X`.
  private static boolean isSimpleExtract(Signature signature) {
    var parameterTypes = signature.parameterTypes();
    return parameterTypes.size() == 4
        && isVector(parameterTypes.getFirst(), Ownership.BORROWED, signature.returnType())
        && isScalarInteger(parameterTypes.get(1))
        && isMissing(parameterTypes.get(2))
        && isMissing(parameterTypes.get(3));
  }

  /// Whether `signature` is `v(X)o,I,X --> v(X)f` (or with a trailing `miss`) for a scalar `X`.
  private static boolean isSimpleSubAssign(Signature signature) {
    var parameterTypes = signature.parameterTypes();
    return (parameterTypes.size() == 3 || parameterTypes.size() == 4)
        && isVector(parameterTypes.getFirst(), Ownership.OWNED, parameterTypes.get(2))
        && isScalarInteger(parameterTypes.get(1))
        && signature.returnType().equals(parameterTypes.getFirst().withOwnership(Ownership.FRESH))
        && (parameterTypes.size() == 3 || isMissing(parameterTypes.get(3)));
  }

  /// Whether `type` is `v(X)<ownership>`, where `X` is the scalar in `elementType`.
  private static boolean isVector(Type type, Ownership ownership, @Nullable Type elementType) {
    return type.isValue()
        && type.ownership() == ownership
        && type.kind() instanceof Kind.PrimitiveVector(var isScalar, var kind)
        && !isScalar
        && elementType != null
        && elementType.equals(Type.primitiveScalar(kind));
  }

  private static boolean isScalarInteger(Type type) {
    return type.equals(Type.INTEGER);
  }

  private static boolean isMissing(Type type) {
    return type.equals(Type.MISSING);
  }
}
