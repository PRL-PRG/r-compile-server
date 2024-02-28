package org.prlprg.ir;

import java.util.HashSet;
import java.util.Set;
import org.prlprg.ir.node.Node;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
public class CFG {
  private final Set<BB> bbs = new HashSet<>();

  /**
   * Replace all occurences of {@code oldNode} with {@code newNode}.
   *
   * @throws IllegalArgumentException if {@code oldNode} is not in this CFG.
   * @throws IllegalArgumentException if {@code newNode} is an incompatible type.
   */
  public void replace(Node oldNode, Node newNode) {
    if (oldNode == newNode) {
      return;
    }
    if (oldNode.cfg() != this) {
      throw new IllegalArgumentException(
          "Replace oldNode not in CFG: " + oldNode + " not in:\n" + this);
    }
    for (var bb : bbs) {
      var instrs = bb.listIterator();
      while (instrs.hasNext()) {
        var instr = instrs.next();
        if (instr.equals(oldNode)) {
          instrs.set(newNode);
        } else {
          instr.replace(oldNode, newNode);
        }
      }
    }
  }

  // TODO: Fancy toString for this, BB, Instr, and all nodes
}
