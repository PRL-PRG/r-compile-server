package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy;

import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;

/// If a `dup` post-dominates a shared or borrowed vector parameter, copy it into a new version
/// that *owns* that parameter.
///
/// A version only duplicates a vector because it needs one it can mutate, and it can mutate the
/// parameter itself once it owns it: in the copy, the `dup` becomes redundant and
/// [ConsumeDeadDup]/[ElideConsumedDup] remove it. Callers that have a vector to spare can then use
/// the copy ([CallOwnedVersion]), and the original still serves the ones that don't.
public record CreateOwnedParameterVersion(int versionLimit) implements AbstractionOptimization {
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

    var pdTree = new DominatorTree(version);

    var newParameterTypes = new ArrayList<>(version.signature().parameterTypes());
    var changed = false;
    for (var i = 0; i < newParameterTypes.size(); i++) {
      var parameter = version.parameters().get(i);
      var parameterType = newParameterTypes.get(i);
      if (parameterType.ownership() == Ownership.OWNED
          || !parameterType.isValue()
          || !parameterType.kind().isWellFormedWithOwnership()) {
        continue;
      }
      if (parameter.uses().stream()
          .noneMatch(
              use ->
                  use.instruction() instanceof Statement statement
                      && statement.expression() instanceof Dup
                      && pdTree.dominatesNonDeoptExits(statement))) {
        continue;
      }

      newParameterTypes.set(i, parameterType.withOwnership(Ownership.OWNED));
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
