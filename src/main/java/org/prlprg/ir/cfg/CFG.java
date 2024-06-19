package org.prlprg.ir.cfg;

import com.google.common.collect.Iterators;
import com.google.common.collect.Streams;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;
import java.util.function.Predicate;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.analysis.CFGAnalyses;
import org.prlprg.ir.analysis.DefUseAnalysis;
import org.prlprg.ir.analysis.DomTree;
import org.prlprg.ir.cfg.CFGEdit.Semantic;
import org.prlprg.ir.cfg.CFGIterator.DomTreeBfs;
import org.prlprg.ir.cfg.CFGVerifyException.BrokenInvariant;
import org.prlprg.ir.cfg.CFGVerifyException.MissingJump;
import org.prlprg.ir.cfg.CFGVerifyException.PhisInSinglePredecessorBB;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.WeakHashSet;

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
  private final Set<CFGObserver> setObservers = new WeakHashSet<>();
  private final List<CFGObserver> stackObservers = new ArrayList<>();
  private final BB entry;
  private final Set<BB> exits = new HashSet<>();
  private final Map<BBId, BB> bbs = new HashMap<>();
  private final Map<NodeId<?>, Node> nodes = new HashMap<>();
  private int nextBbDisambiguator = 1;
  private int nextInstrOrPhiDisambiguator = 1;
  private @Nullable DomTree cachedDomTree;
  private @Nullable DefUseAnalysis cachedDefUseAnalysis;

  /** Create a new CFG, with a single basic block and no instructions. */
  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  public CFG() {
    entry = new BB(this, new BBIdImpl(this, "entry"));
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
  public boolean contains(BBId bbId) {
    return bbs.containsKey(bbId);
  }

  @Override
  public boolean contains(NodeId<?> nodeId) {
    if (nodeId instanceof GlobalNodeId<?>) {
      throw new IllegalArgumentException(
          "`CFG#contains` can't be called with a `GlobalNodeId`: we don't track whether it's in the CFG, and usually want to special case it anyways");
    }
    return nodes.containsKey(nodeId);
  }

  @Override
  public BB get(BBId bbId) {
    if (!bbs.containsKey(bbId)) {
      throw new NoSuchElementException("BB not in CFG");
    }
    return bbs.get(bbId);
  }

  @SuppressWarnings("unchecked")
  @Override
  public <N extends Node> N get(NodeId<N> nodeId) {
    if (nodeId instanceof GlobalNodeId<?> g) {
      return (N) g.node();
    }

    if (!nodes.containsKey(nodeId)) {
      throw new NoSuchElementException("node not global and not in CFG");
    }
    var node = (N) nodes.get(nodeId);
    assert nodeId.clazz() == null || nodeId.clazz().isInstance(node)
        : "node with id has wrong class: " + nodeId.clazz() + " -> " + node;
    return node;
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
    return addBBWithId(new BBIdImpl(this, name));
  }

  @Override
  public BB addBBWithId(BBId id) {
    var bb = doAddBBWithId(id);
    record(new CFGEdit.InsertBB(bb), new CFGEdit.RemoveBB(bb));
    return bb;
  }

  @Override
  public void remove(BB bb) {
    doRemove(bb);
    record(new CFGEdit.RemoveBB(bb), new CFGEdit.InsertBB(bb));
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
    setObservers.add(observer);
  }

  @Override
  public void removeObserver(CFGObserver observer) {
    if (!setObservers.remove(observer)) {
      throw new IllegalArgumentException("Observer not in CFG");
    }
  }

  @Override
  public void withObserver(CFGObserver observer, Runnable action) {
    var index = stackObservers.size();
    stackObservers.add(observer);
    try {
      action.run();
    } finally {
      stackObservers.remove(index);
    }
  }

  // endregion observers

  // region additional recording operations
  @Override
  public void beginSection(String label) {
    for (var observer : setObservers) {
      observer.beginSection(label);
    }
    for (var observer : stackObservers) {
      observer.beginSection(label);
    }
  }

  @Override
  public void endSection() {
    for (var observer : setObservers) {
      observer.endSection();
    }
    for (var observer : stackObservers) {
      observer.endSection();
    }
  }

  @Override
  public void recordDivider(String label) {
    for (var observer : setObservers) {
      observer.recordDivider(label);
    }
    for (var observer : stackObservers) {
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
        for (var input : phi.inputs()) {
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
              && Streams.stream(domTree.iterDominators(bb, false))
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
        try {
          instr.verify();
        } catch (InstrVerifyException e) {
          errors.add(new CFGVerifyException.InstrVerify(bb.id(), instr.id(), e));
        }
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
        bb -> Iterators.contains(domTree.iterDominators(bb, false), originBB);
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
  void record(Semantic<?> edit, Semantic<?> inverse) {
    invalidateCaches();
    for (var observer : setObservers) {
      observer.record(edit, inverse);
    }
    for (var observer : stackObservers) {
      observer.record(edit, inverse);
    }
  }

  /**
   * Insert and return a new basic block without recording it.
   *
   * <p>This should only be called by {@link CFG} and {@link BB} in {@linkplain Semantic intrinsic}
   * edits.
   */
  BB doAddBB(String name) {
    return doAddBBWithId(new BBIdImpl(this, name));
  }

  private BB doAddBBWithId(BBId id) {
    var bb = new BB(this, id);
    assert !bbs.containsKey(bb.id());
    bbs.put(id, bb);
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

  /** Get the disambiguator and increment it. */
  int nextBBDisambiguator() {
    return nextBbDisambiguator++;
  }

  /** Get the disambiguator and increment it. */
  int nextInstrOrPhiDisambiguator() {
    return nextInstrOrPhiDisambiguator++;
  }

  /** Ensure that the next disambiguator is higher than the id's. */
  void updateNextInstrOrPhiDisambiguator(NodeId<? extends InstrOrPhi> id) {
    nextInstrOrPhiDisambiguator =
        Math.max(nextInstrOrPhiDisambiguator, ((LocalNodeIdImpl<?>) id).disambiguator() + 1);
  }

  /**
   * Set the disambiguator.
   *
   * <p>Only to be used by the {@linkplain CFGParsePrint CFG parser}.
   */
  void setNextInstrOrPhiDisambiguator(int disambiguator) {
    nextInstrOrPhiDisambiguator = disambiguator;
  }
  // endregion for BB and node
}
