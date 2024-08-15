package org.prlprg.ir.cfg.builder;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.BatchSubst;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InvalidNode;
import org.prlprg.ir.cfg.Jump;
import org.prlprg.ir.cfg.Phi;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.instr.JumpData;
import org.prlprg.ir.cfg.instr.StmtData;

public interface BBIntrinsicMutate {
  // region split and merge
  /**
   * {@link #splitNewPredecessor(String, int)} giving the predecessor the same name as this block.
   */
  BB splitNewPredecessor(int index);

  /**
   * Split the basic block at the given index and make the new block a predecessor with the given
   * name. Specifically:
   *
   * <ul>
   *   <li>The new block will have all phis and statements before the index and a jump to this
   *       block.
   *   <li>This block will have the statements after the index and jump.
   *   <li>In successors of other BBs, this block will be replaced with the new block.
   * </ul>
   *
   * @return The new block (new predecessor).
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  BB splitNewPredecessor(String predecessorName, int index);

  /** {@link #splitNewSuccessor(String, int)} giving the successor the same name as this block. */
  BB splitNewSuccessor(int index);

  /**
   * Split the basic block at the given index and make the new block a successor with the given
   * name. Specifically:
   *
   * <ul>
   *   <li>The new block will have all statements after the index and jump.
   *   <li>This block will have the phis and statements before the index and a jump to the new
   *       block.
   *   <li>In predecessors of other BBs, this block will be replaced with the new block.
   *   <li>Phi nodes whose incoming BBs are this block will now have incoming BBs of the new block.
   * </ul>
   *
   * @return The new block (new successor).
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  BB splitNewSuccessor(String successorName, int index);

  /**
   * Asserts that:
   *
   * <ul>
   *   <li>this block's jump is a GOTO that points to the given block.
   *   <li>The given block is not the entry (the entry can't be removed. Also, the entry has a
   *       "virtual" predecessor which is the call or force, so even if it could, it may not satisfy
   *       the next condition).
   *   <li>The given block has exactly one predecessor, <i>or</i> this block has no statements.
   *   <li>If this block has statements, the given block has no phis (this implies the given block
   *       has exactly one predecessor, so those phis should all be replaced with their single
   *       input, but this method won't replace them because it should be part of a {@linkplain
   *       BatchSubst batch substitution}).
   *   <li>If the given block shares a predecessor with this block, any phis must have the same
   *       input from the predecessor and this block (otherwise the empty GOTO is still relevant
   *       because it determines the phi input).
   * </ul>
   *
   * <p>Then merges with the given block. Specifically:
   *
   * <ul>
   *   <li>If this block has no statements, it will have all phis from the given block, where the
   *       input from this block is replaced by inputs from each of this block's predecessors
   *       (specifically, if the input from this block is a phi, it's replaced by the phi inputs,
   *       otherwise it's the same input repeated for each of the predecessors).
   *   <li>This block will have all statements and jump from the given block.
   *   <li>The given block will be removed from the CFG.
   *   <li>In successors of other BBs, the given block will be replaced with this block.
   * </ul>
   *
   * @throws IllegalArgumentException If this block or the given block don't meet the preconditions.
   */
  void mergeWithSuccessor(BB succ);

  // endregion split and merge

  // region add nodes
  /**
   * Add an empty {@linkplain Phi phi node} to this BB and return it.
   *
   * <p>The actual input nodes are all "unset" {@link InvalidNode}s, one for each of the BB's
   * predecessors.
   */
  <T> Phi<? extends T> addPhi();

  /**
   * Add a {@linkplain Phi phi node} with the given inputs to this BB and return it.
   *
   * @throws IllegalArgumentException If {@code inputs} doesn't contain an input for each of this
   *     block's predecessors.
   */
  <T> Phi<? extends T> addPhi(Collection<? extends Phi.Input<? extends T>> inputs);

  /**
   * Add {@linkplain Phi phi nodes} with the given inputs to this BB and return them.
   *
   * @throws IllegalArgumentException If any of the args' inputs doesn't contain an input for each
   *     of this block's predecessors.
   * @see #addPhi(Collection)
   */
  <T> ImmutableList<? extends Phi<? extends T>> addPhis(
      Collection<? extends Collection<? extends Phi.Input<? extends T>>> inputss);

  /**
   * Insert a statement in this BB at the given index.
   *
   * @param data The statement's data, which determines what kind of statement it is and its inputs.
   * @return The inserted statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  Stmt insertAt(int index, StmtData data);

  /**
   * Insert a statement in this BB at the given index that is a copy of the given statement.
   *
   * @return The inserted statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, StmtData)
   */
  Stmt insertCopyAt(int index, Stmt stmt);

  /**
   * Insert statements in this BB starting from the given index.
   *
   * @param datas The statements' datas, which determine what kind of statements they are and their
   *     inputs.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, StmtData)
   */
  ImmutableList<Stmt> insertAllAt(int index, List<StmtData> datas);

  /**
   * Insert statements in this BB starting from the given index that are copies of the given ones.
   *
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, StmtData)
   */
  ImmutableList<Stmt> insertAllCopiesAt(int index, List<Stmt> stmts);

  /**
   * Insert statements in this BB at the given indices.
   *
   * <p>The statements are inserted so that later indices aren't offset by earlier ones, as if we
   * inserted the statements with bigger indices before those with smaller ones.
   *
   * @param indicesAndDatas The indices to insert each statement and the statements' datas, which
   *     determine what kind of statements they are and their inputs.
   * @throws IndexOutOfBoundsException If any of the indices are out of range.
   * @see #insertCopyAt(int, Stmt)
   */
  ImmutableList<Stmt> insertAllAt(Map<Integer, StmtData> indicesAndDatas);

  /**
   * Insert statements in this BB at the given indices that are copies of the given ones.
   *
   * <p>The statements are inserted so that later indices aren't offset by earlier ones, as if we
   * inserted the statements with bigger indices before those with smaller ones.
   *
   * @throws IndexOutOfBoundsException If any of the indices are out of range.
   * @see #insertCopyAt(int, Stmt)
   */
  ImmutableList<Stmt> insertAllCopiesAt(Map<Integer, Stmt> indicesAndStmts);

  /**
   * Add a jump to this BB.
   *
   * @param data The jump's data, which determines what kind of jump it is and its inputs.
   * @return The added jump.
   * @throws IllegalArgumentException If the BB already has a jump.
   */
  Jump addJump(JumpData data);

  /**
   * Add a jump to this BB that is a copy of the given jump.
   *
   * @return The added jump.
   * @throws IllegalArgumentException If the BB already has a jump.
   * @see #addJump(JumpData)
   */
  Jump addJumpCopy(Jump jump);

  // endregion add nodes

  // region update nodes (replace and subst)
  /**
   * Create a new statement with {@code newArgs} and replace the statement at {@code index} with it.
   *
   * <p><i>This won't replace occurrences of any {@link Instr#outputs()} of the old statement.</i>
   * Use {@link BatchSubst} to do that.
   *
   * @param newData The new statement's data, which determines what kind of statement it is and its
   *     inputs.
   * @return The new statement (not the one that got replaced).
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  Stmt replace(int index, StmtData newData);

  /**
   * Create a new jump with {@code newArgs} and replace the BB's current jump with it.
   *
   * <p><i>This won't replace occurrences of any {@link Instr#outputs()} of the old jump.</i> Use
   * {@link BatchSubst} to do that.
   *
   * @param newData The new jump's data, which determines what kind of jump it is and its inputs.
   * @return The new jump (not the one that got replaced).
   * @throws IllegalStateException If the BB doesn't have a jump. If this is the case, use {@link
   *     BB#addJump(JumpData)} instead.
   */
  Jump replaceJump(JumpData newData);

  // endregion update nodes (replace and subst)

  // region move nodes
  /**
   * Move a statement to a new index and possibly basic block.
   *
   * @throws IllegalArgumentException If the new BB isn't in the same {@link CFG} as this one.
   * @throws IndexOutOfBoundsException If the old index is out of bounds for access in this block's
   *     list of statements (less than 0 or greater than or equal to the number of statements).
   *     <b>OR</b> if the new index is out of bounds for insertion in the new block's list of
   *     statements (less than 0 or greater than the number of statements).
   */
  void moveStmt(int oldIndex, BB newBb, int newIndex);

  /**
   * Move a sequence of statements (exclusive range) to a new index and possibly basic block.
   *
   * @throws IllegalArgumentException If the new BB isn't in the same {@link CFG} as this one.
   *     <b>OR</b> if {@code oldFromIndex} is greater than {@code oldToIndex}.
   * @throws IndexOutOfBoundsException If the old index range is out of bounds for access in this
   *     block's list of statements (start less than 0 or end greater than the number of
   *     statements). <b>OR</b> if the new index is out of bounds for insertion in the new block's
   *     list of statements (less than 0 or greater than the number of statements).
   */
  void moveStmts(int oldFromIndex, int oldToIndex, BB newBb, int newFromIndex);

  /**
   * Move a jump to a new basic block.
   *
   * @throws IllegalArgumentException If the new BB isn't in the same {@link CFG} as this one.
   *     <b>OR</b> if this BB doesn't have a jump. <b>OR</b> if the new BB already has a jump.
   */
  void moveJump(BB newBb);

  // endregion move nodes

  // region remove nodes
  /**
   * Remove the given phi.
   *
   * <p>Other instructions may still reference it, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @throws IllegalArgumentException if it's not in this BB.
   */
  void remove(Phi<?> phi);

  /**
   * Remove the given phis.
   *
   * <p>Other instructions may still reference then, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @throws IllegalArgumentException if not all phis are in this BB.
   * @see #remove(Phi)
   */
  void removePhis(Collection<? extends Phi<?>> phis);

  /**
   * Remove the statement at the given index.
   *
   * <p>Other instructions may still reference it, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @return The removed statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  Stmt removeAt(int index);

  /**
   * Remove the statements from {@code fromIndex} to {@code toIndex} (exclusive).
   *
   * <p>Other instructions may still reference them, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @throws IllegalArgumentException If {@code fromIndex} is greater than {@code toIndex}.
   * @throws IndexOutOfBoundsException If {@code fromIndex} or {@code toIndex} are out of range.
   * @see #removeAt(int)
   */
  void removeAllAt(int fromIndex, int toIndex);

  /**
   * Remove the given statements.
   *
   * <p>Other instructions may still reference them, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @throws IllegalArgumentException If not all statements are in this BB.
   * @see #removeAt(int)
   */
  void removeAllStmts(Collection<Stmt> stmts);

  /**
   * Remove the BB's jump.
   *
   * <p>Other instructions may still reference it, but these references must go away before {@link
   * CFG#verify()}.
   *
   * @return The jump that was removed ({@link BB#jump()} but guaranteed non-null).
   * @throws IllegalStateException If the BB doesn't have a jump.
   */
  Jump removeJump();
  // endregion remove nodes
}
