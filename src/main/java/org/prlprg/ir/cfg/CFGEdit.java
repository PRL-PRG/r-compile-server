package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Objects;
import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Phi.Input;
import org.prlprg.ir.cfg.Phi.InputId;
import org.prlprg.util.Pair;
import org.prlprg.util.Strings;

/**
 * An operation or group of operations performed on a graph, e.g. insertions, removals, instruction
 * mutations.
 *
 * <p>Edits provide a transactional, replayable way to modify a {@link CFG}:
 *
 * <ul>
 *   <li>Edits can be undone after they are committed.
 *   <li>Edits can be replayed on another CFG (and are guaranteed deterministic).
 *   <li>Edits can be automatically inspected when verification fails to detect which edit or set of
 *       edits probably contributed to the failure. e.g. if a CFG has an unreferenced node, its edit
 *       history will contain which edit removed the node that was still referenced.
 *   <li>The edits can be manually inspected for debugging. For example, one can "step through" each
 *       edit or "section" of edits, forwards and backwards, to find how the edits corrupted a CFG
 *       or why they failed to detect and apply an optimization.
 * </ul>
 *
 * <p>A single edit may represent a group of smaller edits for performance or readability. For
 * performance, certain operations can be done all-at-once in a way that's more efficient than doing
 * them individually, e.g. there is a "list insertion" edit which is semantically equivalent to a
 * sequence of individual insertions, but for large lists is considerably faster. For readability,
 * the {@link Section} is a group which contains a descriptive name and arbitrary list of edits
 * which are applied individually.
 *
 * @param <Reverse> Type of the edit necessary to undo this edit.
 */
public sealed interface CFGEdit<Reverse extends CFGEdit<?>> {
  /**
   * Apply this edit to the {@linkplain CFG}.
   *
   * @throws IllegalArgumentException If you try to re-apply the edit and the CFG is in a state that
   *     makes it invalid. This is guaranteed not to happen if you apply to a CFG in the same state
   *     as before the edit occurred.
   * @return An edit that would undo this edit.
   */
  Reverse apply(CFG cfg);

  /**
   * Whether the edit may affect the outer graph structure of the {@linkplain CFG}.
   *
   * <p>i.e. {@code true} if it adds or removes {@linkplain BB basic blocks} or affects {@linkplain
   * Jump jumps}, {@code false} if the edit only adds, removes, and mutates {@linkplain Stmt
   * statements} and/or {@linkplain Phi phis}.
   */
  boolean affectsCfgGraph();

  /** Returns the smaller edits which compose this, or {@code null} if this is an atomic edit. */
  default @Nullable Iterable<? extends CFGEdit<?>> subEdits() {
    return null;
  }

  // region edit classes
  /** Not user-defined edit with semantic meaning. */
  sealed interface Semantic<Reverse extends Semantic<?>> extends CFGEdit<Reverse> {}

  /** "Edit" that only provides additional context, i.e. a section or divider. */
  sealed interface Context<Reverse extends Context<?>> extends CFGEdit<Reverse> {
    @Override
    default boolean affectsCfgGraph() {
      return false;
    }
  }

  /**
   * Edit is local to a {@linkplain CFG control-flow graph}; edit is not local to a {@linkplain BB
   * basic block}, two blocks, {@linkplain InstrOrPhi instruction, or phi}.
   *
   * <p>{@link SplitBB} and {@link MergeBBs} inherit this.
   *
   * <p>{@link MoveStmts}, {@link MoveStmt}, and {@link MoveJump} don't inherit this. Instead they
   * inherit {@link Move}, because although they affect multiple blocks, they affect those blocks
   * internally.
   */
  sealed interface OnCFG<Reverse extends OnCFG<?>> extends Semantic<Reverse> {
    @Override
    default boolean affectsCfgGraph() {
      return true;
    }
  }

  /** Edit moves instructions between two {@linkplain BB basic blocks}. */
  sealed interface Move<Reverse extends Move<?>> extends Semantic<Reverse> {
    /** Id of the {@linkplain BB} that instructions are being moved out of. */
    BBId oldBBId();

    /** Id of the {@linkplain BB} that instructions are being moved into. */
    BBId newBBId();

    /**
     * Number of instructions moved by the edit.
     *
     * <p>That is, the number removed from {@link #oldBBId()} and added to {@link #newBBId()}.
     */
    int numMoved();
  }

  /**
   * Edit is local to a {@linkplain BB basic block}, but not {@linkplain InstrOrPhi instruction or
   * phi}.
   *
   * <p>{@link MoveStmts}, {@link MoveStmt}, and {@link MoveJump} inherit {@link Move} because they
   * are local to two basic blocks.
   */
  sealed interface OnBB<Reverse extends OnBB<?>> extends Semantic<Reverse> {
    /** Id of the {@linkplain BB} that the edit will affect. */
    BBId bbId();

    /**
     * Number of nodes affected by the edit.
     *
     * <p>If the edit only mutates nodes, {@link #sizeDelta()} will be 0 but this will be positive.
     */
    int numAffected();

    /**
     * Number of nodes inserted (if positive) or removed (if negative) by the edit.
     *
     * <p>If the edit only mutates nodes, this will be 0 but {@link #numAffected()} will be
     * positive.
     */
    int sizeDelta();
  }

  /**
   * Edit is local to an {@linkplain InstrOrPhi instruction or phi}.
   *
   * <p>{@link ReplaceWithInstr} ({@link ReplaceStmt}, {@link ReplaceJump}) inherit this, as they
   * aren't considered local to an instruction or phi, because they remove the old instruction and
   * insert a new one.
   *
   * <p>{@link MoveStmts}, {@link MoveStmt}, and {@link MoveJump} also don't inherit this and aren't
   * considered local, because the instructions move to a different block and therefore affect both
   * blocks' children.
   */
  sealed interface OnInstrOrPhi<Reverse extends OnInstrOrPhi<?>> extends Semantic<Reverse> {}

  sealed interface InsertInstrsOrPhis<Reverse extends RemoveInstrsOrPhis<?>> extends OnBB<Reverse> {
    @Override
    default int sizeDelta() {
      return numAffected();
    }
  }

  sealed interface InsertPhis_<Reverse extends RemovePhis_<?>>
      extends InsertInstrsOrPhis<Reverse> {}

  sealed interface InsertStmts_<Reverse extends RemoveStmts_<?>>
      extends InsertInstrsOrPhis<Reverse> {}

  sealed interface RemoveInstrsOrPhis<Reverse extends InsertInstrsOrPhis<?>> extends OnBB<Reverse> {
    @Override
    default int sizeDelta() {
      return -numAffected();
    }
  }

  sealed interface RemovePhis_<Reverse extends InsertPhis_<?>>
      extends RemoveInstrsOrPhis<Reverse> {}

  sealed interface RemoveStmts_<Reverse extends InsertStmts_<?>>
      extends RemoveInstrsOrPhis<Reverse> {}

  /** Replaces the instruction but not in arguments of other instructions. */
  sealed interface ReplaceWithInstr<Reverse extends ReplaceWithInstr<?>> extends OnBB<Reverse> {
    @Override
    default int numAffected() {
      return 1;
    }

    @Override
    default int sizeDelta() {
      return 0;
    }
  }

  /** Changes the instruction or one of its {@link Instr#outputs()}.
   *
   * <p>If the output changes, it affects other instructions.
   */
  sealed interface MutateInstrOrPhi<Reverse extends MutateInstrOrPhi<?>>
      extends OnInstrOrPhi<Reverse> {}

  // endregion edit classes

  // region edits
  record InsertBB(
      BBId id,
      ImmutableList<Phi.Serial<?>> phis,
      ImmutableList<Stmt.Serial> stmts,
      @Nullable Jump.Serial jump)
      implements OnCFG<RemoveBB> {
    public InsertBB(BB bb) {
      this(
          bb.id(),
          bb.phis().stream().map(Phi.Serial::new).collect(ImmutableList.toImmutableList()),
          bb.stmts().stream().map(Stmt.Serial::new).collect(ImmutableList.toImmutableList()),
          bb.jump() == null ? null : new Jump.Serial(bb.jump()));
    }

    @Override
    public RemoveBB apply(CFG cfg) {
      var bb = cfg.addBBWithId(id);

      bb.addPhisWithIds(phis.stream().map(data -> Pair.of(data.id(), data.inputIds().stream().map(inputId -> inputId.decode(cfg)).toList())).toList());
      InsertStmts.doApply(bb, stmts);
      if (jump != null) {
        InsertJump.doApply(bb, jump);
      }

      return new RemoveBB(bb);
    }
  }

  record RemoveBB(@Override BBId bbId) implements OnCFG<InsertBB> {
    public RemoveBB(BB bb) {
      this(bb.id());
    }

    @Override
    public InsertBB apply(CFG cfg) {
      var bb = cfg.remove(bbId);
      return new InsertBB(bb);
    }
  }

  record SplitBB(@Override BBId bbId, BBId newBBId, boolean isNewBBPredecessor, int index)
      implements OnCFG<MergeBBs> {
    public SplitBB(BB bb, BB newBB, boolean isNewBBPredecessor, int index) {
      this(bb.id(), newBB.id(), isNewBBPredecessor, index);
    }

    @Override
    public MergeBBs apply(CFG cfg) {
      var bb = cfg.get(bbId);
      if (isNewBBPredecessor) {
        bb.splitNewPredecessorWithId(newBBId, index);
      } else {
        bb.splitNewSuccessorWithId(newBBId, index);
      }
      return new MergeBBs(bbId, newBBId, isNewBBPredecessor);
    }
  }

  record MergeBBs(@Override BBId bbId, BBId newBBId, boolean isNewBBPredecessor)
      implements OnCFG<SplitBB> {
    public MergeBBs(BB bb, BB newBB, boolean isNewBBPredecessor) {
      this(bb.id(), newBB.id(), isNewBBPredecessor);
    }

    @Override
    public SplitBB apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var index = bb.stmts().size();
      var newBB = cfg.get(newBBId);
      if (isNewBBPredecessor) {
        newBB.mergeWithSuccessor(bb);
      } else {
        bb.mergeWithSuccessor(newBB);
      }
      return new SplitBB(bbId, newBBId, isNewBBPredecessor, index);
    }
  }

  record InsertPhis<T>(@Override BBId bbId, ImmutableSet<Phi.Serial<? extends T>> phis)
      implements InsertPhis_<RemovePhis> {
    public InsertPhis {
      if (phis.isEmpty()) {
        throw new IllegalArgumentException("no-op (phis.isEmpty())");
      }
    }

    public InsertPhis(BB bb, Collection<? extends Phi<? extends T>> phis) {
      this(bb.id(), phis.stream().map(Phi.Serial::new).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public RemovePhis apply(CFG cfg) {
      var phis =
          cfg.get(bbId)
              .addPhisWithIds(this.phis.stream().map(data -> Pair.of(data.id(), data.inputIds().stream().map(inputId -> inputId.decode(cfg)).toList())).toList());
      return new RemovePhis(
          bbId, phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    // The cast is required because we can't create `InsertPhi<? extends T>`, so we unsoundly create
    // `InsertPhi<T>`, then upcast to make sound.
    @SuppressWarnings("unchecked")
    @Override
    public Iterable<? extends InsertPhi<? extends T>> subEdits() {
      return phis.stream()
          .map(
              data ->
                  new InsertPhi<>(
                      bbId,
                      (LocalNodeId<T>) data.id(),
                      ImmutableSet.copyOf(data.inputIds())))
          .toList();
    }

    @Override
    public int numAffected() {
      return phis.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record InsertPhi<T>(
      @Override BBId bbId,
      LocalNodeId<T> phiId,
      ImmutableSet<? extends InputId<? extends T>> inputs)
      implements InsertPhis_<RemovePhi> {
    public InsertPhi(BB bb, Phi<T> phi) {
      this(
          bb.id(),
          phi.id(),
          phi.inputs().stream().map(Input::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public RemovePhi apply(CFG cfg) {
      var phi =
          cfg.get(bbId).addPhiWithId(phiId, inputs.stream().map(i -> i.decode(cfg)).toList());
      return new RemovePhi(bbId, phi.id());
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record InsertStmts(@Override BBId bbId, int index, ImmutableList<Stmt.Serial> stmts)
      implements InsertStmts_<RemoveStmts> {
    public InsertStmts {
      if (stmts.isEmpty()) {
        throw new IllegalArgumentException("no-op (stmts.isEmpty())");
      }
    }

    public InsertStmts(BB bb, int index, List<Stmt> stmts) {
      this(
          bb.id(),
          index,
          stmts.stream().map(Stmt.Serial::new).collect(ImmutableList.toImmutableList()));
    }

    @Override
    public RemoveStmts apply(CFG cfg) {
      doApply(cfg.get(bbId), stmts);
      return new RemoveStmts(bbId, index, index + stmts.size());
    }

    private static void doApply(BB bb, List<Stmt.Serial> stmtSerials) {
      var stmts = bb.insertAllAt(0, stmtSerials.stream().map(s -> s.data().decode(bb.cfg())).toList());
      assert stmts.size() == stmtSerials.size();
      for (var i = 0; i < stmts.size(); i++) {
        var outputs = stmts.get(i).outputs();
        var outputIds = stmtSerials.get(i).outputIds();
        assert outputs.size() == outputIds.size();

        for (var j = 0; j < stmts.size(); j++) {
          outputs.get(j).unsafeSetId(outputIds.get(j));
        }
      }
    }

    @Override
    public Iterable<InsertStmt> subEdits() {
      return Streams.mapWithIndex(
              stmts.stream(),
              (data, i) -> new InsertStmt(bbId, index + (int) i, data))
          .toList();
    }

    @Override
    public int numAffected() {
      return stmts().size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record InsertStmts2(@Override BBId bbId, ImmutableMap<Integer, Stmt.Serial> indicesAndStmts)
      implements InsertStmts_<RemoveStmts2> {
    public InsertStmts2 {
      if (indicesAndStmts.isEmpty()) {
        throw new IllegalArgumentException("no-op (indicesAndStmts.isEmpty())");
      }
    }

    public InsertStmts2(BB bb, Map<Integer, Stmt> indicesAndStmts) {
      this(
          bb.id(),
          indicesAndStmts.entrySet().stream()
              .collect(ImmutableMap.toImmutableMap(Map.Entry::getKey, e -> new Stmt.Serial(e.getValue()))));
    }

    @Override
    public RemoveStmts2 apply(CFG cfg) {
      doApply(cfg.get(bbId), this.indicesAndStmts);
      return new RemoveStmts2(bbId, indicesAndStmts.keySet());
    }

    private static void doApply(BB bb, Map<Integer, Stmt.Serial> indicesAndStmtSerials) {
      var indicesAndStmtSerialsWithConstantOrder = indicesAndStmtSerials.entrySet().stream().toList();
      var stmts = bb.insertAllAt(indicesAndStmtSerialsWithConstantOrder.stream().collect(
          Collectors.toMap(Entry::getKey, e -> e.getValue().data().decode(bb.cfg()))));
      assert stmts.size() == indicesAndStmtSerials.size();
      for (var i = 0; i < stmts.size(); i++) {
        var outputs = stmts.get(i).outputs();
        var outputIds = indicesAndStmtSerialsWithConstantOrder.get(i).getValue().outputIds();
        assert outputs.size() == outputIds.size();

        for (var j = 0; j < stmts.size(); j++) {
          outputs.get(j).unsafeSetId(outputIds.get(j));
        }
      }
    }

    @Override
    public Iterable<InsertStmt> subEdits() {
      return indicesAndStmts.entrySet().stream()
          .sorted(Comparator.comparingInt(s -> -s.getKey()))
          .map(
              indexIdAndArgs ->
                  new InsertStmt(
                      bbId,
                      indexIdAndArgs.getKey(),
                      indexIdAndArgs.getValue()))
          .toList();
    }

    @Override
    public int numAffected() {
      return indicesAndStmts.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record InsertStmt(@Override BBId bbId, int index, Stmt.Serial stmt)
      implements InsertStmts_<RemoveStmt> {
    public InsertStmt(BB bb, int index, Stmt stmt) {
      this(bb.id(), index, new Stmt.Serial(stmt));
    }

    @Override
    public RemoveStmt apply(CFG cfg) {
      doApply(cfg.get(bbId), index, stmt);
      return new RemoveStmt(bbId, index);
    }

    private static void doApply(BB bb, int index, Stmt.Serial stmtSerial) {
      var stmt = bb.insertAt(index, stmtSerial.data().decode(bb.cfg()));

      setOutputIds(stmt, stmtSerial);
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record InsertJump(@Override BBId bbId, Jump.Serial jump)
      implements InsertInstrsOrPhis<RemoveJump> {
    public InsertJump(BB bb, Jump jump) {
      this(bb.id(), new Jump.Serial(jump));
    }

    @Override
    public RemoveJump apply(CFG cfg) {
      doApply(cfg.get(bbId), jump);
      return new RemoveJump(bbId);
    }

    private static void doApply(BB bb, Jump.Serial jumpSerial) {
      var jump = bb.addJump(jumpSerial.data().decode(bb.cfg()));

      setOutputIds(jump, jumpSerial);
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return true;
    }
  }

  record RemovePhis(@Override BBId bbId, ImmutableSet<? extends PhiId<?>> phiIds)
      implements RemovePhis_<InsertPhis<?>> {
    public RemovePhis {
      if (phiIds.isEmpty()) {
        throw new IllegalArgumentException("no-op (phiIds.isEmpty())");
      }
    }

    public RemovePhis(BB bb, Collection<? extends Phi<?>> phis) {
      this(bb.id(), phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public InsertPhis<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var phis = phiIds.stream().map(id -> (Phi<?>) cfg.get(id)).toList();

      bb.removePhis(phis);

      return new InsertPhis<>(bb, phis);
    }

    @Override
    public Iterable<RemovePhi> subEdits() {
      return phiIds.stream().map(id -> new RemovePhi(bbId, id)).toList();
    }

    @Override
    public int numAffected() {
      return phiIds.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemovePhi(@Override BBId bbId, PhiId<?> phiId)
      implements RemovePhis_<InsertPhi<?>> {
    public RemovePhi(BB bb, Phi<?> phi) {
      this(bb.id(), phi.id());
    }

    @Override
    public InsertPhi<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var phi = cfg.get(phiId);

      bb.remove(phi);

      return new InsertPhi<>(bb, phi);
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemoveStmts(@Override BBId bbId, int fromIndex, int toIndex)
      implements RemoveStmts_<InsertStmts> {
    public RemoveStmts {
      if (fromIndex > toIndex) {
        throw new IllegalArgumentException("fromIndex > toIndex");
      } else if (fromIndex == toIndex) {
        throw new IllegalArgumentException("no-op (fromIndex == toIndex)");
      }
    }

    public RemoveStmts(BB bb, int fromIndex, int toIndex) {
      this(bb.id(), fromIndex, toIndex);
    }

    @Override
    public InsertStmts apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmtArgs =
          bb.stmts(fromIndex, toIndex).stream()
              .map(Stmt.Serial::new)
              .collect(ImmutableList.toImmutableList());

      bb.removeAllAt(fromIndex, toIndex);

      return new InsertStmts(bbId, fromIndex, stmtArgs);
    }

    @Override
    public Iterable<RemoveStmt> subEdits() {
      return IntStream.range(fromIndex, toIndex)
          .mapToObj(_ -> new RemoveStmt(bbId, fromIndex))
          .toList();
    }

    @Override
    public int numAffected() {
      return toIndex - fromIndex;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemoveStmts2(@Override BBId bbId, ImmutableSet<Integer> indices)
      implements RemoveStmts_<InsertStmts2> {
    public RemoveStmts2 {
      if (indices.isEmpty()) {
        throw new IllegalArgumentException("no-op (indices.isEmpty())");
      }
    }

    public RemoveStmts2(BB bb, Collection<Integer> indices) {
      this(bb.id(), ImmutableSet.copyOf(indices));
    }

    @Override
    public InsertStmts2 apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmts = this.indices.stream().collect(Collectors.toMap(Function.identity(), bb::stmt));

      bb.removeAllStmts(stmts.values());

      return new InsertStmts2(bb, stmts);
    }

    @Override
    public int numAffected() {
      return indices.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemoveStmt(@Override BBId bbId, int index) implements RemoveStmts_<InsertStmt> {
    public RemoveStmt(BB bb, int index) {
      this(bb.id(), index);
    }

    @Override
    public InsertStmt apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmt = bb.removeAt(index);

      return new InsertStmt(bb, index, stmt);
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemoveJump(@Override BBId bbId) implements RemoveInstrsOrPhis<InsertJump> {
    public RemoveJump(BB bb) {
      this(bb.id());
    }

    @Override
    public InsertJump apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var jump = bb.removeJump();

      return new InsertJump(bb, jump);
    }

    @Override
    public int numAffected() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return true;
    }
  }

  record ReplaceStmt(@Override BBId bbId, int index, Stmt.Serial newStmt)
      implements ReplaceWithInstr<ReplaceStmt> {
    public ReplaceStmt(BB bb, int index, Stmt stmt) {
      this(bb.id(), index, new Stmt.Serial(stmt));
    }

    @Override
    public ReplaceStmt apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.stmt(index);

      doApply(bb, index, newStmt);

      return new ReplaceStmt(bb, index, old);
    }

    private static void doApply(BB bb, int index, Stmt.Serial newStmtSerial) {
      var newStmt = bb.replace(index, newStmtSerial.data().decode(bb.cfg()));

      setOutputIds(newStmt, newStmtSerial);
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record ReplaceJump(@Override BBId bbId, Jump.Serial newJump)
      implements ReplaceWithInstr<ReplaceJump> {
    public ReplaceJump(BB bb, Jump jump) {
      this(bb.id(), new Jump.Serial(jump));
    }

    @Override
    public ReplaceJump apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = Objects.requireNonNull(bb.jump(), "`ReplaceJump` applied to BB that doesn't have a jump");

      doApply(bb, newJump);

      return new ReplaceJump(bb, old);
    }

    private static void doApply(BB bb, Jump.Serial newJumpSerial) {
      var newJump = bb.replaceJump(newJumpSerial.data().decode(bb.cfg()));

      setOutputIds(newJump, newJumpSerial);
    }

    @Override
    public boolean affectsCfgGraph() {
      return true;
    }
  }

  record MoveStmts(
      @Override BBId oldBBId,
      int oldFromIndex,
      int oldToIndex,
      @Override BBId newBBId,
      int newFromIndex)
      implements Move<MoveStmts> {
    public MoveStmts {
      if (oldFromIndex > oldToIndex) {
        throw new IllegalArgumentException("oldFromIndex > oldToIndex");
      } else if (oldFromIndex == oldToIndex) {
        throw new IllegalArgumentException("no-op (oldFromIndex == oldToIndex)");
      }
    }

    public MoveStmts(BB oldBB, int oldFromIndex, int oldToIndex, BB newBB, int newFromIndex) {
      this(oldBB.id(), oldFromIndex, oldToIndex, newBB.id(), newFromIndex);
    }

    @Override
    public MoveStmts apply(CFG cfg) {
      cfg.get(oldBBId).moveStmts(oldFromIndex, oldToIndex, cfg.get(newBBId), newFromIndex);
      return new MoveStmts(
          newBBId, newFromIndex, newFromIndex + (oldToIndex - oldFromIndex), oldBBId, oldFromIndex);
    }

    @Override
    public Iterable<MoveStmt> subEdits() {
      return IntStream.range(oldFromIndex, oldToIndex)
          .mapToObj(i -> new MoveStmt(oldBBId, i, newBBId, newFromIndex + (i - oldFromIndex)))
          .toList();
    }

    @Override
    public int numMoved() {
      return oldToIndex - oldFromIndex;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record MoveStmt(@Override BBId oldBBId, int oldIndex, @Override BBId newBBId, int newIndex)
      implements Move<MoveStmt> {
    public MoveStmt(BB oldBB, int oldIndex, BB newBB, int newIndex) {
      this(oldBB.id(), oldIndex, newBB.id(), newIndex);
    }

    @Override
    public MoveStmt apply(CFG cfg) {
      cfg.get(oldBBId).moveStmt(oldIndex, cfg.get(newBBId), newIndex);
      return new MoveStmt(newBBId, newIndex, oldBBId, oldIndex);
    }

    @Override
    public int numMoved() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record MoveJump(@Override BBId oldBBId, @Override BBId newBBId) implements Move<MoveJump> {
    public MoveJump(BB oldBB, BB newBB) {
      this(oldBB.id(), newBB.id());
    }

    @Override
    public MoveJump apply(CFG cfg) {
      cfg.get(oldBBId).moveJump(cfg.get(newBBId));
      return new MoveJump(newBBId, oldBBId);
    }

    @Override
    public int numMoved() {
      return 1;
    }

    @Override
    public boolean affectsCfgGraph() {
      return true;
    }
  }

  record SetPhiInput<T>(
      PhiId<T> phiId, BBId incomingBBId, NodeId<? extends T> inputNodeId)
      implements MutateInstrOrPhi<SetPhiInput<T>> {
    public SetPhiInput(Phi<T> phi, BB incomingBB, Node<? extends T> inputNode) {
      this(phi.id(), incomingBB.id(), inputNode.id());
    }

    @Override
    public SetPhiInput<T> apply(CFG cfg) {
      var oldInputNode = cfg.get(phiId).setInput(cfg.get(incomingBBId), cfg.get(inputNodeId));
      return new SetPhiInput<>(phiId, incomingBBId, oldInputNode.id());
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record SetLocalNodeId<T>(LocalNodeId<T> oldId, LocalNodeId<T> newId)
      implements MutateInstrOrPhi<SetLocalNodeId<T>> {
    public SetLocalNodeId {
      if (oldId.type() != newId.type()) {
        throw new IllegalArgumentException(
            "`MutateInstrOrPhiId` must preserve the node ID's class: the node's class doesn't change, so the ID class shouldn't either");
      }
    }

    @Override
    public SetLocalNodeId<T> apply(CFG cfg) {
      var old = cfg.get(oldId);
      old.setId(newId);
      return new SetLocalNodeId<>(newId, oldId);
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record ReplaceInJumpTargets(BBId bbWithJumpId, BBId oldId, BBId replacementId)
      implements MutateInstrOrPhi<ReplaceInJumpTargets> {
    public ReplaceInJumpTargets(Jump jump, BB old, BB replacement) {
      this(jump.bb().id(), old.id(), replacement.id());
    }

    @Override
    public ReplaceInJumpTargets apply(CFG cfg) {
      var jump = Objects.requireNonNull(cfg.get(bbWithJumpId).jump(), "`ReplaceInJumpTargets` applied to BB that doesn't have a jump");
      jump.replaceInTargets(cfg.get(oldId), cfg.get(replacementId));
      return new ReplaceInJumpTargets(bbWithJumpId, replacementId, oldId);
    }

    @Override
    public boolean affectsCfgGraph() {
      return true;
    }
  }

  /* TODO
  record BatchSubst(TODO)
      implements OnCFG<BatchSubst> {
    public BatchSubst(BatchSubst subst) {
      this(TODO);
    }

    @Override
    public BatchSubst apply(CFG cfg) {
      TODO
    }

    @Override
    public boolean affectsCfgGraph() {
      // Since we only change input nodes, not targets, the graph's shape remains the same.
      return false;
    }
  } */

  /** Doesn't do anything but is useful in logs. */
  record Divider(String label) implements Context<Divider> {
    @Override
    public Divider apply(CFG cfg) {
      cfg.recordDivider(label);
      return new Divider(undoLabel(label));
    }
  }

  /** User-defined arbitrary group of edits. */
  record Section(String label, ImmutableList<? extends CFGEdit<?>> edits)
      implements Context<Section> {
    @Override
    public Section apply(CFG cfg) {
      cfg.beginSection(label);
      var undoEdits =
          edits.stream().map(e -> e.apply(cfg)).collect(ImmutableList.toImmutableList()).reverse();
      cfg.endSection();
      return new Section(undoLabel(label), undoEdits);
    }
  }

  // endregion edits

  private static void setOutputIds(Instr instr, Instr.Serial instrSerial) {
    var outputs = instr.outputs();
    var outputIds = instrSerial.outputIds();
    assert outputs.size() == outputIds.size();

    for (var i = 0; i < outputs.size(); i++) {
      outputs.get(i).unsafeSetId(outputIds.get(i));
    }
  }

  /**
   * Prepends "Undo " to the label if it isn't already prepended, otherwise removes it (so {@code
   * undoLabel(undoLabel(x)) === x}.
   */
  private static String undoLabel(String label) {
    var redo = Strings.stripPrefix(label, "Undo ");
    return redo != null ? redo : "Undo " + label;
  }
}
