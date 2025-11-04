package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Supplier;

/// Records an [Interpreter]'s state at each [`Checkpoint` instruction][
/// org.prlprg.fir.ir.instruction.Checkpoint].
///
/// We can use this to ensure traces before and after optimizations are semantically equivalent.
/// In-between checkpoints they may have different states, but each checkpoint must have the
/// same state because it deoptimizes to the same baseline.
///
/// By default, this is disabled to avoid creating unused snapshots. Call [#track()] to
/// temporarily enable.
public class CheckpointTrace {
  private final List<Snapshot> snapshots = new ArrayList<>();
  private boolean isRecording = false;

  /// Temporarily enable, run `action`, then disable. Returns the recorded snapshots.
  ///
  /// @throws IllegalStateException If already recording.
  public ImmutableList<Snapshot> track(Runnable action) {
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

  void record(Supplier<Snapshot> getSnapshot) {
    snapshots.add(getSnapshot.get());
  }
}
