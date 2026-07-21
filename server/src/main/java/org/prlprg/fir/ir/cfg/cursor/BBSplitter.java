package org.prlprg.fir.ir.cfg.cursor;

import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Jump;

public final class BBSplitter {
  public static BB splitNewSuccessor(BB self, int index) {
    return splitNewSuccessor(self, index, self.owner().nextLabel());
  }

  public static BB splitNewSuccessor(BB self, int index, String successorLabel) {
    return self.module()
        .record(
            "BBSplitter.splitNewSuccessor",
            List.of(self, index, successorLabel),
            () -> {
              if (index < 0 || index > self.statements().size()) {
                throw new IndexOutOfBoundsException("Index out of range: " + index);
              }

              var newBB = self.owner().addBB(successorLabel);

              // Move statements [index..) into the new block, preserving order and def-use links.
              var toMove = List.copyOf(self.statements().subList(index, self.statements().size()));
              for (var statement : toMove) {
                statement.moveBefore(newBB.jump());
              }

              // The original terminator becomes the new block's terminator; `self` gotos the new
              // block.
              var oldJump = self.jump();
              newBB.setJump(new Jump(oldJump.comments(), oldJump.expression(), oldJump.args()));
              self.setJump(new Jump(new Goto(new BBRef(newBB))));

              return newBB;
            });
  }
}
