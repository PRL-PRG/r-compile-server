package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.util.MapListView;

/**
 * <a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node</a>: a node referenced within a basic block that may originate from more than one of its
 * predecessors.
 *
 * <p>Each φ only handles nodes of a particular type, e.g. {@link RValue}s or {@code ForLoopInfo}s.
 * This interface is also extended for specific classes so that it can inherit them, e.g. {@link
 * RValuePhi} and {@code ForLoopInfoPhi}.
 *
 * <p>φ nodes can temporarily have only 0 or 1 input. However, before {@link CFG#verify()}, nodes
 * with one input must be replaced with the input itself, and nodes with 0 inputs must be removed.
 */
public non-sealed interface Phi<N extends Node> extends InstrOrPhi {
  /**
   * Create a new φ-node for the given node class. It should implement the necessary superclass so
   * that it's acceptable to replace a node of this class with this φ.
   *
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  @SuppressWarnings("unchecked")
  @Warning("Call BB.addPhi instead.")
  static <N extends Node> Phi<N> forClass(
      Class<N> nodeClass, CFG cfg, BB firstIncomingBB, N firstNode) {
    var firstInput = new Input<>(firstIncomingBB, firstNode);

    if (nodeClass == RValue.class) {
      return (Phi<N>) new RValuePhiImpl(cfg, (Input<RValue>) firstInput);
    } else {
      throw new UnsupportedOperationException(
          "No φ type implemented for the given class: " + nodeClass);
    }
  }

  /**
   * The type of node this is a phi node for. All incoming nodes are an instance of this class, as
   * well as the phi itself (revealed via {@link #cast()}).
   */
  Class<N> nodeClass();

  /** Cast the phi to its node class. */
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
  Stream<BB> incomingBbs();

  /** The number of inputs to this φ-node. */
  default int numInputs() {
    return inputs().size();
  }

  /** Whether this φ-node contains the given input. */
  default boolean containsInput(Node inputNode) {
    return inputs().stream().anyMatch(input -> input.node().equals(inputNode));
  }

  /** Whether this φ-node contains the given input. */
  default boolean containsInput(BB incomingBb) {
    return inputs().stream().anyMatch(input -> input.incomingBb().equals(incomingBb));
  }

  /**
   * Add an input to this φ-node.
   *
   * @throws IllegalArgumentException If there's already an input from the incoming {@link BB}.
   */
  void addInput(BB incomingBb, N node);

  /**
   * Remove an input from this φ-node.
   *
   * @throws IllegalArgumentException If the input isn't present.
   */
  void removeInput(BB incomingBb);

  /**
   * Remove multiple inputs from this φ-node.
   *
   * @throws IllegalArgumentException If any input isn't present.
   */
  void removeInputs(Iterable<BB> incomingBbs);

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

  record Input<N extends Node>(BB incomingBb, N node) {}
}

abstract class PhiImpl<N extends Node> implements Phi<N> {
  private final Class<N> nodeClass;
  private final CFG cfg;
  private final PhiId<?> id;
  private final List<Input<N>> inputs = new ArrayList<>();

  PhiImpl(Class<N> nodeClass, CFG cfg, Input<N> firstInput) {
    this.nodeClass = nodeClass;
    this.cfg = cfg;
    id = new PhiId<>(this, cfg, firstInput.node().id());
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
  public Stream<BB> incomingBbs() {
    return inputs().stream().map(Input::incomingBb);
  }

  @Override
  public void addInput(BB incomingBb, N node) {
    if (inputs.stream().anyMatch(input -> input.incomingBb().equals(incomingBb))) {
      throw new IllegalArgumentException(
          "There's already an input from the incoming BB: " + incomingBb);
    }
    inputs.add(new Input<>(incomingBb, (N) node));
  }

  @Override
  public void removeInput(BB incomingBb) {
    if (!inputs.removeIf(input -> input.incomingBb().equals(incomingBb))) {
      throw new IllegalArgumentException("The input isn't present: " + incomingBb);
    }
  }

  @Override
  public void removeInputs(Iterable<BB> incomingBbs) {
    for (var incomingBb : incomingBbs) {
      removeInput(incomingBb);
    }
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
        inputs.set(new Input<>(input.incomingBb(), (N) replacement));
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
