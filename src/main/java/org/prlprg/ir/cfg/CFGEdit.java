package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Phi.Input;
import org.prlprg.ir.cfg.Phi.InputId;
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
   *
   * <p>{@link MutateInstrArgs} also doesn't inherit this, even though the instruction may be used
   * in multiple basic blocks. Instead it inherits {@link OnInstrOrPhi}.
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
   * <p>{@link ReplaceWithInstr} ({@link ReplaceStmt}, {@link ReplaceJump}) inherit this, as they
   * aren't considered local to an instruction or phi, because they remove the old instruction and
   * insert a new one. {@link MutateInstrArgs} doesn't inherit this, as it is considered local,
   * because it reuses the original instruction.
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
   * <p>{@link MutateInstrArgs} inherits this, although the instruction or phi changes in arguments
   * to other instructions or phis; this change is excluded from the definition of "local" used
   * within this and other immediate subclasses of {@link Semantic}.
   *
   * <p>{@link ReplaceWithInstr} ({@link ReplaceStmt}, {@link ReplaceJump}) inherit this, as they
   * aren't considered local to an instruction or phi, because they remove the old instruction and
   * insert a new one.
   *
   * <p>{@link MoveStmts}, {@link MoveStmt}, and {@link MoveJump} also don't inherit this and aren't
   * considered local, because the instructions move to a different block and therefore affect both
   * blocks' children.
   */
  sealed interface OnInstrOrPhi<Reverse extends OnInstrOrPhi<?>> extends Semantic<Reverse> {
    /** Id of the {@linkplain Node node} that the edit will affect. */
    NodeId<? extends InstrOrPhi> targetId();
  }

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

  /** Changes the instruction including in arguments of other instructions. */
  sealed interface MutateInstrOrPhi<Reverse extends MutateInstrOrPhi<?>>
      extends OnInstrOrPhi<Reverse> {}

  // endregion edit classes

  // region edits
  record InsertBB(
      BBId id,
      ImmutableList<Phi.Serial> phiArgs,
      ImmutableList<Stmt.Serial> stmtIdsAndArgs,
      @Nullable Jump.Serial jumpIdAndArgs)
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
      bb.addPhisWithIds(phiArgs.stream().map(a -> new PhiImpl.Args(cfg, a)).toList());
      bb.insertAllAtWithIds(
          0, stmtIdsAndArgs.stream().map(a -> new StmtImpl.Args(cfg, a)).toList());
      if (jumpIdAndArgs != null) {
        bb.addJumpWithId(jumpIdAndArgs.id(), jumpIdAndArgs.data().decode(cfg));
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

  record InsertPhis(@Override BBId bbId, ImmutableSet<Phi.Serial> phis)
      implements InsertPhis_<RemovePhis> {
    public InsertPhis {
      if (phis.isEmpty()) {
        throw new IllegalArgumentException("no-op (phis.isEmpty())");
      }
    }

    public InsertPhis(BB bb, Collection<? extends Phi<?>> phis) {
      this(bb.id(), phis.stream().map(Phi.Serial::new).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public RemovePhis apply(CFG cfg) {
      var phis =
          cfg.get(bbId)
              .addPhisWithIds(this.phis.stream().map(a -> new PhiImpl.Args(cfg, a)).toList());
      return new RemovePhis(
          bbId, phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    // The type argument and cast *are* redundant, but the Java compiler has an annoying bug where
    // it occasionally fails to type-check and must be fully rebuilt without them.
    @SuppressWarnings({"Convert2Diamond", "RedundantCast"})
    @Override
    public Iterable<? extends InsertPhi<?>> subEdits() {
      return phis.stream()
          .map(
              a ->
                  new InsertPhi<Node>(
                      bbId,
                      (NodeId<? extends Phi<? extends Node>>) a.id(),
                      (Class<? extends Node>) a.nodeClass(),
                      ImmutableSet.copyOf(
                          (Collection<? extends InputId<? extends Node>>) a.inputIds())))
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

  record InsertPhi<N extends Node>(
      @Override BBId bbId,
      NodeId<? extends Phi<? extends N>> nodeId,
      Class<? extends N> nodeClass,
      ImmutableSet<? extends InputId<? extends N>> inputs)
      implements InsertPhis_<RemovePhi> {
    public InsertPhi(BB bb, Phi<? extends N> phi) {
      this(
          bb.id(),
          phi.id(),
          phi.nodeClass(),
          phi.inputs().stream().map(Input::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public RemovePhi apply(CFG cfg) {
      var phi =
          cfg.get(bbId)
              .addPhiWithId(nodeId, nodeClass, inputs.stream().map(i -> i.decode(cfg)).toList());
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

    public InsertStmts(BB bb, int index, List<? extends Stmt> stmts) {
      this(
          bb.id(),
          index,
          stmts.stream().map(Stmt.Serial::new).collect(ImmutableList.toImmutableList()));
    }

    @Override
    public RemoveStmts apply(CFG cfg) {
      var stmts =
          cfg.get(bbId)
              .insertAllAtWithIds(
                  index, this.stmts.stream().map(a -> new StmtImpl.Args(cfg, a)).toList());
      return new RemoveStmts(bbId, index, index + stmts.size());
    }

    @Override
    public Iterable<? extends InsertStmt<?>> subEdits() {
      return Streams.mapWithIndex(
              stmts.stream(),
              (args, i) -> new InsertStmt<>(bbId, index + (int) i, args.id(), args.data()))
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

  record InsertStmts2(@Override BBId bbId, Map<Integer, Stmt.Serial> indicesAndStmts)
      implements InsertStmts_<RemoveStmts2> {
    public InsertStmts2 {
      if (indicesAndStmts.isEmpty()) {
        throw new IllegalArgumentException("no-op (indicesAndStmts.isEmpty())");
      }
    }

    public InsertStmts2(BB bb, Map<Integer, ? extends Stmt> indicesAndStmts) {
      this(
          bb.id(),
          indicesAndStmts.entrySet().stream()
              .collect(Collectors.toMap(Map.Entry::getKey, e -> new Stmt.Serial(e.getValue()))));
    }

    @Override
    public RemoveStmts2 apply(CFG cfg) {
      var indicesAndStmts =
          cfg.get(bbId)
              .insertAllAtWithIds(
                  this.indicesAndStmts.entrySet().stream()
                      .collect(
                          Collectors.toMap(
                              Map.Entry::getKey, e -> new StmtImpl.Args(cfg, e.getValue()))));
      return new RemoveStmts2(
          bbId, indicesAndStmts.stream().map(Stmt::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public Iterable<? extends InsertStmt<?>> subEdits() {
      return indicesAndStmts.entrySet().stream()
          .sorted(Comparator.comparingInt(s -> -s.getKey()))
          .map(
              indexIdAndArgs ->
                  new InsertStmt<>(
                      bbId,
                      indexIdAndArgs.getKey(),
                      indexIdAndArgs.getValue().id(),
                      indexIdAndArgs.getValue().data()))
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

  record InsertStmt<I extends Stmt>(
      @Override BBId bbId,
      int index,
      NodeId<? extends I> id,
      MapToIdIn<? extends StmtData<? extends I>> args)
      implements InsertStmts_<RemoveStmt> {
    public InsertStmt(BB bb, int index, NodeId<? extends I> nodeId, StmtData<? extends I> args) {
      this(bb.id(), index, nodeId, MapToIdIn.of(args));
    }

    public static InsertStmt<?> of(BB bb, int index, Stmt stmt) {
      return new InsertStmt<>(bb, index, stmt.id(), stmt.data());
    }

    @Override
    public RemoveStmt apply(CFG cfg) {
      cfg.get(bbId).insertAtWithId(index, id, args.decode(cfg));
      return new RemoveStmt(bbId, index);
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

  record InsertJump<I extends Jump>(
      @Override BBId bbId,
      NodeId<? extends I> nodeId,
      MapToIdIn<? extends JumpData<? extends I>> args)
      implements InsertInstrsOrPhis<RemoveJump> {
    public InsertJump(BB bb, NodeId<? extends I> nodeId, JumpData<? extends I> args) {
      this(bb.id(), nodeId, MapToIdIn.of(args));
    }

    public static InsertJump<?> of(BB bb, Jump jump) {
      return new InsertJump<>(bb, jump.id(), jump.data());
    }

    @Override
    public RemoveJump apply(CFG cfg) {
      cfg.get(bbId).addJumpWithId(nodeId, args.decode(cfg));
      return new RemoveJump(bbId);
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

  record RemovePhis(@Override BBId bbId, ImmutableSet<? extends NodeId<? extends Phi<?>>> nodeIds)
      implements RemovePhis_<InsertPhis> {
    public RemovePhis {
      if (nodeIds.isEmpty()) {
        throw new IllegalArgumentException("no-op (nodeIds.isEmpty())");
      }
    }

    public RemovePhis(BB bb, Collection<? extends Phi<?>> phis) {
      this(bb.id(), phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public InsertPhis apply(CFG cfg) {
      var phis = nodeIds.stream().map(cfg::get).toList();
      cfg.get(bbId).removePhis(phis);
      return new InsertPhis(
          bbId, phis.stream().map(Phi.Serial::new).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public Iterable<? extends CFGEdit<?>> subEdits() {
      return nodeIds.stream().map(id -> new RemovePhi(bbId, id)).toList();
    }

    @Override
    public int numAffected() {
      return nodeIds.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemovePhi(@Override BBId bbId, NodeId<? extends Phi<?>> nodeId)
      implements RemovePhis_<InsertPhi<?>> {
    public RemovePhi(BB bb, Phi<?> phi) {
      this(bb.id(), phi.id());
    }

    @Override
    public InsertPhi<?> apply(CFG cfg) {
      var phi = cfg.get(nodeId);
      cfg.get(bbId).remove(phi);
      return new InsertPhi<>(
          bbId,
          phi.id(),
          phi.nodeClass(),
          phi.inputs().stream().map(Input::id).collect(ImmutableSet.toImmutableSet()));
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
    public Iterable<? extends CFGEdit<?>> subEdits() {
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

  record RemoveStmts2(@Override BBId bbId, ImmutableSet<? extends NodeId<? extends Stmt>> stmts)
      implements RemoveStmts_<InsertStmts2> {
    public RemoveStmts2 {
      if (stmts.isEmpty()) {
        throw new IllegalArgumentException("no-op (stmts.isEmpty())");
      }
    }

    public RemoveStmts2(BB bb, Collection<? extends Stmt> stmts) {
      this(bb.id(), stmts.stream().map(Stmt::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public InsertStmts2 apply(CFG cfg) {
      var stmts = this.stmts.stream().map(cfg::get).toList();
      var bb = cfg.get(bbId);
      var stmtArgs = stmts.stream().collect(Collectors.toMap(bb::indexOf, Stmt.Serial::new));
      bb.removeAllStmts(stmts);
      return new InsertStmts2(bbId, stmtArgs);
    }

    @Override
    public int numAffected() {
      return stmts.size();
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record RemoveStmt(@Override BBId bbId, int index) implements RemoveStmts_<InsertStmt<?>> {
    public RemoveStmt(BB bb, int index) {
      this(bb.id(), index);
    }

    @Override
    public InsertStmt<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmt = bb.removeAt(index);
      return new InsertStmt<>(bbId, index, stmt.id(), MapToIdIn.of(stmt.data()));
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

  record RemoveJump(@Override BBId bbId) implements RemoveInstrsOrPhis<InsertJump<?>> {
    public RemoveJump(BB bb) {
      this(bb.id());
    }

    @Override
    public InsertJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var jump = bb.removeJump();
      return new InsertJump<>(bbId, jump.id(), MapToIdIn.of(jump.data()));
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

  record ReplaceStmt<I extends Stmt>(
      @Override BBId bbId,
      int index,
      String newName,
      MapToIdIn<? extends StmtData<? extends I>> newArgs)
      implements ReplaceWithInstr<ReplaceStmt<?>> {
    public ReplaceStmt(BB bb, int index, String newName, StmtData<? extends I> newArgs) {
      this(bb.id(), index, newName, MapToIdIn.of(newArgs));
    }

    @SuppressWarnings("unchecked")
    public ReplaceStmt(BB bb, int index, I stmt) {
      this(bb, index, InstrOrPhiIdImpl.cast(stmt.id()).name(), (StmtData<? extends I>) stmt.data());
    }

    @Override
    public ReplaceStmt<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.stmt(index);
      var oldName = InstrOrPhiIdImpl.cast(old.id()).name();
      // `replaceNoSubst` *does not* require that `oldData` has the same erased type as `newData`;
      // you can replace an instruction with one of a different type. This is why the reverse action
      // has an erased `I`.
      var oldArgs = MapToIdIn.of(old.data());
      bb.replace(index, newName, newArgs.decode(cfg));
      @SuppressWarnings("unchecked") // Required, otherwise "cannot infer type arguments" error
      var oldArgsCasted = (MapToIdIn<? extends StmtData<Stmt>>) oldArgs;
      return new ReplaceStmt<>(bbId, index, oldName, oldArgsCasted);
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record ReplaceJump<I extends Jump>(
      @Override BBId bbId, String newName, MapToIdIn<? extends JumpData<? extends I>> newArgs)
      implements ReplaceWithInstr<ReplaceJump<?>> {
    public ReplaceJump(BB bb, String newName, JumpData<? extends I> newArgs) {
      this(bb.id(), newName, MapToIdIn.of(newArgs));
    }

    @SuppressWarnings("unchecked")
    public ReplaceJump(BB bb, I jump) {
      this(bb, InstrOrPhiIdImpl.cast(jump.id()).name(), (JumpData<? extends I>) jump.data());
    }

    @Override
    public ReplaceJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.jump();
      var oldName = old == null ? null : InstrOrPhiIdImpl.cast(old.id()).name();
      var oldArgs = old == null ? null : MapToIdIn.of(old.data());
      bb.replaceJump(newName, newArgs.decode(cfg)); // Throws if `old == null`
      assert oldName != null; // implies `oldArgs == null`
      @SuppressWarnings("unchecked") // Required, otherwise "cannot infer type arguments" error
      var oldArgsCasted = (MapToIdIn<? extends JumpData<Jump>>) oldArgs;
      return new ReplaceJump<>(bbId, oldName, oldArgsCasted);
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
    public Iterable<? extends CFGEdit<?>> subEdits() {
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

  record SetPhiInput<N extends Node>(
      NodeId<? extends Phi<N>> targetId, BBId incomingBBId, NodeId<? extends N> inputNodeId)
      implements MutateInstrOrPhi<SetPhiInput<N>> {
    public SetPhiInput(Phi<N> phi, BB incomingBB, N inputNode) {
      this(phi.id(), incomingBB.id(), NodeId.of(inputNode));
    }

    @Override
    public SetPhiInput<N> apply(CFG cfg) {
      var oldInputNode = cfg.get(targetId).setInput(cfg.get(incomingBBId), cfg.get(inputNodeId));
      return new SetPhiInput<>(targetId, incomingBBId, NodeId.of(oldInputNode));
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record MutateInstrOrPhiId(NodeId<? extends InstrOrPhi> oldId, NodeId<? extends InstrOrPhi> newId)
      implements MutateInstrOrPhi<MutateInstrOrPhiId> {
    public MutateInstrOrPhiId {
      if (oldId.clazz() != newId.clazz()) {
        throw new IllegalArgumentException(
            "`MutateInstrOrPhiId` must preserve the node ID's class: the node's class doesn't change, so the ID class shouldn't either");
      }
    }

    /** Alias for {@code oldId} for this to implement {@link MutateInstrOrPhi#targetId()}. */
    @Override
    public NodeId<? extends InstrOrPhi> targetId() {
      return oldId;
    }

    @Override
    public MutateInstrOrPhiId apply(CFG cfg) {
      var old = cfg.get(oldId);
      InstrOrPhiImpl.cast(old).setId(newId);
      return new MutateInstrOrPhiId(newId, oldId);
    }

    @Override
    public boolean affectsCfgGraph() {
      return false;
    }
  }

  record MutateInstrArgs<I extends Instr>(
      NodeId<? extends I> targetId, MapToIdIn<? extends InstrData<I>> newArgs)
      implements MutateInstrOrPhi<MutateInstrArgs<I>> {
    public MutateInstrArgs(I target, InstrData<I> newArgs) {
      this(NodeId.of(target), MapToIdIn.of(newArgs));
    }

    @Override
    public MutateInstrArgs<I> apply(CFG cfg) {
      var target = cfg.get(targetId);
      // `subst` requires that `oldData` has the same erased type as `newData` (not asserted
      // directly, but should be enforced by `Instr#canReplaceDataWith`).
      @SuppressWarnings("unchecked")
      var oldArgs = MapToIdIn.of((InstrData<I>) target.data());
      Instr.mutateArgs(target, newArgs.decode(cfg));
      return new MutateInstrArgs<>(targetId, oldArgs);
    }

    @Override
    public boolean affectsCfgGraph() {
      return JumpData.class.isAssignableFrom(newArgs.mappedClass());
    }
  }

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

  /**
   * Prepends "Undo " to the label if it isn't already prepended, otherwise removes it (so {@code
   * undoLabel(undoLabel(x)) === x}.
   */
  private static String undoLabel(String label) {
    var redo = Strings.stripPrefix(label, "Undo ");
    return redo != null ? redo : "Undo " + label;
  }
}
