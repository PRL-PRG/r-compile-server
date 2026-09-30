package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.module.Function;

/// If a function's total call count (sum across all versions) is at least `threshold`, remove
/// every non-baseline version whose call count is 0 and has no static or dispatch occurrences.
///
/// TODO: Prevent [CreateBestVersion] from re-creating the removed version.
public final class ElideUnusedVersions extends Optimization {
  private final int threshold;

  public ElideUnusedVersions(int threshold) {
    this.threshold = threshold;
  }

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Function function) {
    // Sum call counts across all versions
    var totalCalls =
        function.versions().stream().mapToInt(version -> feedback.get(version).numCalls()).sum();

    if (totalCalls < threshold) {
      return false;
    }

    // Collect non-baseline versions with 0 calls
    var baseline = function.baseline();
    var toRemove =
        function.versions().stream()
            .filter(
                version ->
                    version != baseline
                        && feedback.get(version).numCalls() == 0
                        && !isSourceOfUnevaluated(function, version)
                        && !hasStaticOccurrence(function, version))
            .toList();

    if (toRemove.isEmpty()) {
      return false;
    }

    for (var version : toRemove) {
      function.removeVersion(version);
    }
    return true;
  }

  /// Whether an unevaluated version's body will be computed from `version`'s.
  ///
  /// Such a version is kept, along with the versions it calls (its occurrences), because the
  /// unevaluated one will call them too.
  private boolean isSourceOfUnevaluated(Function function, Abstraction version) {
    return function.versions().stream()
        .anyMatch(
            other -> other.lazyBody() != null && other.lazyBody().sources().contains(version));
  }

  /// Whether there's a static or dispatch call that fails if this version doesn't exist
  private boolean hasStaticOccurrence(Function function, Abstraction version) {
    return !version.signature().equals(function.baseline().signature())
        && version.module().localFunctions().stream()
            .flatMap(f -> f.versions().stream())
            // Not unevaluated ones, which would evaluate them. Their calls are their sources'.
            .filter(Abstraction::isEvaluated)
            .flatMap(Abstraction::streamCfgs)
            .flatMap(c -> c.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .anyMatch(
                stmt ->
                    stmt.expression() instanceof Call(StaticFnCallee callee)
                        && callee.minVersion() == version);
  }
}
