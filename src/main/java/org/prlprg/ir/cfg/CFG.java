package org.prlprg.ir.cfg;

import com.google.common.collect.Iterators;
import com.google.common.collect.Streams;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
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
import java.util.function.Predicate;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.analysis.CFGAnalyses;
import org.prlprg.ir.analysis.DefUseAnalysis;
import org.prlprg.ir.analysis.DomTree;
import org.prlprg.ir.cfg.CFGIterator.DomTreeBfs;
import org.prlprg.ir.cfg.CFGVerifyException.BrokenInvariant;
import org.prlprg.ir.cfg.CFGVerifyException.MissingJump;
import org.prlprg.ir.cfg.CFGVerifyException.PhisInSinglePredecessorBB;
import org.prlprg.parseprint.Printer;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
@SuppressFBWarnings({"EI_EXPOSE_REP", "EI_EXPOSE_REP2"})
public class CFG
    implements CFGQuery,
        CFGAnalyses,
        CFGIntrinsicMutate,
        CFGCompoundMutate,
        CFGCleanup,
        CFGVerify,
        CFGParsePrint,
        CFGPirSerialize {
  private final List<CFGObserver> observers = new ArrayList<>();
  private final BB entry;
  // These are ordered to ensure deterministic traversal
  private final SequencedSet<BB> exits = new LinkedHashSet<>();
  private final SequencedMap<BBId, BB> bbs = new LinkedHashMap<>();
  // These don't need to be ordered, because we don't traverse them directly
  private final Map<NodeId<?>, Node> nodes = new HashMap<>();
  private final InstrPhiOrBBIdMap nextBbIds = new InstrPhiOrBBIdMap();
  private final InstrPhiOrBBIdMap nextInstrOrPhiIds = new InstrPhiOrBBIdMap();
  //
  private @Nullable DomTree cachedDomTree;
  private @Nullable DefUseAnalysis cachedDefUseAnalysis;

  /** Create a new CFG, with a single basic block and no instructions. */
  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  public CFG() {
    // Prevent blocks and nodes from having these ids without a disambiguator
    nextInstrOrPhiIds.next("n");
    nextBbIds.next("bb");
    //
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
  public <N extends Node> N get(NodeId<N> nodeId) {
    if (nodeId instanceof GlobalNodeId<N> g) {
      return g.node();
    }

    if (!nodes.containsKey(nodeId)) {
      throw new NoSuchElementException("node not global and not in CFG");
    }
    @SuppressWarnings("unchecked")
    var node = (N) nodes.get(nodeId);
    assert nodeId.clazz() == null || nodeId.clazz().isInstance(node)
        : "node with id has wrong class: " + nodeId.clazz() + " -> " + node;
    return node;
  }

  @Override
  public <N extends Node> Phi.Input<N> get(Phi.InputId<N> inputId) {
    var bb = get(inputId.incomingBBId());
    var node = get(inputId.nodeId());
    return new Phi.Input<>(bb, node);
  }

  // endregion general properties

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

  // endregion iterate

  // region analyses
  @Override
  public DomTree domTree() {
    if (cachedDomTree == null) {
      cachedDomTree = CFGCleanup.super.domTree();
    }
    return cachedDomTree;
  }

  @Override
  public DefUseAnalysis defUses() {
    if (cachedDefUseAnalysis == null) {
      cachedDefUseAnalysis = CFGCleanup.super.defUses();
    }
    return cachedDefUseAnalysis;
  }

  // endregion analyses

  // region mutate BBs
  @Override
  public BB addBB() {
    return addBB("");
  }

  @Override
  public BB addBB(String name) {
    var bb = doAddBB(name);
    record(new CFGEdit.InsertBB(bb.id().name()), new CFGEdit.RemoveBB(bb));
    return bb;
  }

  @Override
  public void remove(BB bb) {
    doRemove(bb);
    record(new CFGEdit.RemoveBB(bb), new CFGEdit.InsertBB(bb.id().name()));
  }

  @Override
  public BB remove(BBId bbId) {
    var bb = get(bbId);
    remove(bb);
    return bb;
  }

  // endregion mutate BBs

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

  // endregion observers

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

  private void invalidateCaches() {
    cachedDomTree = null;
    cachedDefUseAnalysis = null;
  }

  // endregion additional recording operations

  // region verify and toString
  @Override
  public void verify() {
    var domTree = domTree();
    var errors = new ArrayList<BrokenInvariant>();

    // Must be dom-tree so that we store nodes encountered from dominators to correctly report that
    // they don't need to be in phi nodes (unlike those not in dominators).
    var iter = new CFGIterator.DomTreeBfs(domTree);
    var prevNodesInBBs = new HashMap<BB, HashSet<Node>>();
    while (iter.hasNext()) {
      var bb = iter.next();

      var prevNodes = new HashSet<Node>(bb.numChildren());
      prevNodesInBBs.put(bb, prevNodes);

      // Every basic block has a non-null jump.
      if (bb.jump() == null) {
        errors.add(new MissingJump(bb.id()));
      }

      // Only basic blocks with two or more predecessors have phi nodes.
      if (bb.predecessors().size() < 2 && !bb.phis().isEmpty()) {
        errors.add(new PhisInSinglePredecessorBB(bb.id()));
      }

      // Instructions and phis don't have arguments that were removed from the CFG (or were never in
      // the CFG).
      for (var instrOrPhi : bb) {
        assert instrOrPhi.cfg() == this;

        for (var arg : instrOrPhi.args()) {
          assert arg.cfg() == null || arg.cfg() == this;
          assert !nodes.containsKey(arg.id()) || nodes.get(arg.id()) == arg;

          if (arg.cfg() != null) {
            if (!nodes.containsKey(arg.id())) {
              errors.add(new CFGVerifyException.UntrackedArg(bb.id(), instrOrPhi.id(), arg.id()));
            }
          }
        }
      }

      // Every phi input node is global or originates from a block that the incoming BB dominates
      // (non-strict, so includes the incoming block itself).
      for (var phi : bb.phis()) {
        for (var input : phi.iterInputs()) {
          var broken = verifyPhiInput(phi, input);
          if (broken != null) {
            errors.add(broken);
          }
        }
      }

      // Every instruction argument is either global, originates from earlier in the instruction's
      // block, or originates from a strictly dominating block.
      prevNodes.addAll(bb.phis());
      for (var instr : bb.instrs()) {
        for (var arg : instr.args()) {
          // `prevNodesInBBs` will contain iff the argument originates from earlier in the current
          // block OR the argument originates from anywhere in a strictly dominating block.
          if (arg.origin() != null
              && Streams.stream(domTree.dominators(bb, false))
                  .noneMatch(d -> prevNodesInBBs.get(d).contains(arg.origin()))) {
            errors.add(
                new CFGVerifyException.ArgNotDefinedBeforeUse(bb.id(), instr.id(), arg.id()));
          }
        }
        // The lines where we add to `prevNodes` (this one and the one above the for loop) ensure
        // the invariant in the above comment.
        prevNodes.addAll(instr.returns());
      }

      // Instruction-specific checks ({@link Instr#verify()}). Example: every {@link RValue}
      // instruction argument is of the correct (dynamic) type.
      for (var instr : bb.instrs()) {
        instr.verify();
      }
    }

    for (var remainingBBId : iter.remainingBBIds()) {
      // Every basic block is connected to the entry block.
      errors.add(new CFGVerifyException.NotReachable(remainingBBId));
    }

    if (!errors.isEmpty()) {
      throw new CFGVerifyException(this, errors);
    }
  }

  @Nullable BrokenInvariant verifyPhiInput(Phi<?> phi, Phi.Input<?> input) {
    // Every phi input node is global or originates from a block that the incoming BB dominates
    // (non-strict, so includes the incoming block itself).
    var incomingBB = input.incomingBB();
    var node = input.node();

    if (node.cfg() == null) {
      // Node is global.
      return null;
    }

    var domTree = domTree();
    var defUses = defUses();

    var originBB = defUses.originBB(node);
    Predicate<BB> isValidIncomingBB =
        bb -> Iterators.contains(domTree.dominators(bb, false), originBB);
    return isValidIncomingBB.test(incomingBB)
        ? null
        : new CFGVerifyException.IncorrectIncomingBBInPhi(
            incomingBB.id(),
            phi.id(),
            originBB.id(),
            incomingBB.id(),
            phi.incomingBBs().stream().filter(isValidIncomingBB).map(BB::id).toList());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  // endregion verify and toString

  // region for BB and node
  /** Record an edit to this CFG. */
  void record(CFGEdit.Intrinsic<?> edit, CFGEdit.Intrinsic<?> inverse) {
    invalidateCaches();
    for (var observer : observers) {
      observer.record(edit, inverse);
    }
  }

  /**
   * Insert and return a new basic block without recording it.
   *
   * <p>This should only be called by {@link CFG} and {@link BB} in {@linkplain CFGEdit.Intrinsic
   * intrinsic} edits.
   */
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
    assert removed == bb;

    nextBbIds.remove(bb.id().name());

    if (bb.successors().isEmpty()) {
      unmarkExit(bb);
    }
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
   * <p>This is called from {@link BB} when it inserts or replaces an instruction or phi. All local
   * nodes in the CFG must be tracked (global nodes are <i>not</i> tracked).
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
   * CFG} itself when it removes a {@link BB}. All local nodes in the CFG must be tracked (global
   * nodes are <i>not</i> tracked)
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

    nextInstrOrPhiIds.remove(instrOrPhi.id().name());
  }

  /**
   * Mark instructions and/or phis <i>and their auxillary values</i> as no longer belonging to this
   * CFG.
   *
   * <p>This is called from {@link BB} when it replaces or removes an instruction or phi, and {@link
   * CFG} itself when it removes a {@link BB}. Tracked nodes are used for verification.
   */
  void untrackAll(Collection<? extends InstrOrPhi> instrOrPhis) {
    for (var instrOrPhi : instrOrPhis) {
      untrack(instrOrPhi);
    }
  }

  /**
   * Mark a node as belonging to this CFG.
   *
   * <p>If the node is an instruction or phi, it may in the future require extra code to fully
   * untrack. This method should remain private.
   */
  private void track(Node node) {
    assert node.cfg() == this : "node to track is global or belongs to a different CFG: " + node;

    var id = node.id();
    assert id.clazz() == null || id.clazz().isInstance(node);
    var old = nodes.put(id, node);
    assert old == null : "node with id already tracked: " + id + "\nold: " + old + "\nnew: " + node;
  }

  /**
   * Mark a node as no longer belonging to this CFG.
   *
   * <p>If the node is an instruction or phi, it requires extra code to fully untrack. This method
   * should remain private.
   */
  private void untrack(Node node) {
    assert node.cfg() == this : "node to untrack is global or belongs to a different CFG: " + node;

    var removed = nodes.remove(node.id());
    assert removed != null : "node was never tracked";
    assert removed == node;
  }

  /**
   * Escapes and disambiguates {@code name}, or replaces with a default id if empty.
   *
   * <p>This is called within {@link BBId} (importantly not {@link BB} itself), so don't call again
   * or it will be redundant.
   */
  String nextBBId(String name) {
    if (name.isEmpty()) {
      name = "bb";
    }
    return nextBbIds.next(name);
  }

  /**
   * Escapes and disambiguates {@code name}, or replaces with a default id if empty.
   *
   * <p>This is called within {@link PhiId} and {@link InstrId} (importantly not {@link Phi} or
   * {@link Instr} themselves), so don't call again or it will be redundant.
   */
  String nextInstrOrPhiId(String name) {
    if (name.isEmpty()) {
      name = "n";
    }
    return nextInstrOrPhiIds.next(name);
  }
  // endregion for BB and node
}
