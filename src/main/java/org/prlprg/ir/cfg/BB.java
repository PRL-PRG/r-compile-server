package org.prlprg.ir.cfg;

import static org.prlprg.AppConfig.EAGERLY_VERIFY_PHI_INPUTS;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Iterables;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.SequencedCollection;
import java.util.SequencedSet;
import java.util.function.Function;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.SmallBinarySet;
import org.prlprg.util.Strings;
import org.prlprg.util.UnreachableError;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
@SuppressFBWarnings({"EI_EXPOSE_REP", "EI_EXPOSE_REP2"})
public final class BB implements BBQuery, BBIntrinsicMutate, BBCompoundMutate, BBInline {
  private final CFG parent;
  private final BBId id;
  private final SequencedSet<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.id.toString()));
  // Preserve insertion order for sometimes clearer debug representation
  private final SequencedSet<Phi<?>> phis = new LinkedHashSet<>();
  private final List<Stmt> stmts = new ArrayList<>();
  private @Nullable Jump jump = null;

  BB(CFG parent, BBId id) {
    this.parent = parent;
    this.id = id;
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

  // endregion parent and self

  // region predecessors and successors (access)
  @Override
  public @UnmodifiableView SequencedCollection<BB> predecessors() {
    return Collections.unmodifiableSequencedCollection(predecessors);
  }

  @Override
  public @UnmodifiableView SequencedCollection<BB> successors() {
    return jump == null ? List.of() : Collections.unmodifiableSequencedCollection(jump.targets());
  }

  // endregion predecessors and successors (access)

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
  public Iterator<InstrOrPhi> iterator() {
    return new Iterator<>() {
      private int i = 0;
      private final Iterator<Phi<?>> phis = BB.this.phis.iterator();
      private final ListIterator<Stmt> stmts = BB.this.stmts.listIterator();
      private @Nullable InstrOrPhi next;

      @Override
      public boolean hasNext() {
        var end = 3;
        if (jump == null) {
          end--;
          if (!stmts.hasNext()) {
            end--;
            if (!phis.hasNext()) {
              end--;
            }
          }
        }
        return i < end;
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
          throw new IllegalStateException("`next()` not called");
        }
        switch (i) {
          case 0 -> phis.remove();
          case 1 -> stmts.remove();
          case 2 -> setJump(null);
          default -> throw new IllegalStateException("`remove()` called beyond end of iteration");
        }
        cfg().untrack(next);
        switch (i) {
          case 0 ->
              cfg()
                  .record(
                      new CFGEdit.RemovePhi(BB.this, (Phi<?>) next),
                      new CFGEdit.InsertPhi<>(BB.this, (Phi<?>) next));
          case 1 -> {
            var index = stmts.nextIndex();
            cfg()
                .record(
                    new CFGEdit.RemoveStmt(BB.this, index),
                    CFGEdit.InsertStmt.of(BB.this, index, (Stmt) next));
          }
          case 2 ->
              cfg()
                  .record(
                      new CFGEdit.RemoveJump(BB.this), CFGEdit.InsertJump.of(BB.this, (Jump) next));
          default -> throw new UnreachableError();
        }
        next = null;
      }
    };
  }

  @Override
  public Iterable<Instr> instrs() {
    return () ->
        new Iterator<>() {
          private int i = 0;
          private final ListIterator<Stmt> stmts = BB.this.stmts.listIterator();
          private @Nullable Instr next;

          @Override
          public boolean hasNext() {
            var end = 2;
            if (jump == null) {
              end--;
              if (!stmts.hasNext()) {
                end--;
              }
            }
            return i < end;
          }

          @Override
          public Instr next() {
            if (i == 0) {
              if (stmts.hasNext()) {
                next = stmts.next();
                return next;
              }
              i++;
            }
            if (i == 1) {
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
              throw new IllegalStateException("`next()` not called");
            }
            switch (i) {
              case 0 -> stmts.remove();
              case 1 -> setJump(null);
              default ->
                  throw new IllegalStateException("`remove()` called beyond end of iteration");
            }
            cfg().untrack(next);
            switch (i) {
              case 0 -> {
                var index = stmts.nextIndex();
                cfg()
                    .record(
                        new CFGEdit.RemoveStmt(BB.this, index),
                        CFGEdit.InsertStmt.of(BB.this, index, (Stmt) next));
              }
              case 1 ->
                  cfg()
                      .record(
                          new CFGEdit.RemoveJump(BB.this),
                          CFGEdit.InsertJump.of(BB.this, (Jump) next));
              default -> throw new UnreachableError();
            }
            next = null;
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
  public Iterator<Phi<?>> iterPhis() {
    return new Iterator<>() {
      private final Iterator<Phi<?>> phis = BB.this.phis.iterator();
      private @Nullable Phi<?> next;

      @Override
      public boolean hasNext() {
        return phis.hasNext();
      }

      @Override
      public Phi<?> next() {
        next = phis.next();
        return next;
      }

      @Override
      public void remove() {
        if (next == null) {
          throw new IllegalStateException("`next()` not called");
        }
        phis.remove();
        cfg().untrack(next);
        cfg().record(new CFGEdit.RemovePhi(BB.this, next), new CFGEdit.InsertPhi<>(BB.this, next));
        next = null;
      }
    };
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

  // endregion count, iterate, and access nodes
  // endregion access

  // region mutate
  // region split and merge
  @Override
  public BB splitNewPredecessor(int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var newBB = cfg().doAddBB(BBIdImpl.cast(id).name());

    for (var pred : predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(this)
          : "BB has predecessor whose jump doesn't point to it";
      ((JumpImpl<?>) pred.jump).unsafeReplaceInTargets(this, newBB);
    }

    newBB.phis.addAll(phis);
    newBB.stmts.addAll(stmts.subList(0, index));
    newBB.addJump("", new JumpData.Goto(this));
    phis.clear();
    stmts.subList(0, index).clear();

    cfg().record(new CFGEdit.SplitBB(this, index), new CFGEdit.MergeBBs(newBB, this));
    return newBB;
  }

  @Override
  public BB splitNewSuccessor(int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var newBB = cfg().doAddBB(BBIdImpl.cast(id).name());

    for (var succ : successors()) {
      assert succ.predecessors.contains(this)
          : "BB has successor whose predecessors set doesn't contain it";
      succ.predecessors.remove(this);
      succ.predecessors.add(newBB);
      for (var phi : succ.phis) {
        PhiImpl.cast(phi).unsafeReplaceIncomingBB(this, newBB);
      }
    }

    newBB.stmts.addAll(stmts.subList(index, stmts.size()));
    newBB.jump = jump;
    if (newBB.jump != null) {
      ((JumpImpl<?>) newBB.jump).unsafeSetBB(newBB);
    }
    stmts.subList(index, stmts.size()).clear();
    jump = null;
    addJump("", new JumpData.Goto(newBB));

    cfg().record(new CFGEdit.SplitBB(this, index), new CFGEdit.MergeBBs(this, newBB));
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
      ((JumpImpl<?>) pred.jump).unsafeReplaceInTargets(succ, this);
    }

    for (var succ2 : succ.successors()) {
      assert succ2.predecessors.contains(succ)
          : "BB has successor whose predecessors set doesn't contain it";
      succ2.predecessors.remove(succ);
      succ2.predecessors.add(this);
      for (var phi : succ2.phis) {
        PhiImpl.cast(phi).unsafeReplaceIncomingBB(succ, this);
      }
    }

    var resplitIndex = stmts.size();

    stmts.addAll(succ.stmts);
    jump = succ.jump;
    if (jump != null) {
      ((JumpImpl<?>) jump).unsafeSetBB(this);
    }
    succ.stmts.clear();
    succ.jump = null;

    cfg().doRemove(succ);

    cfg().record(new CFGEdit.MergeBBs(this, succ), new CFGEdit.SplitBB(this, resplitIndex));
  }

  // endregion split and merge

  // region add nodes
  @Override
  public <N extends Node> Phi<N> addPhi(Class<? extends N> nodeClass) {
    return addPhiWithId(cfg().<Phi<? extends N>>uniqueInstrOrPhiId(), nodeClass);
  }

  @Override
  public <N extends Node> Phi<N> addPhi(
      Class<? extends N> nodeClass, Collection<? extends Phi.Input<? extends N>> inputs) {
    return addPhiWithId(cfg().<Phi<? extends N>>uniqueInstrOrPhiId(), nodeClass, inputs);
  }

  <N extends Node> Phi<N> addPhiWithId(
      NodeId<? extends Phi<? extends N>> id, Class<? extends N> nodeClass) {
    var phi =
        PhiImpl.forClass(
            nodeClass, cfg(), id, predecessors.stream().map(Phi.Input::unset).toList());
    phis.add(phi);
    cfg().track(phi);

    cfg().record(new CFGEdit.InsertPhi<>(this, phi), new CFGEdit.RemovePhi(this, phi));
    return phi;
  }

  <N extends Node> Phi<N> addPhiWithId(
      NodeId<? extends Phi<? extends N>> id,
      Class<? extends N> nodeClass,
      Collection<? extends Phi.Input<? extends N>> inputs) {
    var phi = PhiImpl.forClass(nodeClass, cfg(), id, inputs);
    verifyPhiInputBBs(phi);
    phis.add(phi);
    cfg().track(phi);

    cfg().record(new CFGEdit.InsertPhi<>(this, phi), new CFGEdit.RemovePhi(this, phi));

    // Has to be after insertion, and we want to try and not leave the state inconsistent on
    // exception (this specific check is allowed to fail in a consistent state).
    if (EAGERLY_VERIFY_PHI_INPUTS) {
      PhiImpl.cast(phi).eagerlyVerifyInputs();
    }

    return phi;
  }

  @Override
  public ImmutableList<? extends Phi<?>> addPhis(
      Collection<? extends Class<? extends Node>> nodeClasses) {
    var inputs = predecessors.stream().map(Phi.Input::unset).toList();
    var phis =
        nodeClasses.stream()
            .map(
                nodeClass ->
                    PhiImpl.forClass(nodeClass, cfg(), cfg().<Phi<?>>uniqueInstrOrPhiId(), inputs))
            .collect(ImmutableList.toImmutableList());
    this.phis.addAll(phis);
    cfg().trackAll(phis);

    cfg().record(new CFGEdit.InsertPhis(this, phis), new CFGEdit.RemovePhis(this, phis));
    return phis;
  }

  @Override
  public ImmutableList<? extends Phi<?>> addPhis1(Collection<Phi.Args> phiArgs) {
    return addPhisWithIds(
        phiArgs.stream()
            .map(a -> new PhiImpl.Args(cfg().<Phi<?>>uniqueInstrOrPhiId(), a))
            .toList());
  }

  ImmutableList<? extends Phi<?>> addPhisWithIds(Collection<? extends PhiImpl.Args> phiArgs) {
    var phis =
        phiArgs.stream()
            // If the compiler gives you an error here, and IntelliJ says it's fine, you must
            // either rebuild, or `mvn clean` and rebuild, and it will magically go away.
            .map(a -> PhiImpl.forClass(a.nodeClass(), cfg(), a.id(), a.inputs()))
            .collect(ImmutableList.toImmutableList());
    for (var phi : phis) {
      verifyPhiInputBBs(phi);
    }
    this.phis.addAll(phis);
    cfg().trackAll(phis);

    cfg().record(new CFGEdit.InsertPhis(this, phis), new CFGEdit.RemovePhis(this, phis));

    // Has to be after insertion, and we want to try and not leave the state inconsistent on
    // exception (this specific check is allowed to fail in a consistent state).
    if (EAGERLY_VERIFY_PHI_INPUTS) {
      for (var phi : phis) {
        PhiImpl.cast(phi).eagerlyVerifyInputs();
      }
    }

    return phis;
  }

  private void verifyPhiInputBBs(Phi<?> phi) {
    if (!Iterables.elementsEqual(predecessors, phi.incomingBBs())) {
      throw new IllegalArgumentException(
          "Phi's incoming BBs must equal its origin BB's predecessors:"
              + "\nOrigin BB's predecessors: ["
              + predecessors.stream().map(BB::id).collect(Strings.joining(", "))
              + "]\nPhi incoming BBs: ["
              + phi.incomingBBs().stream().map(BB::id).collect(Strings.joining(", "))
              + "]\n* Phi input nodes: ["
              + Strings.join(", ", phi.inputNodes())
              + "]");
    }
  }

  @Override
  public <I extends Stmt> I insertAt(int index, String name, StmtData<I> args) {
    return insertAtWithId(index, cfg().<I>uniqueInstrOrPhiId(name), args);
  }

  <I extends Stmt> I insertAtWithId(int index, NodeId<? extends I> id, StmtData<? extends I> args) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmt = args.make(cfg(), id);
    stmts.add(index, stmt);
    cfg().track(stmt);

    cfg().record(CFGEdit.InsertStmt.of(this, index, stmt), new CFGEdit.RemoveStmt(this, index));
    return stmt;
  }

  @Override
  public ImmutableList<? extends Stmt> insertAllAt(int index, List<Stmt.Args> namesAndArgs) {
    return insertAllAtWithIds(
        index,
        namesAndArgs.stream()
            .map(a -> new StmtImpl.Args(cfg().<Stmt>uniqueInstrOrPhiId(a.name()), a.data()))
            .toList());
  }

  ImmutableList<? extends Stmt> insertAllAtWithIds(int index, List<StmtImpl.Args> idsAndArgs) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmts =
        idsAndArgs.stream()
            .map(idAndArgs -> idAndArgs.data().make(cfg(), idAndArgs.id()))
            .collect(ImmutableList.toImmutableList());
    this.stmts.addAll(index, stmts);
    cfg().trackAll(stmts);

    cfg()
        .record(
            new CFGEdit.InsertStmts(this, index, stmts),
            new CFGEdit.RemoveStmts(this, index, stmts.size()));
    return stmts;
  }

  @Override
  public ImmutableList<? extends Stmt> insertAllAt(Map<Integer, Stmt.Args> indicesNamesAndArgs) {
    return insertAllAtWithIds(
        indicesNamesAndArgs.entrySet().stream()
            .collect(
                Collectors.toMap(
                    Map.Entry::getKey,
                    e ->
                        new StmtImpl.Args(
                            cfg().<Stmt>uniqueInstrOrPhiId(e.getValue().name()),
                            e.getValue().data()))));
  }

  ImmutableList<? extends Stmt> insertAllAtWithIds(Map<Integer, StmtImpl.Args> indicesIdsAndArgs) {
    for (var index : indicesIdsAndArgs.keySet()) {
      if (index < 0 || index > stmts.size()) {
        throw new IndexOutOfBoundsException("Index out of range: " + index);
      }
    }

    // Add statements in O(origStmts.size + indicesNamesAndArgs.size) time vs.
    // O(origStmts.size * indicesNamesAndArgs.size) time if we inserted one by one.
    // Also remember that later indices must not be offset by earlier ones.
    var origStmts = new ArrayList<>(stmts);
    var newStmtsBuilder = ImmutableList.<Stmt>builderWithExpectedSize(indicesIdsAndArgs.size());
    var indicesStmts =
        ImmutableMap.<Integer, Stmt>builderWithExpectedSize(indicesIdsAndArgs.size());
    stmts.clear();
    for (var i = 0; i < origStmts.size(); i++) {
      if (indicesIdsAndArgs.containsKey(i)) {
        var idAndArgs = indicesIdsAndArgs.get(i);
        var stmt = idAndArgs.data().make(cfg(), idAndArgs.id());
        stmts.add(stmt);
        newStmtsBuilder.add(stmt);
        indicesStmts.put(i, stmt);
      }

      stmts.add(origStmts.get(i));
    }

    var newStmts = newStmtsBuilder.build();
    cfg().trackAll(newStmts);

    cfg()
        .record(
            new CFGEdit.InsertStmts2(this, indicesStmts.build()),
            new CFGEdit.RemoveStmts2(this, stmts));
    return newStmts;
  }

  @Override
  public <I extends Jump> I addJump(String name, JumpData<I> args) {
    return addJumpWithId(cfg().<I>uniqueInstrOrPhiId(name), args);
  }

  <I extends Jump> I addJumpWithId(NodeId<? extends I> id, JumpData<? extends I> args) {
    if (this.jump != null) {
      throw new IllegalStateException(id() + " already has a jump, call replaceJump instead");
    }
    var jump = args.make(cfg(), id);
    setJump(jump);
    cfg().track(jump);

    cfg().record(CFGEdit.InsertJump.of(this, jump), new CFGEdit.RemoveJump(this));
    return jump;
  }

  // endregion add nodes

  // region replace nodes
  @Override
  public <I extends Stmt> I replace(int index, @Nullable String newName, StmtData<I> newArgs) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var oldStmt = stmts.get(index);
    if (newName == null) {
      newName = InstrOrPhiIdImpl.cast(oldStmt.id()).name();
    }
    return replaceWithId(index, cfg().<I>uniqueInstrOrPhiId(newName), newArgs);
  }

  <I extends Stmt> I replaceWithId(
      int index, NodeId<? extends I> newId, StmtData<? extends I> newArgs) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var oldStmt = stmts.get(index);
    var newStmt = newArgs.make(cfg(), newId);
    stmts.set(index, newStmt);

    cfg().untrack(oldStmt);
    cfg().track(newStmt);

    cfg()
        .record(
            new CFGEdit.ReplaceStmt<>(this, index, newStmt),
            new CFGEdit.ReplaceStmt<>(this, index, oldStmt));
    return newStmt;
  }

  @Override
  public <I extends Jump> I replaceJump(@Nullable String newName, JumpData<I> newArgs) {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }
    var oldJump = jump;
    if (newName == null) {
      newName = InstrOrPhiIdImpl.cast(oldJump.id()).name();
    }
    return replaceJumpWithId(cfg().<I>uniqueInstrOrPhiId(newName), newArgs);
  }

  public <I extends Jump> I replaceJumpWithId(
      NodeId<? extends I> newId, JumpData<? extends I> newArgs) {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }

    var oldJump = jump;
    var newJump = newArgs.make(cfg(), newId);
    setJump(newJump);

    cfg().untrack(oldJump);
    cfg().track(newJump);

    cfg()
        .record(new CFGEdit.ReplaceJump<>(this, newJump), new CFGEdit.ReplaceJump<>(this, oldJump));
    return newJump;
  }

  // endregion replace nodes

  // region remove nodes
  @Override
  public void remove(Phi<?> phi) {
    if (!phis.remove(phi)) {
      throw new IllegalArgumentException("Not in " + id() + ": " + phi);
    }
    cfg().untrack(phi);

    cfg().record(new CFGEdit.RemovePhi(this, phi), new CFGEdit.InsertPhi<>(this, phi));
  }

  @Override
  public void removeAllPhis(Collection<? extends Phi<?>> phis) {
    phis = new HashSet<>(phis);
    var oldSize = this.phis.size();
    this.phis.removeAll(phis);
    if (this.phis.size() != oldSize - phis.size()) {
      throw new IllegalArgumentException("Not all in " + id() + ": " + phis);
    }
    cfg().untrackAll(phis);

    cfg().record(new CFGEdit.RemovePhis(this, phis), new CFGEdit.InsertPhis(this, phis));
  }

  @Override
  public Stmt removeAt(int index) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    var stmt = stmts.remove(index);
    cfg().untrack(stmt);

    cfg().record(new CFGEdit.RemoveStmt(this, index), CFGEdit.InsertStmt.of(this, index, stmt));
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
    var reInsert = new CFGEdit.InsertStmts(this, fromIndex, stmts);
    stmts.clear();

    cfg().record(new CFGEdit.RemoveStmts(this, fromIndex, toIndex), reInsert);
  }

  @Override
  public void removeAllStmts(Collection<? extends Stmt> stmts) {
    var stmtsAtIndices =
        stmts.stream().collect(Collectors.toMap(this.stmts::indexOf, Function.identity()));

    var oldSize = this.stmts.size();
    this.stmts.removeAll(stmts);
    if (this.stmts.size() != oldSize - stmts.size()) {
      throw new IllegalArgumentException("Not all in " + id() + ": " + stmts);
    }

    cfg().untrackAll(stmts);

    cfg()
        .record(
            new CFGEdit.RemoveStmts2(this, stmts), new CFGEdit.InsertStmts2(this, stmtsAtIndices));
  }

  @Override
  public Jump removeJump() {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }
    var jump = this.jump;
    setJump(null);
    cfg().untrack(jump);

    cfg().record(new CFGEdit.RemoveJump(this), CFGEdit.InsertJump.of(this, jump));
    return jump;
  }

  // endregion remove nodes
  // endregion mutate

  // region misc internal methods
  /**
   * Add a predecessor without notifying successors or recording an {@linkplain CFGEdit edit} (so,
   * if called alone, it will leave the {@link CFG} in an illegal state).
   *
   * <p>This <i>will</i> add an input to phis within the block for the new predecessor.
   *
   * <p>Called by {@link Instr#mutateArgs(Instr, InstrData)} so it can't be private.
   */
  void unsafeAddPredecessor(BB predecessor) {
    predecessors.add(predecessor);
    for (var phi : phis) {
      PhiImpl.cast(phi).unsafeAddUnsetInput(predecessor);
    }
  }

  /**
   * Remove a predecessor without notifying successors or recording an {@linkplain CFGEdit edit}
   * (so, if called alone, it will leave the {@link CFG} in an illegal state).
   *
   * <p>This <i>will</i> remove the input to phis within the block for the old predecessor.
   *
   * <p>Called by {@link Instr#mutateArgs(Instr, InstrData)} so it can't be private.
   */
  void unsafeRemovePredecessor(BB predecessor) {
    predecessors.remove(predecessor);
    for (var phi : phis) {
      PhiImpl.cast(phi).unsafeRemoveInput(predecessor);
    }
  }

  /** Set jump and update successors. Doesn't update CFG tracking. */
  private void setJump(@Nullable Jump jump) {
    if (jump == this.jump) {
      return;
    }
    if (this.jump != null) {
      for (var succ : this.jump.targets()) {
        succ.unsafeRemovePredecessor(this);
      }
      ((JumpImpl<?>) this.jump).unsafeSetBB(null);
    }
    this.jump = jump;
    if (jump != null) {
      for (var succ : jump.targets()) {
        succ.unsafeAddPredecessor(this);
      }
      ((JumpImpl<?>) jump).unsafeSetBB(this);
    }

    var wasExit = this.jump == null || this.jump.targets().isEmpty();
    var isExit = jump == null || jump.targets().isEmpty();
    if (!wasExit && isExit) {
      cfg().markExit(this);
    } else if (wasExit && !isExit) {
      cfg().unmarkExit(this);
    }
  }

  // endregion misc internal methods

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private BB parse(Parser p) {
    return p.withContext(new CFGParseOrPrintContext(null, cfg())).parse(BB.class);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new CFGParseOrPrintContext(null, cfg())).print(this);
  }
}
