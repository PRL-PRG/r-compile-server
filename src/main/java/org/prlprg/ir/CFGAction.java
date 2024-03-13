package org.prlprg.ir;

import javax.annotation.Nullable;
import org.prlprg.ir.Instr;
import org.prlprg.ir.Jump;
import org.prlprg.ir.Node;
import org.prlprg.ir.NodeId;

/** An individual operation performed on a graph (including basic block or instruction). Every
 * single CFG operation can produce one of these.
 *
 * <p>The purpose of these are for debugging: we can have a history of all the operations performed
 * on a CFG, so when it fails verification, we can see exactly what happened and guess why it didn't
 * work. These could also possibly be used for transactional operations, if cloning is too
 * expensive.
 *
 * @param <Ret> The type returned by the action, e.g. a basic block in {@link AddBB}.
 */
public sealed interface CFGAction<Ret> {

  /** Replay this action on the CFG.
   *
   * @throws IllegalArgumentException If you try to replay the action and the CFG is in a state that
   *                                  makes it invalid (guaranteed not to happen if you replay in
   *                                  the same state as before the action occurred).
   */
  default Ret replay(CFG cfg) {
    return switch (this) {
      case AddBB(var desc) -> cfg.addBB(desc);
      case AddPhi(var bbId, var nodeClass) -> cfg.get(bbId).addPhi(nodeClass);
      case AddStmt(var bbId, var index, var desc, var args) -> cfg.get(bbId).insert(index, desc, args);
      case AddJump(var bbId, var desc, var args) -> cfg.get(bbId).add(desc, args);
      case RemoveBB(var bbId) -> cfg.remove(bbId);
      case RemovePhi(var bbId, var phiId) -> cfg.get(bbId).remove(phiId);
      case RemovePhi removePhi -> {
        var bb = cfg.bbs().get(removePhi.bbIdx());
        bb.removePhi(removePhi.phi());
      }
      case RemoveStmt removeStmt -> {
        var bb = cfg.bbs().get(removeStmt.bbIdx());
        bb.removeStmt(removeStmt.instrIdx());
      }
      case RemoveJump removeJump -> {
        var bb = cfg.bbs().get(removeJump.bbIdx());
        bb.removeJump();
      }
      case UpdateInstr updateInstr -> {
        var bb = cfg.bbs().get(updateInstr.bbIdx());
        bb.updateInstr(updateInstr.instrIdx(), updateInstr.newArgs());
      }
      case BeginSection beginSection -> {
        // Do nothing
      }
      case EndSection endSection -> {
        // Do nothing
      }
    }
  }

  /** Run the reverse action on the CFG. If the CFG is in the same state as after the action
   * occurred, it will end up in the state before.
   *
   * @throws IllegalArgumentException If you try to rewind the action and the CFG is in a state
   *                                  that makes it invalid (guaranteed not to happen if you rewind
   *                                  in the same state as after the action was recorded).
   */
  default void rewind(CFG cfg) {
    // TODO
  }

  /** The action that {@link #replay(CFG)}ing would {@link #rewind(CFG)} this action. */
  default CFGAction reverse() {
    // TODO
  }

  // region actions
  record AddBB(String desc) implements CFGAction<BB> {}
  record AddPhi<N extends Node>(BBId bbId, Class<N> nodeClass) implements CFGAction<Phi<N>> {}
  record AddStmt<I extends Stmt>(BBId bbId, int index, String desc, Stmt.Data<I> args) implements CFGAction<I> {}
  record AddJump<I extends Jump>(BBId bbId, String desc, Jump.Data<I> args) implements CFGAction<I> {}

  record RemoveBB(BBId bbId) implements CFGAction<BB> {}
  record RemovePhi<N extends Node>(BBId bbId, NodeId<Phi<N>> phiId) implements CFGAction<Phi<N>> {}
  record RemoveStmt<I extends Stmt>(BBId bbId, NodeId<I> stmtId) implements CFGAction<RemovedStmt<I>> {}
  record RemoveJump<I extends Jump>(BBId bbId) implements CFGAction<I> {}

  record UpdateStmt<I extends Stmt>(BBId bbId, NodeId<I> stmtId, @Nullable String newDesc, Stmt.Data<I> newArgs) implements CFGAction<Void> {}
  record UpdateJump<I extends Jump>(BBId bbId, @Nullable String newDesc, Jump.Data<I> newArgs) implements CFGAction<Void> {}

  /** Doesn't do anything but is useful in logs. */
  record BeginSection(String desc) implements CFGAction<Void> {}
  /** Doesn't do anything but is useful in logs. */
  record EndSection(String desc) implements CFGAction<Void> {}
  // endregion

  record RemovedStmt<I extends Stmt>(Stmt stmt, int idx) {}
}
