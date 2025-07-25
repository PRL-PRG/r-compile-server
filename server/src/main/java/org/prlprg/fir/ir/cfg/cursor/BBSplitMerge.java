package org.prlprg.fir.ir.cfg.cursor;

import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.phi.Target;

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

              var newBBStatements =
                  self.removeStatementsAt(index, self.statements().size() - index);
              newBB.insertStatements(0, newBBStatements);

              var newBBJump = self.jump();
              self.setJump(new Goto(new Target(newBB)));
              newBB.setJump(newBBJump);

              return newBB;
            });
  }
}
