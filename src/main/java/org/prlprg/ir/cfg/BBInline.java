package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.Objects;
import java.util.function.BiConsumer;
import java.util.function.Function;
import java.util.stream.Collectors;

interface BBInline extends BBCompoundMutate {
  /**
   * Insert the entire {@link CFG} in between statements in the basic block.
   *
   * <p>Specifically, at {@code index}, insert the CFG's entry block, then the CFG's blocks in
   * order, then the CFG's exits will all be followed by the instructions at and after {@code
   * index}.
   *
   * <p>This effectively copies the CFG: it doesn't mutate the original, and all inserted BBs and
   * instructions are new.
   *
   * @return The basic block after the inlined CFG. The instruction at {@code index}, if present,
   *     will be the first instruction in this BB.
   */
  default BB inlineAt(int index, CFG cfgToInline) {
    return cfg()
        .section(
            "BB#inlineAt",
            () -> {
              // Need to split because we assume some nodes may go to the entry.
              // In practice this probably never happens but we simplify during cleanup anyways,
              // and it simplifies the algorithm.
              var lastBB = splitNewSuccessor(index);

              // Add BBs.
              var oldToNewBBs =
                  cfgToInline.bbIds().stream()
                      .collect(Collectors.toMap(Function.identity(), id -> cfg().addBB(id.name())));

              // Add instructions, replace BB arguments, and prepare to replace node arguments.
              var newInstrOrPhis = new ArrayList<InstrOrPhi>(cfgToInline.numNodes());
              var oldToNewArgs = new BatchSubst(cfgToInline.numNodes());
              BiConsumer<InstrOrPhi, InstrOrPhi> prePatchInstrOrPhi =
                  (oldInstrOrPhi, newInstrOrPhi) -> {
                    newInstrOrPhis.add(newInstrOrPhi);

                    var oldReturns = oldInstrOrPhi.returns();
                    var newReturns = newInstrOrPhi.returns();
                    assert oldReturns.size() == newReturns.size();
                    for (var i = 0; i < oldReturns.size(); i++) {
                      oldToNewArgs.stage(oldReturns.get(i), newReturns.get(i));
                    }
                  };
              for (var oldBB : cfg().iter()) {
                var newBB = Objects.requireNonNull(oldToNewBBs.get(oldBB.id()));

                for (var oldPhi : oldBB.phis()) {
                  var newPhi =
                      newBB.addPhi(
                          oldPhi.nodeClass(),
                          oldPhi.inputs().stream()
                              .map(
                                  i -> {
                                    var newIncomingBB =
                                        Objects.requireNonNull(
                                            oldToNewBBs.get(i.incomingBB().id()));
                                    return new Phi.Input<>(newIncomingBB, i.node());
                                  })
                              .toList());
                  prePatchInstrOrPhi.accept(oldPhi, newPhi);
                }
                for (var oldStmt : oldBB.stmts()) {
                  var newStmt =
                      newBB.insertAt(newBB.stmts().size(), oldStmt.id().name(), oldStmt.data());
                  prePatchInstrOrPhi.accept(oldStmt, newStmt);
                }
                if (oldBB.jump() != null) {
                  var newJump =
                      newBB.addJump(
                          oldBB.jump().id().name(), oldBB.jump().data().replaceReturnWith(lastBB));
                  for (var oldTarget : newJump.targets()) {
                    var newTarget = Objects.requireNonNull(oldToNewBBs.get(oldTarget.id()));
                    newJump.replaceInTargets(oldTarget, newTarget);
                  }
                  prePatchInstrOrPhi.accept(oldBB.jump(), newJump);
                }
              }
              // Replace node arguments
              oldToNewArgs.commit(newInstrOrPhis);

              return lastBB;
            });
  }
}
