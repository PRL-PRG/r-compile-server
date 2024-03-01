package org.prlprg.ir;

import java.util.HashSet;
import java.util.Set;
import org.prlprg.ir.node.Instr;
import org.prlprg.ir.node.Node;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Control-flow_graph">control-flow-graph</a> (graph of {@link
 * Node}s which corresponds to a program; more specifically, a graph of {@link BB}s).
 */
public class CFG {
  private final Set<BB> bbs = new HashSet<>();

  /**
   * Create a new instruction with {@code newData} and replace all occurences of {@code oldInstr}
   * with it.
   *
   * @return The newly-created instruction, or {@code oldInstr} if it's equivalent to what would
   *     replace it.
   * @throws IllegalArgumentException if {@code oldInstr} is not in this CFG.
   * @throws IllegalArgumentException if {@code newData} is an incompatible type.
   */
  public <I extends Instr> I replace(I oldInstr, Instr.Data<I> newData) {
    if (oldInstr.data().equals(newData)) {
      return oldInstr;
    }
    if (oldInstr.cfg() != this) {
      throw new IllegalArgumentException(
          "Replace oldInstr not in CFG: " + oldInstr + " not in:\n" + this);
    }
    var newInstr = newData.make(this);
    var replaced = false;
    for (var bb : bbs) {
      var newlyReplaced = bb.tryOnlyReplace(oldInstr, newInstr);
      assert !replaced || !newlyReplaced
          : "Replaced multiple times in different BBs: " + oldInstr + " in: " + this;
      replaced = replaced || newlyReplaced;
    }
    assert replaced
        : "oldInstr has this CFG as its parent but wasn't found (improperly deleted BB?): "
            + oldInstr;
    replaceInstrReturnsInArgs(oldInstr, newInstr);
    return newInstr;
  }

  /**
   * Replace the instruction return values in the arguments of every argument-containing node in
   * this BB.
   */
  private void replaceInstrReturnsInArgs(Instr oldInstr, Instr newInstr) {
    var oldReturns = oldInstr.returns();
    var newReturns = newInstr.returns();
    if (oldReturns.size() != newReturns.size()) {
      throw new IllegalArgumentException(
          "Ttried to replace an instruction with a different number of returns: "
              + oldInstr
              + " -> "
              + newInstr);
    }
    for (int i = 0; i < oldReturns.size(); i++) {
      for (var bb : bbs) {
        bb.replaceInArgs(oldReturns.get(i), newReturns.get(i));
      }
    }
  }

  // TODO: make sure when we split, delete BBs, phi nodes are updated if necessary, and removed
  // nodes aren't
  //  dependencies of other nodes in the CFG (including removed auxillary nodes, not just
  // instructions).

  // TODO: Fancy toString for this, BB, Instr, and all nodes
}
