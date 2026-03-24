package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

/// Optimization that unboxes `v1(X)` arguments and return values in calls where a scalar `X`
/// version exists or can be created.
///
/// For each register `r` of type `v1(X)` used as a call argument:
/// - If the call is user-defined or a builtin/intrinsic with a compatible scalar version,
///   inserts `r1 = unbox<v1(X) --> X>(r)` and replaces the argument with `r1`.
/// - For user-defined calls without a compatible version, creates one by copying the existing
///   version, boxing the now-unboxed parameter at the top.
///
/// If a call's return type is `v1(X)`:
/// - If the call is user-defined or a builtin/intrinsic with a compatible scalar-return version,
///   changes the signature return type to `X`.
/// - If the call is assigned to `r`, makes the assignee a new register `r1`, then inserts
///   `r = box<X --> v1(X)>(r1)` after the call.
/// - For user-defined calls without a compatible version, creates one by copying the existing
///   version and unboxing the returned value before every return.
public class UnboxV1 implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {

    if (!(expression instanceof Call(StaticFnCallee callee, var callArguments))) return expression;

    var function = callee.function();
    var plan =
        planSpecialization(
            scope,
            feedback,
            callee,
            callArguments,
            function.owner() == BUILTINS || function.owner() == INTRINSICS,
            assignee != null);
    if (plan == null) return expression;

    var newArgs = new ArrayList<>(callArguments);
    int deferredUnboxCount = 0;

    for (var unboxing : plan.parameterUnboxings()) {
      var unboxedReg =
          addUnbox(unboxing.argument(), unboxing.primitiveKind(), scope, bb, index, defer);
      deferredUnboxCount++;

      newArgs.set(unboxing.index(), new Read(unboxedReg));
    }

    if (assignee != null && plan.returnUnboxing() != null) {
      addBox(
          assignee,
          plan.specializedSignature(),
          plan.returnUnboxing().boxedType(),
          scope,
          bb,
          index,
          deferredUnboxCount,
          defer);
    }

    return new Call(
        new StaticFnCallee(callee.isDispatch(), function, plan.rewrittenCallSignature()),
        ImmutableList.copyOf(newArgs));
  }

  /// Insert `box<X --> v1(X)>(r1)` after the call, changing the call's assignee to `r1`
  ///
  /// This requires `deferredUnboxCount` because the call (and thus box insertion) may be
  /// shifted by preceding unbox insertions
  private void addBox(
      Register origAssignee,
      Signature specializedSignature,
      Type boxedReturnType,
      Abstraction scope,
      BB bb,
      int index,
      int deferredUnboxCount,
      DeferredInsertions defer) {
    var scalarResultReg = scope.addLocal(origAssignee.name(), specializedSignature.returnType());

    defer.stage(
        () -> {
          int callPos = index + deferredUnboxCount;
          var oldStmt = bb.statements().get(callPos);
          var oldCall = (Call) oldStmt.expression();
          var oldCallee = (StaticFnCallee) oldCall.callee();

          var newCallExpr =
              new Call(
                  new StaticFnCallee(
                      oldCallee.isDispatch(), oldCallee.function(), specializedSignature),
                  oldCall.callArguments());

          // Replace: assignee becomes the scalar register, expression gets scalar return type
          bb.replaceStatementAt(callPos, new Statement(scalarResultReg, newCallExpr));

          // Insert box after: origAssignee = box<X --> v1(X)>(scalarResultReg)
          var boxFun = INTRINSICS.localFunction(Variable.named("box"));
          assert boxFun != null : "intrinsic 'box' not found";
          var boxSig =
              new Signature(
                  ImmutableList.of(specializedSignature.returnType()),
                  boxedReturnType,
                  Effects.NONE);
          var boxCall =
              new Call(
                  new StaticFnCallee(false, boxFun, boxSig),
                  ImmutableList.of(new Read(scalarResultReg)));
          bb.insertStatement(callPos + 1, new Statement(origAssignee, boxCall));
        });
  }

  /// Insert `unbox<v1(X) --> X>(original)` before the call (at `index`)
  private Register addUnbox(
      Register original,
      PrimitiveKind kind,
      Abstraction scope,
      BB bb,
      int index,
      DeferredInsertions defer) {
    var unboxedType = Type.primitiveScalar(kind);
    var unboxedReg = scope.addLocal(original.name(), unboxedType);

    var unboxFun = INTRINSICS.localFunction(Variable.named("unbox"));
    assert unboxFun != null : "intrinsic 'unbox' not found";
    var v1Type = Type.primitiveVector1(kind, Ownership.SHARED);
    var unboxSig = new Signature(ImmutableList.of(v1Type), unboxedType, Effects.NONE);
    var unboxCall =
        new Call(
            new StaticFnCallee(false, unboxFun, unboxSig), ImmutableList.of(new Read(original)));

    defer.stage(() -> bb.insertStatement(index, new Statement(unboxedReg, unboxCall)));

    return unboxedReg;
  }

  private @Nullable SpecializationPlan planSpecialization(
      Abstraction scope,
      AbstractionFeedback feedback,
      StaticFnCallee callee,
      ImmutableList<Argument> callArguments,
      boolean isBuiltinOrIntrinsic,
      boolean hasAssignee) {
    var existingVersion = callee.minVersion();
    var signaturePlan = new SignaturePlan(callee.signature());
    var parameterUnboxings = new ArrayList<ParameterUnboxing>();

    for (int i = 0;
        i < callArguments.size() && i < callee.signature().parameterTypes().size();
        i++) {
      var unboxing = computeParameterUnboxing(i, callArguments.get(i), scope);
      if (unboxing == null) continue;

      var candidateSignature = signaturePlan.candidateAfter(unboxing);
      if (!canUseSignature(
          callee.function(),
          candidateSignature,
          isBuiltinOrIntrinsic,
          canCreateParameter(existingVersion, unboxing))) {
        continue;
      }

      signaturePlan.apply(unboxing);
      parameterUnboxings.add(unboxing);
    }

    ReturnUnboxing returnUnboxing = computeReturnUnboxing(callee.signature().returnType());
    if (returnUnboxing != null) {
      var candidateSignature = signaturePlan.candidateAfter(returnUnboxing);
      if (canUseSignature(
          callee.function(),
          candidateSignature,
          isBuiltinOrIntrinsic,
          canCreateReturn(existingVersion, returnUnboxing))) {
        signaturePlan.apply(returnUnboxing);
      } else {
        returnUnboxing = null;
      }
    }

    var specializedSignature = signaturePlan.signature();
    if (specializedSignature.equals(callee.signature())) return null;

    if (!isBuiltinOrIntrinsic && callee.function().guess(specializedSignature) == null) {
      tryToCreateUnboxedVersion(
          feedback,
          callee.function(),
          callee,
          ImmutableList.copyOf(parameterUnboxings),
          returnUnboxing);
      if (callee.function().guess(specializedSignature) == null) return null;
    }

    var rewrittenCallSignature =
        returnUnboxing != null && hasAssignee
            ? buildSignature(
                specializedSignature.parameterTypes(),
                specializedSignature.parameterStrictnesses(),
                callee.signature().returnType(),
                specializedSignature.effects())
            : specializedSignature;
    return new SpecializationPlan(
        specializedSignature,
        rewrittenCallSignature,
        ImmutableList.copyOf(parameterUnboxings),
        returnUnboxing);
  }

  private static boolean canUseSignature(
      Function function,
      Signature candidateSignature,
      boolean isBuiltinOrIntrinsic,
      boolean canCreateVersion) {
    return function.guess(candidateSignature) != null
        || (!isBuiltinOrIntrinsic && canCreateVersion);
  }

  private static @Nullable ParameterUnboxing computeParameterUnboxing(
      int index, Argument argument, Abstraction scope) {
    var register = argument.variable();
    if (register == null) return null;

    var argumentType = scope.typeOf(register);
    if (argumentType == null || !argumentType.isValue()) return null;
    if (!(argumentType.kind() instanceof Kind.PrimitiveVector(var isScalar, var primitiveKind)
        && isScalar)) return null;
    return new ParameterUnboxing(index, register, primitiveKind);
  }

  private static @Nullable ReturnUnboxing computeReturnUnboxing(Type returnType) {
    if (!returnType.isValue()) return null;
    if (!(returnType.kind() instanceof Kind.PrimitiveVector(var isScalar, var primitiveKind)
        && isScalar)) return null;
    return new ReturnUnboxing(returnType, primitiveKind);
  }

  private static boolean canCreateParameter(
      @Nullable Abstraction existingVersion, ParameterUnboxing unboxing) {
    if (existingVersion == null || existingVersion.cfg() == null) return false;
    if (unboxing.index() >= existingVersion.parameters().size()) return false;
    return existingVersion.parameters().get(unboxing.index()).type().equals(unboxing.boxedType());
  }

  private static boolean canCreateReturn(
      @Nullable Abstraction existingVersion, ReturnUnboxing unboxing) {
    if (existingVersion == null || existingVersion.cfg() == null) return false;
    for (var bb : Objects.requireNonNull(existingVersion.cfg()).bbs()) {
      if (!(bb.jump() instanceof Return(_, var value))) continue;
      var variable = value.variable();
      if (variable == null) return false;
      var returnType = existingVersion.typeOf(variable);
      if (returnType == null || !returnType.isValue()) return false;
      if (!(returnType.kind() instanceof Kind.PrimitiveVector(var isScalar, var primitiveKind)
          && isScalar
          && primitiveKind == unboxing.primitiveKind())) {
        return false;
      }
    }
    return true;
  }

  private void tryToCreateUnboxedVersion(
      AbstractionFeedback feedback,
      Function function,
      StaticFnCallee callee,
      ImmutableList<ParameterUnboxing> parameterUnboxings,
      @Nullable ReturnUnboxing returnUnboxing) {
    var existingVersion = callee.minVersion();
    if (existingVersion == null || existingVersion.cfg() == null) return;

    var newParams = new ArrayList<>(existingVersion.parameters());
    var entryBoxes = new ArrayList<Statement>();
    for (var unboxing : parameterUnboxings) {
      if (unboxing.index() >= existingVersion.parameters().size()) return;

      var originalParameter = existingVersion.parameters().get(unboxing.index());
      if (!originalParameter.type().equals(unboxing.boxedType())) return;

      var scalarParameter = existingVersion.resemblance(originalParameter.variable().name());
      newParams.set(
          unboxing.index(), new Parameter(scalarParameter, unboxing.unboxedType(), false));
      entryBoxes.add(
          boxStatement(
              originalParameter.variable(),
              scalarParameter,
              unboxing.unboxedType(),
              unboxing.boxedType()));
    }

    var newVersion = copy2(feedback.module(), function, existingVersion, newParams);
    var newCfg = Objects.requireNonNull(newVersion.cfg());

    for (var unboxing : parameterUnboxings) {
      var originalParameter = existingVersion.parameters().get(unboxing.index());
      newVersion.addLocal(new Local(originalParameter.variable(), originalParameter.type()));
    }

    for (int i = 0; i < entryBoxes.size(); i++) {
      newCfg.entry().insertStatement(i, entryBoxes.get(i));
    }

    if (returnUnboxing == null) return;

    newVersion.setReturnType(returnUnboxing.unboxedType());
    for (var retBb : newCfg.bbs()) {
      if (!(retBb.jump() instanceof Return(var comments, var value))) continue;
      var variable = value.variable();
      assert variable != null;

      var unboxedReg = newVersion.addLocal(variable.name(), returnUnboxing.unboxedType());
      var unboxCall = unboxCall(variable, returnUnboxing.boxedType(), returnUnboxing.unboxedType());
      retBb.appendStatement(new Statement(unboxedReg, unboxCall));
      retBb.setJump(new Return(comments, new Read(unboxedReg)));
    }
  }

  private static Statement boxStatement(
      Register boxedResult, Register scalarArgument, Type scalarType, Type boxedType) {
    return new Statement(boxedResult, boxCall(scalarArgument, scalarType, boxedType));
  }

  private static Call boxCall(Register scalarArgument, Type scalarType, Type boxedType) {
    var boxFun = INTRINSICS.localFunction(Variable.named("box"));
    assert boxFun != null : "intrinsic 'box' not found";
    var boxSig = new Signature(ImmutableList.of(scalarType), boxedType, Effects.NONE);
    return new Call(
        new StaticFnCallee(false, boxFun, boxSig), ImmutableList.of(new Read(scalarArgument)));
  }

  private static Call unboxCall(Register boxedArgument, Type boxedType, Type scalarType) {
    var unboxFun = INTRINSICS.localFunction(Variable.named("unbox"));
    assert unboxFun != null : "intrinsic 'unbox' not found";
    var unboxSig = new Signature(ImmutableList.of(boxedType), scalarType, Effects.NONE);
    return new Call(
        new StaticFnCallee(false, unboxFun, unboxSig), ImmutableList.of(new Read(boxedArgument)));
  }

  private static Signature buildSignature(
      java.util.List<Type> parameterTypes,
      java.util.List<Boolean> parameterStrictnesses,
      Type returnType,
      Effects effects) {
    return new Signature(
        ImmutableList.copyOf(parameterTypes),
        ImmutableList.copyOf(parameterStrictnesses),
        returnType,
        effects);
  }

  private static final class SignaturePlan {
    private final ArrayList<Type> parameterTypes;
    private final ArrayList<Boolean> parameterStrictnesses;
    private final Effects effects;
    private Type returnType;

    private SignaturePlan(Signature signature) {
      parameterTypes = new ArrayList<>(signature.parameterTypes());
      parameterStrictnesses = new ArrayList<>(signature.parameterStrictnesses());
      returnType = signature.returnType();
      effects = signature.effects();
    }

    private Signature candidateAfter(ParameterUnboxing unboxing) {
      var newParameterTypes = new ArrayList<>(parameterTypes);
      var newParameterStrictnesses = new ArrayList<>(parameterStrictnesses);
      newParameterTypes.set(unboxing.index(), unboxing.unboxedType());
      newParameterStrictnesses.set(unboxing.index(), false);
      return buildSignature(newParameterTypes, newParameterStrictnesses, returnType, effects);
    }

    private Signature candidateAfter(ReturnUnboxing unboxing) {
      return buildSignature(parameterTypes, parameterStrictnesses, unboxing.unboxedType(), effects);
    }

    private void apply(ParameterUnboxing unboxing) {
      parameterTypes.set(unboxing.index(), unboxing.unboxedType());
      parameterStrictnesses.set(unboxing.index(), false);
    }

    private void apply(ReturnUnboxing unboxing) {
      returnType = unboxing.unboxedType();
    }

    private Signature signature() {
      return buildSignature(parameterTypes, parameterStrictnesses, returnType, effects);
    }
  }

  private record SpecializationPlan(
      Signature specializedSignature,
      Signature rewrittenCallSignature,
      ImmutableList<ParameterUnboxing> parameterUnboxings,
      @Nullable ReturnUnboxing returnUnboxing) {}

  private record ParameterUnboxing(int index, Register argument, PrimitiveKind primitiveKind) {
    private Type boxedType() {
      return Type.primitiveVector1(primitiveKind, Ownership.SHARED);
    }

    private Type unboxedType() {
      return Type.primitiveScalar(primitiveKind);
    }
  }

  private record ReturnUnboxing(Type boxedType, PrimitiveKind primitiveKind) {
    private Type unboxedType() {
      return Type.primitiveScalar(primitiveKind);
    }
  }
}
