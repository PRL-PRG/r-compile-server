package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.function.Predicate;
import java.util.stream.Stream;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.util.MapListView;

/**
 * <a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node</a>: a node referenced within a basic block that may originate from more than one of its
 * predecessors.
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
    if (RValue.class.isAssignableFrom(a) && RValue.class.isAssignableFrom(b)) {
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
   * Create a new φ-node for the given node class. It should implement the necessary superclass so
   * that it's acceptable to replace a node of this class with this φ.
   *
   * @throws IllegalArgumentException If inputs is empty.
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  @SuppressWarnings("unchecked")
  static <N extends Node> Phi<N> forClass(
      Class<? extends N> nodeClass,
      CFG cfg,
      @Nullable String name,
      Collection<? extends Input<? extends N>> inputs) {
    Phi<?> phi;
    if (RValue.class.isAssignableFrom(nodeClass)) {
      phi = new RValuePhiImpl(cfg, name, inputs);
    } else if (DeoptReason.class.isAssignableFrom(nodeClass)) {
      phi = new DeoptReasonPhiImpl(cfg, name, inputs);
    } else if (FrameState.class.isAssignableFrom(nodeClass)) {
      phi = new FrameStatePhiImpl(cfg, name, inputs);
    } else {
      throw new UnsupportedOperationException(
          "No φ type implemented for the given class: " + nodeClass);
    }
    for (var input : inputs) {
      if (!nodeClass.isInstance(input.node())) {
        throw new IllegalArgumentException(
            "Input node isn't an instance of the Phi's assigned class: "
                + input.node()
                + " is not an instance of "
                + nodeClass
                + (phi.nodeClass().isInstance(input.node)
                    ? "\nNote: it *is* an instance of the actual Phi class, but you passed a more specific instance to "
                        + nodeClass
                        + " when you should've passed a superclass (necessary to pass the correct class because if it was Env and you passed an RValue, it would break)."
                    : ""));
      }
    }
    return (Phi<N>) phi;
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

  /** (A view of) inputs to this φ-node. */
  @UnmodifiableView
  List<Input<N>> inputs();

  /** Stream input {@link Node}s. */
  Stream<N> inputNodes();

  /** Stream input {@link BB}s. */
  Stream<BB> incomingBBs();

  /** The number of inputs to this φ-node. */
  default int numInputs() {
    return inputs().size();
  }

  /** Whether this φ-node contains the given input. */
  default boolean containsInput(Node inputNode) {
    return inputs().stream().anyMatch(input -> input.node().equals(inputNode));
  }

  /** Whether this φ-node contains the given input. */
  default boolean containsInput(BB incomingBB) {
    return inputs().stream().anyMatch(input -> input.incomingBB().equals(incomingBB));
  }

  /**
   * Add an input to this φ-node.
   *
   * <p>This is "unsafe" because the operation isn't recorded. It should only be used internally by
   * {@link BB}.
   *
   * @throws IllegalArgumentException If there's already an input from the incoming {@link BB}.
   */
  void unsafeAddInput(BB incomingBB, N node);

  /**
   * Remove an input from this φ-node.
   *
   * <p>This is "unsafe" because the operation isn't recorded. It should only be used internally by
   * {@link BB}.
   *
   * @return The input corresponding to the incoming BB, which was just removed.
   * @throws NoSuchElementException If the input isn't present.
   */
  N unsafeRemoveInput(BB incomingBB);

  /**
   * Replace the incoming BB of an input if the corresponding node satisfies the predicate.
   *
   * <p>This is "unsafe" because the operation isn't recorded. It should only be used internally by
   * {@link BB}.
   *
   * @throws NoSuchElementException If the old incoming BB isn't present.
   */
  void unsafeReplaceIncomingBB(BB old, BB replacement, Predicate<N> predicate);

  /** (A view of) the nodes in {@link Phi#inputs()}. */
  @Override
  default @UnmodifiableView List<Node> args() {
    return new MapListView<>(inputs(), Input::node);
  }

  /**
   * Returns {@code this}, since a phi is an instruction which simply "returns" one of its
   * arguments.
   */
  @Override
  default ImmutableList<Node> returns() {
    return ImmutableList.of(this);
  }

  @Override
  NodeId<? extends Phi<N>> id();

  record Args<N extends Node>(
      Class<? extends N> nodeClass, String name, Collection<? extends Input<? extends N>> inputs) {
    public IdArgs<N> id() {
      return new IdArgs<>(nodeClass, name, inputs.stream().map(Input::id).toList());
    }
  }

  record IdArgs<N extends Node>(
      Class<? extends N> nodeClass,
      String name,
      Collection<? extends InputId<? extends N>> inputIds) {}

  record Input<N extends Node>(BB incomingBB, N node) {
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
  }
}

abstract class PhiImpl<N extends Node> implements Phi<N> {
  private final Class<N> nodeClass;
  private final CFG cfg;
  private final PhiId<?> id;
  private final List<Input<N>> inputs;

  @SuppressWarnings("unchecked")
  PhiImpl(Class<N> nodeClass, CFG cfg, @Nullable String name, Collection<?> inputs) {
    this.inputs = new ArrayList<>((Collection<Input<N>>) inputs);
    this.nodeClass = nodeClass;
    this.cfg = cfg;

    if (name == null) {
      name = this.inputs.isEmpty() ? "" : this.inputs.getFirst().node().id().name();
    }

    id = new PhiId<>(this, cfg, name);
  }

  @Override
  public Class<N> nodeClass() {
    return nodeClass;
  }

  @Override
  public List<Input<N>> inputs() {
    return Collections.unmodifiableList(inputs);
  }

  @Override
  public Stream<N> inputNodes() {
    return inputs.stream().map(Input::node);
  }

  @Override
  public Stream<BB> incomingBBs() {
    return inputs().stream().map(Input::incomingBB);
  }

  @Override
  public void unsafeAddInput(BB incomingBB, N node) {
    if (inputs.stream().anyMatch(input -> input.incomingBB().equals(incomingBB))) {
      throw new IllegalArgumentException(
          "There's already an input from the incoming BB: " + incomingBB);
    }
    inputs.add(new Input<>(incomingBB, node));
  }

  @Override
  public N unsafeRemoveInput(BB incomingBB) {
    var idx = Iterables.indexOf(inputs, input -> input.incomingBB().equals(incomingBB));
    if (idx == -1) {
      throw new NoSuchElementException("The input isn't present: " + incomingBB);
    }
    return inputs.remove(idx).node();
  }

  @Override
  public void unsafeReplaceIncomingBB(BB old, BB replacement, Predicate<N> predicate) {
    var inputs = this.inputs.listIterator();
    while (inputs.hasNext()) {
      var input = inputs.next();
      if (input.incomingBB().equals(old)) {
        if (predicate.test(input.node())) {
          inputs.set(new Input<>(replacement, input.node()));
        }
        break;
      }
    }
    throw new NoSuchElementException("The old incoming BB isn't present: " + old);
  }

  @SuppressWarnings("unchecked")
  @Override
  public void replace(Node old, Node replacement) {
    if (!nodeClass.isInstance(replacement)) {
      throw new IllegalArgumentException(
          "Tried to replace with a node of incompatible type: " + replacement);
    }
    var inputs = this.inputs.listIterator();
    while (inputs.hasNext()) {
      var input = inputs.next();
      if (input.node().equals(old)) {
        inputs.set(new Input<>(input.incomingBB(), (N) replacement));
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
}