package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
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
import java.util.Objects;
import java.util.Set;
import java.util.function.Predicate;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.analysis.CFGAnalyses;
import org.prlprg.ir.analysis.DefUses;
import org.prlprg.ir.analysis.DomTree;
import org.prlprg.ir.analysis.Loops;
import org.prlprg.ir.cfg.CFGEdit.Semantic;
import org.prlprg.ir.cfg.CFGIterator.DomTreeBfs;
import org.prlprg.ir.cfg.CFGVerifyException.BrokenInvariant;
import org.prlprg.ir.cfg.CFGVerifyException.MissingJump;
import org.prlprg.ir.cfg.CFGVerifyException.PhisInEntryBB;
import org.prlprg.ir.cfg.CFGVerifyException.PhisInSinglePredecessorBB;
import org.prlprg.ir.cfg.builder.CFGCleanup;
import org.prlprg.ir.cfg.builder.CFGCompoundMutate;
import org.prlprg.ir.cfg.builder.CFGIntrinsicMutate;
import org.prlprg.ir.cfg.builder.CFGQuery;
import org.prlprg.ir.cfg.builder.CFGVerify;
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
        CFGParsePrint {
  private final Set<CFGObserver> setObservers = new WeakHashSet<>();
  private final List<CFGObserver> stackObservers = new ArrayList<>();
  private final BB entry;
  private final Set<BB> exits = new HashSet<>();
  private final Map<BBId, BB> bbs = new HashMap<>();
  private final ImmutableList<Param<?>> params;
  private final Map<LocalNodeId<?>, LocalNode<?>> localNodes = new HashMap<>();
  private final NodeOrBBIdDisambiguatorMap nextBbDisambiguator = new NodeOrBBIdDisambiguatorMap();
  private final NodeOrBBIdDisambiguatorMap nextInstrOrPhiDisambiguator =
      new NodeOrBBIdDisambiguatorMap();
  private @Nullable DomTree cachedDomTree;
  private @Nullable DefUses cachedDefUses;
  private @Nullable Loops cachedLoops;

  /** Create a new CFG, with no parameters, a single basic block, and no instructions. */
  public CFG() {
    this(ImmutableList.of());
  }

  /** Create a new CFG, with the given parameters, a single basic block, and no instructions. */
  public CFG(Collection<Param.Args> params) {
    // Entry block
    entry = new BB(this, new BBId(0, "entry"));
    nextBbDisambiguator.add("entry", 0);
    bbs.put(entry.id(), entry);
    markExit(entry);

    // Params
    var paramsBuilder = ImmutableList.<Param<?>>builderWithExpectedSize(params.size());
    for (var paramArgs : params) {
      var param = new Param<>(this, paramArgs.type(), uniqueLocalId(paramArgs.name()));
      paramsBuilder.add(param);

      // We need to track while building, so that the next call to `uniqueLocalId` doesn't return
      // the same ID as a previous call if given the same name.
      track(param);
    }
    this.params = paramsBuilder.build();
  }

  /**
   * Create a new CFG, with the given parameters, a single basic block, and no instructions.
   *
   * @param ignore So the JVM signatures aren't the same (it's ugly, but this is package-private).
   */
  CFG(Collection<Param.IdArgs> params, @Nullable Void ignore) {
    // Entry block
    entry = new BB(this, new BBId(0, "entry"));
    nextBbDisambiguator.add("entry", 0);
    bbs.put(entry.id(), entry);
    markExit(entry);

    // Params
    this.params =
        params.stream()
            .map(paramArgs -> new Param<>(this, paramArgs.type(), paramArgs.id()))
            .collect(ImmutableList.toImmutableList());
    for (var param : this.params) {
      track(param);
    }
  }

  // region general properties
  @Override
  public int numBBs() {
    return bbs.size();
  }

  @Override
  public int numNodes() {
    return localNodes.size();
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
  public ImmutableList<Param<?>> params() {
    return params;
  }

  @Override
  public boolean contains(BBId bbId) {
    return bbs.containsKey(bbId);
  }

  @Override
  public boolean contains(LocalNodeId<?> nodeId) {
    return localNodes.containsKey(nodeId);
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
  public <T> LocalNode<T> get(LocalNodeId<T> nodeId) {
    if (!localNodes.containsKey(nodeId)) {
      throw new NoSuchElementException("node not global and not in CFG");
    }

    var node = (LocalNode<T>) localNodes.get(nodeId);
    assert nodeId.type() == null || Objects.equals(nodeId.type(), node.type())
        : "node with id has wrong type: "
            + Objects.requireNonNull(nodeId.type())
            + " -> "
            + node.type();
    return node;
  }

  // endregion general properties

  // region iterate
  @Override
  public Stream<BB> stream() {
    return bbs.values().stream();
  }

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
  public DefUses defUses() {
    if (cachedDefUses == null) {
      cachedDefUses = CFGCleanup.super.defUses();
    }
    return cachedDefUses;
  }

  @Override
  public Loops loops() {
    if (cachedLoops == null) {
      cachedLoops = CFGCleanup.super.loops();
    }
    return cachedLoops;
  }

  // endregion analyses

  // region mutate BBs
  @Override
  public BB addBB() {
    return addBB("");
  }

  @Override
  public BB addBB(String name) {
    return addBBWithId(uniqueBBId(name));
  }

  @Override
  public BB addBBWithId(BBId id) {
    var bb = doAddBB(id);
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

  private void invalidateCachesForInstrChange() {
    cachedDefUses = null;
  }

  private void invalidateCachesForBbChange() {
    invalidateCachesForInstrChange();
    cachedDomTree = null;
    cachedLoops = null;
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
    var prevNodesInBBs = new HashMap<BB, HashSet<LocalNode<?>>>();
    while (iter.hasNext()) {
      var bb = iter.next();

      var prevNodes = new HashSet<LocalNode<?>>(bb.numChildren());
      prevNodesInBBs.put(bb, prevNodes);

      // Every basic block has a non-null jump.
      if (bb.jump() == null) {
        errors.add(new MissingJump(bb.id()));
      }

      // The entry block doesn't have any phi nodes, nor do any blocks with < 2 predecessors.
      if (bb == entry && !bb.phis().isEmpty()) {
        errors.add(new PhisInEntryBB());
      } else if (bb.predecessors().size() < 2 && !bb.phis().isEmpty()) {
        errors.add(new PhisInSinglePredecessorBB(bb.id()));
      }

      // Instructions and phis don't have arguments that were removed from the CFG (or were never in
      // the CFG).
      for (var instrOrPhi : bb) {
        assert instrOrPhi.cfg() == this;

        for (var arg : instrOrPhi.inputNodes()) {
          if (arg instanceof LocalNode<?> localArg) {
            assert localArg.cfg() == this;
            assert !localNodes.containsKey(localArg.id())
                || localNodes.get(localArg.id()) == localArg;

            if (!localNodes.containsKey(localArg.id())) {
              errors.add(
                  new CFGVerifyException.UntrackedArg(bb.id(), instrOrPhi.toString(), arg.id()));
            }
          }
        }
      }

      // Every phi input node is global or originates from a block that the incoming BB dominates
      // (non-strict, so includes the incoming block itself).
      for (var phi : bb.phis()) {
        for (var input : phi.inputs()) {
          var broken = verifyPhiInput(phi, input, false);
          if (broken != null) {
            errors.add(broken);
          }
          if (input.node() == InvalidNode.UNSET_PHI_INPUT) {
            errors.add(
                new CFGVerifyException.UnsetPhiInput(bb.id(), phi.id(), input.incomingBB().id()));
          }
        }
      }

      // Every instruction argument is either global, originates from earlier in the instruction's
      // block, or originates from a strictly dominating block.
      prevNodes.addAll(bb.phis());
      for (var instr : bb.instrs()) {
        for (var arg : instr.inputNodes()) {
          // `prevNodesInBBs` will contain iff the argument originates from earlier in the current
          // block OR the argument originates from anywhere in a strictly dominating block.
          if (arg instanceof LocalNode<?> localArg
              && Streams.stream(domTree.iterDominators(bb, false))
                  .noneMatch(d -> prevNodesInBBs.get(d).contains(localArg))) {
            errors.add(
                new CFGVerifyException.ArgNotDefinedBeforeUse(bb.id(), instr.toString(), arg.id()));
          }
        }
        // The lines where we add to `prevNodes` (this one and the one above the for loop) ensure
        // the invariant in the above comment.
        prevNodes.addAll(instr.outputs());
      }

      // Instruction-specific checks ({@link Instr#verify()}). Example: every {@link ISexp}
      // instruction argument is of the correct (dynamic) type.
      for (var instr : bb.instrs()) {
        try {
          instr.verify();
        } catch (RuntimeException e) {
          errors.add(new CFGVerifyException.InstrVerify(bb.id(), instr.toString(), e));
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

  @Nullable BrokenInvariant verifyPhiInput(Phi<?> phi, Phi.Input<?> input, boolean isEager) {
    // Every phi input node is global or originates from a block that the incoming BB dominates
    // (non-strict, so includes the incoming block itself).
    //
    // If `isEager` is true, we skip checking the invariant if any of the origin BB's transitive
    // successors contain a `null` jump. This is because the jump will eventually be set (perhaps to
    // something that makes origin dominate the incoming BB) and we don't want to force setting it
    // early just to ensure this invariant. If the `null` jump is never set so that origin dominates
    // the incoming BB, we'll report this phi in later in `CFG#verify`.
    var incomingBB = input.incomingBB();

    if (!(input.node() instanceof LocalNode<?> node)) {
      // Node is global.
      return null;
    }

    var domTree = domTree();
    var defUses = defUses();

    var phiBb = defUses.originBB(phi);
    var originBB = defUses.originBB(node);

    if (isEager && Iterators.any(new CFGIterator.Dfs(originBB), bb -> bb.jump() == null)) {
      // Node's origin BB dominates a jump, so we don't know all of of its eventual dominees.
      return null;
    }

    Predicate<BB> isValidIncomingBB =
        bb -> Iterators.contains(domTree.iterDominators(bb, false), originBB);
    return isValidIncomingBB.test(incomingBB)
        ? null
        : new CFGVerifyException.IncorrectIncomingBBInPhi(
            phiBb.id(),
            phi.id(),
            node.id(),
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
    if (edit.affectsCfgGraph()) {
      invalidateCachesForBbChange();
    } else {
      invalidateCachesForInstrChange();
    }
    for (var observer : setObservers) {
      observer.record(edit, inverse);
    }
    for (var observer : stackObservers) {
      observer.record(edit, inverse);
    }
  }

  // region tracking and untracking
  // region BBs
  /**
   * Insert and return a new basic block without recording it.
   *
   * <p>This should only be called by {@link CFG} and {@link BB} in {@linkplain Semantic intrinsic}
   * edits.
   */
  BB doAddBB(BBId id) {
    var bb = new BB(this, id);
    assert !bbs.containsKey(bb.id());

    bbs.put(id, bb);

    markExit(bb);
    nextBbDisambiguator.add(id.name(), id.disambiguator());
    return bb;
  }

  /**
   * Remove a basic block without recording it.
   *
   * @throws IllegalArgumentException If the basic block is the {@linkplain CFG#entry() entry}.
   *     <p><b>OR</b> if the basic block was never in the CFG.
   *     <p><b>OR</b> if the basic block was already removed.
   */
  void doRemove(BB bb) {
    if (bb == entry) {
      throw new IllegalArgumentException("Can't remove entry BB");
    }

    var removed = bbs.remove(bb.id());

    if (removed == null) {
      throw new IllegalArgumentException("BB already removed");
    }
    assert removed == bb;

    if (bb.successors().isEmpty()) {
      unmarkExit(bb);
    }
    var id = bb.id();
    nextBbDisambiguator.remove(id.name(), id.disambiguator());
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

  // endregion BBs

  // region nodes
  /**
   * Mark an instruction or phi as belonging to this CFG.
   *
   * <p>Additionally, if an instruction, tracks its {@link InstrOutput}s.
   *
   * <p>This is called from {@link BB} when it inserts or replaces an instruction or phi. Tracked
   * nodes are used for verification.
   */
  void track(InstrOrPhi instrOrPhi) {
    switch (instrOrPhi) {
      case Phi<?> phi -> track((LocalNode<?>) phi);
      case Instr instr -> {
        for (var output : instr.outputs()) {
          track(output);
        }
      }
    }
  }

  /**
   * @see #track(InstrOrPhi)
   */
  void track(Phi<?> phi) {
    track((InstrOrPhi) phi);
  }

  /**
   * Mark instructions and/or phis as belonging to this CFG.
   *
   * @see #track(InstrOrPhi)
   */
  void trackAll(Collection<? extends InstrOrPhi> instrOrPhis) {
    for (var instrOrPhi : instrOrPhis) {
      track(instrOrPhi);
    }
  }

  /**
   * @see #untrack(InstrOrPhi)
   */
  void untrack(Phi<?> phi) {
    untrack((InstrOrPhi) phi);
  }

  /**
   * Mark an instruction or phi as no longer belonging to this CFG.
   *
   * <p>Additionally, if an instruction, untracks its {@link InstrOutput}s.
   *
   * <p>This is called from {@link BB} when it replaces or removes an instruction or phi, and {@link
   * CFG} itself when it removes a {@link BB}. All local nodes in the CFG must be tracked (global
   * nodes are <i>not</i> tracked)
   */
  void untrack(InstrOrPhi instrOrPhi) {
    switch (instrOrPhi) {
      case Phi<?> phi -> untrack((LocalNode<?>) phi);
      case Instr instr -> {
        for (var output : instr.outputs()) {
          untrack(output);
        }
      }
    }
  }

  /**
   * Mark instructions and/or phis as no longer belonging to this CFG.
   *
   * @see #untrack(InstrOrPhi)
   */
  void untrackAll(Collection<? extends InstrOrPhi> instrOrPhis) {
    for (var instrOrPhi : instrOrPhis) {
      untrack(instrOrPhi);
    }
  }

  /** Mark a local node as belonging to this CFG. */
  void track(LocalNode<?> node) {
    assert node.cfg() == this : "node to track is global or belongs to a different CFG: " + node;

    var id = node.id();
    assert node.type() == id.type()
        : "node's type isn't its ID type: "
            + node.type()
            + " vs "
            + (id.type() == null ? "null" : Objects.requireNonNull(id.type()));
    var old = localNodes.put(id, node);
    assert old == null : "node with id already tracked: " + id + "\nold: " + old + "\nnew: " + node;
    nextInstrOrPhiDisambiguator.add(id.name(), id.disambiguator());
  }

  /**
   * Mark a node as no longer belonging to this CFG.
   *
   * <p>If the node is an instruction or phi, it requires extra code to fully untrack. This method
   * should remain private.
   */
  void untrack(LocalNode<?> node) {
    assert node.cfg() == this : "node to untrack is global or belongs to a different CFG: " + node;

    var id = node.id();
    assert node.type() == id.type()
        : "node's type isn't its ID type: "
            + node.type()
            + " vs "
            + (id.type() == null ? "null" : Objects.requireNonNull(id.type()));
    var removed = localNodes.remove(node.id());
    assert removed != null : "node was never tracked";
    assert removed == node;
    nextInstrOrPhiDisambiguator.remove(id.name(), id.disambiguator());
  }

  // endregion nodes
  // endregion tracking and untracking

  // endregion unique ids
  /** Return a unique id for an {@linkplain BB basic block} with the given name. */
  BBId uniqueBBId(String name) {
    return new BBId(nextBbDisambiguator.get(name), name);
  }

  /**
   * Return a unique id for a {@linkplain LocalNode local node} with no name (empty string).
   *
   * <p>The returned ID can be assigned to any type of local node, because its type checked at
   * runtime is assigned in the {@link LocalNode} constructor.
   */
  <T> LocalNodeId<T> uniqueLocalId() {
    return this.uniqueLocalId("");
  }

  /**
   * Return a unique id for an {@linkplain LocalNode local node} with the given name.
   *
   * <p>The returned ID can be assigned to any type of local node, because its type checked at
   * runtime is assigned in the {@link LocalNode} constructor.
   */
  <T> LocalNodeId<T> uniqueLocalId(String name) {
    return new LocalNodeId<>(nextInstrOrPhiDisambiguator.get(name), name);
  }
  // region unique ids
  // endregion for BB and node
}
