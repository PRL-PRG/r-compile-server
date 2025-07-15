package org.prlprg.fir.cfg.cursor;

import java.util.List;
import org.prlprg.fir.cfg.BB;

public final class BBSplitMerge {
  public static BB splitNewSuccessor(BB self, int index) {
    return splitNewSuccessor(self, index, self.owner().nextLabel());
  }

  public static BB splitNewSuccessor(BB self, int index, String successorLabel) {
    return self.module()
        .record(
            "BBSplitMerge.splitNewSuccessor",
            List.of(self, index, successorLabel),
            () -> {
              if (index < 0 || index > self.statements().size()) {
                throw new IndexOutOfBoundsException("Index out of range: " + index);
              }

              var newBB = self.owner().addBB(successorLabel);

              // TODO: refactor for block arguments instead of phis.
              /* for (var succ : self.jump().targets()) {
                assert succ.predecessors.contains(self)
                    : "BB has successor whose predecessors set doesn't contain it";
                succ.predecessors.remove(self);
                succ.predecessors.add(newBB);
                for (var phi : succ.phis) {
                  phi.unsafeReplaceIncomingBB(self, newBB);
                }
              }

              // Don't call `insert` or `addJump`, since self is intrinsic.
              newBB.stmts.addAll(stmts.subList(index, stmts.size()));
              newBB.jump = jump;
              if (newBB.jump != null) {
                newBB.jump.unsafeSetBB(newBB);
              }
              stmts.subList(index, stmts.size()).clear();
              jump = null;
              var newJump = new Jump(cfg, new JumpData.Goto(newBB));
              setJump(newJump);
              cfg.track(newJump);

              cfg.record(
                  new CFGEdit.SplitBB(self, newBB, false, index), new CFGEdit.MergeBBs(self, newBB, false)); */
              return newBB;
            });
  }
}
