package org.prlprg.ir.cfg;

import static org.prlprg.AppConfig.EAGERLY_VERIFY_PHI_INPUTS;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Iterables;
import com.google.common.collect.Streams;
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
import java.util.stream.Stream;
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
  public boolean isEmpty() {
    return phis.isEmpty() && stmts.isEmpty() && jump == null;
  }

  @Override
  public int numChildren() {
    return phis.size() + numInstrs();
  }

  @Override
  public int numInstrs() {
    return stmts.size() + (jump == null ? 0 : 1);
  }

  @Override
  public Stream<InstrOrPhi> stream() {
    return Streams.concat(phis.stream(), stmts.stream(), Stream.ofNullable(jump));
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
          i++;
          if (jump != null) {
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
          case 3 -> throw new NoSuchElementException();
          default -> throw new UnreachableError();
        }
        next = null;
      }
    };
  }

  @Override
  public Stream<Instr> streamInstrs() {
    return Streams.concat(stmts.stream(), Stream.ofNullable(jump));
  }

  private abstract class Instrs implements Iterator<Instr> {
    protected int i = 0;
    protected int index;
    protected final ListIterator<Stmt> stmts;
    protected @Nullable Instr next;

    protected Instrs(ListIterator<Stmt> stmts, int initialIndex) {
      this.stmts = stmts;
      this.index = initialIndex;
    }

    @Override
    public void remove() {
      if (next == null) {
        throw new IllegalStateException("`next()` not called");
      }

      switch (i) {
        case 0 -> stmts.remove();
        case 1 -> setJump(null);
        default -> throw new IllegalStateException("`remove()` called beyond end of iteration");
      }
      cfg().untrack(next);
      switch (i) {
        case 0 ->
            cfg()
                .record(
                    new CFGEdit.RemoveStmt(BB.this, index),
                    CFGEdit.InsertStmt.of(BB.this, index, (Stmt) next));
        case 1 ->
            cfg()
                .record(
                    new CFGEdit.RemoveJump(BB.this), CFGEdit.InsertJump.of(BB.this, (Jump) next));
        case 2 -> throw new NoSuchElementException();
        default -> throw new UnreachableError();
      }
      next = null;
    }
  }

  @Override
  public Iterable<Instr> instrs() {
    return () ->
        new Instrs(stmts.listIterator(), -1) {
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
            index++;
            if (i == 0) {
              if (stmts.hasNext()) {
                next = stmts.next();
                return next;
              }
              i++;
            }
            if (i == 1) {
              i++;
              if (jump != null) {
                next = jump;
                return next;
              }
            }
            throw new NoSuchElementException();
          }
        };
  }

  @Override
  public Iterable<Instr> revInstrs() {
    return () ->
        new Instrs(stmts.listIterator(stmts.size()), numInstrs()) {
          @Override
          public boolean hasNext() {
            var end = 2;
            if (!stmts.hasPrevious()) {
              end--;
              if (jump == null) {
                end--;
              }
            }
            return i < end;
          }

          @Override
          public Instr next() {
            index--;
            if (i == 0) {
              i++;
              if (jump != null) {
                next = jump;
                return next;
              }
            }
            if (i == 1) {
              if (stmts.hasPrevious()) {
                next = stmts.previous();
                return next;
              }
              i++;
            }
            throw new NoSuchElementException();
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
    return splitNewPredecessor(BBIdImpl.cast(id).name(), index);
  }

  @Override
  public BB splitNewPredecessor(String name, int index) {
    return splitNewPredecessorWithId(cfg().uniqueBBId(name), index);
  }

  BB splitNewPredecessorWithId(BBId predecessorId, int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    if (this == cfg().entry()) {
      throw new UnsupportedOperationException(
          "Can't split a predecessor on the entry block, you must call `splitNewSuccessor` instead.");
    }

    var newBB = cfg().doAddBB(predecessorId);

    for (var pred : predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(this)
          : "BB has predecessor whose jump doesn't point to it";
      JumpImpl.cast(pred.jump).unsafeReplaceInTargets(this, newBB);
    }

    // Don't call `insert` or `addJump`, since this is intrinsic.
    newBB.phis.addAll(phis);
    newBB.stmts.addAll(stmts.subList(0, index));
    var newJump = new JumpData.Goto(this).make(cfg(), cfg().<Instr>uniqueLocalId());
    newBB.setJump(newJump);
    cfg().track(newJump);
    phis.clear();
    stmts.subList(0, index).clear();

    cfg()
        .record(
            new CFGEdit.SplitBB(newBB, this, true, index), new CFGEdit.MergeBBs(newBB, this, true));
    return newBB;
  }

  @Override
  public BB splitNewSuccessor(int index) {
    return splitNewSuccessor(BBIdImpl.cast(id).name(), index);
  }

  @Override
  public BB splitNewSuccessor(String name, int index) {
    return splitNewSuccessorWithId(cfg().uniqueBBId(name), index);
  }

  BB splitNewSuccessorWithId(BBId successorId, int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var newBB = cfg().doAddBB(successorId);

    for (var succ : successors()) {
      assert succ.predecessors.contains(this)
          : "BB has successor whose predecessors set doesn't contain it";
      succ.predecessors.remove(this);
      succ.predecessors.add(newBB);
      for (var phi : succ.phis) {
        PhiImpl.cast(phi).unsafeReplaceIncomingBB(this, newBB);
      }
    }

    // Don't call `insert` or `addJump`, since this is intrinsic.
    newBB.stmts.addAll(stmts.subList(index, stmts.size()));
    newBB.jump = jump;
    if (newBB.jump != null) {
      JumpImpl.cast(newBB.jump).unsafeSetBB(newBB);
    }
    stmts.subList(index, stmts.size()).clear();
    jump = null;
    var newJump = new JumpData.Goto(newBB).make(cfg(), cfg().<Instr>uniqueLocalId());
    setJump(newJump);
    cfg().track(newJump);

    cfg()
        .record(
            new CFGEdit.SplitBB(this, newBB, false, index),
            new CFGEdit.MergeBBs(this, newBB, false));
    return newBB;
  }

  @Override
  public void mergeWithSuccessor(BB succ) {
    if (jump == null
        || !(jump.data() instanceof JumpData.Goto gotoJump)
        || gotoJump.next() != succ) {
      throw new IllegalArgumentException("This block's jump isn't a GOTO to the successor");
    }
    if (succ == cfg().entry() && !stmts.isEmpty()) {
      throw new IllegalArgumentException("The successor is the entry block (can't be removed)");
    }
    if (succ.predecessors.size() != 1 && !stmts.isEmpty()) {
      throw new IllegalArgumentException(
          "The successor has other predecessors besides this block, and this block has statements");
    }
    if (!succ.phis.isEmpty() && !stmts.isEmpty()) {
      throw new IllegalArgumentException(
          "The successor still has phis, and this block has statements.\nSince the successor has only one predecessor, those can be substituted with the single input in arguments and removed, but this function expects that to have already happened (since said substitution is slow, it should be done in a `BatchSubst`).");
    }
    if (succ.phis.stream()
        .anyMatch(
            phi ->
                predecessors.stream()
                    .anyMatch(
                        myPred ->
                            phi.hasIncomingBB(myPred)
                                && !phi.input(myPred).equals(phi.input(this))))) {
      throw new IllegalArgumentException(
          "The successor has a phi with an input from this block's predecessor which is different from the input from this block");
    }

    // No-op if `predecessors.size() == 1`, because we'll remove the only `pred.jump` in that case.
    for (var pred : succ.predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(succ)
          : "Successor has predecessor whose jump doesn't point to it";
      JumpImpl.cast(pred.jump).unsafeReplaceInTargets(succ, this);
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

    for (var phi : succ.phis) {
      var myInput = phi.input(this);
      var newInputsStream =
          myInput instanceof Phi<?> myPhi && phis.contains(myPhi)
              ? myPhi.inputs().stream()
              : predecessors.stream().map(pred -> Phi.Input.of(pred, myInput));
      // The input is the correct type, but it's existential so we need to erase `phi`'s generic.
      @SuppressWarnings("unchecked")
      var phi1 = (PhiImpl<Node>) PhiImpl.cast(phi);
      phi1.unsafeRemoveInput(this);
      newInputsStream
          .filter(i -> !phi1.hasIncomingBB(i.incomingBB()))
          .forEach(phi1::unsafeAddInput);
    }

    if (succ.predecessors.size() > 1) {
      // Remove this node's phis because they don't have inputs for the new predecessors. We merged
      // them if they were in the successor's phis, and if not, they are definitely unused because
      // this BB (before the merge) only dominates itself.
      cfg().untrackAll(phis);
      phis.clear();
    }

    var resplitIndex = stmts.size();

    // Don't call `setJump` or `insert`, since this is intrinsic.
    succ.predecessors.remove(this);
    predecessors.addAll(succ.predecessors);
    phis.addAll(succ.phis);
    stmts.addAll(succ.stmts);
    // Inline `setJump` except we already handled predecessors and successors.
    cfg().untrack(jump);
    jump = succ.jump;
    if (jump != null) {
      JumpImpl.cast(jump).unsafeSetBB(this);
    }
    if (jump == null || jump.targets().isEmpty()) {
      cfg().markExit(this);
    }
    succ.predecessors.clear();
    succ.phis.clear();
    succ.stmts.clear();
    // First call `doRemove` so that, if the jump had successors, the CFG won't try to remove the BB
    // from the exits (since it's not one, but if the jump is set to null, it has no successors so
    // the CFG thinks it is).
    cfg().doRemove(succ);
    succ.jump = null;

    cfg()
        .record(
            new CFGEdit.MergeBBs(this, succ, false),
            new CFGEdit.SplitBB(this, succ, false, resplitIndex));
  }

  // endregion split and merge

  // region add nodes
  @Override
  public <N extends Node> Phi<N> addPhi(Class<? extends N> nodeClass) {
    return addPhiWithId(cfg().<Phi<? extends N>>uniqueLocalId(), nodeClass);
  }

  @Override
  public <N extends Node> Phi<N> addPhi(
      Class<? extends N> nodeClass, Collection<? extends Phi.Input<? extends N>> inputs) {
    return addPhiWithId(cfg().<Phi<? extends N>>uniqueLocalId(), nodeClass, inputs);
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
    if (nodeClasses.isEmpty()) {
      return ImmutableList.of();
    }

    var inputs = predecessors.stream().map(Phi.Input::unset).toList();
    var phis =
        nodeClasses.stream()
            .map(
                nodeClass ->
                    PhiImpl.forClass(nodeClass, cfg(), cfg().<Phi<?>>uniqueLocalId(), inputs))
            .collect(ImmutableList.toImmutableList());
    this.phis.addAll(phis);
    cfg().trackAll(phis);

    cfg().record(new CFGEdit.InsertPhis(this, phis), new CFGEdit.RemovePhis(this, phis));
    return phis;
  }

  @Override
  public ImmutableList<? extends Phi<?>> addPhis1(Collection<Phi.Args> phiArgs) {
    return addPhisWithIds(
        phiArgs.stream().map(a -> new PhiImpl.Args(cfg().<Phi<?>>uniqueLocalId(), a)).toList());
  }

  ImmutableList<? extends Phi<?>> addPhisWithIds(Collection<? extends PhiImpl.Args> phiArgs) {
    if (phiArgs.isEmpty()) {
      return ImmutableList.of();
    }

    // The type argument and cast *are* redundant, but the Java compiler has an annoying bug where
    // it occasionally fails to type-check and must be fully rebuilt without them.
    @SuppressWarnings({"RedundantTypeArguments", "RedundantCast"})
    var phis =
        phiArgs.stream()
            .map(
                a ->
                    PhiImpl.<Node>forClass(
                        a.nodeClass(),
                        cfg(),
                        (NodeId<? extends Phi<? extends Node>>) a.id(),
                        a.inputs()))
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
    return insertAtWithId(index, cfg().<I>uniqueLocalId(name), args);
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
            .map(a -> new StmtImpl.Args(cfg().<Stmt>uniqueLocalId(a.name()), a.data()))
            .toList());
  }

  ImmutableList<? extends Stmt> insertAllAtWithIds(int index, List<StmtImpl.Args> idsAndArgs) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    if (idsAndArgs.isEmpty()) {
      return ImmutableList.of();
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
                            cfg().<Stmt>uniqueLocalId(e.getValue().name()), e.getValue().data()))));
  }

  ImmutableList<? extends Stmt> insertAllAtWithIds(Map<Integer, StmtImpl.Args> indicesIdsAndArgs) {
    for (var index : indicesIdsAndArgs.keySet()) {
      if (index < 0 || index > stmts.size()) {
        throw new IndexOutOfBoundsException("Index out of range: " + index);
      }
    }

    if (indicesIdsAndArgs.isEmpty()) {
      return ImmutableList.of();
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
    return addJumpWithId(cfg().<I>uniqueLocalId(name), args);
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
    return replaceWithId(index, cfg().<I>uniqueLocalId(newName), newArgs);
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
    return replaceJumpWithId(cfg().<I>uniqueLocalId(newName), newArgs);
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

  // region move nodes

  @Override
  public void moveStmt(int oldIndex, BB newBb, int newIndex) {
    if (newBb.cfg() != cfg()) {
      throw new IllegalArgumentException("Can't move between different CFGs");
    }
    if (oldIndex < 0 || oldIndex >= stmts.size()) {
      throw new IndexOutOfBoundsException("Old index out of range in " + id() + ": " + oldIndex);
    }
    if (newIndex < 0 || newIndex > newBb.stmts.size()) {
      throw new IndexOutOfBoundsException(
          "New index out of range in " + newBb.id() + ": " + newIndex);
    }

    var stmt = stmts.remove(oldIndex);
    newBb.stmts.add(newIndex, stmt);

    cfg()
        .record(
            new CFGEdit.MoveStmt(this, oldIndex, newBb, newIndex),
            new CFGEdit.MoveStmt(newBb, newIndex, this, oldIndex));
  }

  @Override
  public void moveStmts(int oldFromIndex, int oldToIndex, BB newBb, int newFromIndex) {
    if (newBb.cfg() != cfg()) {
      throw new IllegalArgumentException("Can't move between different CFGs");
    }
    if (oldFromIndex > oldToIndex) {
      throw new IllegalArgumentException(
          "oldFromIndex > oldToIndex: " + oldFromIndex + " > " + oldToIndex);
    }
    if (oldFromIndex < 0 || oldToIndex > stmts.size()) {
      throw new IndexOutOfBoundsException(
          "Old sublist out of range in " + id() + ": " + oldFromIndex + " to " + oldToIndex);
    }
    if (newFromIndex < 0 || newFromIndex > newBb.stmts.size()) {
      throw new IndexOutOfBoundsException(
          "New index out of range in " + newBb.id() + ": " + newFromIndex);
    }

    if (oldFromIndex == oldToIndex) {
      return;
    }

    var stmts = this.stmts.subList(oldFromIndex, oldToIndex);
    newBb.stmts.addAll(newFromIndex, stmts);
    stmts.clear();

    cfg()
        .record(
            new CFGEdit.MoveStmts(this, oldFromIndex, oldToIndex, newBb, newFromIndex),
            new CFGEdit.MoveStmts(
                newBb,
                newFromIndex,
                newFromIndex + (oldToIndex - oldFromIndex),
                this,
                oldFromIndex));
  }

  @Override
  public void moveJump(BB newBb) {
    if (newBb.cfg() != cfg()) {
      throw new IllegalArgumentException("Can't move between different CFGs");
    }
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }
    if (newBb.jump != null) {
      throw new IllegalStateException(newBb.id() + " already has a jump");
    }

    var oldJump = jump;
    setJump(null);
    newBb.setJump(oldJump);

    cfg().record(new CFGEdit.MoveJump(this, newBb), new CFGEdit.MoveJump(newBb, this));
  }

  // endregion move nodes

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
  public void removePhis(Collection<? extends Phi<?>> phis) {
    if (phis.isEmpty()) {
      return;
    }

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

    if (fromIndex == toIndex) {
      return;
    }

    var stmts = this.stmts.subList(fromIndex, toIndex);
    cfg().untrackAll(stmts);
    var reInsert = new CFGEdit.InsertStmts(this, fromIndex, stmts);
    stmts.clear();

    cfg().record(new CFGEdit.RemoveStmts(this, fromIndex, toIndex), reInsert);
  }

  @Override
  public void removeAllStmts(Collection<? extends Stmt> stmts) {
    if (stmts.isEmpty()) {
      return;
    }

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
    if (predecessors.contains(predecessor)) {
      throw new AssertionError(predecessor.id() + " is already a predecessor of " + id());
    }

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
    if (!predecessors.contains(predecessor)) {
      throw new AssertionError(predecessor.id() + " isn't a predecessor of " + id());
    }

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

    var wasExit = this.jump == null || this.jump.targets().isEmpty();

    if (this.jump != null) {
      for (var succ : this.jump.targets()) {
        succ.unsafeRemovePredecessor(this);
      }
      JumpImpl.cast(this.jump).unsafeSetBB(null);
    }

    this.jump = jump;

    if (jump != null) {
      for (var succ : jump.targets()) {
        succ.unsafeAddPredecessor(this);
      }
      JumpImpl.cast(jump).unsafeSetBB(this);
    }

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
