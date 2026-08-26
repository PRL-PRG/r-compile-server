package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy;

import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;

/// If a version owns a vector parameter it never actually needs to own, copy it into a new version
/// that only *borrows* that parameter.
///
/// An owned parameter demands a fresh argument ([Type#matches]), so a caller holding a shared or
/// borrowed vector can't call the version at all and falls back to a worse one (often the
/// baseline). A borrowed copy is callable by all of them, and
/// [Function#guess(org.prlprg.fir.ir.type.Signature)] finds it with no change at the call site.
///
/// This is the inverse of [CreateOwnedParameterVersion], and the two never fight over the same
/// parameter: that one promotes exactly the parameters a `dup` reads, and this one skips those (see
/// [#isDupped]).
public record CreateBorrowedParameterVersion(int versionLimit) implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction version) {
    if (function == null || version.isStub() || version == function.baseline()) {
      return false;
    }
    if (function.versions().size() >= versionLimit) {
      // Too many versions, don't create a new one.
      return false;
    }

    var newParameterTypes = new ArrayList<Type>(version.signature().parameterTypes());
    var changed = false;
    for (var i = 0; i < newParameterTypes.size(); i++) {
      var parameter = version.parameters().get(i);
      var parameterType = newParameterTypes.get(i);
      if (parameterType.ownership() != Ownership.OWNED
          || needsOwnership(parameter)
          || isDupped(parameter)) {
        continue;
      }

      newParameterTypes.set(i, parameterType.withOwnership(Ownership.BORROWED));
      changed = true;
    }
    if (!changed) {
      return false;
    }

    if (hasVersion(function, version, newParameterTypes)) {
      // Already created (or hand-written), don't create a duplicate.
      return false;
    }

    copy(feedback.module(), function, version, newParameterTypes);
    return true;
  }

  /// Whether some use of `parameter` needs an owned vector, so borrowing it wouldn't type-check.
  ///
  /// Only two uses do: a `consume`, which moves the vector out, and a subscript write, which
  /// mutates it in place. Nothing else can re-establish ownership downstream, because the only
  /// values assignable to an owned register are fresh ones ([Type#canBeAssignedTo]), and no
  /// expression yields a fresh value from a borrowed one except `dup`, which copies.
  ///
  /// A `consume` in a [org.prlprg.fir.ir.instruction.Jump] counts too, even though
  /// `TypeAndEffectChecker` only reports the ones in [Statement]s.
  private static boolean needsOwnership(FunctionParameter parameter) {
    return parameter.uses().stream()
        .anyMatch(
            use ->
                use.argument() instanceof Consume
                    || (use.instruction() instanceof Statement statement
                        && statement.expression() instanceof SubscriptWrite
                        && use.index() == 0));
  }

  /// Whether a `dup` reads `parameter`, which is what [CreateOwnedParameterVersion] promotes a
  /// borrowed parameter for.
  ///
  /// Demoting one of those would trade versions with that optimization forever: it would promote
  /// the copy right back, and once further specialization improves either copy's postconditions,
  /// [#hasVersion] stops recognizing the twin and both keep creating new versions.
  private static boolean isDupped(FunctionParameter parameter) {
    return parameter.uses().stream()
        .anyMatch(
            use ->
                use.instruction() instanceof Statement statement
                    && statement.expression() instanceof Dup);
  }

  /// Whether `function` already has a version like `version` but with `parameterTypes`.
  private static boolean hasVersion(
      Function function, Abstraction version, List<Type> parameterTypes) {
    return function.versions().stream()
        .anyMatch(
            other ->
                other.signature().parameterTypes().equals(parameterTypes)
                    && other.returnType().equals(version.returnType())
                    && other.effects() == version.effects());
  }
}
