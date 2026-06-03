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
public record ElideUnusedVersions(int threshold) implements Optimization {
  @Override
  public boolean runWithoutRecording(ModuleFeedback feedback, Function function) {
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

  /// Whether there's a static or dispatch call that fails if this version doesn't exist
  private boolean hasStaticOccurrence(Function function, Abstraction version) {
    return !version.signature().equals(function.baseline().signature())
        && version.module().localFunctions().stream()
            .flatMap(f -> f.versions().stream())
            .flatMap(Abstraction::streamCfgs)
            .flatMap(c -> c.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .anyMatch(
                stmt ->
                    stmt.expression() instanceof Call(StaticFnCallee callee, _)
                        && callee.minVersion() == version);
  }
}
