package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Supplier;

/// Computed and records an [Interpreter]'s state at deoptimization point when reaching each
/// [`Checkpoint` instruction][org.prlprg.fir.ir.instruction.Checkpoint].
///
/// We can use this to ensure traces before and after optimizations are semantically equivalent.
/// The traces may have different registers, environments, etc. but should always converge at
/// deoptimization, since their state must match the baseline.
///
/// By default, this is disabled to avoid creating unused snapshots. Call [#track()] to
/// temporarily enable.
public class CheckpointTrace {
  private final List<DeoptSnapshot> snapshots = new ArrayList<>();
  private boolean isRecording = false;

  /// Temporarily enable, run `action`, then disable. Returns the recorded snapshots.
  ///
  /// @throws IllegalStateException If already recording.
  public ImmutableList<DeoptSnapshot> track(Runnable action) {
    if (isRecording) {
      throw new IllegalStateException("Already recording checkpoints");
    }
    assert snapshots.isEmpty();

    isRecording = true;
    try {
      action.run();
      return ImmutableList.copyOf(snapshots);
    } finally {
      snapshots.clear();
      isRecording = false;
    }
  }

  void record(Supplier<DeoptSnapshot> getSnapshot) {
    if (isRecording) {
      snapshots.add(getSnapshot.get());
    }
  }
}
