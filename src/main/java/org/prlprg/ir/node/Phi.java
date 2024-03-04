package org.prlprg.ir.node;

import com.pushtorefresh.javac_warning_annotation.Warning;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.Stream;
import org.prlprg.ir.BB;
import org.prlprg.ir.CFG;

/**
 * <a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>
 *
 * <p>Each φ only handles nodes of a particular type, e.g. {@link RValue}s or {@link ForLoopInfo}s.
 * This interface is also extended for specific classes so that it can inherit them, e.g. {@link
 * RValuePhi} and {@link ForLoopInfoPhi}.
 *
 * <p>φ nodes can temporarily have only 0 or 1 input; however, the {@link CFG} should have a cleanup
 * phase where it deletes or replaces those.
 */
public interface Phi extends NodeWithCfg {
  /**
   * Create a new φ-node for the given node class. It should implement the necessary superclass so
   * that it's acceptable to replace a node of this class with this φ.
   *
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  @Warning("Only exposed for BB, call BB.addPhi instead.")
  static Phi forClass(Class<?> nodeClass, CFG cfg) {
    if (RValue.class.isAssignableFrom(nodeClass)) {
      return new RValuePhiImpl(cfg);
    } else if (ForLoopInfo.class.isAssignableFrom(nodeClass)) {
      return new ForLoopInfoPhiImpl(cfg);
    } else {
      throw new UnsupportedOperationException(
          "No φ type implemented for the given class: " + nodeClass);
    }
  }

  /** (Readonly) list of inputs to this φ-node. */
  List<Input<?>> inputs();

  /** Stream input {@link Node}s. */
  Stream<?> inputNodes();

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
   * @throws IllegalArgumentException If you try to add a node of incompatible type.
   */
  void addInput(BB incomingBb, Node node);

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

  /**
   * Replace the node in arguments.
   *
   * @throws IllegalArgumentException If you try to replace with a node of incompatible type.
   */
  void replace(Node old, Node replacement);

  record Input<N extends Node>(BB incomingBb, N node) {}
}

abstract class PhiImpl<N extends Node> implements Phi {
  private final Class<N> nodeClass;
  private final CFG cfg;
  private final List<Input<N>> inputs = new ArrayList<>();

  PhiImpl(Class<N> nodeClass, CFG cfg) {
    this.nodeClass = nodeClass;
    this.cfg = cfg;
  }

  @Override
  public List<Input<?>> inputs() {
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

  @SuppressWarnings("unchecked")
  @Override
  public void addInput(BB incomingBb, Node node) {
    if (!nodeClass.isInstance(node)) {
      throw new IllegalArgumentException("Tried to add a node of incompatible type: " + node);
    }
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
}
