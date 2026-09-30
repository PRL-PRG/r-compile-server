package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;
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
public class Unbox extends AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    var changed = false;

    var cfgs = abstraction.streamCfgs().toList();
    for (var cfg : cfgs) {
      for (var bb : cfg.bbs()) {
        // Snapshot statements so inserted box/unbox statements aren't re-processed.
        for (var stmt : List.copyOf(bb.statements())) {
          var assignee = stmt.assignee();

          if (!(stmt.expression() instanceof Call(StaticFnCallee callee))) {
            continue;
          }

          var specialization = planSpecialization(topLevel, feedback, callee);
          if (specialization == null) continue;

          // Insert unbox instructions before the call, and rewrite the unboxed arguments.
          // Call arguments follow the callee's own argument (index 0).
          var callArguments = List.copyOf(stmt.args().subList(1, stmt.argCount()));
          for (var j = 0; j < callArguments.size(); j++) {
            if (!specialization.parameterUnboxings().get(j)) continue;
            var unboxedReg = insertUnbox(callArguments.get(j), abstraction, stmt);
            stmt.setArg(j + 1, new Read(unboxedReg));
          }

          var newCallee =
              new StaticFnCallee(
                  callee.function(),
                  // Can't dispatch if the return isn't `SEXP`
                  callee.isDispatch() && !specialization.returnUnboxing(),
                  specialization.rewriteSignature(callee.signature()));

          if (assignee != null && specialization.returnUnboxing()) {
            // The call now returns the unboxed scalar; re-box for the original result's users.
            var calleeReturnType = callee.signature().returnType();

            // A fresh statement holds the (now scalar) call result, on its own use-set.
            var newCallStmt =
                new Statement(stmt.comments(), new Call(newCallee), List.copyOf(stmt.args()));
            var scalar =
                newCallStmt.setAssignee(
                    abstraction.freshName(assignee.name()), unboxed(calleeReturnType));

            // Box the scalar back to the original (boxed) type for the original users.
            var boxStmt = boxStatement(new Read(scalar), calleeReturnType);
            var boxedAssignee =
                boxStmt.setAssignee(abstraction.freshName(assignee.name()), calleeReturnType);

            // Forward the original result's users to the re-boxed value (before replacing the
            // call statement, so the old assignee's uses are still attached).
            assignee.substUsesWith(new Read(boxedAssignee));
            stmt.replaceWith(newCallStmt);
            boxStmt.insertAfter(newCallStmt);
          } else {
            // Only the callee signature changed; keep the statement's arguments and assignee.
            stmt.setExpression(new Call(newCallee));
          }

          changed = true;
        }
      }
    }

    return changed;
  }

  private @Nullable Specialization planSpecialization(
      Optimization topLevel, AbstractionFeedback feedback, StaticFnCallee callee) {
    var function = callee.function();
    if (function == BOX_FUN || function == UNBOX_FUN) {
      return null;
    }

    // Generate a "specialization finder" that represents all possible signatures with
    // unboxings, and the specializations necessary to get those signatures
    var specializationFinder = new SpecializationFinder(callee.signature());

    // Abort if we can't specialize further
    var bestSpecialization = specializationFinder.bestSpecialization();
    if (bestSpecialization == null) return null;

    // First, see if we have an existing specialized version
    var exactVersion =
        function.versions().stream()
            .filter(
                v ->
                    bestSpecialization.equals(
                        specializationFinder.specializationFor(v.signature())))
            .findFirst();
    if (exactVersion.isPresent()) {
      return bestSpecialization;
    }

    // Otherwise, see if we can specialize the current version
    // (If so, we can always fully specialize)
    var currentVersion = callee.minVersion();
    if (currentVersion != null && !currentVersion.isStub()) {
      createUnboxedVersion(
          topLevel, feedback, function, currentVersion, callee.signature(), bestSpecialization);
      return bestSpecialization;
    }

    // Lastly, see if we can use an existing version that is not maximally specialized
    var okVersion =
        function.versions().stream()
            .map(v -> Optional.ofNullable(specializationFinder.specializationFor(v.signature())))
            .filter(Optional::isPresent)
            .map(Optional::get)
            .findFirst();
    return okVersion.orElse(null);
  }

  private static final class SpecializationFinder {
    private final Signature original;
    private final ImmutableBoolArray unboxableParameters;
    private final boolean unboxableReturn;

    SpecializationFinder(Signature original) {
      this.original = original;
      unboxableParameters =
          original.parameterTypes().stream()
              .map(Unbox::canUnbox)
              .collect(ImmutableBoolArray.toImmutableBoolArray());
      unboxableReturn = canUnbox(original.returnType());
    }

    @Nullable Specialization bestSpecialization() {
      // Empty specialization = no specialization
      var hasParameterUnboxing = unboxableParameters.stream().anyMatch(Boolean::booleanValue);
      if (!hasParameterUnboxing && !unboxableReturn) return null;

      return new Specialization(unboxableParameters, unboxableReturn);
    }

    /// The parameter and return unboxings that convert the original signature into `other`
    @Nullable Specialization specializationFor(Signature other) {
      if (original.parameterTypes().size() != other.parameterTypes().size()) return null;
      if (!other.hasNarrowerStrictnesses(original)) return null;
      if (!other.effects().isSubsetOf(original.effects())) return null;

      var hasParameterUnboxing = false;
      var parameterUnboxings = new boolean[original.parameterTypes().size()];
      var returnUnboxing = false;

      for (int i = 0; i < original.parameterTypes().size(); i++) {
        var originalParameter = original.parameterTypes().get(i);
        var otherParameter = other.parameterTypes().get(i);
        if (unboxableParameters.get(i)
            && unboxed(originalParameter).allMatchesMatch(otherParameter)) {
          hasParameterUnboxing = true;
          parameterUnboxings[i] = true;
        } else if (!originalParameter.allMatchesMatch(otherParameter)) {
          return null;
        }
      }

      if (unboxableReturn
          && other.returnType().canBeAssignedToAll(unboxed(original.returnType()))) {
        returnUnboxing = true;
      } else if (!other.returnType().canBeAssignedToAll(original.returnType())) {
        return null;
      }

      // Empty specialization = no specialization
      if (!hasParameterUnboxing && !returnUnboxing) return null;

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
      Optimization topLevel,
      AbstractionFeedback feedback,
      Function function,
      Abstraction boxedVersion,
      Signature signature,
      Specialization specialization) {
    var oldParams = boxedVersion.parameters();
    var numParams = oldParams.size();

    // Specialize parameters (the new version takes unboxed scalars where applicable).
    var newParams = new ArrayList<>(FunctionParameter.copyAll(oldParams));
    for (var i = 0; i < numParams; i++) {
      if (!specialization.parameterUnboxings().get(i)) continue;
      var oldParam = oldParams.get(i);
      var sigParamType = signature.parameterTypes().get(i);
      newParams.set(i, new FunctionParameter(oldParam.name(), unboxed(sigParamType), false));
    }

    var boxedReturnType = boxedVersion.returnType();
    LazyCopy.create(
        topLevel,
        feedback.module(),
        function,
        boxedVersion,
        newParams,
        new LazyCopy.Adapter() {
          /// Re-box each unboxed parameter, so the boxed version (or its body) still sees the
          /// boxed value.
          @Override
          public @Nullable Statement adaptParameter(Abstraction copy, int index) {
            if (!specialization.parameterUnboxings().get(index)) {
              return null;
            }
            var scalarParam = copy.parameters().get(index);
            var sigParamType = signature.parameterTypes().get(index);

            var boxStmt = boxStatement(new Read(scalarParam), sigParamType);
            boxStmt.setAssignee(copy.freshName(scalarParam.name()), sigParamType);
            return boxStmt;
          }

          @Override
          public Type returnType(Type sourceReturnType) {
            return specialization.returnUnboxing() ? unboxed(sourceReturnType) : sourceReturnType;
          }

          @Override
          public @Nullable Statement adaptReturn(Abstraction copy, Argument sourceReturn) {
            if (!specialization.returnUnboxing()) {
              return null;
            }

            var unboxStmt = unboxStatement(sourceReturn, boxedReturnType);
            unboxStmt.setAssignee(
                copy.freshName(
                    sourceReturn.variable() == null
                        ? Register.DEFAULT_NAME
                        : sourceReturn.variable().name()),
                unboxed(boxedReturnType));
            return unboxStmt;
          }
        });
  }

  /// Insert `unbox<v1(X) --> X>(original)` immediately before `point`, and return its register.
  private Register insertUnbox(Argument original, Abstraction scope, Statement point) {
    var argumentType = scope.typeOf(original);
    assert canUnbox(argumentType);
    var unboxStmt = unboxStatement(original, argumentType);
    var unboxedReg =
        unboxStmt.setAssignee(
            scope.freshName(
                original.variable() == null ? Register.DEFAULT_NAME : original.variable().name()),
            unboxed(argumentType));
    unboxStmt.insertBefore(point);
    return unboxedReg;
  }

  static boolean canUnbox(Type argumentType) {
    return argumentType.isValue()
        && argumentType.ownership() != Ownership.FRESH
        && argumentType.concreteness() == Concreteness.DEFINITE
        && argumentType.kind() instanceof Kind.PrimitiveVector(var isScalar, _)
        && isScalar;
  }

  static Type unboxed(Type type) {
    assert canUnbox(type);
    return Type.primitiveScalar(((Kind.PrimitiveVector) type.kind()).primitive());
  }

  /// A standalone `box<X --> v1(X)>(scalarArgument)` statement (no assignee).
  static Statement boxStatement(Argument scalarArgument, Type boxedType) {
    var boxSig = new Signature(ImmutableList.of(unboxed(boxedType)), boxedType, Effects.NONE);
    return new Statement(
        new Call(new StaticFnCallee(BOX_FUN, false, boxSig)),
        List.of(Constant.ELIDED_CLOSURE, scalarArgument));
  }

  /// A standalone `unbox<v1(X) --> X>(boxedArgument)` statement (no assignee).
  static Statement unboxStatement(Argument boxedArgument, Type boxedType) {
    var unboxSig = new Signature(ImmutableList.of(boxedType), unboxed(boxedType), Effects.NONE);
    return new Statement(
        new Call(new StaticFnCallee(UNBOX_FUN, false, unboxSig)),
        List.of(Constant.ELIDED_CLOSURE, boxedArgument));
  }
}
