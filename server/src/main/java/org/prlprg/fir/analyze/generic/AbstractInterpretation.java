package org.prlprg.fir.analyze.generic;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.util.Pair;

/// Generic abstract interpretation over an [Abstraction].
///
/// It traverses [CFG]s in promises but not callees.
public abstract class AbstractInterpretation<S extends AbstractInterpretation.State<S>> {
  protected final Abstraction scope;
  private boolean ran = false;
  private final Map<CFG, OnCfg> analyses = new HashMap<>();

  /// Creates the analysis, but doesn't run. To do so, call [#run(State)].
  protected AbstractInterpretation(Abstraction scope) {
    this.scope = scope;
  }

  /// Queries the analysis state at a specific instruction.
  ///
  /// Pass `-1` to `instructionIndex` to get the state at the entry.
  ///
  /// @throws IllegalStateException If the analysis wasn't run (most analyses are run on
  /// construction, check their constructor's javadoc).
  /// @throws IllegalArgumentException If [BB] isn't in the scope.
  /// @throws IllegalArgumentException If [BB] is unreachable.
  /// @throws IllegalArgumentException If `instructionIndex` is outside the range `[-1,
  // bb.statements().size()]`.
  protected final S at(BB bb, int instructionIndex) {
    if (!ran) {
      throw new IllegalStateException("Analysis not yet run");
    }

    var cfgAnalysis = analyses.get(bb.owner());
    if (cfgAnalysis == null) {
      throw new IllegalArgumentException("BB's CFG not in scope");
    }

    return cfgAnalysis.at(bb, instructionIndex);
  }

  /// Queries the analysis state at the scope's main (i.e. not promise) [CFG]'s return.
  ///
  /// Returns `null` iff there are no returns.
  ///
  /// @throws IllegalStateException If the analysis wasn't run (most analyses are run on
  /// construction, check their constructor's javadoc).
  protected final @Nullable S returnState() {
    if (!ran) {
      throw new IllegalStateException("Analysis not yet run");
    }

    return analyses.get(scope.cfg()).returnState;
  }

  /// Runs the analysis.
  ///
  /// Specifically, starts at `scope.cfg()` and computes states for every instruction, including
  /// in promises but not callees.
  ///
  /// This can be called multiple times, in which case `entry` is merged with `scope.cfg()`'s
  /// entry (and won't actually rerun if they're equal).
  protected final void run(S entry) {
    // Doesn't `streamCfgs` because `run` includes promises.
    // Do handle stubs (`mainCfg == null`).
    var mainCfg = scope.cfg();
    if (mainCfg != null) {
      onCfg(mainCfg).run(entry);
    }
    ran = true;
  }

  protected final boolean ran() {
    return ran;
  }

  protected OnCfg onCfg(CFG cfg) {
    return analyses.computeIfAbsent(cfg, this::mkOnCfg);
  }

  protected abstract OnCfg mkOnCfg(CFG cfg);

  /// An abstract interpretation over a [CFG].
  protected abstract class OnCfg {
    private final Map<BB, S> states = new HashMap<>();
    private @Nullable S returnState;
    private boolean ran = false;

    private final CFGCursor cursor;
    private @Nullable S state;

    protected OnCfg(CFG cfg) {
      cursor = new CFGCursor(cfg);
    }

    public final void run(S entryState) {
      var worklist = new ArrayList<Pair<BB, S>>();

      // Can add `entryState` in-place, because it won't be mutated until after the call,
      // and we don't assign `worklist` entries to `state` or put into `states` without copying.
      worklist.add(Pair.of(cursor.cfg().entry(), entryState));

      while (!worklist.isEmpty()) {
        var next = worklist.removeLast();
        var bb = next.first();
        var state = next.second();

        if (Objects.equals(states.get(bb), state)) {
          // No update needed
          continue;
        }

        // Merge with previous state
        if (states.containsKey(bb)) {
          states.get(bb).merge(state);
        } else {
          states.put(bb, state.copy());
        }

        // Compute exit state
        state = run(bb);

        // Update return state if needed
        if (bb.jump() instanceof Return) {
          if (returnState == null) {
            returnState = state.copy();
          } else {
            returnState.merge(state);
          }
        }

        // Add successors to worklist (may need to update their entry states and recurse)
        for (var target : bb.jump().targets()) {
          // Can add `state` in-place, because it won't be mutated again by this point,
          // and we don't assign `worklist` entries to `state` or put into `states` without copying.
          worklist.add(Pair.of(target.bb(), state));
        }
      }

      ran = true;
      // Indicates that this isn't running.
      state = null;
    }

    private S run(BB bb) {
      state = states.get(bb).copy();
      cursor.moveToStart(bb);
      runEntry(bb);
      cursor.iterateCurrentBb(this::run, this::run);
      return state;
    }

    protected void runEntry(BB bb) {}

    protected void run(Statement statement) {}

    protected void run(Jump jump) {}

    /// Queries the analysis state after a specific instruction.
    ///
    /// Pass `-1` to `instructionIndex` to get the state at the entry.
    ///
    /// @throws IllegalStateException If the analysis wasn't run.
    /// @throws IllegalArgumentException If [BB] isn't in the [CFG].
    /// @throws IllegalArgumentException If [BB] is unreachable.
    /// @throws IllegalArgumentException If `instructionIndex` is outside the range `[-1,
    // bb.statements().size()]`.
    public final S at(BB bb, int instructionIndex) {
      if (!ran) {
        throw new IllegalStateException("Analysis not yet run");
      }
      if (bb.owner() != cursor.cfg()) {
        throw new IllegalArgumentException("BB not in CFG");
      }
      if (!states.containsKey(bb)) {
        throw new IllegalArgumentException("BB is unreachable");
      }

      state = states.get(bb).copy();
      cursor.moveToStart(bb);
      runEntry(bb);
      cursor.iterateCurrentBbUpTo(instructionIndex, this::run, this::run);
      return state;
    }

    /// Queries the analysis state at the [CFG]'s return.
    ///
    /// Returns `null` iff there are no returns.
    ///
    /// @throws IllegalStateException If the analysis wasn't run.
    public final @Nullable S returnState() {
      if (!ran) {
        throw new IllegalStateException("Analysis not yet run");
      }

      return returnState;
    }

    protected final BB bb() {
      if (state == null) {
        throw new IllegalStateException("Analysis isn't running");
      }

      return cursor.bb();
    }

    protected final int instructionIndex() {
      if (state == null) {
        throw new IllegalStateException("Analysis isn't running");
      }

      return cursor.instructionIndex();
    }

    protected final S state() {
      if (state == null) {
        throw new IllegalStateException("Analysis isn't running");
      }

      return state;
    }
  }

  public interface State<Self extends State<Self>> {
    Self copy();

    void merge(Self other);
  }
}
