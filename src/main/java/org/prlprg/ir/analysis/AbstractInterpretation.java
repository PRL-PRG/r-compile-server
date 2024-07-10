package org.prlprg.ir.analysis;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.function.Consumer;
import java.util.function.Function;
import javax.annotation.Nullable;
import org.prlprg.ir.analysis.abstractNode.AbstractNode;
import org.prlprg.ir.analysis.abstractNode.AbstractResult;
import org.prlprg.ir.analysis.abstractNode.AbstractResult2;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CFGIterator;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InstrPosition;
import org.prlprg.ir.cfg.JumpData.Deopt;
import org.prlprg.ir.closure.ClosureVersion;

/**
 * Generic implementation of an abstract interpretation static analysis (from PIR).
 *
 * <p>In "mergepoint" we keep a list of abstract states for each basic block. The first state is the
 * abstract state at the beginning of the basic block. We add additional entries after each function
 * return.
 *
 * <p><b>Implementation note:</b> {@code State} can't have subclasses (which it never has in PIR),
 * because we use the class to create a typed array.
 */
abstract class AbstractInterpretation<State extends AbstractNode<State>> {
  /** How fine-grained to print debug information during the analysis, if at all. */
  enum AnalysisDebugLevel {
    NONE,
    TAINT,
    EXIT,
    MERGE,
    BB,
    INSTRUCTION,
  }

  enum PositioningStyle {
    BEFORE_INSTRUCTION,
    AFTER_INSTRUCTION
  }

  enum Direction {
    FORWARD,
    BACKWARD
  }

  protected static class BBSnapshot<State extends AbstractNode<State>> {
    boolean isSeen = false;
    @Nullable BB incoming;
    @Nullable State atEntry;
    final State[] afterInstruction;

    @SuppressWarnings("unchecked")
    BBSnapshot(BB bb, Class<State> stateClass) {
      this.afterInstruction = (State[]) Array.newInstance(stateClass, bb.numInstrs());
    }
  }

  protected final AnalysisDebugLevel debugLevel;
  protected final Direction direction;
  protected final ClosureVersion innermostVersion;
  protected final CFG cfg;
  private final ImmutableSet<BB> entries;
  private ImmutableMap<BB, BBSnapshot<State>> snapshots;
  private final Map<BB, State> exitpoints = new HashMap<>();
  private boolean isDone = false;

  // region construct and configure
  protected AbstractInterpretation(
      AnalysisDebugLevel debugLevel,
      Direction direction,
      ClosureVersion innermostVersion,
      CFG cfg,
      State initial) {
    this.debugLevel = debugLevel;
    this.direction = direction;
    this.innermostVersion = innermostVersion;
    this.cfg = cfg;

    // We assume the class is exact, `State` can't have subclasses.
    @SuppressWarnings("unchecked")
    var stateClass = (Class<State>) initial.getClass();
    snapshots =
        cfg.stream()
            .collect(
                ImmutableMap.toImmutableMap(
                    Function.identity(), bb -> new BBSnapshot<>(bb, stateClass)));
    entries =
        direction == Direction.FORWARD
            ? ImmutableSet.of(cfg.entry())
            : ImmutableSet.copyOf(cfg.exits());
    setInitialState(initial);
  }

  protected final void setInitialState(State initial) {
    entries.forEach(bb -> snapshot(bb).atEntry = initial.clone());
  }

  protected final void onInitialState(Consumer<State> consumer) {
    entries.forEach(bb -> consumer.accept(snapshot(bb).atEntry));
  }

  // endregion construct and configure

  // region run analysis
  public final State run() {
    logHeader();

    State exitpoint = null;
    var changed = new HashSet<>(entries);
    var recursiveTodo = new ArrayList<InstrPosition>();

    do {
      isDone = true;

      for (var e : entries) {
        var iter = new CFGIterator.Dfs(e);
        while (iter.hasNext()) {
          var bb = iter.next();

          if (!changed.contains(bb)) {
            continue;
          }

          var state = Objects.requireNonNull(snapshot(bb).atEntry).clone();
          logInitialState(state);

          if (!applyAtEntry(state, bb).isNone()) {
            changed.add(bb);
          }

          for (var i =
                  switch (direction) {
                    case FORWARD -> 0;
                    case BACKWARD -> bb.numInstrs() - 1;
                  };
              switch (direction) {
                case FORWARD -> i < bb.numInstrs();
                case BACKWARD -> i >= 0;
              };
              i +=
                  switch (direction) {
                    case FORWARD -> 1;
                    case BACKWARD -> -1;
                  }) {
            var instr = bb.instr(i);

            var old = debugLevel == AnalysisDebugLevel.TAINT ? state.clone() : null;
            var res = compute(state, bb, i, instr);
            if (debugLevel == AnalysisDebugLevel.TAINT
                && !(instr.data() instanceof Deopt)
                && old.clone().merge(state) != AbstractResult.NONE) {
              logTaintChange(old, state, bb, i, instr, res);
            } else {
              logChange(state, bb, i, instr, res);
            }

            var snapshot = snapshot(bb);
            if (res.needRecursion()) {
              if (snapshot.afterInstruction[i] == null) {
                snapshot.afterInstruction[i] = state.clone();
              } else {
                snapshot.afterInstruction[i].merge(state);
                state = snapshot.afterInstruction[i].clone();
              }
              recursiveTodo.add(new InstrPosition(bb, i));
            } else if (res.keepSnapshot()) {
              snapshot.afterInstruction[i] = state.clone();
            }
          }

          if (switch (direction) {
            case FORWARD -> bb.isExit();
            case BACKWARD -> bb.isEntry();
          }) {
            logExit(state);

            // Will replace if necessary.
            exitpoints.put(bb, state.clone());

            if (exitpoint == null) {
              exitpoint = state.clone();
            } else {
              exitpoint.merge(state.clone());
            }
          }

          for (var next :
              switch (direction) {
                case FORWARD -> bb.successors();
                case BACKWARD -> bb.predecessors();
              }) {
            mergeBranch(state.clone(), bb, next, changed);
          }

          changed.remove(bb);
        }

        // We iterated at least one changed `BB`.
        assert exitpoint != null;

        for (var todo : recursiveTodo) {
          var bb = todo.bb();
          var i = todo.instrIdx();
          var snapshot = snapshot(bb);

          if (snapshot.afterInstruction[i] == null) {
            snapshot.afterInstruction[i] = exitpoint.clone();
            changed.add(bb);
            isDone = false;
          } else {
            var res = snapshot.afterInstruction[i].mergeExit(exitpoint.clone());
            if (res != AbstractResult.NONE) {
              logChange(snapshot.afterInstruction[i], bb, i, bb.instr(i), res);
              changed.add(bb);
              isDone = false;
            }
          }
        }
        recursiveTodo.clear();
      }

      if (globallyChanged()) {
        isDone = false;
      }
    } while (!isDone);

    // We iterated at least one changed `BB`.
    assert exitpoint != null;

    return exitpoint;
  }

  private void mergeBranch(State state, BB in, BB branch, Set<BB> changed) {
    var thisState = snapshot(branch);
    if (!thisState.isSeen) {
      thisState.atEntry = state.clone();
      thisState.isSeen = true;
      thisState.incoming = in;
      isDone = false;
      changed.add(branch);
    } else if (in == thisState.incoming) {
      thisState.atEntry = state.clone();
      if (changed.contains(in)) {
        changed.add(branch);
      }
    } else {
      assert thisState.atEntry != null;
      thisState.incoming = null;

      var old = debugLevel == AnalysisDebugLevel.MERGE ? thisState.atEntry.clone() : null;
      var res = thisState.atEntry.merge(state);

      if (res != AbstractResult.NONE) {
        if (debugLevel.compareTo(AnalysisDebugLevel.MERGE) > 0
            || (res == AbstractResult.TAINTED && debugLevel == AnalysisDebugLevel.TAINT)) {
          logMerge(old, thisState.atEntry, branch, res, false);
        }

        isDone = false;
        changed.add(branch);
      } else if (debugLevel.compareTo(AnalysisDebugLevel.MERGE) >= 0) {
        logMerge(null, thisState.atEntry, branch, res, true);
      }
    }
  }

  // region analysis helpers
  protected final boolean reachedFixedPoint() {
    return isDone;
  }

  protected final BBSnapshot<State> snapshot(BB bb) {
    return Objects.requireNonNull(
        snapshots.get(bb), "CFG was modified during analysis (added a BB), that can't happen");
  }

  // endregion analysis helpers
  // endregion run analysis

  // region abstract methods
  protected AbstractResult2 compute(State state, BB instrBB, int instrIdx, Instr instr) {
    return apply(state, instrBB, instrIdx, instr);
  }

  protected abstract AbstractResult2 apply(State state, BB instrBB, int instrIdx, Instr instr);

  protected AbstractResult2 applyAtEntry(State state, BB bb) {
    return new AbstractResult2();
  }

  protected abstract boolean globallyChanged();

  // endregion abstract methods

  // region logging
  /** Name of the static analysis. */
  protected String name() {
    return getClass().getSimpleName();
  }

  private void logHeader() {
    // TODO
  }

  private void logInitialState(State state) {
    // TODO
  }

  private void logChange(State state, BB bb, int i, Instr instr, AbstractResult res) {
    logChange(state, bb, i, instr, new AbstractResult2(res));
  }

  private void logChange(State state, BB bb, int i, Instr instr, AbstractResult2 res) {
    // TODO
  }

  private void logTaintChange(
      State old, State state, BB bb, int i, Instr instr, AbstractResult2 res) {
    // TODO
  }

  private void logMerge(
      @Nullable State old, State atEntry, BB branch, AbstractResult res, boolean reachedFixpoint) {
    // TODO
  }

  private void logExit(State state) {
    // TODO
  }
  // endregion logging
}
