package org.prlprg.fir.interpret.internal;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Supplier;
import org.jspecify.annotations.Nullable;

/// Computed and records an [InternalInterpreter]'s state at deoptimization point when reaching each
/// [`Checkpoint` instruction][org.prlprg.fir.ir.instruction.Checkpoint].
///
/// We can use this to ensure traces before and after optimizations are semantically equivalent.
/// The traces may have different registers, environments, etc. but should always converge at
/// deoptimization, since their state must match the baseline.
///
/// By default, this is disabled to avoid creating unused snapshots. Call [#track()] to
/// temporarily enable.
public class CheckpointTrace {
  private final InternalInterpreter owner;
  private final List<DeoptSnapshot> snapshots = new ArrayList<>();
  private boolean isRecording = false;
  private @Nullable String moduleToString = null;

  CheckpointTrace(InternalInterpreter owner) {
    this.owner = owner;
  }

  /// Temporarily enable, run `action`, then disable. Returns the recorded snapshots.
  ///
  /// @throws IllegalStateException If already recording.
  public ImmutableList<DeoptSnapshot> track(Runnable action) {
    if (isRecording) {
      throw new IllegalStateException("Already recording checkpoints");
    }
    assert snapshots.isEmpty();

    isRecording = true;
    moduleToString = owner.module().toString();
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
      var snapshot = getSnapshot.get();
      snapshot.unsafeSetModuleToString(moduleToString);
      snapshots.add(snapshot);
    }
  }
}
