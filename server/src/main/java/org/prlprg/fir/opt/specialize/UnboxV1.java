package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;
import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.util.ImmutableBoolArray;

/// Optimization that unboxes `v1(X)` arguments and return values in calls where a scalar `X`
/// version exists or can be created.
///
/// For each register `r` of type `v1(X)` used as a call argument:
/// - If the call has a compatible scalar version, or one can be created from the existing
///   version, inserts `r1 = unbox<v1(X) --> X>(r)` and replaces the argument with `r1`.
/// - Compatible scalar versions can be created from non-stub versions, by copying the version,
///   changing the parameter to unboxed, and boxing the now-unboxed parameter at the entry.
///
/// If a call's return type is `v1(X)`:
/// - If the call has a compatible scalar-return version, or one can be created from the
///   existing version, changes the signature return type to `X`.
/// - If the call is assigned to `r`, makes the assignee a new register `r1`, then inserts
///   `r = box<X --> v1(X)>(r1)` after the call.
/// - Compatible scalar-return versions can be created from non-stub versions, by copying,
///   changing the return type to unboxed, and unboxing the returned value before every return.
public class UnboxV1 implements AbstractionOptimization {
  @Override
  public boolean run(Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    var changed = false;

    var cfgs = abstraction.streamCfgs().toList();
    for (var cfg : cfgs) {
      for (var bb : cfg.bbs()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          var stmt = bb.statements().get(i);
          var assignee = stmt.assignee();

          if (!(stmt.expression() instanceof Call(StaticFnCallee callee, var callArguments))) {
            continue;
          }

          var specialization = planSpecialization(abstraction, feedback, callee, callArguments);
          if (specialization == null) continue;

          // Insert unbox instructions before the call
          var newArgs = new ArrayList<>(callArguments);
          for (var j = 0; j < callArguments.size(); j++) {
            if (!specialization.parameterUnboxings().get(j)) continue;
            var unboxedReg = insertUnbox(callArguments.get(j), abstraction, bb, i++);
            newArgs.set(j, new Read(unboxedReg));
          }

          // Replace the call (at shifted position)
          var newCallExpr =
              new Call(
                  new StaticFnCallee(
                      callee.isDispatch(),
                      callee.function(),
                      specialization.rewriteSignature(callee.signature())),
                  ImmutableList.copyOf(newArgs));

          if (assignee != null && specialization.returnUnboxing()) {
            // Change assignee to a new scalar register, insert box after
            var calleeReturnType = callee.signature().returnType();
            var scalar = abstraction.addLocal(assignee.name(), unboxed(calleeReturnType));
            bb.replaceStatementAt(i++, new Statement(scalar, newCallExpr));
            bb.insertStatement(
                i, new Statement(assignee, boxCall(new Read(scalar), calleeReturnType)));
          } else {
            bb.replaceStatementAt(i, new Statement(stmt.comments(), assignee, newCallExpr));
          }

          changed = true;
        }
      }
    }

    return changed;
  }

  private @Nullable Specialization planSpecialization(
      Abstraction scope,
      AbstractionFeedback feedback,
      StaticFnCallee callee,
      ImmutableList<Argument> callArguments) {
    var function = callee.function();
    if (function == BOX_FUN || function == UNBOX_FUN) {
      return null;
    }

    // Generate a "specialization finder" that represents all possible signatures with
    // unboxings, and the specializations necessary to get those signatures
    var specializationFinder = new SpecializationFinder(callee.signature());
    for (int i = 0;
        i < callArguments.size() && i < callee.signature().parameterTypes().size();
        i++) {
      var argument = callArguments.get(i);
      var argumentType = scope.typeOf(argument);
      if (argumentType != null && canUnbox(argumentType)) {
        specializationFinder.markUnboxableParameter(i);
      }
    }
    if (canUnbox(callee.signature().returnType())) {
      specializationFinder.markUnboxableReturn();
    }

    // Get the best signature i.e. the one with the most unboxings
    var bestSignature = specializationFinder.bestSignature();

    // If we already have this, we can't specialize further
    if (specializationFinder.bestSignature().equals(callee.signature())) return null;

    // First, see if we have an existing specialized version
    var exactVersion =
        function.versionsSorted().stream()
            .filter(v -> v.signature().equals(bestSignature))
            .findFirst();
    if (exactVersion.isPresent()) {
      return specializationFinder.bestSpecialization();
    }

    // Otherwise, see if we can specialize the current version
    // (If so, we can always fully specialize)
    var currentVersion = callee.minVersion();
    if (currentVersion != null && !currentVersion.isStub()) {
      var specialization = specializationFinder.bestSpecialization();
      createUnboxedVersion(feedback, function, currentVersion, specialization);
      return specialization;
    }

    // Lastly, see if we can use an existing version that is not maximally specialized
    var okVersion =
        function.versionsSorted().stream()
            .map(v -> Optional.ofNullable(specializationFinder.specializationFor(v.signature())))
            .filter(Optional::isPresent)
            .map(Optional::get)
            .findFirst();
    return okVersion.orElse(null);
  }

  private static boolean canUnbox(Type argumentType) {
    return argumentType.isValue()
        && argumentType.ownership() != Ownership.FRESH
        && argumentType.concreteness() == Concreteness.DEFINITE
        && argumentType.kind() instanceof Kind.PrimitiveVector(var isScalar, _)
        && isScalar;
  }

  private static Type unboxed(Type type) {
    assert canUnbox(type);
    return Type.primitiveScalar(((Kind.PrimitiveVector) type.kind()).primitive());
  }

  private static final class SpecializationFinder {
    private final Signature original;
    private final boolean[] unboxableParameters;
    private boolean unboxableReturn;

    SpecializationFinder(Signature original) {
      this.original = original;
      unboxableParameters = new boolean[original.parameterTypes().size()];
      unboxableReturn = false;
    }

    void markUnboxableParameter(int index) {
      unboxableParameters[index] = true;
    }

    void markUnboxableReturn() {
      unboxableReturn = true;
    }

    Signature bestSignature() {
      return bestSpecialization().rewriteSignature(original);
    }

    Specialization bestSpecialization() {
      return new Specialization(ImmutableBoolArray.copyOf(unboxableParameters), unboxableReturn);
    }

    /// The parameter and return unboxings that convert the original signature into `other`
    @Nullable Specialization specializationFor(Signature other) {
      if (original.parameterTypes().size() != other.parameterTypes().size()) return null;
      if (!original.parameterStrictnesses().equals(other.parameterStrictnesses())) return null;
      if (!original.effects().equals(other.effects())) return null;

      var parameterUnboxings = new boolean[original.parameterTypes().size()];
      var returnUnboxing = false;

      for (int i = 0; i < original.parameterTypes().size(); i++) {
        var originalParameter = original.parameterTypes().get(i);
        var otherParameter = other.parameterTypes().get(i);
        if (unboxableParameters[i] && unboxed(originalParameter).equals(otherParameter)) {
          parameterUnboxings[i] = true;
        } else if (!originalParameter.equals(otherParameter)) {
          return null;
        }
      }

      if (unboxableReturn && unboxed(original.returnType()).equals(other.returnType())) {
        returnUnboxing = true;
      } else if (!original.returnType().equals(other.returnType())) {
        return null;
      }

      return new Specialization(ImmutableBoolArray.copyOf(parameterUnboxings), returnUnboxing);
    }
  }

  private record Specialization(ImmutableBoolArray parameterUnboxings, boolean returnUnboxing) {
    Signature rewriteSignature(Signature original) {
      return new Signature(
          Streams.mapWithIndex(
                  original.parameterTypes().stream(),
                  (p, i) -> parameterUnboxings.get((int) i) ? unboxed(p) : p)
              .collect(ImmutableList.toImmutableList()),
          original.parameterStrictnesses(),
          returnUnboxing ? unboxed(original.returnType()) : original.returnType(),
          original.effects());
    }
  }

  private void createUnboxedVersion(
      AbstractionFeedback feedback,
      Function function,
      Abstraction boxedVersion,
      Specialization specialization) {
    var oldParams = boxedVersion.parameters();
    var numParams = oldParams.size();

    // Specialize parameters
    var newParams = new ArrayList<>(oldParams);
    for (var i = 0; i < numParams; i++) {
      if (!specialization.parameterUnboxings().get(i)) continue;

      var oldParam = newParams.get(i);
      var newParamName = boxedVersion.resemblance(oldParam.variable().name());
      var newParam = new Parameter(newParamName, unboxed(oldParam.type()), false);

      newParams.set(i, newParam);
    }

    var newVersion = copy2(feedback.module(), function, boxedVersion, newParams);
    var newCfg = Objects.requireNonNull(newVersion.cfg());

    // Add parameter boxes
    var newEntry = newCfg.entry();
    var j = 0;
    for (var i = 0; i < numParams; i++) {
      if (!specialization.parameterUnboxings().get(i)) continue;

      var oldParam = oldParams.get(i);
      newVersion.addLocal(new Local(oldParam.variable(), oldParam.type()));
      newEntry.insertStatement(
          j,
          new Statement(
              oldParam.variable(),
              boxCall(new Read(newParams.get(i).variable()), oldParam.type())));
      j++;
    }

    // Add return unbox
    if (!specialization.returnUnboxing()) return;

    var oldReturnType = newVersion.returnType();
    var newReturnType = unboxed(oldReturnType);
    newVersion.setReturnType(newReturnType);
    for (var newExit : List.copyOf(newCfg.exits())) {
      if (!(newExit.jump() instanceof Return(var comments, var value))) continue;

      var unboxedReg =
          newVersion.addLocal(
              value.variable() == null ? Register.DEFAULT_NAME : value.variable().name(),
              newReturnType);
      newExit.appendStatement(new Statement(unboxedReg, unboxCall(value, oldReturnType)));
      newExit.setJump(new Return(comments, new Read(unboxedReg)));
    }
  }

  /// Insert `unbox<v1(X) --> X>(original)` at `insertIndex` in `bb`.
  private Register insertUnbox(Argument original, Abstraction scope, BB bb, int insertIndex) {
    var argumentType = scope.typeOf(original);
    assert argumentType != null && canUnbox(argumentType);
    var unboxedReg =
        scope.addLocal(
            original.variable() == null ? Register.DEFAULT_NAME : original.variable().name(),
            unboxed(argumentType));

    bb.insertStatement(insertIndex, new Statement(unboxedReg, unboxCall(original, argumentType)));
    return unboxedReg;
  }

  private static Call boxCall(Argument scalarArgument, Type boxedType) {
    var boxSig = new Signature(ImmutableList.of(unboxed(boxedType)), boxedType, Effects.NONE);
    return new Call(new StaticFnCallee(false, BOX_FUN, boxSig), ImmutableList.of(scalarArgument));
  }

  private static Call unboxCall(Argument boxedArgument, Type boxedType) {
    var unboxSig = new Signature(ImmutableList.of(boxedType), unboxed(boxedType), Effects.NONE);
    return new Call(
        new StaticFnCallee(false, UNBOX_FUN, unboxSig), ImmutableList.of(boxedArgument));
  }
}
