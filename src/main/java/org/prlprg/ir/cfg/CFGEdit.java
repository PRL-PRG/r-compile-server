package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
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
   * Apply this edit to the CFG.
   *
   * @throws IllegalArgumentException If you try to re-apply the edit and the CFG is in a state that
   *     makes it invalid. This is guaranteed not to happen if you apply to a CFG in the same state
   *     as before the edit occurred.
   * @return An edit that would undo this edit.
   */
  Reverse apply(CFG cfg);

  /** Returns the smaller edits which compose this, or {@code null} if this is an atomic edit. */
  default @Nullable Iterable<? extends CFGEdit<?>> subEdits() {
    return null;
  }

  // region edit classes
  /** Not user-defined edit. */
  sealed interface Intrinsic<Reverse extends Intrinsic<?>> extends CFGEdit<Reverse> {}

  /** Edit that can't be broken down into smaller edits. */
  sealed interface Atomic<Reverse extends Atomic<?>> extends Intrinsic<Reverse> {}

  /** Edit performed on a {@link BB} directly (as opposed to one of its children). */
  sealed interface OnBB<Reverse extends OnBB<?>> extends Intrinsic<Reverse> {}

  /** Edit performed on a {@link Phi}, {@link Stmt}, or {@link Jump} inside a {@link BB}. */
  sealed interface InBB<Reverse extends InBB<?>> extends Intrinsic<Reverse> {
    BBId bbId();
  }

  sealed interface Insert<Reverse extends Remove<?>> extends Intrinsic<Reverse> {}

  sealed interface Remove<Reverse extends Insert<?>> extends Intrinsic<Reverse> {}

  /** Intrinsic operation which isn't an insertion or removal, e.g. replace or subst. */
  sealed interface IntrinsicUpdate<Reverse extends IntrinsicUpdate<?>> extends Intrinsic<Reverse> {}

  sealed interface InsertInstrsOrPhis<Reverse extends RemoveInstrsOrPhis<?>>
      extends Insert<Reverse>, InBB<Reverse> {}

  sealed interface InsertInstrOrPhi<Reverse extends RemoveInstrOrPhi<?>>
      extends Atomic<Reverse>, InsertInstrsOrPhis<Reverse> {}

  sealed interface RemoveInstrsOrPhis<Reverse extends InsertInstrsOrPhis<?>>
      extends Remove<Reverse>, InBB<Reverse> {}

  sealed interface RemoveInstrOrPhi<Reverse extends InsertInstrOrPhi<?>>
      extends Atomic<Reverse>, RemoveInstrsOrPhis<Reverse> {}

  /** Replaces the instruction but not in arguments of other instructions. */
  sealed interface ReplaceWithInstrOrPhi<Reverse extends ReplaceWithInstrOrPhi<?>>
      extends Atomic<Reverse>, IntrinsicUpdate<Reverse>, InBB<Reverse> {}

  /** Replaces the instruction including in arguments of other instructions. */
  sealed interface SubstWithInstrOrPhi<Reverse extends SubstWithInstrOrPhi<?>>
      extends Atomic<Reverse>, IntrinsicUpdate<Reverse>, InBB<Reverse> {}

  // endregion

  // region edits
  record InsertBB(
      String name,
      ImmutableSet<? extends Phi.IdArgs<?>> phiArgs,
      ImmutableList<? extends Stmt.IdArgs<?>> stmtNamesAndArgs,
      @Nullable Jump.Args<?> jumpNameAndArgs)
      implements Insert<RemoveBB>, OnBB<RemoveBB> {
    public InsertBB(
        String name,
        Collection<? extends Phi.Args<?>> phiArgs,
        List<? extends Stmt.Args<?>> stmtNamesAndArgs,
        @Nullable Jump.Args<?> jumpNameAndArgs) {
      this(
          name,
          phiArgs.stream().map(Phi.Args::id).collect(ImmutableSet.toImmutableSet()),
          stmtNamesAndArgs.stream().map(Stmt.Args::id).collect(ImmutableList.toImmutableList()),
          jumpNameAndArgs);
    }

    public InsertBB(String name) {
      this(name, ImmutableSet.<Phi.IdArgs<?>>of(), ImmutableList.of(), null);
    }

    @Override
    public RemoveBB apply(CFG cfg) {
      var bb = cfg.addBB(name);
      bb.addPhis(
          phiArgs.stream()
              .map(
                  a ->
                      new Phi.Args<>(
                          a.nodeClass(), a.name(), a.inputIds().stream().map(cfg::get).toList()))
              .toList());
      bb.insertAllAt(0, stmtNamesAndArgs.stream().map(a -> a.decode(cfg)).toList());
      if (jumpNameAndArgs != null) {
        bb.addJump(jumpNameAndArgs.name(), jumpNameAndArgs.data());
      }

      return new RemoveBB(bb.id());
    }
  }

  record RemoveBB(@Override BBId bbId) implements Remove<InsertBB>, OnBB<InsertBB> {
    public RemoveBB(BB bb) {
      this(bb.id());
    }

    @Override
    public InsertBB apply(CFG cfg) {
      var bb = cfg.remove(bbId);

      var name = bbId.name();
      var phis =
          bb.phis().stream()
              .map(
                  phi ->
                      new Phi.IdArgs<>(
                          phi.nodeClass(),
                          phi.id().name(),
                          phi.inputs().stream().map(Input::id).toList()))
              .collect(ImmutableSet.toImmutableSet());
      var stmts =
          bb.stmts().stream()
              .map(stmt -> new Stmt.IdArgs<>(stmt.id().name(), stmt.data()))
              .collect(ImmutableList.toImmutableList());
      var jump =
          bb.jump() == null ? null : new Jump.Args<>(bb.jump().id().name(), bb.jump().data());
      return new InsertBB(name, phis, stmts, jump);
    }
  }

  record SplitBB(@Override BBId bbId, int index)
      implements IntrinsicUpdate<MergeBBs>, OnBB<MergeBBs> {
    public SplitBB(BB bb, int index) {
      this(bb.id(), index);
    }

    @Override
    public MergeBBs apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var nextBB = bb.splitNewSuccessor(index);
      return new MergeBBs(bb.id(), nextBB.id());
    }
  }

  record MergeBBs(BBId prevBBId, BBId nextBBId) implements IntrinsicUpdate<SplitBB>, OnBB<SplitBB> {
    public MergeBBs(BB prevBB, BB nextBB) {
      this(prevBB.id(), nextBB.id());
    }

    @Override
    public SplitBB apply(CFG cfg) {
      var prevBB = cfg.get(prevBBId);
      var index = prevBB.stmts().size();
      var nextBB = cfg.get(nextBBId);
      prevBB.mergeWithSuccessor(nextBB);
      return new SplitBB(prevBB.id(), index);
    }
  }

  record InsertPhis(@Override BBId bbId, ImmutableSet<? extends Phi.IdArgs<?>> phiArgs)
      implements InsertInstrsOrPhis<RemovePhis> {
    public InsertPhis(BB bb, Collection<? extends Phi.Args<?>> phiArgs) {
      this(bb.id(), phiArgs.stream().map(Phi.Args::id).collect(ImmutableSet.toImmutableSet()));
    }

    public static InsertPhis altNew(BB bb, Collection<? extends Phi<?>> phis) {
      return new InsertPhis(
          bb,
          phis.stream()
              .map(phi -> new Phi.Args<>(phi.nodeClass(), phi.id().name(), phi.inputs()))
              .toList());
    }

    @Override
    public RemovePhis apply(CFG cfg) {
      var phis =
          cfg.get(bbId)
              .addPhis(
                  phiArgs.stream()
                      .map(
                          a ->
                              new Phi.Args<>(
                                  a.nodeClass(),
                                  a.name(),
                                  a.inputIds().stream().map(cfg::get).toList()))
                      .toList());
      return new RemovePhis(
          bbId, phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public Iterable<? extends InsertPhi<?>> subEdits() {
      return phiArgs.stream()
          .map(
              a ->
                  new InsertPhi<>(bbId, a.nodeClass(), a.name(), ImmutableSet.copyOf(a.inputIds())))
          .toList();
    }
  }

  record InsertPhi<N extends Node>(
      @Override BBId bbId,
      Class<? extends N> nodeClass,
      String name,
      ImmutableSet<? extends InputId<? extends N>> inputs)
      implements InsertInstrOrPhi<RemovePhi> {
    public InsertPhi(
        BB bb,
        Class<? extends N> nodeClass,
        String name,
        Collection<? extends Input<? extends N>> inputs) {
      this(
          bb.id(),
          nodeClass,
          name,
          inputs.stream().map(Input::id).collect(ImmutableSet.toImmutableSet()));
    }

    public InsertPhi(BB bb, Phi<? extends N> phi) {
      this(bb, phi.nodeClass(), phi.id().name(), phi.inputs());
    }

    @Override
    public RemovePhi apply(CFG cfg) {
      var phi = cfg.get(bbId).addPhi(nodeClass, name, inputs.stream().map(cfg::get).toList());
      return new RemovePhi(bbId, phi.id());
    }
  }

  record InsertStmts(
      @Override BBId bbId, int index, ImmutableList<? extends Stmt.IdArgs<?>> namesAndArgs)
      implements InsertInstrsOrPhis<RemoveStmts> {
    public InsertStmts(BB bb, int index, List<? extends Stmt.Args<?>> namesAndArgs) {
      this(
          bb.id(),
          index,
          namesAndArgs.stream().map(Stmt.Args::id).collect(ImmutableList.toImmutableList()));
    }

    public static InsertStmts altNew(BB bb, int index, List<? extends Stmt> stmts) {
      return new InsertStmts(
          bb,
          index,
          stmts.stream().map(stmt -> new Stmt.Args<>(stmt.id().name(), stmt.data())).toList());
    }

    @Override
    public RemoveStmts apply(CFG cfg) {
      var stmts =
          cfg.get(bbId).insertAllAt(index, namesAndArgs.stream().map(a -> a.decode(cfg)).toList());
      return new RemoveStmts(bbId, index, index + stmts.size());
    }

    @Override
    public Iterable<? extends InsertStmt<?>> subEdits() {
      return Streams.mapWithIndex(
              namesAndArgs.stream(),
              (args, i) -> new InsertStmt<>(bbId, index + (int) i, args.name(), args.data()))
          .toList();
    }
  }

  record InsertStmts2(
      @Override BBId bbId, Map<Integer, ? extends Stmt.IdArgs<?>> indicesNamesAndArgs)
      implements InsertInstrsOrPhis<RemoveStmts2> {
    public InsertStmts2(BB bb, Map<Integer, ? extends Stmt.Args<?>> indicesNamesAndArgs) {
      this(
          bb.id(),
          indicesNamesAndArgs.entrySet().stream()
              .collect(Collectors.toMap(Map.Entry::getKey, e -> e.getValue().id())));
    }

    public static InsertStmts2 altNew(BB bb, Map<Integer, ? extends Stmt> indicesAndStmts) {
      return new InsertStmts2(
          bb,
          indicesAndStmts.entrySet().stream()
              .collect(
                  Collectors.toMap(
                      Entry::getKey,
                      e -> new Stmt.Args<>(e.getValue().id().name(), e.getValue().data()))));
    }

    @Override
    public RemoveStmts2 apply(CFG cfg) {
      var stmts =
          cfg.get(bbId)
              .insertAllAt(
                  indicesNamesAndArgs.entrySet().stream()
                      .collect(Collectors.toMap(Map.Entry::getKey, e -> e.getValue().decode(cfg))));
      return new RemoveStmts2(
          bbId, stmts.stream().map(Stmt::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public Iterable<? extends InsertStmt<?>> subEdits() {
      return indicesNamesAndArgs.entrySet().stream()
          .sorted(Comparator.comparingInt(s -> -s.getKey()))
          .map(
              indexNameAndArgs ->
                  new InsertStmt<>(
                      bbId,
                      indexNameAndArgs.getKey(),
                      indexNameAndArgs.getValue().name(),
                      indexNameAndArgs.getValue().data()))
          .toList();
    }
  }

  record InsertStmt<I extends Stmt>(
      @Override BBId bbId, int index, String name, MapToIdIn<? extends StmtData<? extends I>> args)
      implements InsertInstrOrPhi<RemoveStmt> {
    public InsertStmt(BB bb, int index, String name, StmtData<? extends I> args) {
      this(bb.id(), index, name, MapToIdIn.of(args));
    }

    @SuppressWarnings("unchecked")
    public InsertStmt(BB bb, int index, I stmt) {
      this(bb, index, stmt.id().name(), (StmtData<? extends I>) stmt.data());
    }

    @Override
    public RemoveStmt apply(CFG cfg) {
      cfg.get(bbId).insertAt(index, name, args.decode(cfg));
      return new RemoveStmt(bbId, index);
    }
  }

  record InsertJump<I extends Jump>(
      @Override BBId bbId, String name, MapToIdIn<? extends JumpData<? extends I>> args)
      implements InsertInstrOrPhi<RemoveJump> {
    public InsertJump(BB bb, String name, JumpData<? extends I> args) {
      this(bb.id(), name, MapToIdIn.of(args));
    }

    @SuppressWarnings("unchecked")
    public InsertJump(BB bb, I jump) {
      this(bb, jump.id().name(), (JumpData<? extends I>) jump.data());
    }

    @Override
    public RemoveJump apply(CFG cfg) {
      cfg.get(bbId).addJump(name, args.decode(cfg));
      return new RemoveJump(bbId);
    }
  }

  record RemovePhis(@Override BBId bbId, ImmutableSet<? extends NodeId<? extends Phi<?>>> nodeIds)
      implements RemoveInstrsOrPhis<InsertPhis> {
    public RemovePhis(BB bb, Collection<? extends Phi<?>> phis) {
      this(bb.id(), phis.stream().map(Phi::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public InsertPhis apply(CFG cfg) {
      var phis = nodeIds.stream().map(cfg::get).toList();
      cfg.get(bbId).removeAllPhis(phis);
      return new InsertPhis(
          bbId,
          phis.stream()
              .map(
                  phi ->
                      new Phi.IdArgs<>(
                          phi.nodeClass(),
                          phi.id().name(),
                          phi.inputs().stream().map(Input::id).toList()))
              .collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public Iterable<? extends CFGEdit<?>> subEdits() {
      return nodeIds.stream().map(id -> new RemovePhi(bbId, id)).toList();
    }
  }

  record RemovePhi(@Override BBId bbId, NodeId<? extends Phi<?>> nodeId)
      implements RemoveInstrOrPhi<InsertPhi<?>> {
    public RemovePhi(BB bb, Phi<?> phi) {
      this(bb.id(), phi.id());
    }

    @Override
    public InsertPhi<?> apply(CFG cfg) {
      var phi = cfg.get(nodeId);
      cfg.get(bbId).remove(phi);
      return new InsertPhi<>(
          bbId,
          phi.nodeClass(),
          phi.id().name(),
          phi.inputs().stream().map(Input::id).collect(ImmutableSet.toImmutableSet()));
    }
  }

  record RemoveStmts(@Override BBId bbId, int fromIndex, int toIndex)
      implements RemoveInstrsOrPhis<InsertStmts> {
    public RemoveStmts(BB bb, int fromIndex, int toIndex) {
      this(bb.id(), fromIndex, toIndex);
    }

    public RemoveStmts {
      if (fromIndex > toIndex) {
        throw new IllegalArgumentException("fromIndex > toIndex");
      }
    }

    @Override
    public InsertStmts apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmtArgs =
          bb.stmts(fromIndex, toIndex).stream()
              .map(s -> new Stmt.IdArgs<>(s.id().name(), s.data()))
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
  }

  record RemoveStmts2(@Override BBId bbId, ImmutableSet<? extends NodeId<? extends Stmt>> stmts)
      implements RemoveInstrsOrPhis<InsertStmts2> {
    public RemoveStmts2(BB bb, Collection<? extends Stmt> stmts) {
      this(bb.id(), stmts.stream().map(Stmt::id).collect(ImmutableSet.toImmutableSet()));
    }

    @Override
    public InsertStmts2 apply(CFG cfg) {
      var stmts = this.stmts.stream().map(cfg::get).toList();
      var bb = cfg.get(bbId);
      var stmtArgs =
          stmts.stream()
              .collect(
                  Collectors.toMap(bb::indexOf, s -> new Stmt.IdArgs<>(s.id().name(), s.data())));
      bb.removeAllStmts(stmts);
      return new InsertStmts2(bbId, stmtArgs);
    }
  }

  record RemoveStmt(@Override BBId bbId, int index) implements RemoveInstrOrPhi<InsertStmt<?>> {
    public RemoveStmt(BB bb, int index) {
      this(bb.id(), index);
    }

    @Override
    public InsertStmt<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmt = bb.removeAt(index);
      return new InsertStmt<>(bbId, index, stmt.id().name(), MapToIdIn.of(stmt.data()));
    }
  }

  record RemoveJump(@Override BBId bbId) implements RemoveInstrOrPhi<InsertJump<?>> {
    public RemoveJump(BB bb) {
      this(bb.id());
    }

    @Override
    public InsertJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var jump = bb.removeJump();
      return new InsertJump<>(bbId, jump.id().name(), MapToIdIn.of(jump.data()));
    }
  }

  record AddPhiInput<N extends Node>(
      BBId bbId, NodeId<? extends Phi<N>> phiId, BBId incomingBBId, NodeId<? extends N> inputId)
      implements SubstWithInstrOrPhi<RemovePhiInput<N>> {
    public AddPhiInput(BB bb, Phi<N> phi, BB incomingBB, N input) {
      this(bb.id(), phi.id(), incomingBB.id(), Node.idOf(input));
    }

    @Override
    public RemovePhiInput<N> apply(CFG cfg) {
      var phi = cfg.get(phiId);
      cfg.get(bbId).addPhiInput(phi, cfg.get(incomingBBId), cfg.get(inputId));
      return new RemovePhiInput<>(bbId, phiId, incomingBBId);
    }
  }

  record RemovePhiInput<N extends Node>(
      BBId bbId, NodeId<? extends Phi<N>> phiId, BBId incomingBBId)
      implements SubstWithInstrOrPhi<AddPhiInput<N>> {
    public RemovePhiInput(BB bb, Phi<N> phi, BB incomingBB) {
      this(bb.id(), phi.id(), incomingBB.id());
    }

    @Override
    public AddPhiInput<N> apply(CFG cfg) {
      var phi = cfg.get(phiId);
      var input = cfg.get(bbId).removePhiInput(phi, cfg.get(incomingBBId));
      return new AddPhiInput<>(bbId, phiId, incomingBBId, Node.idOf(input));
    }
  }

  record SubstInstr<I extends Instr>(
      BBId bbId,
      NodeId<? extends I> oldId,
      String newName,
      MapToIdIn<? extends InstrData<I>> newArgs)
      implements SubstWithInstrOrPhi<SubstInstr<I>> {
    public SubstInstr(BB bb, NodeId<? extends I> oldId, String newName, InstrData<I> newArgs) {
      this(bb.id(), oldId, newName, MapToIdIn.of(newArgs));
    }

    @Override
    public SubstInstr<I> apply(CFG cfg) {
      var old = cfg.get(oldId);
      var oldName = oldId.name();
      // `subst` requires that `oldData` has the same erased type as `newData` (not asserted
      // directly, but should be enforced by `Instr#canReplaceDataWith`).
      @SuppressWarnings("unchecked")
      var oldArgs = MapToIdIn.of((InstrData<I>) old.data());
      cfg.get(bbId).subst(old, newName, newArgs.decode(cfg));
      return new SubstInstr<>(bbId, oldId, oldName, oldArgs);
    }
  }

  record ReplaceStmt<I extends Stmt>(
      BBId bbId, int index, String newName, MapToIdIn<? extends StmtData<? extends I>> newArgs)
      implements ReplaceWithInstrOrPhi<ReplaceStmt<?>> {
    public ReplaceStmt(BB bb, int index, String newName, StmtData<? extends I> newArgs) {
      this(bb.id(), index, newName, MapToIdIn.of(newArgs));
    }

    @SuppressWarnings("unchecked")
    public ReplaceStmt(BB bb, int index, I stmt) {
      this(bb, index, stmt.id().name(), (StmtData<? extends I>) stmt.data());
    }

    @Override
    public ReplaceStmt<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.stmt(index);
      var oldName = old.id().name();
      // `replaceNoSubst` *does not* require that `oldData` has the same erased type as `newData`;
      // you can replace an instruction with one of a different type. This is why the reverse action
      // has an erased `I`.
      var oldArgs = MapToIdIn.of(old.data());
      bb.replaceNoSubst(index, newName, newArgs.decode(cfg));
      @SuppressWarnings("unchecked") // Required, otherwise "cannot infer type arguments" error
      var oldArgsCasted = (MapToIdIn<? extends StmtData<Stmt>>) oldArgs;
      return new ReplaceStmt<>(bbId, index, oldName, oldArgsCasted);
    }
  }

  record ReplaceJump<I extends Jump>(
      BBId bbId, String newName, MapToIdIn<? extends JumpData<? extends I>> newArgs)
      implements ReplaceWithInstrOrPhi<ReplaceJump<?>> {
    public ReplaceJump(BB bb, String newName, JumpData<? extends I> newArgs) {
      this(bb.id(), newName, MapToIdIn.of(newArgs));
    }

    @SuppressWarnings("unchecked")
    public ReplaceJump(BB bb, I jump) {
      this(bb, jump.id().name(), (JumpData<? extends I>) jump.data());
    }

    @Override
    public ReplaceJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.jump();
      var oldName = old == null ? null : old.id().name();
      var oldArgs = old == null ? null : MapToIdIn.of(old.data());
      bb.replaceJumpNoSubst(newName, newArgs.decode(cfg)); // Throws if `old == null`
      assert oldName != null; // implies `oldArgs == null`
      @SuppressWarnings("unchecked") // Required, otherwise "cannot infer type arguments" error
      var oldArgsCasted = (MapToIdIn<? extends JumpData<Jump>>) oldArgs;
      return new ReplaceJump<>(bbId, oldName, oldArgsCasted);
    }
  }

  /** Doesn't do anything but is useful in logs. */
  record Divider(String label) implements Atomic<Divider> {
    @Override
    public Divider apply(CFG cfg) {
      cfg.recordDivider(label);
      return new Divider(CFGEdits.undoLabel(label));
    }
  }

  /** User-defined arbitrary group of edits. */
  record Section(String label, ImmutableList<? extends CFGEdit<?>> edits)
      implements CFGEdit<Section> {
    @Override
    public Section apply(CFG cfg) {
      cfg.beginSection(label);
      var undoEdits =
          edits.stream().map(e -> e.apply(cfg)).collect(ImmutableList.toImmutableList()).reverse();
      cfg.endSection();
      return new Section(CFGEdits.undoLabel(label), undoEdits);
    }
  }
  // endregion
}

/** Private utility class for {@link CFGEdit}. */
final class CFGEdits {
  /**
   * Prepends "Undo " to the label if it isn't already prepended, otherwise removes it (so {@code
   * undoLabel(undoLabel(x)) === x}.
   */
  static String undoLabel(String label) {
    var redo = Strings.stripPrefix(label, "Undo ");
    return redo != null ? redo : "Undo " + label;
  }

  private CFGEdits() {}
}