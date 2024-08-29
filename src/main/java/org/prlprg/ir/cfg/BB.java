package org.prlprg.ir.cfg;

import static org.prlprg.AppConfig.EAGERLY_VERIFY_PHI_INPUTS;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSortedSet;
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
import org.prlprg.ir.cfg.builder.BBCompoundMutate;
import org.prlprg.ir.cfg.builder.BBIntrinsicMutate;
import org.prlprg.ir.cfg.builder.BBQuery;
import org.prlprg.ir.cfg.instr.JumpData;
import org.prlprg.ir.cfg.instr.StmtData;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Pair;
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
  private final CFG cfg;
  private final BBId id;
  private final SequencedSet<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.id.toString()));
  // Preserve insertion order for sometimes clearer debug representation
  private final SequencedSet<Phi<?>> phis = new LinkedHashSet<>();
  private final List<Stmt> stmts = new ArrayList<>();
  private @Nullable Jump jump = null;

  BB(CFG cfg, BBId id) {
    this.cfg = cfg;
    this.id = id;
  }

  // region access
  // region cfg and self
  @Override
  public CFG cfg() {
    return cfg;
  }

  @Override
  public BBId id() {
    return id;
  }

  // endregion cfg and self

  // region predecessors and successors (access)
  @Override
  public @UnmodifiableView SequencedCollection<BB> predecessors() {
    return Collections.unmodifiableSequencedCollection(predecessors);
  }

  @Override
  public @UnmodifiableView SequencedSet<BB> successors() {
    return jump == null ? ImmutableSortedSet.of() : jump.targets();
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
        cfg.untrack(next);
        switch (i) {
          case 0 ->
              cfg.record(
                  new CFGEdit.RemovePhi(BB.this, (Phi<?>) next),
                  new CFGEdit.InsertPhi<>(BB.this, (Phi<?>) next));
          case 1 -> {
            var index = stmts.nextIndex();
            cfg.record(
                new CFGEdit.RemoveStmt(BB.this, index),
                new CFGEdit.InsertStmt(BB.this, index, (Stmt) next));
          }
          case 2 ->
              cfg.record(
                  new CFGEdit.RemoveJump(BB.this), new CFGEdit.InsertJump(BB.this, (Jump) next));
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
      cfg.untrack(next);
      switch (i) {
        case 0 ->
            cfg.record(
                new CFGEdit.RemoveStmt(BB.this, index),
                new CFGEdit.InsertStmt(BB.this, index, (Stmt) next));
        case 1 ->
            cfg.record(
                new CFGEdit.RemoveJump(BB.this), new CFGEdit.InsertJump(BB.this, (Jump) next));
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
        cfg.untrack(next);
        cfg.record(new CFGEdit.RemovePhi(BB.this, next), new CFGEdit.InsertPhi<>(BB.this, next));
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
    return splitNewPredecessor(id.name(), index);
  }

  @Override
  public BB splitNewPredecessor(String name, int index) {
    return splitNewPredecessorWithId(cfg.uniqueBBId(name), index);
  }

  BB splitNewPredecessorWithId(BBId predecessorId, int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }
    if (this == cfg.entry()) {
      throw new UnsupportedOperationException(
          "Can't split a predecessor on the entry block, you must call `splitNewSuccessor` instead.");
    }

    var newBB = cfg.doAddBB(predecessorId);

    for (var pred : predecessors) {
      assert pred.jump != null && pred.jump.targets().contains(this)
          : "BB has predecessor whose jump doesn't point to it";
      pred.jump.unsafeReplaceInTargets(this, newBB);
    }

    // Don't call `insert` or `addJump`, since this is intrinsic.
    newBB.phis.addAll(phis);
    newBB.stmts.addAll(stmts.subList(0, index));
    var newJump = new Jump(cfg, new JumpData.Goto(this));
    newBB.setJump(newJump);
    cfg.track(newJump);
    phis.clear();
    stmts.subList(0, index).clear();

    cfg.record(
        new CFGEdit.SplitBB(newBB, this, true, index), new CFGEdit.MergeBBs(newBB, this, true));
    return newBB;
  }

  @Override
  public BB splitNewSuccessor(int index) {
    return splitNewSuccessor(id.name(), index);
  }

  @Override
  public BB splitNewSuccessor(String name, int index) {
    return splitNewSuccessorWithId(cfg.uniqueBBId(name), index);
  }

  BB splitNewSuccessorWithId(BBId successorId, int index) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var newBB = cfg.doAddBB(successorId);

    for (var succ : successors()) {
      assert succ.predecessors.contains(this)
          : "BB has successor whose predecessors set doesn't contain it";
      succ.predecessors.remove(this);
      succ.predecessors.add(newBB);
      for (var phi : succ.phis) {
        phi.unsafeReplaceIncomingBB(this, newBB);
      }
    }

    // Don't call `insert` or `addJump`, since this is intrinsic.
    newBB.stmts.addAll(stmts.subList(index, stmts.size()));
    newBB.jump = jump;
    if (newBB.jump != null) {
      newBB.jump.unsafeSetBB(newBB);
    }
    stmts.subList(index, stmts.size()).clear();
    jump = null;
    var newJump = new Jump(cfg, new JumpData.Goto(newBB));
    setJump(newJump);
    cfg.track(newJump);

    cfg.record(
        new CFGEdit.SplitBB(this, newBB, false, index), new CFGEdit.MergeBBs(this, newBB, false));
    return newBB;
  }

  @Override
  public void mergeWithSuccessor(BB succ) {
    if (jump == null
        || !(jump.controlFlow() instanceof ControlFlow.Goto(var next))
        || next != succ) {
      throw new IllegalArgumentException("This block's jump isn't a GOTO to the successor");
    }
    if (succ == cfg.entry() && !stmts.isEmpty()) {
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
      pred.jump.unsafeReplaceInTargets(succ, this);
    }

    for (var succ2 : succ.successors()) {
      assert succ2.predecessors.contains(succ)
          : "BB has successor whose predecessors set doesn't contain it";
      succ2.predecessors.remove(succ);
      succ2.predecessors.add(this);
      for (var phi : succ2.phis) {
        phi.unsafeReplaceIncomingBB(succ, this);
      }
    }

    for (var phi : succ.phis) {
      var myInput = phi.input(this);
      var newInputsStream =
          myInput instanceof Phi<?> myPhi && phis.contains(myPhi)
              ? myPhi.inputs().stream()
              : predecessors.stream().map(pred -> Phi.Input.of(pred, myInput));
      phi.unsafeRemoveInput(this);
      newInputsStream.filter(i -> !phi.hasIncomingBB(i.incomingBB())).forEach(phi::unsafeAddInput);
    }

    if (succ.predecessors.size() > 1) {
      // Remove this node's phis because they don't have inputs for the new predecessors. We merged
      // them if they were in the successor's phis, and if not, they are definitely unused because
      // this BB (before the merge) only dominates itself.
      cfg.untrackAll(phis);
      phis.clear();
    }

    var resplitIndex = stmts.size();

    // Don't call `setJump` or `insert`, since this is intrinsic.
    succ.predecessors.remove(this);
    predecessors.addAll(succ.predecessors);
    phis.addAll(succ.phis);
    stmts.addAll(succ.stmts);
    // Inline `setJump` except we already handled predecessors and successors.
    cfg.untrack(jump);
    jump = succ.jump;
    if (jump != null) {
      jump.unsafeSetBB(this);
    }
    if (jump == null || jump.targets().isEmpty()) {
      cfg.markExit(this);
    }
    succ.predecessors.clear();
    succ.phis.clear();
    succ.stmts.clear();
    // First call `doRemove` so that, if the jump had successors, the CFG won't try to remove the BB
    // from the exits (since it's not one, but if the jump is set to null, it has no successors so
    // the CFG thinks it is).
    cfg.doRemove(succ);
    succ.jump = null;

    cfg.record(
        new CFGEdit.MergeBBs(this, succ, false),
        new CFGEdit.SplitBB(this, succ, false, resplitIndex));
  }

  // endregion split and merge

  // region add nodes
  @Override
  public <T> Phi<T> addPhi() {
    return addPhiWithId(cfg.uniqueLocalId());
  }

  @Override
  public <T> Phi<T> addPhi(Collection<? extends Phi.Input<? extends T>> inputs) {
    return addPhiWithId(cfg.uniqueLocalId(), inputs);
  }

  <T> Phi<T> addPhiWithId(LocalNodeId<? extends T> id) {
    // We want to create `new Phi<? extends T>`, but Java's type system doesn't allow it. So we do
    // an unchecked cast to create a `Phi<T>`, then upcast it to `Phi<? extends T>`.
    @SuppressWarnings("unchecked")
    var phi =
        new Phi<>(
            cfg, (LocalNodeId<T>) id, predecessors.stream().map(Phi.Input::<T>unset).toList());
    phis.add(phi);
    cfg.track(phi);

    cfg.record(new CFGEdit.InsertPhi<>(this, phi), new CFGEdit.RemovePhi(this, phi));
    return phi;
  }

  <T> Phi<T> addPhiWithId(
      LocalNodeId<? extends T> id, Collection<? extends Phi.Input<? extends T>> inputs) {
    // We want to create `new Phi<? extends T>`, but Java's type system doesn't allow it. So we do
    // an unchecked cast to create a `Phi<T>`, then upcast it to `Phi<? extends T>`.
    @SuppressWarnings("unchecked")
    var phi = new Phi<>(cfg, (LocalNodeId<T>) id, inputs);
    verifyPhiInputBBs(phi);
    phis.add(phi);
    cfg.track(phi);

    cfg.record(new CFGEdit.InsertPhi<>(this, phi), new CFGEdit.RemovePhi(this, phi));

    // Has to be after insertion, and we want to try and not leave the state inconsistent on
    // exception (this specific check is allowed to fail in a consistent state).
    if (EAGERLY_VERIFY_PHI_INPUTS) {
      phi.eagerlyVerifyInputs();
    }

    return phi;
  }

  @Override
  public <T> ImmutableList<? extends Phi<? extends T>> addPhis(
      Collection<? extends Collection<? extends Phi.Input<? extends T>>> inputss) {
    return this.addPhisWithIds(
        inputss.stream().map(inputs -> Pair.of(cfg.<T>uniqueLocalId(), inputs)).toList());
  }

  <T> ImmutableList<? extends Phi<? extends T>> addPhisWithIds(
      Collection<
              ? extends
                  Pair<
                      ? extends LocalNodeId<? extends T>,
                      ? extends Collection<? extends Phi.Input<? extends T>>>>
          idAndInputss) {
    if (idAndInputss.isEmpty()) {
      return ImmutableList.of();
    }

    // We want to create `new Phi<? extends T>`, but Java's type system doesn't allow it. So we do
    // an unchecked cast to create a `Phi<T>`, then upcast it to `Phi<? extends T>`.
    @SuppressWarnings("unchecked")
    var phis =
        idAndInputss.stream()
            .map(
                idAndInputs ->
                    (Phi<? extends T>)
                        new Phi<>(cfg, (LocalNodeId<T>) idAndInputs.first(), idAndInputs.second()))
            .collect(ImmutableList.toImmutableList());
    for (var phi : phis) {
      verifyPhiInputBBs(phi);
    }
    this.phis.addAll(phis);
    cfg.trackAll(phis);

    cfg.record(new CFGEdit.InsertPhis<>(this, phis), new CFGEdit.RemovePhis(this, phis));

    // Has to be after insertion, and we want to try and not leave the state inconsistent on
    // exception (this specific check is allowed to fail in a consistent state).
    if (EAGERLY_VERIFY_PHI_INPUTS) {
      for (var phi : phis) {
        phi.eagerlyVerifyInputs();
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
  public Stmt insertAt(int index, StmtData data) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var stmt = new Stmt(cfg, data);
    stmts.add(index, stmt);
    cfg.track(stmt);

    cfg.record(new CFGEdit.InsertStmt(this, index, stmt), new CFGEdit.RemoveStmt(this, index));
    return stmt;
  }

  @Override
  public Stmt insertCopyAt(int index, Stmt stmt) {
    return insertAt(index, (StmtData) stmt.data);
  }

  @Override
  public ImmutableList<Stmt> insertAllAt(int index, List<StmtData> datas) {
    if (index < 0 || index > stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    if (datas.isEmpty()) {
      return ImmutableList.of();
    }

    var stmts =
        datas.stream().map(data -> new Stmt(cfg, data)).collect(ImmutableList.toImmutableList());
    this.stmts.addAll(index, stmts);
    cfg.trackAll(stmts);

    cfg.record(
        new CFGEdit.InsertStmts(this, index, stmts),
        new CFGEdit.RemoveStmts(this, index, stmts.size()));
    return stmts;
  }

  @Override
  public ImmutableList<Stmt> insertAllCopiesAt(int index, List<Stmt> stmts) {
    return insertAllAt(index, stmts.stream().map(s -> (StmtData) s.data).toList());
  }

  @Override
  public ImmutableList<Stmt> insertAllAt(Map<Integer, StmtData> indicesAndDatas) {
    for (var index : indicesAndDatas.keySet()) {
      if (index < 0 || index > stmts.size()) {
        throw new IndexOutOfBoundsException("Index out of range: " + index);
      }
    }

    if (indicesAndDatas.isEmpty()) {
      return ImmutableList.of();
    }

    // Add statements in O(origStmts.size + indicesNamesAndArgs.size) time vs.
    // O(origStmts.size * indicesNamesAndArgs.size) time if we inserted one by one.
    // Also remember that later indices must not be offset by earlier ones.
    var origStmts = new ArrayList<>(stmts);
    var newStmtsBuilder = ImmutableList.<Stmt>builderWithExpectedSize(indicesAndDatas.size());
    var indicesStmts = ImmutableMap.<Integer, Stmt>builderWithExpectedSize(indicesAndDatas.size());
    stmts.clear();
    for (var i = 0; i < origStmts.size(); i++) {
      if (indicesAndDatas.containsKey(i)) {
        var idAndArgs = indicesAndDatas.get(i);
        var stmt = new Stmt(cfg, idAndArgs);
        stmts.add(stmt);
        newStmtsBuilder.add(stmt);
        indicesStmts.put(i, stmt);
      }

      stmts.add(origStmts.get(i));
    }

    var newStmts = newStmtsBuilder.build();
    cfg.trackAll(newStmts);

    cfg.record(
        new CFGEdit.InsertStmts2(this, indicesStmts.build()),
        new CFGEdit.RemoveStmts2(this, indicesAndDatas.keySet()));
    return newStmts;
  }

  @Override
  public ImmutableList<Stmt> insertAllCopiesAt(Map<Integer, Stmt> indicesAndStmts) {
    return insertAllAt(
        indicesAndStmts.entrySet().stream()
            .collect(
                ImmutableMap.toImmutableMap(Map.Entry::getKey, e -> (StmtData) e.getValue().data)));
  }

  @Override
  public Jump addJump(JumpData data) {
    if (this.jump != null) {
      throw new IllegalStateException(id() + " already has a jump, call replaceJump instead");
    }

    var jump = new Jump(cfg, data);
    setJump(jump);
    cfg.track(jump);

    cfg.record(new CFGEdit.InsertJump(this, jump), new CFGEdit.RemoveJump(this));
    return jump;
  }

  @Override
  public Jump addJumpCopy(Jump jump) {
    return addJump((JumpData) jump.data);
  }

  // endregion add nodes

  // region replace nodes
  @Override
  public Stmt replace(int index, StmtData newData) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var oldStmt = stmts.get(index);
    var newStmt = new Stmt(cfg, newData);
    stmts.set(index, newStmt);

    cfg.untrack(oldStmt);
    cfg.track(newStmt);

    cfg.record(
        new CFGEdit.ReplaceStmt(this, index, newStmt),
        new CFGEdit.ReplaceStmt(this, index, oldStmt));
    return newStmt;
  }

  @Override
  public Jump replaceJump(JumpData newData) {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }

    var oldJump = jump;
    var newJump = new Jump(cfg, newData);
    setJump(newJump);

    cfg.untrack(oldJump);
    cfg.track(newJump);

    cfg.record(new CFGEdit.ReplaceJump(this, newJump), new CFGEdit.ReplaceJump(this, oldJump));
    return newJump;
  }

  // endregion replace nodes

  // region move nodes

  @Override
  public void moveStmt(int oldIndex, BB newBb, int newIndex) {
    if (newBb.cfg != cfg) {
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

    cfg.record(
        new CFGEdit.MoveStmt(this, oldIndex, newBb, newIndex),
        new CFGEdit.MoveStmt(newBb, newIndex, this, oldIndex));
  }

  @Override
  public void moveStmts(int oldFromIndex, int oldToIndex, BB newBb, int newFromIndex) {
    if (newBb.cfg != cfg) {
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

    cfg.record(
        new CFGEdit.MoveStmts(this, oldFromIndex, oldToIndex, newBb, newFromIndex),
        new CFGEdit.MoveStmts(
            newBb, newFromIndex, newFromIndex + (oldToIndex - oldFromIndex), this, oldFromIndex));
  }

  @Override
  public void moveJump(BB newBb) {
    if (newBb.cfg != cfg) {
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

    cfg.record(new CFGEdit.MoveJump(this, newBb), new CFGEdit.MoveJump(newBb, this));
  }

  // endregion move nodes

  // region remove nodes
  @Override
  public void remove(Phi<?> phi) {
    if (!phis.remove(phi)) {
      throw new IllegalArgumentException("Not in " + id() + ": " + phi);
    }

    cfg.untrack(phi);

    cfg.record(new CFGEdit.RemovePhi(this, phi), new CFGEdit.InsertPhi<>(this, phi));
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
    cfg.untrackAll(phis);

    cfg.record(new CFGEdit.RemovePhis(this, phis), new CFGEdit.InsertPhis<>(this, phis));
  }

  @Override
  public Stmt removeAt(int index) {
    if (index < 0 || index >= stmts.size()) {
      throw new IndexOutOfBoundsException("Index out of range: " + index);
    }

    var stmt = stmts.remove(index);
    cfg.untrack(stmt);

    cfg.record(new CFGEdit.RemoveStmt(this, index), new CFGEdit.InsertStmt(this, index, stmt));
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
    cfg.untrackAll(stmts);
    var reInsert = new CFGEdit.InsertStmts(this, fromIndex, stmts);
    stmts.clear();

    cfg.record(new CFGEdit.RemoveStmts(this, fromIndex, toIndex), reInsert);
  }

  @Override
  public void removeAllStmts(Collection<Stmt> stmts) {
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

    cfg.untrackAll(stmts);

    cfg.record(
        new CFGEdit.RemoveStmts2(this, stmtsAtIndices.keySet()),
        new CFGEdit.InsertStmts2(this, stmtsAtIndices));
  }

  @Override
  public Jump removeJump() {
    if (jump == null) {
      throw new IllegalStateException(id() + " doesn't have a jump");
    }

    var jump = this.jump;
    setJump(null);
    cfg.untrack(jump);

    cfg.record(new CFGEdit.RemoveJump(this), new CFGEdit.InsertJump(this, jump));
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
   * <p>Called by {@link Jump#unsafeReplaceInTargets(BB, BB)}, so it can't be private.
   */
  void unsafeAddPredecessor(BB predecessor) {
    if (predecessors.contains(predecessor)) {
      throw new AssertionError(predecessor.id() + " is already a predecessor of " + id());
    }

    predecessors.add(predecessor);
    for (var phi : phis) {
      phi.unsafeAddUnsetInput(predecessor);
    }
  }

  /**
   * Remove a predecessor without notifying successors or recording an {@linkplain CFGEdit edit}
   * (so, if called alone, it will leave the {@link CFG} in an illegal state).
   *
   * <p>This <i>will</i> remove the input to phis within the block for the old predecessor.
   *
   * <p>Called by {@link Jump#unsafeReplaceInTargets(BB, BB)}, so it can't be private.
   */
  void unsafeRemovePredecessor(BB predecessor) {
    if (!predecessors.contains(predecessor)) {
      throw new AssertionError(predecessor.id() + " isn't a predecessor of " + id());
    }

    predecessors.remove(predecessor);
    for (var phi : phis) {
      phi.unsafeRemoveInput(predecessor);
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
      this.jump.unsafeSetBB(null);
    }

    this.jump = jump;

    if (jump != null) {
      for (var succ : jump.targets()) {
        succ.unsafeAddPredecessor(this);
      }
      jump.unsafeSetBB(this);
    }

    var isExit = jump == null || jump.targets().isEmpty();
    if (!wasExit && isExit) {
      cfg.markExit(this);
    } else if (wasExit && !isExit) {
      cfg.unmarkExit(this);
    }
  }

  // endregion misc internal methods

  // region serialization and deserialization
  @ParseMethod
  private BB parse(Parser p) {
    return p.withContext(new CFGParseOrPrintContext(null, cfg)).parse(BB.class);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new CFGParseOrPrintContext(null, cfg)).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
