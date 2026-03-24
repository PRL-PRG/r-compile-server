package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
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
  /// Per-abstraction: maps (original v1-typed register, BB) to its unboxed register in that BB.
  private final Map<Register, Map<BB, Register>> unboxedRegisters = new HashMap<>();

  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(InferType.class);
  }

  @Override
  public boolean shouldRun(Abstraction scope, Analyses analyses) {
    unboxedRegisters.clear();
    return true;
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
    var isBuiltinOrIntrinsic = function.owner() == BUILTINS || function.owner() == INTRINSICS;

    var newArgs = new ArrayList<>(callArguments);
    var newParamTypes = new ArrayList<>(callee.signature().parameterTypes());
    var newStrictnesses = new ArrayList<>(callee.signature().parameterStrictnesses());
    var changed = false;
    int deferredUnboxCount = 0;

    // Unbox v1(X) parameters to scalar X
    for (int i = 0; i < newArgs.size() && i < newParamTypes.size(); i++) {
      var arg = newArgs.get(i);
      if (arg.variable() == null) continue;

      var argType = scope.typeOf(arg.variable());
      if (argType == null) continue;
      if (!argType.isValue()) continue;
      if (!(argType.kind() instanceof Kind.PrimitiveVector1(var primitiveKind))) continue;

      var unboxedScalarType = Type.primitiveScalar(primitiveKind);

      // Build a test signature with the unboxed type at position i
      var testParamTypes = new ArrayList<>(callee.signature().parameterTypes());
      testParamTypes.set(i, unboxedScalarType);
      var testSig =
          new Signature(
              ImmutableList.copyOf(testParamTypes),
              callee.signature().returnType(),
              callee.signature().effects());

      if (isBuiltinOrIntrinsic) {
        // Only replace if there's an existing compatible version
        if (function.guess(testSig) == null) continue;
      } else {
        // User-defined: create a version if none exists
        if (function.guess(testSig) == null) {
          tryToCreateUnboxedParamVersion(feedback, function, callee, i, primitiveKind);
          // Verify it was created
          if (function.guess(testSig) == null) continue;
        }
      }

      // Get or create unboxed register for this (register, BB) pair
      boolean cached =
          unboxedRegisters.containsKey(arg.variable())
              && unboxedRegisters.get(arg.variable()).containsKey(bb);
      var unboxedReg = ensureUnbox(arg.variable(), primitiveKind, scope, bb, index, defer);
      if (!cached) deferredUnboxCount++;

      newArgs.set(i, new Read(unboxedReg));
      newParamTypes.set(i, unboxedScalarType);
      // Scalar types are values, so they can't be strict
      if (newStrictnesses.get(i)) {
        newStrictnesses.set(i, false);
      }
      changed = true;
    }

    // Unbox v1(X) return type to scalar X
    var newReturnType = callee.signature().returnType();
    if (newReturnType.isValue()
        && newReturnType.kind() instanceof Kind.PrimitiveVector1(var returnPrimKind)) {
      var unboxedRetType = Type.primitiveScalar(returnPrimKind);

      // Build a test signature with original param types and unboxed return
      var testSig =
          new Signature(
              callee.signature().parameterTypes(), unboxedRetType, callee.signature().effects());

      boolean canUnboxReturn;
      if (isBuiltinOrIntrinsic) {
        canUnboxReturn = function.guess(testSig) != null;
      } else {
        if (function.guess(testSig) == null) {
          tryToCreateUnboxedReturnVersion(feedback, function, callee, returnPrimKind);
        }
        canUnboxReturn = function.guess(testSig) != null;
      }

      if (canUnboxReturn) {
        changed = true;

        if (assignee != null) {
          // Create new register for scalar result; box back to v1 after call
          ensureBox(
              assignee, returnPrimKind, newReturnType, scope, bb, index, deferredUnboxCount, defer);
        } else {
          // No assignee: safe to change return type directly in the returned expression
          newReturnType = unboxedRetType;
        }
      }
    }

    if (!changed) return expression;

    var newSig =
        new Signature(
            ImmutableList.copyOf(newParamTypes),
            ImmutableList.copyOf(newStrictnesses),
            newReturnType,
            callee.signature().effects());
    return new Call(
        new StaticFnCallee(callee.isDispatch(), function, newSig), ImmutableList.copyOf(newArgs));
  }

  /// Insert `box<X --> v1(X)>(r1)` after the call, changing the call's assignee to `r1`.
  /// This is done in a deferred insertion because it must change the assignee (which `run()`
  /// cannot do) and must account for preceding unbox insertions shifting the call position.
  private void ensureBox(
      Register origAssignee,
      PrimitiveKind kind,
      Type v1Type,
      Abstraction scope,
      BB bb,
      int index,
      int deferredUnboxCount,
      DeferredInsertions defer) {
    var unboxedRetType = Type.primitiveScalar(kind);
    var scalarResultReg = scope.addLocal(origAssignee.name(), unboxedRetType);

    final int numPreInsertions = deferredUnboxCount;
    defer.stage(
        () -> {
          int callPos = index + numPreInsertions;
          var oldStmt = bb.statements().get(callPos);
          var oldCall = (Call) oldStmt.expression();
          var oldCallee = (StaticFnCallee) oldCall.callee();

          // Rebuild call expression with scalar return type
          var newCallSig =
              new Signature(
                  oldCallee.signature().parameterTypes(),
                  oldCallee.signature().parameterStrictnesses(),
                  unboxedRetType,
                  oldCallee.signature().effects());
          var newCallExpr =
              new Call(
                  new StaticFnCallee(oldCallee.isDispatch(), oldCallee.function(), newCallSig),
                  oldCall.callArguments());

          // Replace: assignee becomes the scalar register, expression gets scalar return type
          bb.replaceStatementAt(callPos, new Statement(scalarResultReg, newCallExpr));

          // Insert box after: origAssignee = box<X --> v1(X)>(scalarResultReg)
          var boxFun = INTRINSICS.localFunction(Variable.named("box"));
          assert boxFun != null : "intrinsic 'box' not found";
          var boxSig = new Signature(ImmutableList.of(unboxedRetType), v1Type, Effects.NONE);
          var boxCall =
              new Call(
                  new StaticFnCallee(false, boxFun, boxSig),
                  ImmutableList.of(new Read(scalarResultReg)));
          bb.insertStatement(callPos + 1, new Statement(origAssignee, boxCall));
        });
  }

  /// Insert `unbox<v1(X) --> X>(original)` before the call (at `index`), caching per (register,
  /// BB) to avoid duplicates.
  private Register ensureUnbox(
      Register original,
      PrimitiveKind kind,
      Abstraction scope,
      BB bb,
      int index,
      DeferredInsertions defer) {
    var perBb = unboxedRegisters.computeIfAbsent(original, _ -> new HashMap<>());
    var existing = perBb.get(bb);
    if (existing != null) return existing;

    var unboxedType = Type.primitiveScalar(kind);
    var unboxedReg = scope.addLocal(original.name(), unboxedType);
    perBb.put(bb, unboxedReg);

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

  private void tryToCreateUnboxedParamVersion(
      AbstractionFeedback feedback,
      Function function,
      StaticFnCallee callee,
      int argIndex,
      PrimitiveKind primitiveKind) {
    var existingVersion = callee.minVersion();
    if (existingVersion == null || existingVersion.cfg() == null) return;

    var unboxedScalarType = Type.primitiveScalar(primitiveKind);
    var origParam = existingVersion.parameters().get(argIndex);
    var origReg = origParam.variable();
    var boxedType = origParam.type();
    assert boxedType.equals(Type.primitiveVector1(primitiveKind, Ownership.SHARED));

    // Find a unique name for the scalar parameter (different from origReg)
    var scalarReg = existingVersion.resemblance(origReg.name());

    // Create new parameters: same as existing but with scalar type at argIndex
    var newParams = new ArrayList<>(existingVersion.parameters());
    newParams.set(argIndex, new Parameter(scalarReg, unboxedScalarType, origParam.strict()));

    // Create new version
    var newVersion = copy2(feedback.module(), function, existingVersion, newParams);

    // Add local for the original register with v1 type.
    // The copied body references origReg expecting v1(X).
    // origReg is no longer a parameter (it was renamed to scalarReg),
    // so we add it as a local defined by the box instruction below.
    newVersion.addLocal(new Local(origReg, boxedType));

    // Insert box instruction at top of entry block:
    // origReg = box<X --> v1(X)>(scalarReg)
    var boxFun = INTRINSICS.localFunction(Variable.named("box"));
    assert boxFun != null : "intrinsic 'box' not found";
    var boxSig = new Signature(ImmutableList.of(unboxedScalarType), boxedType, Effects.NONE);
    var boxCall =
        new Call(new StaticFnCallee(false, boxFun, boxSig), ImmutableList.of(new Read(scalarReg)));
    Objects.requireNonNull(newVersion.cfg())
        .entry()
        .insertStatement(0, new Statement(origReg, boxCall));
  }

  /// Create a new version of the callee that returns scalar `X` instead of `v1(X)`, by copying
  /// the existing version and unboxing the returned value before every return.
  /// (Dual of [#tryToCreateUnboxedParamVersion]: that boxes at entry, this unboxes at returns.)
  private void tryToCreateUnboxedReturnVersion(
      AbstractionFeedback feedback,
      Function function,
      StaticFnCallee callee,
      PrimitiveKind primitiveKind) {
    var existingVersion = callee.minVersion();
    if (existingVersion == null || existingVersion.cfg() == null) return;

    var unboxedRetType = Type.primitiveScalar(primitiveKind);
    var v1RetType = Type.primitiveVector1(primitiveKind, Ownership.SHARED);

    // Pre-check: all returns must have a v1(X)-typed register value.
    // If any return has an incompatible value, abort.
    for (var checkBb : Objects.requireNonNull(existingVersion.cfg()).bbs()) {
      if (!(checkBb.jump() instanceof Return(_, var value))) continue;
      if (value.variable() == null) return; // can't unbox a constant return
      var retType = existingVersion.typeOf(value.variable());
      if (retType == null) return;
      if (!retType.isValue()) return;
      if (!(retType.kind() instanceof Kind.PrimitiveVector1(var pk) && pk == primitiveKind)) return;
    }

    // Create new version with same params but scalar return type
    var newVersion =
        copy2(feedback.module(), function, existingVersion, existingVersion.parameters());
    newVersion.setReturnType(unboxedRetType);

    // Unbox the returned value before every return:
    // origReg --> unboxedReg = unbox<v1(X) --> X>(origReg); return unboxedReg
    var unboxFun = INTRINSICS.localFunction(Variable.named("unbox"));
    assert unboxFun != null : "intrinsic 'unbox' not found";
    var unboxSig = new Signature(ImmutableList.of(v1RetType), unboxedRetType, Effects.NONE);

    for (var retBb : Objects.requireNonNull(newVersion.cfg()).bbs()) {
      if (!(retBb.jump() instanceof Return(var comments, var value))) continue;
      assert value.variable() != null;

      var unboxedReg = newVersion.addLocal(value.variable().name(), unboxedRetType);
      var unboxCall =
          new Call(
              new StaticFnCallee(false, unboxFun, unboxSig),
              ImmutableList.of(new Read(value.variable())));
      retBb.appendStatement(new Statement(unboxedReg, unboxCall));
      retBb.setJump(new Return(comments, new Read(unboxedReg)));
    }
  }
}
