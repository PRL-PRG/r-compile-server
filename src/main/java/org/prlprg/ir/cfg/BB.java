package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.SequencedCollection;
import java.util.SequencedSet;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFGEdit.AddPhiInput;
import org.prlprg.ir.cfg.Stmt.Args;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
public final class BB implements BBQuery, BBIntrinsicMutate, BBCompoundMutate, BBInline {
  private final CFG parent;
  private final BBId id;
  private final List<BB> predecessors = new ArrayList<>(4);
  // These are ordered to ensure deterministic traversal
  private final SequencedSet<Phi<?>> phis = new LinkedHashSet<>();
  private final List<Stmt> stmts = new ArrayList<>();
  private @Nullable Jump jump = null;

  BB(CFG parent, String name) {
    this.parent = parent;
    this.id = new BBIdImpl(parent, name);
  }

  // region access
  // region parent and self
  @Override
  public CFG cfg() {
    return parent;
  }

  @Override
  public BBId id() {
    return id;
  }

  // endregion

  // region predecessors and successors (access)
  @Override
  public @UnmodifiableView Collection<BB> predecessors() {
    return Collections.unmodifiableCollection(predecessors);
  }

  @Override
  public boolean hasSinglePredecessor() {
    return predecessors.size() == 1;
  }

  @Override
  public @Nullable BB onlyPredecessor() {
    return hasSinglePredecessor() ? predecessors.getFirst() : null;
  }

  @Override
  public @UnmodifiableView SequencedCollection<BB> successors() {
    return jump == null ? List.of() : Collections.unmodifiableSequencedCollection(jump.targets());
  }

  // endregion

  // region count, iterate, and access nodes
  @Override
  public int numChildren() {
    return phis.size() + numInstrs();
  }

  @Override
  public int numInstrs() {
    return stmts.size() + (jump == null ? 0 : 1);
  }

  @Override
  public @UnmodifiableView Iterator<InstrOrPhi> iterator() {
    return new Iterator<>() {
      private int i = 0;
      private final Iterator<Phi<?>> phis = BB.this.phis.iterator();
      private final Iterator<Stmt> stmts = BB.this.stmts.iterator();
      private @Nullable InstrOrPhi next;

      @Override
      public boolean hasNext() {
        return i < 3;
      }

      @Override
      public InstrOrPhi next() {
        if (i == 0) {
          if (phis.hasNext()) {
            next = phis.next();
            return next;
          }
          i++;
        }
        if (i == 1) {
          if (stmts.hasNext()) {
            next = stmts.next();
            return next;
          }
          i++;
        }
        if (i == 2) {
          if (jump != null) {
            i++;
            next = jump;
            return next;
          }
        }
        throw new NoSuchElementException();
      }

      @Override
      public void remove() {
        if (next == null) {
          throw new IllegalStateException("next() not called");
        }
        switch (i) {
          case 0 -> phis.remove();
          case 1 -> stmts.remove();
          case 2 -> setJump(null);
          default -> throw new IllegalStateException("remove() called beyond end of iteration");
        }
        cfg().untrack(next);
      }
    };
  }

  @Override
  public boolean contains(InstrOrPhi instr) {
    return switch (instr) {
      case Phi<?> phi -> phis.contains(phi);
      case Stmt stmt -> stmts.contains(stmt);
      case Jump jmp -> jump == jmp;
    };
  }

  @Override
  public @UnmodifiableView Collection<Phi<?>> phis() {
    return Collections.unmodifiableCollection(phis);
  }

  @Override
  public @UnmodifiableView List<Stmt> stmts() {
    return Collections.unmodifiableList(stmts);
  }

  @Override
  public Stmt stmt(int index) {
    return stmts.get(index);
  }

  @Override
  public @UnmodifiableView List<Stmt> stmts(int fromIndex, int toIndex) {
    if (fromIndex > toIndex) {
      throw new IllegalArgumentException("fromIndex > toIndex: " + fromIndex + " > " + toIndex);
    }
    if (fromIndex < 0 || toIndex > stmts.size()) {
      throw new IndexOutOfBoundsException("Sublist out of range: " + fromIndex + " to " + toIndex);
    }
    return Collections.unmodifiableList(stmts.subList(fromIndex, toIndex));
  }

  @Override
  public int indexOf(Stmt stmt) {
    int index = stmts.indexOf(stmt);
    if (index == -1) {
      throw new NoSuchElementException("Not in " + id() + ": " + stmt);
    }
    return index;
  }

  @Override
  public @Nullable Jump jump() {
    return jump;
  }

  // endregion
  // endregion

  // region mutate
  // region split and merge
  @Override
  public BB splitNewPredecessor(int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var newBB = cfg().doAddBB("←" + id.name());

    for (var pred : predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(this)
          : "BB has predecessor whose jump doesn't point to it";
      pred.jump.replace(this, newBB);
    }

    newBB.phis.addAll(phis);
    newBB.stmts.addAll(stmts.subList(0, index));
    newBB.addJump("", new JumpData.Goto(this));
    phis.clear();
    stmts.subList(0, index).clear();

    cfg().record(new CFGEdit.SplitBB(id, index));
    return newBB;
  }

  @Override
  public BB splitNewSuccessor(int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var newBB = cfg().doAddBB(id.name() + "→");

    for (var succ : successors()) {
      assert succ.predecessors.contains(this)
          : "BB has successor whose predecessors set doesn't contain it";
      succ.predecessors.set(succ.predecessors.indexOf(this), newBB);
    }

    newBB.stmts.addAll(stmts.subList(index, stmts.size()));
    newBB.jump = jump;
    stmts.subList(index, stmts.size()).clear();
    jump = null;
    addJump("", new JumpData.Goto(newBB));

    for (var succ : newBB.successors()) {
      for (var phi : succ.phis) {
        // We don't want to record this because it's part of the SplitBB edit.
        phi.unsafeReplaceIncomingBB(
            this,
            newBB,
            node -> {
              var origin = node.origin();
              return origin != null && newBB.contains(origin);
            });
      }
    }

    cfg().record(new CFGEdit.SplitBB(id, index));
    return newBB;
  }

  @Override
  public void mergeWithSuccessor(BB succ) {
    if (jump == null
        || !(jump.data() instanceof JumpData.Goto gotoJump)
        || gotoJump.next() != succ) {
      throw new IllegalArgumentException("This block's jump isn't a GOTO to the successor");
    }
    if (succ.predecessors.size() != 1) {
      throw new IllegalArgumentException("The successor doesn't have exactly one predecessor");
    }
    if (!succ.phis.isEmpty()) {
      throw new IllegalArgumentException(
          "The successor still has phis.\nSince it has only one predecessor, those can be replaced with the single input in arguments and removed, but this function expects that to have already happened");
    }

    for (var pred : succ.predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(succ)
          : "Successor has predecessor whose jump doesn't point to it";
      pred.jump.replace(succ, this);
    }

    stmts.addAll(succ.stmts);
    jump = succ.jump;
    succ.stmts.clear();
    succ.jump = null;

    cfg().doRemove(succ);

    cfg().record(new CFGEdit.MergeBBs(id, succ.id));
  }

  // endregion

  // region add nodes
  @Override
  public <N extends Node> Phi<N> addPhi(
      Class<? extends N> nodeClass,
      @Nullable String name,
      Collection<? extends Phi.Input<? extends N>> inputs) {
    var phi = Phi.forClass(nodeClass, cfg(), name, inputs);
    phis.add(phi);
    cfg().track(phi);

    cfg()
        .record(
            new CFGEdit.InsertPhi<>(
                id, nodeClass, name, inputs.stream().map(Phi.Input::id).toList()));
    return phi;
  }

  @Override
  public ImmutableList<? extends Phi<?>> addPhis(Collection<? extends Phi.Args<?>> phiArgs) {
    var phis =
        phiArgs.stream()
            .map(args -> Phi.<Node>forClass(args.nodeClass(), cfg(), args.name(), args.inputs()))
            .collect(ImmutableList.toImmutableList());
    this.phis.addAll(phis);
    cfg().trackAll(phis);

    cfg().record(new CFGEdit.InsertPhis(id, phiArgs.stream().map(Phi.Args::id).toList()));
    return phis;
  }

  @Override
  public <I extends Stmt> I insertAt(int index, String name, StmtData<I> args) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmt = args.make(cfg(), name);
    stmts.add(index, stmt);
    cfg().track(stmt);

    cfg().record(new CFGEdit.InsertStmt<>(id, index, name, args));
    return stmt;
  }

  @Override
  public ImmutableList<? extends Stmt> insertAllAt(
      int index, List<? extends Stmt.Args<?>> namesAndArgs) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmts =
        namesAndArgs.stream()
            .map(nameAndArg -> nameAndArg.data().make(cfg(), nameAndArg.name()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(index, stmts);
    cfg().trackAll(stmts);

    cfg().record(new CFGEdit.InsertStmts(id, index, namesAndArgs));
    return stmts;
  }

  @Override
  public ImmutableList<? extends Stmt> insertAllAt(
      Map<Integer, ? extends Args<?>> indicesNamesAndArgs) {
    for (var index : indicesNamesAndArgs.keySet()) {
      if (index < 0 || index > stmts.size()) {
        throw new IndexOutOfBoundsException("Index out of range: " + index);
      }
    }

    // Add statements in O(origStmts.size + indicesNamesAndArgs.size) time vs.
    // O(origStmts.size * indicesNamesAndArgs.size) time if we inserted one by one.
    // Also remember that later indices must not be offset by earlier ones.
    var origStmts = new ArrayList<>(stmts);
    var newStmtsBuilder = ImmutableList.<Stmt>builderWithExpectedSize(indicesNamesAndArgs.size());
    stmts.clear();
    for (var i = 0; i < origStmts.size(); i++) {
      if (indicesNamesAndArgs.containsKey(i)) {
        var nameAndArg = indicesNamesAndArgs.get(i);
        var stmt = nameAndArg.data().make(cfg(), nameAndArg.name());
        stmts.add(stmt);
        newStmtsBuilder.add(stmt);
      }

      stmts.add(origStmts.get(i));
    }

    var newStmts = newStmtsBuilder.build();
    cfg().trackAll(newStmts);

    cfg().record(new CFGEdit.InsertStmts2(id, indicesNamesAndArgs));
    return newStmts;
  }

  @Override
  public <I extends Jump> I addJump(String name, JumpData<I> args) {
    if (this.jump != null) {
      throw new IllegalStateException(id() + " already has a jump, call replaceJump instead:\n");
    }
    var jump = args.make(cfg(), name);
    setJump(jump);
    cfg().track(jump);

    cfg().record(new CFGEdit.InsertJump<>(id, name, args));
    return jump;
  }

  // endregion

  // region update nodes (replace and subst)
  @Override
  public <I extends Stmt> I replaceNoSubst(
      int index, @Nullable String newName, StmtData<I> newArgs) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var oldStmt = stmts.get(index);
    if (newName == null) {
      newName = oldStmt.id().name();
    }

    var newStmt = newArgs.make(cfg(), newName);
    stmts.set(index, newStmt);

    cfg().untrack(oldStmt);
    cfg().track(newStmt);

    cfg().record(new CFGEdit.ReplaceStmt<>(id, index, newName, newArgs));
    return newStmt;
  }

  @Override
  public <I extends Jump> I replaceJumpNoSubst(@Nullable String newName, JumpData<I> newArgs) {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }

    var oldJump = jump;
    if (newName == null) {
      newName = oldJump.id().name();
    }

    var newJump = newArgs.make(cfg(), newName);
    setJump(newJump);

    cfg().untrack(oldJump);
    cfg().track(newJump);

    cfg().record(new CFGEdit.ReplaceJump<>(id, newName, newArgs));
    return newJump;
  }

  @Override
  public <N extends Node> void addPhiInput(Phi<N> phi, BB incomingBb, N node) {
    if (!phis.contains(phi)) {
      throw new NoSuchElementException("Phi not in " + id() + ": " + phi);
    }
    phi.unsafeAddInput(incomingBb, node);

    cfg().record(new AddPhiInput<>(id, phi.id(), incomingBb.id, Node.idOf(node)));
  }

  @Override
  public <N extends Node> N removePhiInput(Phi<N> phi, BB incomingBb) {
    if (!phis.contains(phi)) {
      throw new NoSuchElementException("Phi not in " + id() + ": " + phi);
    }
    var input = phi.unsafeRemoveInput(incomingBb);

    cfg().record(new CFGEdit.RemovePhiInput<>(id, phi.id(), incomingBb.id));
    return input;
  }

  @Override
  public <I extends Instr> void subst(I instr, @Nullable String newName, InstrData<I> newArgs) {
    if (instr.cfg() != cfg()) {
      throw new IllegalArgumentException("Replace instr not in CFG: " + instr);
    }
    switch (instr) {
      case Stmt stmt when !stmts.contains(stmt) ->
          throw new IllegalArgumentException("Replace instr not in " + id() + ": " + instr);
      case Jump jump1 when jump != jump1 ->
          throw new IllegalArgumentException("Replace instr not in " + id() + ": " + instr);
      default -> {}
    }

    var oldId = Node.idOf(instr);
    boolean nameChanged;
    if (newName == null) {
      newName = oldId.name();
      nameChanged = false;
    } else {
      nameChanged = !newName.equals(oldId.name());
    }

    if (!instr.canReplaceDataWith(newArgs)) {
      throw new IllegalArgumentException(
          "Incompatible data for replacement: " + instr + " -> " + newArgs);
    }

    var wasEmpty = false;
    if (instr instanceof Jump j) {
      for (var succ : j.targets()) {
        succ.predecessors.remove(this);
      }
      wasEmpty = j.targets().isEmpty();
    }
    if (nameChanged) {
      cfg().untrack(instr);
    }

    instr.unsafeReplaceData(newName, newArgs);

    if (nameChanged) {
      cfg().track(instr);
    }
    if (instr instanceof Jump j) {
      for (var succ : j.targets()) {
        succ.predecessors.add(this);
      }

      var isEmpty = j.targets().isEmpty();
      if (!wasEmpty && isEmpty) {
        cfg().markExit(this);
      } else if (wasEmpty && !isEmpty) {
        cfg().unmarkExit(this);
      }
    }

    cfg().record(new CFGEdit.SubstInstr<>(id, oldId, newName, newArgs));
  }

  // endregion

  // region remove nodes
  @Override
  public void remove(Phi<?> phi) {
    if (!phis.remove(phi)) {
      throw new IllegalArgumentException("Not in " + id() + ": " + phi);
    }
    cfg().untrack(phi);

    cfg().record(new CFGEdit.RemovePhi(id, phi.id()));
  }

  @Override
  public void removeAllPhis(Collection<? extends Phi<?>> phis) {
    phis = new HashSet<>(phis);
    var oldSize = this.phis.size();
    this.phis.removeAll(phis);
    if (this.phis.size() != oldSize - phis.size()) {
      throw new IllegalArgumentException("Not all in " + id() + ": " + phis);
    }
    cfg().untrackAll(this.phis);

    cfg().record(new CFGEdit.RemovePhis(id, phis.stream().map(Phi::id).toList()));
  }

  @Override
  public Stmt removeAt(int index) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmt = stmts.remove(index);
    cfg().untrack(stmt);

    cfg().record(new CFGEdit.RemoveStmt(id, index));
    return stmt;
  }

  @Override
  public void removeAllAt(int fromIndex, int toIndex) {
    if (fromIndex > toIndex) {
      throw new IllegalArgumentException("fromIndex > toIndex: " + fromIndex + " > " + toIndex);
    }
    if (fromIndex < 0 || toIndex >= stmts.size()) {
      throw new IndexOutOfBoundsException("Sublist out of range: " + fromIndex + " to " + toIndex);
    }
    var stmts = this.stmts.subList(fromIndex, toIndex);
    cfg().untrackAll(stmts);
    stmts.clear();

    cfg().record(new CFGEdit.RemoveStmts(id, fromIndex, toIndex));
  }

  @Override
  public void removeAllStmts(Collection<? extends Stmt> stmts) {
    var oldSize = this.stmts.size();
    this.stmts.removeAll(stmts);
    if (this.stmts.size() != oldSize - stmts.size()) {
      throw new IllegalArgumentException("Not all in " + id() + ": " + stmts);
    }

    cfg().untrackAll(stmts);

    cfg().record(new CFGEdit.RemoveStmts2(id, stmts));
  }

  @Override
  public Jump removeJump() {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }
    var jump = this.jump;
    setJump(null);
    cfg().untrack(jump);

    cfg().record(new CFGEdit.RemoveJump(id));
    return jump;
  }

  // endregion
  // endregion

  // region shared private methods
  /** Set jump and update successors. Doesn't update CFG tracking. */
  private void setJump(@Nullable Jump jump) {
    if (jump == this.jump) {
      return;
    }
    if (this.jump != null) {
      for (var succ : this.jump.targets()) {
        succ.predecessors.remove(this);
      }
    }
    this.jump = jump;
    if (jump != null) {
      for (var succ : jump.targets()) {
        succ.predecessors.add(this);
      }
    }

    var wasExit = this.jump == null || this.jump.targets().isEmpty();
    var isExit = jump == null || jump.targets().isEmpty();
    if (!wasExit && isExit) {
      cfg().markExit(this);
    } else if (wasExit && !isExit) {
      cfg().unmarkExit(this);
    }
  }
  // endregion
}
