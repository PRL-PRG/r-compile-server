package org.prlprg.ir;

import java.util.HashSet;
import java.util.Set;

/**
 * Intermediate representation <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 *
 * <p>The generic parameter lets you restrict the type of nodes in this block. {@link CFG#castNodes}
 * will enforce that all nodes conform to a particular type and then return the same block with a
 * different generic. See the {@link org.prlprg.ir} package documentation for more details.
 */
public class CFG<N extends Node> {
  private final Set<BB<N>> bbs = new HashSet<>();

  /**
   * Enforces that all nodes conform to {@code N2} and then returns the same block with a different
   * generic.
   */
  public <N2 extends Node> CFG<N2> castNodes(Class<N2> n2Class) {
    for (var bb : bbs) {
      for (var instr : bb) {
        if (!n2Class.isInstance(instr)) {
          // TODO: Better error message
          throw new ClassCastException(
              "CFG doesn't conform to class "
                  + n2Class
                  + "\n"
                  + instr
                  + "\n\n"
                  + bb
                  + "\n\n"
                  + this);
        }
      }
    }

    @SuppressWarnings("unchecked")
    var self = (CFG<N2>) this;
    return self;
  }

  public void replace(N oldNode, N newNode) {
    if (oldNode == newNode) {
      return;
    }
    if (oldNode.cfg() != this) {
      throw new IllegalArgumentException(
          "Replace oldNode not in CFG: " + oldNode + " not in:\n" + this);
    }
    for (var bb : bbs) {
      for (var instr : bb) {
        instr.replace(oldNode, newNode);
      }
    }
  }

  // TODO: Fancy toString for this, BB, Instr, and all nodes
}
