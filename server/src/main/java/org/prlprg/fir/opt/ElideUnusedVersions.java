package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;

/// If a function's total call count (sum across all versions) is at least `threshold`, remove
/// every non-baseline version whose call count is 0.
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
            .filter(version -> version != baseline && feedback.get(version).numCalls() == 0)
            .toList();

    if (toRemove.isEmpty()) {
      return false;
    }

    for (var version : toRemove) {
      function.removeVersion(version);
    }
    return true;
  }
}
