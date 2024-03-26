package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.SequencedMap;
import java.util.SequencedSet;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFGIterator.DomTreeBfs;
import org.prlprg.ir.cfg.CFGVerifyException.BrokenInvariant;
import org.prlprg.ir.cfg.CFGVerifyException.MissingJump;
import org.prlprg.ir.cfg.CFGVerifyException.PhisInSinglePredecessorBB;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
public class CFG implements CFGQuery, CFGIntrinsicMutate, CFGCleanup, CFGVerify, CFGSerialize {
  private final List<CFGObserver> observers = new ArrayList<>();
  private final BB entry;
  // These are ordered to ensure deterministic traversal
  private final SequencedSet<BB> exits = new LinkedHashSet<>();
  private final SequencedMap<BBId, BB> bbs = new LinkedHashMap<>();
  // These don't need to be ordered, because we don't traverse them directly
  private final Map<NodeId<?>, Node> nodes = new HashMap<>();
  private final Map<String, Integer> nextBbIds = new HashMap<>();
  private final Map<String, Integer> nextNodeIds = new HashMap<>();

  /** Create a new CFG, with a single basic block and no instructions. */
  public CFG() {
    nextNodeIds.put("", 0);
    nextBbIds.put("", 0);
    entry = new BB(this, "");
    bbs.put(entry.id(), entry);
    markExit(entry);
  }

  // region general properties
  @Override
  public int numBBs() {
    return bbs.size();
  }

  @Override
  public int numNodes() {
    return nodes.size();
  }

  @Override
  public BB entry() {
    return entry;
  }

  @Override
  public @UnmodifiableView Collection<BB> exits() {
    return Collections.unmodifiableCollection(exits);
  }

  @Override
  @UnmodifiableView
  public Collection<BBId> bbIds() {
    return Collections.unmodifiableCollection(bbs.keySet());
  }

  @Override
  public BB get(BBId bbId) {
    if (!bbs.containsKey(bbId)) {
      throw new NoSuchElementException("BB not in CFG");
    }
    return bbs.get(bbId);
  }

  @Override
  @SuppressWarnings("unchecked")
  public <N extends Node> N get(NodeId<N> nodeId) {
    if (!nodes.containsKey(nodeId)) {
      throw new NoSuchElementException("BB not in CFG");
    }
    return (N) nodes.get(nodeId);
  }

  @Override
  public <N extends Node> Phi.Input<N> get(Phi.InputId<N> inputId) {
    var bb = get(inputId.incomingBbId());
    var node = get(inputId.nodeId());
    return new Phi.Input<>(bb, node);
  }

  @Override
  public DomTree domTree() {
    return new DomTree(this);
  }

  // endregion

  // region iterate
  @Override
  public Iterable<BB> iter() {
    return bbs.values();
  }

  @Override
  public Iterable<BB> bfs() {
    return () -> new CFGIterator.Bfs(this);
  }

  @Override
  public Iterable<BB> dfs() {
    return () -> new CFGIterator.Dfs(this);
  }

  @Override
  public Iterable<BB> reverseBfs() {
    return () -> new CFGIterator.ReverseBfs(this);
  }

  @Override
  public Iterable<BB> reverseDfs() {
    return () -> new CFGIterator.ReverseDfs(this);
  }

  @Override
  public Iterable<BB> dominees() {
    return dominees(domTree());
  }

  @Override
  public Iterable<BB> dominees(DomTree tree) {
    return () -> new DomTreeBfs(tree);
  }

  // endregion

  // region mutate
  @Override
  public BB addBB() {
    return addBB("");
  }

  @Override
  public BB addBB(String name) {
    var bb = doAddBB(name);
    record(new CFGEdit.InsertBB(name));
    return bb;
  }

  @Override
  public void remove(BB bb) {
    doRemove(bb);
  }

  @Override
  public BB remove(BBId bbId) {
    var bb = get(bbId);
    remove(bb);
    return bb;
  }

  // endregion

  // region additional recording operations
  @Override
  public void beginSection(String label) {
    for (var observer : observers) {
      observer.beginSection(label);
    }
  }

  @Override
  public void endSection() {
    for (var observer : observers) {
      observer.endSection();
    }
  }

  @Override
  public void recordDivider(String label) {
    for (var observer : observers) {
      observer.recordDivider(label);
    }
  }

  // endregion

  // region observers
  @Override
  public void addObserver(CFGObserver observer) {
    observers.add(observer);
  }

  @Override
  public void removeObserver(CFGObserver observer) {
    if (!observers.remove(observer)) {
      throw new IllegalArgumentException("Observer not in CFG");
    }
  }

  @Override
  public void withObserver(CFGObserver observer, Runnable action) {
    var index = observers.size();
    addObserver(observer);
    try {
      action.run();
    } finally {
      observers.remove(index);
    }
  }

  // endregion

  // region verify and toString
  @Override
  public void verify() {
    var errors = new ArrayList<BrokenInvariant>();

    // Must be DFS so that we can cache defined nodes in onlyPred blocks...
    var iter = new CFGIterator.Dfs(this);
    // ...which we do here in `prevNodes`: during iteration, `prevNodes` holds nodes guaranteed to
    // be defined before the current instruction without control flow ambiguity, that is,
    // referencable ones.
    var prevNodes = new HashSet<Node>();
    BB prevBB = null;
    while (iter.hasNext()) {
      var bb = iter.next();

      if (!bb.hasSinglePredecessor() || bb.onlyPredecessor() != prevBB) {
        prevNodes.clear();
      }

      // Every basic block has a non-null jump.
      if (bb.jump() == null) {
        errors.add(new MissingJump(bb.id()));
      }

      // Only basic blocks with two or more predecessors have phi nodes.
      if (bb.predecessors().size() < 2 && !bb.phis().isEmpty()) {
        errors.add(new PhisInSinglePredecessorBB(bb.id()));
      }

      for (var phi : bb.phis()) {
        // Phi nodes have an entry from every predecessor.
        for (var input : phi.inputs()) {
          if (!bb.predecessors().contains(input.incomingBb())) {
            errors.add(
                new CFGVerifyException.ExtraInputInPhi(bb.id(), phi.id(), input.incomingBb()));
          }
        }
        for (var pred : bb.predecessors()) {
          if (!phi.containsInput(pred)) {
            errors.add(new CFGVerifyException.MissingInputInPhi(bb.id(), phi.id(), pred.id()));
          }
        }
      }

      for (var instrOrPhi : bb) {
        assert instrOrPhi.cfg() == this;

        for (var arg : instrOrPhi.args()) {
          assert arg.cfg() == null || arg.cfg() == this;
          assert !nodes.containsKey(arg.id()) || nodes.get(arg.id()) == arg;

          if (arg.cfg() != null) {
            if (!nodes.containsKey(arg.id())) {
              // Instructions don't have arguments that were removed from the CFG (or not present
              // initially).
              errors.add(new CFGVerifyException.UntrackedArg(bb.id(), instrOrPhi.id(), arg.id()));
            } else if (instrOrPhi instanceof Instr instr && !prevNodes.contains(arg)) {
              // Instruction arguments all either originate from earlier in the block, or are
              // CFG-independent. *Except* in basic blocks with exactly one predecessor, instruction
              // arguments may be from that predecessor or, if it also has one predecessor, its
              // predecessor and so on.
              errors.add(
                  new CFGVerifyException.ArgNotDefinedBeforeUse(bb.id(), instr.id(), arg.id()));
            }

            // TODO: Instruction `RValue` arguments are of the correct (dynamic) type (need to add
            //  annotation).
          }
        }

        prevNodes.addAll(instrOrPhi.returns());
      }

      prevBB = bb;
    }

    for (var remainingBBId : iter.remainingBBIds()) {
      // Every basic block is connected to the entry block.
      errors.add(new CFGVerifyException.NotReachable(remainingBBId));
    }

    if (!errors.isEmpty()) {
      throw new CFGVerifyException(this, errors);
    }
  }

  @Override
  public String toString() {
    var sb = new StringBuilder();
    var iter = new CFGIterator.Bfs(this);
    iter.forEachRemaining(sb::append);

    if (!iter.remainingBBIds().isEmpty()) {
      sb.append("!!! Free BBs:\n");
      for (var bbId : iter.remainingBBIds()) {
        sb.append(bbs.get(bbId));
      }
    }

    return sb.toString();
  }

  // endregion

  // region for BB and Node
  /** Record an edit to this CFG. */
  void record(CFGEdit.Intrinsic<?> edit) {
    for (var observer : observers) {
      observer.record(edit);
    }
  }

  /** Insert and return a new basic block without recording it. */
  BB doAddBB(String name) {
    var bb = new BB(this, name);
    assert !bbs.containsKey(bb.id());
    bbs.put(bb.id(), bb);
    markExit(bb);
    return bb;
  }

  /**
   * Remove a basic block without recording it.
   *
   * @throws IllegalArgumentException If the basic block was never in the CFG.
   * @throws IllegalArgumentException If the basic block was already removed.
   */
  void doRemove(BB bb) {
    var removed = bbs.remove(bb.id());
    if (removed == null) {
      throw new IllegalArgumentException("BB already removed");
    }
    if (bb.successors().isEmpty()) {
      unmarkExit(bb);
    }
    assert removed == bb;
  }

  /**
   * Mark a basic block as being an exit.
   *
   * <p>This is called from {@link BB} when its successors become empty.
   */
  void markExit(BB bb) {
    assert !exits.contains(bb) : "BB is already an exit";
    exits.add(bb);
  }

  /**
   * Unmark a basic block as being an exit.
   *
   * <p>This is called from {@link BB} when its successors become empty.
   */
  void unmarkExit(BB bb) {
    assert exits.contains(bb) : "BB is already not an exit";
    exits.remove(bb);
  }

  /**
   * Mark an instruction or phi <i>and its auxillary values</i> as belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it inserts or replaces an instruction or phi. Tracked
   * nodes are used for verification.
   */
  void track(InstrOrPhi instrOrPhi) {
    track((Node) instrOrPhi);
    if (instrOrPhi instanceof Instr instr) {
      for (var aux : instr.returns()) {
        if (aux != instrOrPhi) {
          track(aux);
        }
      }
    }
  }

  /**
   * Mark an instructions and/or phis <i>and their auxillary values</i> as belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it inserts or replaces an instruction or phi. Tracked
   * nodes are used for verification.
   */
  void trackAll(Collection<? extends InstrOrPhi> instrOrPhis) {
    for (var instrOrPhi : instrOrPhis) {
      track(instrOrPhi);
    }
  }

  /**
   * Mark an instruction or phi <i>and its auxillary values</i> as no longer belonging to this CFG.
   *
   * <p>This is called from {@link BB} when it replaces or removes an instruction or phi, and {@link
   * CFG} itself when it removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrack(InstrOrPhi instrOrPhi) {
    untrack((Node) instrOrPhi);
    if (instrOrPhi instanceof Instr instr) {
      for (var aux : instr.returns()) {
        if (aux != instrOrPhi) {
          untrack(aux);
        }
      }
    }
  }

  /**
   * Mark instructions and/or phis <i>and their auxillary values</i> as no longer belonging to this
   * CFG.
   *
   * <p>This is called from {@link BB} when it replaces or removes an instruction or phi, and {@link
   * CFG} itself when it removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrackAll(Collection<? extends Node> instrOrPhis) {
    for (var instrOrPhi : instrOrPhis) {
      untrack(instrOrPhi);
    }
  }

  /** Mark a node as belonging to this CFG. */
  private void track(Node node) {
    var id = node.id();
    assert id.clazz().isInstance(node);
    var old = nodes.put(id, node);
    assert old == null : "Node with id already tracked: " + id + "\nold: " + old + "\nnew: " + node;
  }

  /** Mark a node as no longer belonging to this CFG. */
  private void untrack(Node node) {
    var removed = nodes.remove(node.id());
    assert removed != null : "Node was never tracked";
    assert removed == node;
  }

  /**
   * Returns {@code name} if unique to the CFG, otherwise disambiguates with a suffix.
   *
   * <p>This is called within {@link BBId} (importantly not {@link BB} itself), so don't call again
   * or it would be redundant.
   */
  String nextBBId(String name) {
    return nextId(name, nextBbIds);
  }

  /**
   * Returns {@code name} if unique to the CFG, otherwise disambiguates with a suffix.
   *
   * <p>This is called within {@link PhiId} and {@link InstrId} (importantly not {@link Phi} or
   * {@link Instr} themselves), so don't call again or it would be redundant.
   */
  String nextNodeId(String name) {
    return nextId(name, nextNodeIds);
  }

  private String nextId(String name, Map<String, Integer> nextIds) {
    String result;
    if (nextIds.containsKey(name)) {
      result = (name.isEmpty() ? "" : name + "@") + nextIds.get(name);
      nextIds.put(name, nextIds.get(name) + 1);
    } else {
      result = name;
      nextIds.put(name, 0);
    }
    return result;
  }
  // endregion

  // TODO: make sure when we split, delete BBs, phi nodes are updated if necessary, and removed
  // nodes aren't
  //  dependencies of other nodes in the CFG (including removed auxillary nodes, not just
  // instructions).

  // TODO: Fancy toString for Instr and nodes
}
