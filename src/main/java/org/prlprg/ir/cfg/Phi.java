package org.prlprg.ir.cfg;

import static org.prlprg.AppConfig.EAGERLY_VERIFY_PHI_INPUTS;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.Collection;
import java.util.Comparator;
import java.util.Map;
import java.util.SequencedCollection;
import java.util.SequencedSet;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.type.RType;
import org.prlprg.util.SequencedCollections;
import org.prlprg.util.SmallBinarySet;

/**
 * <a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * phi (φ) node</a>: a node referenced within a basic block that may originate from more than one of
 * its predecessors.
 *
 * <p>In this IR, phi nodes always have the exact number of inputs as their basic block's number of
 * predecessors, and each input corresponds to a predecessor. If the phi temporarily needs extra
 * inputs, for blocks that will be future predecessors, they must be stored outside (e.g. in {@link
 * Map Map<Phi, Map<BB, Node>>}) until the predecessor is added. If the phi temporarily needs less
 * inputs, {@link InvalidNode#UNSET_PHI_INPUT} should be used. When a block's predecessors change,
 * its phis automatically change their inputs, gaining {@link InvalidNode#UNSET_PHI_INPUT}s for
 * added predecessors and losing inputs for removed predecessors.
 *
 * <p>Phi nodes can temporarily have only 0 or 1 input. However, before {@link CFG#verify()}, nodes
 * with one input must be replaced with the input itself, and nodes with 0 inputs must be removed.
 * This is automatically done by {@link CFG#cleanup()}.
 */
public final class Phi<T> extends LocalNode<T> implements InstrOrPhi, InstrOrPhiImpl {
  private final SmallBinarySet<Input<? extends T>> inputs;

  /**
   * Downcast {@code Phi<? extends A>} to {@code Phi<? extends B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  @Override
  public <U> Phi<? extends U> cast(Class<U> clazz) {
    return (Phi<U>) super.cast(clazz);
  }

  // region construct
  /** Serialized form where everything is replaced by IDs. */
  public record Serial<T>(
      PhiId<? extends T> id, Collection<? extends InputId<? extends T>> inputIds) {
    Serial(Phi<T> phi) {
      this(phi.id(), phi.inputs().stream().map(Input::id).toList());
    }
  }

  /**
   * Create a new phi-node with the given inputs.
   *
   * <p>The phis' {@link #type()} is the common supertype of all inputs' {@link Node}s, or {@link
   * Void} if there are none.
   */
  Phi(CFG cfg, LocalNodeId<T> id, Collection<? extends Input<? extends T>> inputs) {
    super(cfg, phiType(inputs), PhiId.of(id));

    this.inputs =
        new SmallBinarySet<>(
            inputs.size(), Comparator.comparing(i -> i.incomingBB().id().toString()));
    for (var input : inputs) {
      assert !this.hasIncomingBB(input.incomingBB())
          : "duplicate incoming BB on Phi init: " + input.incomingBB();
      this.inputs.add(input);
    }
  }

  /** The common supertype of all inputs' {@link Node}s, or {@link Void} if there are none. */
  private static <T> RType phiType(Collection<? extends Input<? extends T>> inputs) {
    return inputs.stream().map(Input::node).map(Node::type).reduce(RType.NOTHING, RType::unionOf);
  }

  // endregion constructors

  // region id

  /**
   * {@link LocalNode#id()}, but the ID is a subtype that lets you retrieve the phi using {@link
   * CFG#get(PhiId)} without a cast.
   */
  @Override
  public PhiId<T> id() {
    return (PhiId<T>) super.id();
  }

  // endregion id

  // region inputs
  public sealed interface Input<T> {
    static <T> Input<T> unset(BB incomingBB) {
      return of(incomingBB, InvalidNode.UNSET_PHI_INPUT.cast());
    }

    static <T> Input<T> of(BB incomingBB, Node<T> node) {
      return new InputImpl<>(incomingBB, node);
    }

    /** The predecessor the input node originates from. */
    BB incomingBB();

    /** The phi's runtime value in traces where the trace predecessor is {@link #incomingBB()}. */
    Node<T> node();

    default InputId<T> id() {
      return InputId.of(incomingBB().id(), node().id());
    }
  }

  public sealed interface InputId<T> {
    static <T> InputId<T> of(BBId incomingBBId, NodeId<T> nodeId) {
      return new InputIdImpl<>(incomingBBId, nodeId);
    }

    /** The id of the predecessor the input node originates from. */
    BBId incomingBBId();

    /**
     * The id of the phi's runtime value in traces where the trace predecessor is that identified by
     * {@link #incomingBBId()}.
     */
    NodeId<T> nodeId();

    default Input<T> decode(CFG cfg) {
      return Input.of(cfg.get(incomingBBId()), cfg.get(nodeId()));
    }
  }

  public record InputImpl<T>(BB incomingBB, Node<T> node) implements Input<T> {
    @Override
    public String toString() {
      return incomingBB.id() + ":" + node.id();
    }
  }

  public record InputIdImpl<T>(BBId incomingBBId, NodeId<T> nodeId) implements InputId<T> {
    @Override
    public String toString() {
      return incomingBBId + ":" + nodeId;
    }
  }

  /**
   * (A view of) the inputs to this phi-node.
   *
   * <p>Each input corresponds to a {@link BB} predecessor. The input is the predecessor ("incoming
   * BB") and its {@link Node}. The phi's value at runtime is the node corresponding to the trace
   * predecessor / incoming BB.
   */
  @UnmodifiableView
  public SequencedSet<? extends Input<? extends T>> inputs() {
    return inputs;
  }

  /**
   * (A view of) the input {@link BB}s.
   *
   * <p>This is equivalent to the {@link BB} containing this phi's {@link BB#predecessors()}.
   */
  public @UnmodifiableView SequencedCollection<BB> incomingBBs() {
    return SequencedCollections.lazyMapView(inputs(), Input::incomingBB);
  }

  /**
   * (A view of) the input {@link Node}s.
   *
   * <p>Each of these corresponds to a {@link BB} predecessor. The phi's value at runtime is the
   * node corresponding to the trace predecessor / incoming BB.
   */
  @Override
  public @UnmodifiableView SequencedCollection<? extends Node<? extends T>> inputNodes() {
    return SequencedCollections.lazyMapView(inputs(), Input::node);
  }

  /** The number of inputs to this phi-node. */
  public int numInputs() {
    return inputs().size();
  }

  /** Whether this phi-node contains an input with the given node. */
  public boolean containsInput(Node<?> inputNode) {
    return inputNodes().contains(inputNode);
  }

  /**
   * Whether this phi-node contains an input with the given incoming BB.
   *
   * <p>i.e. whether it's one of the parent block's predecessors.
   */
  public boolean hasIncomingBB(BB incomingBB) {
    return incomingBBs().contains(incomingBB);
  }

  /**
   * Get the input from the given {@link BB}
   *
   * <p>This is the phi's runtime value in the trace where control jumps from the given block to the
   * phi's origin block.
   *
   * @throws IllegalArgumentException if the given block isn't in the phi, i.e. isn't a predecessor.
   */
  public Node<? extends T> input(BB incomingBB) {
    var result = inputs().stream().filter(input -> input.incomingBB() == incomingBB).findFirst();
    if (result.isEmpty()) {
      throw new IllegalArgumentException(
          "Basic block not in phi (not a predecessor): " + incomingBB.id());
    }
    return result.get().node();
  }

  /**
   * Change the input from the given basic block to the given node.
   *
   * <p>Returns the old node.
   *
   * <p>This will record a {@link CFGEdit}.
   *
   * @throws IllegalArgumentException If the incoming BB isn't in the input set.
   *     <p><b>OR</b> if the node is of an incompatible type (the type is also restricted by the
   *     generic argument, but the phi may be upcasted due to erasure).
   */
  public Node<? extends T> setInput(BB incomingBB, Node<? extends T> node) {
    var index = Iterables.indexOf(inputs, input -> input.incomingBB().equals(incomingBB));
    if (index == -1) {
      throw new IllegalArgumentException(
          "incoming BB not a predecessor of "
              + id()
              + "'s BB: "
              + incomingBB.id()
              + " (node = "
              + node.id()
              + ")");
    }

    if (EAGERLY_VERIFY_PHI_INPUTS) {
      eagerlyVerifyInput(Input.of(incomingBB, node));
    }

    var oldNode = inputs.get(index).node();
    inputs.equalReplace(index, Input.of(incomingBB, node));

    updateType();

    cfg()
        .record(
            new CFGEdit.SetPhiInput<>(this, incomingBB, node),
            new CFGEdit.SetPhiInput<>(this, incomingBB, oldNode));
    return oldNode;
  }

  void eagerlyVerifyInputs() {
    for (var input : inputs) {
      eagerlyVerifyInput(input);
    }
  }

  private void eagerlyVerifyInput(Phi.Input<?> input) {
    var issue = cfg().verifyPhiInput(this, input, true);
    if (issue != null) {
      throw new CFGVerifyException(cfg(), issue);
    }
  }

  /**
   * {@link #setInput(BB, Node)} using the input and node of the provided {@link Input}
   * data-structure.
   *
   * <p>Returns the old input's node.
   *
   * <p>This will record a {@link CFGEdit}.
   *
   * @throws IllegalArgumentException If the incoming BB isn't in the input set.
   *     <p><b>OR</b> if the node is of an incompatible type (the type is also restricted by the
   *     generic argument, but the phi may be upcasted due to erasure).
   */
  public Node<? extends T> setInput(Input<? extends T> newInput) {
    return setInput(newInput.incomingBB(), newInput.node());
  }

  @SuppressWarnings("unchecked")
  @Override
  public CascadingInstrUpdate unsafeReplaceInInputs(
      CascadingUpdatedInstrs seen, Node<?> old, Node<?> replacement) {
    for (var i = 0; i < inputs.size(); i++) {
      var input = inputs.get(i);
      if (input.node().equals(old)) {
        inputs.equalReplace(i, Input.of(input.incomingBB(), (Node<? extends T>) replacement));
        cfg()
            .record(
                new CFGEdit.SetPhiInput<>(
                    this, input.incomingBB(), (Node<? extends T>) replacement),
                new CFGEdit.SetPhiInput<>(this, input.incomingBB(), (Node<? extends T>) old));
      }
    }

    var result =
        type() != phiType(inputs)
            ? CascadingInstrUpdate.UPDATED_OUTPUT_TYPES
            : CascadingInstrUpdate.NONE;
    updateType();
    return result;
  }

  /**
   * Add an "unset" node to the phi's inputs for the given BB.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It's called from {@link
   * BB} when it adds a predecessor.
   */
  void unsafeAddUnsetInput(BB incomingBB) {
    unsafeAddInput(Input.of(incomingBB, InvalidNode.UNSET_PHI_INPUT.cast()));
  }

  /**
   * Add an input to the phi.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded, and because it changes
   * the phi's {@link Node#type()} (which may illegally make it a supertype of {@link T}). It's
   * called from {@link BB} when it adds a predecessor.
   */
  @SuppressWarnings("unchecked")
  void unsafeAddInput(Input<?> input) {
    assert !hasIncomingBB(input.incomingBB())
        : "phi is in an inconsistent state, it has an input that it was told to add: "
            + input.incomingBB();
    inputs.add((Input<? extends T>) input);
    // The phi's name changes when the input changes, but unset inputs don't have any affect on it
    // so we don't have to call `updateName()`.

    updateType();
  }

  /**
   * Remove the node in the phi's inputs for the given BB.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It's called from {@link
   * BB} when it removes a predecessor.
   */
  void unsafeRemoveInput(BB incomingBB) {
    var index = Iterables.indexOf(inputs, input -> input.incomingBB().equals(incomingBB));
    assert index != -1
        : "phi is in an inconsistent state, it doesn't have an input that it was told to remove: "
            + incomingBB;
    inputs.removeAt(index);

    updateType();
  }

  /**
   * Replace the incoming BB of an input with a different one. The input's node remains the same.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It should only be used
   * internally by {@link BB}.
   */
  void unsafeReplaceIncomingBB(BB oldBB, BB replacementBB) {
    var index = Iterables.indexOf(inputs, input -> input.incomingBB().equals(oldBB));
    assert index != -1 : "The old incoming BB isn't in the phi's inputs: " + oldBB;
    var node = this.inputs.get(index).node();
    // Can't use `equalReplace` because the index to insert may be different than the one to remove.
    this.inputs.removeAt(index);
    this.inputs.add(Input.of(replacementBB, node));
  }

  // endregion inputs

  // region other `InstrOrPhi` inherited
  /** Returns {@code this}, since a phi simply "outputs" one of its input nodes. */
  @Override
  public ImmutableList<? extends LocalNode<? extends T>> outputs() {
    return ImmutableList.of(this);
  }

  @Override
  public boolean isPure() {
    return true;
  }

  // endregion other `InstrOrPhi` inherited

  // region misc
  private void updateType() {
    unsafeSetType(phiType(inputs));
  }
  // endregion misc
}
