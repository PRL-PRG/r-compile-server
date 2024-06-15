package org.prlprg.ir.cfg;

import static org.prlprg.AppConfig.EAGERLY_VERIFY_PHI_INPUTS;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.SequencedCollection;
import java.util.SequencedMap;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/**
 * <a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * phi (φ) node</a>: a node referenced within a basic block that may originate from more than one of
 * its predecessors.
 *
 * <p>Each φ only handles nodes of a particular type, e.g. {@link RValue}s or {@link FrameState}s.
 * This interface is also extended for specific classes so that it can inherit them, e.g. {@link
 * RValuePhi} and {@link FrameStatePhi}.
 *
 * <p>φ nodes can temporarily have only 0 or 1 input. However, before {@link CFG#verify()}, nodes
 * with one input must be replaced with the input itself, and nodes with 0 inputs must be removed.
 */
public non-sealed interface Phi<N extends Node> extends InstrOrPhi {
  /**
   * Returns the most specific class with a {@link Phi} implementation where both input nodes are
   * subclasses.
   *
   * <p>This <i>does not</i> return the phi class itself. For example, if both nodes are {@link
   * RValue}s, it would return {@link RValue}, not {@link RValuePhi}.
   *
   * @throws IllegalArgumentException if there are no such classes.
   */
  static Class<? extends Node> commonInputSuperclass(
      Class<? extends Node> a, Class<? extends Node> b) {
    if (InvalidNode.class.isAssignableFrom(a) && InvalidNode.class.isAssignableFrom(b)) {
      // WARNING: If every node is invalid, the phi will only be able to have invalid node inputs,
      // which is an issue because it may be set with valid inputs later. Currently this never
      // happens, but if it does, the solution is to make it so that when `commonInputSuperclass`
      // returns `InvalidNode` for all classes, replace the entire phi with an invalid node (because
      // whatever we're doing we already accepted we'll have invalid stub nodes).
      return InvalidNode.class;
    } else if (RValue.class.isAssignableFrom(a) && RValue.class.isAssignableFrom(b)) {
      return RValue.class;
    } else if (DeoptReason.class.isAssignableFrom(a) && DeoptReason.class.isAssignableFrom(b)) {
      return DeoptReason.class;
    } else if (FrameState.class.isAssignableFrom(a) && FrameState.class.isAssignableFrom(b)) {
      return FrameState.class;
    } else {
      throw new IllegalArgumentException(
          "No common φ type implemented for the given classes: " + a + " and " + b);
    }
  }

  /**
   * The type of node this is a phi node for. All incoming nodes are an instance of this class, as
   * well as the phi itself (revealed via {@link #cast()}).
   */
  Class<N> nodeClass();

  /**
   * Cast the phi to its node class.
   *
   * <p>{@code Phi<N> extends N} holds for every subclass, but it can't be expressed by Java's type
   * system, so we need this method as a workaround/
   */
  @SuppressWarnings("unchecked")
  default N cast() {
    assert nodeClass().isInstance(this);
    return (N) this;
  }

  /** (A view of) the inputs to this φ-node. */
  @UnmodifiableView
  SequencedMap<BB, N> inputs();

  /** A stream of the inputs to this φ-node, represented as {@link Phi.Input}s. */
  default Stream<Input<N>> streamInputs() {
    return inputs().entrySet().stream().map(e -> new Input<>(e.getKey(), e.getValue()));
  }

  /** An iterable of the inputs to this φ-node, represented as {@link Phi.Input}s. */
  default Iterable<Input<N>> iterInputs() {
    return streamInputs()::iterator;
  }

  /** (A view of) the input {@link BB}s. */
  default @UnmodifiableView SequencedCollection<BB> incomingBBs() {
    return inputs().sequencedKeySet();
  }

  /** (A view of) the input {@link Node}s. */
  default @UnmodifiableView SequencedCollection<N> inputNodes() {
    return inputs().sequencedValues();
  }

  /** The number of inputs to this φ-node. */
  default int numInputs() {
    return inputs().size();
  }

  /** Whether this φ-node contains the given input. */
  @SuppressWarnings("SuspiciousMethodCalls")
  default boolean containsInput(Node inputNode) {
    return inputs().containsValue(inputNode);
  }

  /** Whether this φ-node contains the given input. */
  default boolean containsInput(BB incomingBB) {
    return inputs().containsKey(incomingBB);
  }

  /**
   * Get the input from the given {@link BB}, i.e. the phi's value when control jumps from that
   * block to the phi's origin block.
   *
   * @throws IllegalArgumentException if the given block isn't in the phi, i.e. isn't a predecessor.
   */
  default N input(BB incomingBB) {
    var result = inputs().get(incomingBB);
    if (result == null) {
      throw new IllegalArgumentException(
          "basic block not in phi (not a predecessor): " + incomingBB.id());
    }
    return result;
  }

  /**
   * Change the input from the given basic block to the given node. Returns the old node.
   *
   * @throws IllegalArgumentException If the incoming BB isn't in the input set.
   * @throws IllegalArgumentException If the node is of an incompatible type (the type is also
   *     restricted by the generic argument, but the phi may be upcasted due to erasure).
   */
  N setInput(BB incomingBB, N node);

  /**
   * {@link #setInput(BB, N)} using the input and node of the provided {@link Input} data-structure.
   *
   * @throws IllegalArgumentException If the incoming BB isn't in the input set.
   * @throws IllegalArgumentException If the node is of an incompatible type (the type is also
   *     restricted by the generic argument, but the phi may be upcasted due to erasure).
   */
  default N setInput(Input<N> newInput) {
    return setInput(newInput.incomingBB(), newInput.node());
  }

  /** {@link Phi#inputNodes()} but accessible from {@link InstrOrPhi}. */
  // The collection is covariant here because it's unmodifiable.
  // We could alternatively make all `args()` `SequencedCollection<? extends Node>`, but it doesn't
  // matter and this is a smaller signature.
  @SuppressWarnings("unchecked")
  @Override
  default @UnmodifiableView SequencedCollection<Node> args() {
    return (SequencedCollection<Node>) inputNodes();
  }

  /**
   * Returns {@code this}, since a phi is an instruction which simply "returns" one of its
   * arguments.
   */
  @Override
  default ImmutableList<Node> returns() {
    return ImmutableList.of(this);
  }

  /** true (phis never have side-effects). */
  @Override
  default boolean isPure() {
    return true;
  }

  @Override
  NodeId<? extends Phi<N>> id();

  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   */
  record Args(Class<? extends Node> nodeClass, SequencedCollection<? extends Input<?>> inputs) {}

  /** Serialized form where everything is replaced by IDs. */
  record Serial(
      NodeId<? extends Phi<?>> id,
      Class<? extends Node> nodeClass,
      SequencedCollection<? extends InputId<?>> inputIds) {
    Serial(Phi<?> phi) {
      this(phi.id(), phi.nodeClass(), phi.streamInputs().map(Input::id).toList());
    }
  }

  record Input<N extends Node>(BB incomingBB, N node) {
    static <N extends Node> Input<N> unset(BB incomingBB) {
      return of(incomingBB, InvalidNode.UNSET_PHI_INPUT.uncheckedCast());
    }

    public static <N extends Node> Input<N> of(BB incomingBB, N node) {
      return new Input<>(incomingBB, node);
    }

    @SuppressWarnings("unchecked")
    public InputId<N> id() {
      return InputId.of(incomingBB.id(), (NodeId<? extends N>) node.id());
    }
  }

  record InputId<N extends Node>(BBId incomingBBId, NodeId<? extends N> nodeId) {
    public static <N extends Node> InputId<N> of(BBId incomingBBId, NodeId<? extends N> nodeId) {
      return new InputId<>(incomingBBId, nodeId);
    }

    public Input<N> decode(CFG cfg) {
      return new Input<>(cfg.get(incomingBBId), cfg.get(nodeId));
    }

    @Override
    public String toString() {
      return incomingBBId + ":" + nodeId;
    }
  }
}

abstract class PhiImpl<N extends Node> implements Phi<N> {
  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   *
   * <p>Unlike {@link Phi.Args}, this exposes that phis can be created with existing IDs. Such
   * functionality is only used in {@link CFGEdit}s that are replayed to maintain determinism.
   */
  record Args(
      @Nullable NodeId<? extends Phi<? extends Node>> id,
      Class<? extends Node> nodeClass,
      SequencedCollection<? extends Input<?>> inputs) {
    Args(Phi.Args args) {
      this(null, args.nodeClass(), args.inputs());
    }

    Args(CFG cfg, Serial serial) {
      this(
          serial.id(),
          serial.nodeClass(),
          serial.inputIds().stream().map(id -> id.decode(cfg)).toList());
    }

    Args(Phi<?> phi) {
      this(phi.id(), phi.nodeClass(), phi.streamInputs().toList());
    }
  }

  private final Class<N> nodeClass;
  private final CFG cfg;
  private final LocalNodeIdImpl<?> id;
  private final SequencedMap<BB, N> inputs;

  /**
   * Create a new φ-node for nodes of the given class.
   *
   * <p>The phi's node class will be either the given class <i>or</i> a superclass, and the phi
   * itself inherits its node class. The phi's node class will be specific enough so that it's
   * acceptable to replace a node of the given class with this φ, anywhere.
   *
   * @throws IllegalArgumentException If inputs is empty.
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  @SuppressWarnings("unchecked")
  static <N extends Node> Phi<N> forClass(
      @Nullable NodeId<? extends Phi<? extends N>> presetId,
      Class<? extends N> nodeSubclass,
      CFG cfg,
      SequencedCollection<? extends Input<?>> inputs) {
    Phi<?> phi;
    if (RValue.class.isAssignableFrom(nodeSubclass)) {
      phi = new RValuePhiImpl(cfg, presetId, inputs);
    } else if (DeoptReason.class.isAssignableFrom(nodeSubclass)) {
      phi = new DeoptReasonPhiImpl(cfg, presetId, inputs);
    } else if (FrameState.class.isAssignableFrom(nodeSubclass)) {
      phi = new FrameStatePhiImpl(cfg, presetId, inputs);
    } else {
      throw new UnsupportedOperationException(
          "No φ type implemented for the given class: " + nodeSubclass);
    }
    return (Phi<N>) phi;
  }

  @SuppressWarnings("unchecked")
  protected PhiImpl(
      Class<N> nodeClass,
      CFG cfg,
      @Nullable NodeId<?> presetId,
      Collection<? extends Input<?>> inputs) {
    this.inputs = new LinkedHashMap<>(inputs.size());
    for (var input : inputs) {
      assert !this.inputs.containsKey(input.incomingBB())
          : "duplicate incoming BB on Phi init: " + input.incomingBB();
      this.inputs.put(input.incomingBB(), (N) input.node());
    }
    this.nodeClass = nodeClass;
    this.cfg = cfg;

    if (presetId == null) {
      id = new LocalNodeIdImpl<>(this, "");
    } else {
      if (!(presetId instanceof LocalNodeIdImpl<?> i)) {
        throw new IllegalArgumentException(
            "Node a a phi ID: "
                + presetId
                + "\nTo get this, you may have improperly casted a NodeId's generic argument.");
      }
      i.lateAssignClass(getClass());
      id = i;
    }

    for (var inputNode : inputNodes()) {
      if (!nodeClass.isInstance(inputNode)) {
        throw new IllegalArgumentException(
            "Input node isn't an instance of the Phi's node class: "
                + inputNode
                + " ("
                + inputNode.getClass().getSimpleName()
                + ") is not an instance of "
                + nodeClass);
      }
    }
    streamInputs().forEach(this::verifyInputIfEagerConfig);
    assert nodeClass.isAssignableFrom(InvalidNode.class)
        : "InvalidNode should be an instance of any phi class";
  }

  @Override
  public Class<N> nodeClass() {
    return nodeClass;
  }

  @Override
  public SequencedMap<BB, N> inputs() {
    return Collections.unmodifiableSequencedMap(inputs);
  }

  /**
   * Add an "unset" node to the phi's inputs for the given BB.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It's called from {@link
   * BB} when it adds a predecessor.
   */
  void unsafeAddUnsetInput(BB incomingBB) {
    assert !inputs.containsKey(incomingBB)
        : "phi is in an inconsistent state, it has an input that it was told to add: " + incomingBB;
    inputs.put(incomingBB, InvalidNode.UNSET_PHI_INPUT.uncheckedCast());
    // The phi's name changes when the input changes, but unset inputs don't have any affect on it
    // so we don't have to call `updateName()`.
  }

  /**
   * Remove the node in the phi's inputs for the given BB.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It's called from {@link
   * BB} when it removes a predecessor.
   */
  void unsafeRemoveInput(BB incomingBB) {
    assert inputs.containsKey(incomingBB)
        : "phi is in an inconsistent state, it doesn't have an input that it was told to remove: "
            + incomingBB;
    inputs.remove(incomingBB);
    // The phi's name changes when the input changes.
    updateName();
  }

  /**
   * Replace the incoming BB of an input with a different one. The input's node remains the same.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It should only be used
   * internally by {@link BB}.
   */
  void unsafeReplaceIncomingBB(BB oldBB, BB replacementBB) {
    var node = this.inputs.remove(oldBB);
    assert node != null : "The old incoming BB isn't in the phi's inputs: " + oldBB;
    this.inputs.put(replacementBB, node);
  }

  @Override
  public N setInput(BB incomingBB, N node) {
    var oldNode = inputs.get(incomingBB);

    if (oldNode == null) {
      throw new IllegalArgumentException(
          "incoming BB not a predecessor of "
              + id
              + "'s BB: "
              + incomingBB.id()
              + " (node = "
              + node.id()
              + ")");
    }
    if (!nodeClass.isInstance(node)) {
      throw new IllegalArgumentException(
          "Tried to add an input of incompatible type to "
              + id
              + ": "
              + node.id()
              + " ("
              + node.getClass().getSimpleName()
              + ") is not an instance of the phi's node class "
              + nodeClass.getSimpleName());
    }
    verifyInputIfEagerConfig(new Input<>(incomingBB, node));

    inputs.put(incomingBB, node);
    // The phi's name changes when the input changes.
    updateName();

    cfg.record(
        new CFGEdit.SetPhiInput<>(this, incomingBB, node),
        new CFGEdit.SetPhiInput<>(this, incomingBB, oldNode));
    return oldNode;
  }

  private void updateName() {
    // cfg().untrack(this);
    // id = new PhiId<>(this);
    // cfg().track(this);
  }

  @SuppressWarnings("unchecked")
  @Override
  public void replaceInArgs(Node old, Node replacement) {
    if (!nodeClass.isInstance(replacement)) {
      throw new IllegalArgumentException(
          "Tried to replace with a node of incompatible type: "
              + replacement
              + " ("
              + replacement.getClass().getSimpleName()
              + ") is not an instance of the phi's node class "
              + nodeClass.getSimpleName());
    }
    for (var input : this.inputs.entrySet()) {
      if (input.getValue().equals(old)) {
        input.setValue((N) replacement);
        cfg.record(
            new CFGEdit.SetPhiInput<>(this, input.getKey(), (N) replacement),
            new CFGEdit.SetPhiInput<>(this, input.getKey(), (N) old));
      }
    }
  }

  private void verifyInputIfEagerConfig(Phi.Input<?> input) {
    if (EAGERLY_VERIFY_PHI_INPUTS) {
      var issue = cfg().verifyPhiInput(this, input);
      if (issue != null) {
        throw new CFGVerifyException(cfg(), issue);
      }
    }
  }

  @Override
  public CFG cfg() {
    return cfg;
  }

  @Override
  public NodeId<? extends Phi<N>> id() {
    return uncheckedCastId();
  }

  @SuppressWarnings("unchecked")
  protected <T extends Phi<N>> NodeId<T> uncheckedCastId() {
    return (NodeId<T>) id;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private Phi<?> parse(Parser p) {
    throw new UnsupportedOperationException("can't parse a Phi outside of a BB");
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(
            new BBParseOrPrintContext(
                null,
                p.context() instanceof HasSEXPParseContext h
                    ? h.sexpParseContext()
                    : new SEXPParseContext(),
                p instanceof HasSEXPPrintContext h ? h.sexpPrintContext() : new SEXPPrintContext(),
                cfg(),
                null))
        .print(this);
  }
}
