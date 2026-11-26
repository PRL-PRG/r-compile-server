package org.prlprg.fir.feedback;

import org.prlprg.fir.ir.abstraction.Abstraction;

/// Request [AbstractionFeedback]s for closure versions.
///
/// There's [MockModuleFeedback][MockModuleFeedback] which is
/// a simple hash-map, but this can also be implemented by a compile service.
public interface ModuleFeedback {
  AbstractionFeedback get(Abstraction scope);

  /// Copy feedback from `src` to `dst`.
  void copyTo(Abstraction dst, Abstraction src);

  /// Reset the call counters for every abstraction's feedback.
  void resetCalls();

  /// Whether the run that recorded this stopped early (e.g. a failed warm-up), so that a recorded
  /// call may not have reached a reflective access or promise escape it would have.
  default boolean isPartial() {
    return false;
  }

  /// Whether the run that recorded this recorded the results of `[` calls and the growth of `[<-`
  /// and `[[<-` calls ([AbstractionFeedback#growingSubAssigns]). If not, a missing record is no
  /// evidence that `x[i]` is one element or that a subassign stays within its vector.
  default boolean recordsSubscripts() {
    return true;
  }
}
