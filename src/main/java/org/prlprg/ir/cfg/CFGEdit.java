package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Phi.Input;
import org.prlprg.ir.cfg.Phi.InputId;
import org.prlprg.ir.cfg.Stmt.Args;
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
      Collection<? extends Phi.IdArgs<?>> phiArgs,
      List<? extends Stmt.Args<?>> stmtNamesAndArgs,
      @Nullable Jump.Args<?> jumpNameAndArgs)
      implements Insert<RemoveBB>, OnBB<RemoveBB> {
    public InsertBB(String name) {
      this(name, Collections.emptyList(), Collections.emptyList(), null);
    }

    @Override
    public RemoveBB apply(CFG cfg) {
      var bb = cfg.addBB();
      bb.addPhis(
          phiArgs.stream()
              .map(
                  a ->
                      new Phi.Args<>(
                          a.nodeClass(), a.name(), a.inputIds().stream().map(cfg::get).toList()))
              .toList());
      bb.insertAllAt(0, stmtNamesAndArgs);
      if (jumpNameAndArgs != null) {
        bb.addJump(jumpNameAndArgs.name(), jumpNameAndArgs.data());
      }

      return new RemoveBB(bb.id());
    }
  }

  record RemoveBB(@Override BBId bbId) implements Remove<InsertBB>, OnBB<InsertBB> {
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
              .toList();
      var stmts =
          bb.stmts().stream().map(stmt -> new Stmt.Args<>(stmt.id().name(), stmt.data())).toList();
      var jump =
          bb.jump() == null ? null : new Jump.Args<>(bb.jump().id().name(), bb.jump().data());
      return new InsertBB(name, phis, stmts, jump);
    }
  }

  record SplitBB(@Override BBId bbId, int index)
      implements IntrinsicUpdate<MergeBBs>, OnBB<MergeBBs> {
    @Override
    public MergeBBs apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var nextBB = bb.splitNewSuccessor(index);
      return new MergeBBs(bb.id(), nextBB.id());
    }
  }

  record MergeBBs(BBId prevBBId, BBId nextBBId) implements IntrinsicUpdate<SplitBB>, OnBB<SplitBB> {
    @Override
    public SplitBB apply(CFG cfg) {
      var prevBB = cfg.get(prevBBId);
      var index = prevBB.stmts().size();
      var nextBB = cfg.get(nextBBId);
      prevBB.mergeWithSuccessor(nextBB);
      return new SplitBB(prevBB.id(), index);
    }
  }

  record InsertPhis(@Override BBId bbId, Collection<? extends Phi.IdArgs<?>> phiArgs)
      implements InsertInstrsOrPhis<RemovePhis> {
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
      return new RemovePhis(bbId, phis.stream().map(Phi::id).toList());
    }

    @Override
    public Iterable<? extends InsertPhi<?>> subEdits() {
      return phiArgs.stream()
          .map(a -> new InsertPhi<Node>(bbId, a.nodeClass(), a.name(), a.inputIds()))
          .toList();
    }
  }

  record InsertPhi<N extends Node>(
      @Override BBId bbId,
      Class<? extends N> nodeClass,
      @Nullable String name,
      Collection<? extends InputId<? extends N>> inputs)
      implements InsertInstrOrPhi<RemovePhi> {
    @Override
    public RemovePhi apply(CFG cfg) {
      var phi = cfg.get(bbId).addPhi(nodeClass, name, inputs.stream().map(cfg::get).toList());
      return new RemovePhi(bbId, phi.id());
    }
  }

  record InsertStmts(@Override BBId bbId, int index, List<? extends Stmt.Args<?>> namesAndArgs)
      implements InsertInstrsOrPhis<RemoveStmts> {
    @Override
    public RemoveStmts apply(CFG cfg) {
      var stmts = cfg.get(bbId).insertAllAt(index, namesAndArgs);
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

  record InsertStmts2(@Override BBId bbId, Map<Integer, ? extends Args<?>> indicesNamesAndArgs)
      implements InsertInstrsOrPhis<RemoveStmts2> {
    @Override
    public RemoveStmts2 apply(CFG cfg) {
      var stmts = cfg.get(bbId).insertAllAt(indicesNamesAndArgs);
      return new RemoveStmts2(bbId, stmts);
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
      @Override BBId bbId, int index, String name, StmtData<? extends I> args)
      implements InsertInstrOrPhi<RemoveStmt> {
    @Override
    public RemoveStmt apply(CFG cfg) {
      return new RemoveStmt(bbId, index);
    }
  }

  record InsertJump<I extends Jump>(@Override BBId bbId, String name, JumpData<? extends I> args)
      implements InsertInstrOrPhi<RemoveJump> {
    @Override
    public RemoveJump apply(CFG cfg) {
      cfg.get(bbId).addJump(name, args);
      return new RemoveJump(bbId);
    }
  }

  record RemovePhis(@Override BBId bbId, Collection<? extends NodeId<? extends Phi<?>>> nodeIds)
      implements RemoveInstrsOrPhis<InsertPhis> {
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
              .toList());
    }

    @Override
    public Iterable<? extends CFGEdit<?>> subEdits() {
      return nodeIds.stream().map(id -> new RemovePhi(bbId, id)).toList();
    }
  }

  record RemovePhi(@Override BBId bbId, NodeId<? extends Phi<?>> nodeId)
      implements RemoveInstrOrPhi<InsertPhi<?>> {
    @Override
    public InsertPhi<?> apply(CFG cfg) {
      var phi = cfg.get(nodeId);
      cfg.get(bbId).remove(phi);
      return new InsertPhi<>(
          bbId, phi.nodeClass(), phi.id().name(), phi.inputs().stream().map(Input::id).toList());
    }
  }

  record RemoveStmts(@Override BBId bbId, int fromIndex, int toIndex)
      implements RemoveInstrsOrPhis<InsertStmts> {
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
              .map(s -> new Stmt.Args<>(s.id().name(), s.data()))
              .toList();
      bb.removeAllAt(fromIndex, toIndex);
      return new InsertStmts(bbId, fromIndex, stmtArgs);
    }

    @Override
    public Iterable<? extends CFGEdit<?>> subEdits() {
      return IntStream.range(fromIndex, toIndex)
          .mapToObj(ignored -> new RemoveStmt(bbId, fromIndex))
          .toList();
    }
  }

  record RemoveStmts2(@Override BBId bbId, Collection<? extends Stmt> stmts)
      implements RemoveInstrsOrPhis<InsertStmts2> {
    @Override
    public InsertStmts2 apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var stmtArgs =
          stmts.stream()
              .collect(
                  Collectors.toMap(bb::indexOf, s -> new Stmt.Args<>(s.id().name(), s.data())));
      bb.removeAllStmts(stmts);
      return new InsertStmts2(bbId, stmtArgs);
    }
  }

  record RemoveStmt(@Override BBId bbId, int index) implements RemoveInstrOrPhi<InsertStmt<?>> {
    @Override
    public InsertStmt<?> apply(CFG cfg) {
      var stmt = cfg.get(bbId).removeAt(index);
      return new InsertStmt<>(bbId, index, stmt.id().name(), stmt.data());
    }
  }

  record RemoveJump(@Override BBId bbId) implements RemoveInstrOrPhi<InsertJump<?>> {
    @Override
    public InsertJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var jump = bb.removeJump();
      return new InsertJump<>(bbId, jump.id().name(), jump.data());
    }
  }

  record AddPhiInput<N extends Node>(
      BBId bbId, NodeId<? extends Phi<N>> phiId, BBId incomingBBId, NodeId<? extends N> inputId)
      implements SubstWithInstrOrPhi<RemovePhiInput<N>> {
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

    @Override
    public AddPhiInput<N> apply(CFG cfg) {
      var phi = cfg.get(phiId);
      var input = cfg.get(bbId).removePhiInput(phi, cfg.get(incomingBBId));
      return new AddPhiInput<>(bbId, phiId, incomingBBId, Node.idOf(input));
    }
  }

  record SubstInstr<I extends Instr>(
      BBId bbId, NodeId<? extends I> oldId, @Nullable String newName, InstrData<I> newArgs)
      implements SubstWithInstrOrPhi<SubstInstr<I>> {
    @Override
    public SubstInstr<I> apply(CFG cfg) {
      var old = cfg.get(oldId);
      var oldName = oldId.name();
      // `subst` requires that `oldData` has the same erased type as `newData` (not asserted
      // directly, but should be enforced by `Instr#canReplaceDataWith`).
      @SuppressWarnings("unchecked")
      var oldArgs = (InstrData<I>) old.data();
      cfg.get(bbId).subst(old, newName, newArgs);
      return new SubstInstr<>(bbId, oldId, oldName, oldArgs);
    }
  }

  record ReplaceStmt<I extends Stmt>(
      BBId bbId, int index, @Nullable String newName, StmtData<I> newArgs)
      implements ReplaceWithInstrOrPhi<ReplaceStmt<?>> {
    @Override
    public ReplaceStmt<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.stmt(index);
      var oldName = old.id().name();
      // `replaceNoSubst` *does not* require that `oldData` has the same erased type as `newData`;
      // you can replace an instruction with one of a different type. This is why the reverse action
      // has an erased `I`.
      var oldArgs = old.data();
      bb.replaceNoSubst(index, newName, newArgs);
      return new ReplaceStmt<>(bbId, index, oldName, oldArgs);
    }
  }

  record ReplaceJump<I extends Jump>(BBId bbId, @Nullable String newName, JumpData<I> newArgs)
      implements ReplaceWithInstrOrPhi<ReplaceJump<?>> {
    @Override
    public ReplaceJump<?> apply(CFG cfg) {
      var bb = cfg.get(bbId);
      var old = bb.jump();
      var oldName = old == null ? null : old.id().name();
      var oldArgs = old == null ? null : old.data();
      // Throws if `old == null`
      bb.replaceJumpNoSubst(newName, newArgs);
      assert oldName != null;
      return new ReplaceJump<>(bbId, oldName, oldArgs);
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
