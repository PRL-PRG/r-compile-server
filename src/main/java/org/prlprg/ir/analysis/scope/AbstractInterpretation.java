package org.prlprg.ir.analysis.scope;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.lang.reflect.Array;
import java.util.LinkedHashSet;
import java.util.Objects;
import java.util.function.Function;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
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

  enum Direction {
    FORWARD,
    BACKWARD
  }

  protected static class BBSnapshot<State extends AbstractNode<State>> {
    /**
     * The current merged state of every predecessor or successor (depending on direction), or
     * {@code null} if we've never reached it.
     *
     * <p>This is usually but not necessarily the state at the entry: if the analysis has special
     * behavior for computing the entry state (e.g. range analysis checking the predecessor branch
     * condition to improve it), this will be different.
     */
    @Nullable State beforeEntry;

    /**
     * The current state at the start or end of this BB (depending on direction), or {@code null} if
     * we've never reached it.
     *
     * <p>Usually this is the same as {@link #beforeEntry}, but it can be different, see {@link
     * #beforeEntry} docs.
     */
    @Nullable State atEntry;

    /**
     * The current state after the instruction at the index, or before the instruction at {@link
     * BB#numInstrs()}{@code - index}, depending on direction. {@code null} if we've never reached
     * the instruction.
     */
    final State[] afterInstruction;

    @SuppressWarnings("unchecked")
    BBSnapshot(BB bb, Class<State> stateClass) {
      this.afterInstruction = (State[]) Array.newInstance(stateClass, bb.numInstrs());
    }
  }

  protected final Logger logger = Logger.getLogger(name());
  protected final AnalysisDebugLevel debugLevel;
  protected final Direction direction;
  protected final ClosureVersion innermostVersion;
  protected final boolean isPromise;
  protected final CFG cfg;
  private final ImmutableSet<BB> entries;
  private final ImmutableMap<BB, BBSnapshot<State>> snapshots;
  private @Nullable State mergedExitpoint = null;

  // region construct and run

  /**
   * Create and immediately run a new abstract interpretation static analysis.
   *
   * <p>The initial state is {@linkplain AbstractNode#copy() copied}, so you can continue to mutate
   * it after calling.
   */
  public AbstractInterpretation(
      AnalysisDebugLevel debugLevel,
      Direction direction,
      ClosureVersion innermostVersion,
      boolean isPromise,
      CFG cfg,
      State initial) {
    this.debugLevel = debugLevel;
    this.direction = direction;
    this.innermostVersion = innermostVersion;
    this.isPromise = isPromise;
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

    for (var snapshot : snapshots.values()) {
      snapshot.beforeEntry = initial.copy();
    }

    logHeader();
    run(new LinkedHashSet<>(entries));
  }

  /**
   * If any initial state is different than the given, merge them and re-run the analysis.
   *
   * <p>We don't actually re-run if the states are the same, since we assume the static analysis is
   * pure and therefore, with the same state, it will produce the same results.
   *
   * <p>The initial state is cloned, so you can continue to mutate it after calling.
   */
  public final void rerun(State initial) {
    var changedBeforeEntry = new LinkedHashSet<BB>();
    for (var entry : entries) {
      if (mergeEntry(initial, entry)) {
        changedBeforeEntry.add(entry);
      }
    }

    if (!changedBeforeEntry.isEmpty()) {
      run(changedBeforeEntry);
    }
  }

  // endregion construct and run

  // region get results
  public final State atCfgExit() {
    return Objects.requireNonNull(mergedExitpoint);
  }

  public final State atEntry(BB bb) {
    var snapshot = snapshot(bb);
    return Objects.requireNonNull(
        switch (direction) {
          case FORWARD -> snapshot.atEntry;
          case BACKWARD -> snapshot.afterInstruction[snapshot.afterInstruction.length - 1];
        });
  }

  public final State atExit(BB bb) {
    var snapshot = snapshot(bb);
    return Objects.requireNonNull(
        switch (direction) {
          case FORWARD -> snapshot.afterInstruction[snapshot.afterInstruction.length - 1];
          case BACKWARD -> snapshot.atEntry;
        });
  }

  public final State beforeInstruction(BB bb, int instrIdx) {
    var snapshot = snapshot(bb);
    return Objects.requireNonNull(
        switch (direction) {
          case FORWARD ->
              instrIdx == 0 ? snapshot.atEntry : snapshot.afterInstruction[instrIdx - 1];
          case BACKWARD -> snapshot.afterInstruction[snapshot.afterInstruction.length - instrIdx];
        });
  }

  public final State afterInstruction(BB bb, int instrIdx) {
    var snapshot = snapshot(bb);
    return Objects.requireNonNull(
        switch (direction) {
          case FORWARD -> snapshot.afterInstruction[instrIdx];
          case BACKWARD ->
              instrIdx == snapshot.afterInstruction.length - 1
                  ? snapshot.atEntry
                  : snapshot.afterInstruction[snapshot.afterInstruction.length - 1 - instrIdx];
        });
  }

  protected final BBSnapshot<State> snapshot(BB bb) {
    return Objects.requireNonNull(
        snapshots.get(bb), "CFG was modified during analysis (added a BB), that can't happen");
  }

  // endregion get results

  // region abstract methods
  /**
   * Mutate the state after applying the given instruction, and return if and how it updated.
   *
   * <p>Note that if the analysis is backward, {@code i} will <i>not</i> be the instruction index.
   * Instead, it will be {@link BB#numInstrs() instrBB.numInstrs() - i - 1}.
   */
  protected abstract AbstractResult compute(State state, BB instrBB, int i, Instr instr);

  /**
   * Mutate the state after entering the basic block, and return if and how it updated.
   *
   * <p>Note that if the analysis is backward, this will compute at the <i>exit</i>.
   */
  protected AbstractResult computeAtEntry(State ignored, BB ignored1) {
    return AbstractResult.NONE;
  }

  // endregion abstract methods

  // region actually run analysis
  /** Actually run the analysis. */
  private void run(LinkedHashSet<BB> changedBeforeEntry) {
    while (!changedBeforeEntry.isEmpty()) {
      var bb = changedBeforeEntry.removeFirst();
      var snapshot = snapshot(bb);

      var state = Objects.requireNonNull(snapshot.beforeEntry).copy();
      logInitialState(state, bb);

      var entryRes = computeAtEntry(state, bb);
      // If `res == NONE`, we can reuse the previous state instead of copying.
      snapshot.atEntry = entryRes == AbstractResult.NONE ? snapshot.beforeEntry : state.copy();
      logEntryChange(snapshot.beforeEntry, state, bb, entryRes);

      var instrs =
          switch (direction) {
            case FORWARD -> bb.instrs().iterator();
            case BACKWARD -> bb.revInstrs().iterator();
          };
      for (var i = 0; instrs.hasNext(); i++) {
        var instr = instrs.next();

        var old = i == 0 ? snapshot.atEntry : snapshot.afterInstruction[i - 1];

        var res = compute(state, bb, i, instr);
        // If `res == NONE`, we can reuse the previous state instead of copying.
        snapshot.afterInstruction[i] = res == AbstractResult.NONE ? old : state.copy();
        logChange(old, state, bb, i, instr, res);
      }

      var nexts =
          switch (direction) {
            case FORWARD -> bb.successors();
            case BACKWARD -> bb.predecessors();
          };

      if (nexts.isEmpty()) {
        logExit(state);

        if (mergedExitpoint == null) {
          // We don't use the state after, so we can assign it directly ("move" it).
          mergedExitpoint = state;
        } else {
          mergedExitpoint.merge(state);
        }
      } else {
        for (var next : nexts) {
          if (mergeBranch(state, bb, next)) {
            changedBeforeEntry.add(next);
          }
        }
      }
    }

    // We iterated at least one exit `BB`.
    assert mergedExitpoint != null;
  }

  /**
   * Merge the given state with the given entry BB.
   *
   * <p>Return if it changed the state before the entry (i.e. if the old state before the entry
   * wasn't equal to the given).
   */
  private boolean mergeEntry(State state, BB entry) {
    var thisState = snapshot(entry);

    assert thisState.beforeEntry != null
        : "can't call `mergeEntry` unless entry has already been visited";

    var oldForLogging =
        debugLevel == AnalysisDebugLevel.TAINT ? thisState.beforeEntry.copy() : null;
    var res = thisState.beforeEntry.merge(state);
    logMergeEntry(oldForLogging, state, thisState.beforeEntry, entry, res);

    return res != AbstractResult.NONE;
  }

  /**
   * Merge the given state from the given incoming BB with its given predecessor or successor
   * ({@code branch}).
   *
   * <p>Return if it changed the state before entry (i.e. if the old state before the entry wasn't
   * equal to the given).
   */
  private boolean mergeBranch(State state, BB in, BB branch) {
    // TODO: PIR does some optimization where, if we merged a single incoming BB and we merge that
    //  same BB again, we just replace the entry state. But I don't think it's sound?
    var thisState = snapshot(branch);
    if (thisState.beforeEntry == null) {
      // This is the first time we've seen this branch.
      thisState.beforeEntry = state.copy();
      return true;
    } else {
      // Not the first time, so merge prior entry state.
      var oldForLogging =
          debugLevel.compareTo(AnalysisDebugLevel.MERGE) >= 0
                  || debugLevel == AnalysisDebugLevel.TAINT
              ? thisState.beforeEntry.copy()
              : null;
      var res = thisState.beforeEntry.merge(state);
      logMerge(oldForLogging, state, thisState.beforeEntry, in, branch, res);

      return res != AbstractResult.NONE;
    }
  }

  // endregion actually run analysis

  // region logging
  /** Name of the static analysis. */
  protected String name() {
    return getClass().getSimpleName();
  }

  private void logHeader() {
    if (debugLevel == AnalysisDebugLevel.NONE) {
      return;
    }

    logger.info(
        "========= Running "
            + name()
            + " analysis on @"
            + innermostVersion.closure().name()
            + "#"
            + innermostVersion.index()
            + (isPromise ? " promise" : ""));
  }

  private void logInitialState(State state, BB bb) {
    if (debugLevel.compareTo(AnalysisDebugLevel.BB) < 0) {
      return;
    }

    logger.info("======= Entering BB " + bb.id() + ", initial state:");
    logger.info(state.toString());
  }

  private void logEntryChange(State old, State state, BB bb, AbstractResult res) {
    if (res != AbstractResult.NONE
        && debugLevel.compareTo(AnalysisDebugLevel.BB) < 0
        && (debugLevel != AnalysisDebugLevel.TAINT || res != AbstractResult.TAINTED)) {
      return;
    }

    if (debugLevel == AnalysisDebugLevel.TAINT) {
      logger.info("======= Entering BB " + bb.id() + ", initial state:");
      logger.info(old.toString());
    }

    logger.info("===== After entry change (" + res + "):");
    logger.info(state.toString());
  }

  private void logChange(State old, State state, BB bb, int i, Instr instr, AbstractResult res) {
    if (debugLevel.compareTo(AnalysisDebugLevel.INSTRUCTION) < 0
        && (debugLevel != AnalysisDebugLevel.TAINT || res != AbstractResult.TAINTED)) {
      return;
    }

    logger.info("===== After applying instruction " + i + " in BB " + bb.id() + " (" + res + "):");
    if (res != AbstractResult.NONE) {
      if (debugLevel == AnalysisDebugLevel.TAINT) {
        logger.info("===- Old:");
        logger.info(old.toString());
        logger.info("===- New:");
      }
      logger.info(state.toString());
    }
  }

  private void logMergeEntry(
      @Nullable State old, State incoming, State state, BB entry, AbstractResult res) {
    if (debugLevel.compareTo(AnalysisDebugLevel.MERGE) < 0
        && (debugLevel != AnalysisDebugLevel.TAINT || res != AbstractResult.TAINTED)) {
      return;
    }

    logger.info("======= Merging entry into BB " + entry.id() + " (" + res + "):");
    if (res != AbstractResult.NONE) {
      if (old != null) {
        logger.info("===- Old:");
        logger.info(old.toString());
      }
      logger.info("===- Incoming:");
      logger.info(incoming.toString());
      logger.info("===- New:");
      logger.info(state.toString());
    }
  }

  private void logMerge(
      @Nullable State old, State incoming, State state, BB in, BB branch, AbstractResult res) {
    if (debugLevel.compareTo(AnalysisDebugLevel.MERGE) < 0
        && (debugLevel != AnalysisDebugLevel.TAINT || res != AbstractResult.TAINTED)) {
      return;
    }

    logger.info("===== Merging BB " + in.id() + " into " + branch.id() + " (" + res + ")");
    if (res != AbstractResult.NONE) {
      if (debugLevel == AnalysisDebugLevel.TAINT) {
        logger.info("===- Old:");
        logger.info(Objects.requireNonNull(old).toString());
      }
      logger.info("===- Incoming:");
      logger.info(incoming.toString());
      logger.info("===- New:");
      logger.info(state.toString());
    }
  }

  private void logExit(State state) {
    if (debugLevel.compareTo(AnalysisDebugLevel.EXIT) < 0) {
      return;
    }

    logger.info("======= Exiting, final state:");
    logger.info(state.toString());
  }
  // endregion logging
}