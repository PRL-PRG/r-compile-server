package org.prlprg.ir;

import javax.annotation.Nullable;
import org.prlprg.util.NotImplementedError;

/**
 * An individual operation performed on a graph (including basic block or instruction). Every single
 * CFG operation can produce one of these.
 *
 * <p>The purpose of these are for debugging: we can have a history of all the operations performed
 * on a CFG, so when it fails verification, we can see exactly what happened and guess why it didn't
 * work. These could also possibly be used for transactional operations, if cloning is too
 * expensive.
 *
 * @param <Ret> The type returned by the action, e.g. a basic block in {@link AddBB}.
 */
public sealed interface CFGCommand<Ret> {

  /**
   * Rerun this command on the CFG.
   *
   * @throws IllegalArgumentException If you try to rerun the command and the CFG is in a state that
   *     makes it invalid (guaranteed not to happen if you replay in the same state as before the
   *     command occurred).
   */
  default Ret replay(CFG cfg) {
    throw new NotImplementedError();
    /* return switch (this) {
      case AddBB(var name) -> cfg.addBB(name);
      case AddPhi(var bbId, var nodeClass) -> cfg.get(bbId).addPhi(nodeClass);
      case AddStmt(var bbId, var index, var name, var args) -> cfg.get(bbId).insert(index, name, args);
      case AddJump(var bbId, var name, var args) -> cfg.get(bbId).add(name, args);
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
    } */
  }

  /**
   * Run the reverse command on the CFG. If the CFG is in the same state as after the command
   * occurred, it will end up in the state before.
   *
   * @throws IllegalArgumentException If you try to rewind the command and the CFG is in a state
   *     that makes it invalid (guaranteed not to happen if you rewind in the same state as after
   *     the command was recorded).
   */
  default void rewind(CFG cfg) {
    // TODO
    throw new NotImplementedError();
  }

  /** The command that {@link #replay(CFG)}ing would {@link #rewind(CFG)} this action. */
  default CFGCommand<?> reverse() {
    // TODO
    throw new NotImplementedError();
  }

  // region command subtypes
  /** Command performed on a {@link BB} directly (as opposed to one of its children). */
  sealed interface OnBB<Ret> extends CFGCommand<Ret> {}

  /** Command performed on a {@link Stmt} or {@link Phi} inside a {@link BB}. */
  sealed interface InBB<Ret> extends CFGCommand<Ret> {
    BBId bbId();
  }

  /** Doesn't do anything but is useful in logs. */
  sealed interface Marker extends CFGCommand<Void> {}

  sealed interface AddInstrOrPhi<I extends InstrOrPhi> extends InBB<I> {}

  sealed interface RemoveInstrOrPhi<I extends InstrOrPhi, Ret> extends InBB<Ret> {
    NodeId<I> nodeId();
  }

  sealed interface UpdateInstrOrPhi<I extends InstrOrPhi, Ret> extends InBB<Ret> {
    NodeId<I> nodeId();
  }

  sealed interface UpdateInstr<I extends Instr, D extends Instr.Data<?>>
      extends UpdateInstrOrPhi<I, D> {
    D newArgs();
  }

  // endregion

  // region commands
  record AddBB(String name) implements OnBB<BB> {}

  record AddPhi<N extends Node>(BBId bbId, Class<N> nodeClass, Phi.Input<N> firstInput)
      implements AddInstrOrPhi<Phi<N>> {}

  record AddStmt<I extends Stmt>(BBId bbId, int index, String name, Stmt.Data<I> args)
      implements AddInstrOrPhi<I> {}

  record AddJump<I extends Jump>(BBId bbId, String name, Jump.Data<I> args)
      implements AddInstrOrPhi<I> {}

  record RemoveBB(BBId bbId) implements OnBB<BB> {}

  record RemovePhi<N extends Node>(BBId bbId, NodeId<Phi<N>> nodeId)
      implements RemoveInstrOrPhi<Phi<N>, Phi<N>> {}

  record RemoveStmt<I extends Stmt>(BBId bbId, NodeId<I> nodeId)
      implements RemoveInstrOrPhi<I, RemovedStmt<I>> {}

  record RemoveJump<I extends Jump>(BBId bbId, NodeId<I> nodeId)
      implements RemoveInstrOrPhi<I, I> {}

  record AddPhiInput<N extends Node>(
      BBId bbId, NodeId<Phi<N>> nodeId, BBId incomingBBId, NodeId<N> inputId)
      implements UpdateInstrOrPhi<Phi<N>, Phi.Input<N>> {}

  record RemovePhiInput<N extends Node>(
      BBId bbId, NodeId<Phi<N>> nodeId, BBId incomingBBId, NodeId<N> inputId)
      implements UpdateInstrOrPhi<Phi<N>, Phi.Input<N>> {}

  record UpdateStmt<I extends Stmt>(
      BBId bbId, NodeId<I> nodeId, @Nullable String newDesc, Stmt.Data<I> newArgs)
      implements UpdateInstr<I, Stmt.Data<I>> {}

  record UpdateJump<I extends Jump>(
      BBId bbId, NodeId<I> nodeId, @Nullable String newDesc, Jump.Data<I> newArgs)
      implements UpdateInstr<I, Jump.Data<I>> {}

  /** Doesn't do anything but is useful in logs. */
  record BeginSection(String name) implements Marker {}

  /** Doesn't do anything but is useful in logs. */
  record EndSection(String name) implements Marker {}

  // endregion

  // region associated types
  record RemovedStmt<I extends Stmt>(Stmt stmt, int idx) {}
  // endregion
}
