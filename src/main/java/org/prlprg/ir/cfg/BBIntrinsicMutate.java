package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Phi.Input;
import org.prlprg.ir.cfg.Stmt.Args;

interface BBIntrinsicMutate {
  // region mutate
  // region split and merge
  /**
   * Split the basic block at the given index and make the new block a predecessor. Specifically:
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
  BB splitNewPredecessor(int index);

  /**
   * Split the basic block at the given index and make the new block a successor. Specifically:
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
  BB splitNewSuccessor(int index);

  /**
   * Asserts that:
   *
   * <ul>
   *   <li>this block's jump is a GOTO that points to the given block.
   *   <li>The given block has exactly one predecessor
   *   <li>The given block has no phis (by now, those should all be replaced with their single input
   *       in arguments and removed).
   * </ul>
   *
   * <p>Then merges with the given block. Specifically:
   *
   * <ul>
   *   <li>This block will have all statements and jump from the given block.
   *   <li>The given block will be removed from the CFG.
   *   <li>In successors of other BBs, the given block will be replaced with this block.
   * </ul>
   *
   * @throws IllegalArgumentException If this block or the given block don't meet the preconditions.
   */
  void mergeWithSuccessor(BB succ);

  // endregion

  // region add nodes
  /**
   * Add a φ node, whose input nodes are of the given type, to this BB and return it.
   *
   * <p>The returned {@link Phi} implements the necessary superclass so that it's acceptable to
   * replace a node of this class with it.
   *
   * @param name A name of the phi, an empty string, or {@code null} to inherit the first input name
   *     (or empty string if there are no inputs). This is useful for debugging and error messages.
   * @throws UnsupportedOperationException If there's no φ type implemented for the given class.
   */
  <N extends Node> Phi<N> addPhi(
      Class<? extends N> nodeClass,
      @Nullable String name,
      Collection<? extends Input<? extends N>> inputs);

  /**
   * Add φ nodes, whose input nodes are of the given type, to this BB and returns them.
   *
   * @see #addPhi(Class, String, Collection)
   */
  ImmutableList<? extends Phi<?>> addPhis(Collection<? extends Phi.Args<?>> phiArgs);

  /**
   * Insert a statement in this BB at the given index.
   *
   * @param name A name of the statement, or an empty string. This is useful for debugging and error
   *     messages.
   * @param args The statement's arguments (data).
   * @return The inserted statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  <I extends Stmt> I insertAt(int index, String name, StmtData<I> args);

  /**
   * Insert statements in this BB starting from the given index.
   *
   * @param namesAndArgs The name and argument of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, String, StmtData)
   */
  ImmutableList<? extends Stmt> insertAllAt(int index, List<? extends Args<?>> namesAndArgs);

  /**
   * Insert statements in this BB at the given indices. The statements are inserted so that later
   * indices aren't offset by earlier ones, as if we inserted the statements with bigger indices
   * before those with smaller ones.
   *
   * @param indicesNamesAndArgs The index to insert, name, and argument of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If any of the indices are out of range.
   * @see #insertAt(int, String, StmtData)
   */
  ImmutableList<? extends Stmt> insertAllAt(Map<Integer, ? extends Args<?>> indicesNamesAndArgs);

  /**
   * Add a jump to this BB.
   *
   * @param name A small name for the jump, or an empty string. This is useful for debugging and
   *     error messages.
   * @param args The jump's arguments (data).
   * @return The added jump.
   * @throws IllegalArgumentException If it already has one.
   */
  <I extends Jump> I addJump(String name, JumpData<I> args);

  // endregion

  // region update nodes (replace and subst)
  /**
   * Create a new statement with {@code newArgs} and replace the statement at {@code index} with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old statement.</i> Use {@link
   * #subst(Instr, String, InstrData)} to do that if both statements have the same # of return
   * values, otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new statement, an empty string, or {@code null} to take the
   *     old statement's name (empty string makes the new statement unnamed). This is useful for
   *     debugging and error messages.
   * @param newArgs The new statement's arguments (data).
   * @return The new statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  <I extends Stmt> I replaceNoSubst(int index, @Nullable String newName, StmtData<I> newArgs);

  /**
   * Create a new jump with {@code newArgs} and replace the BB's current jump with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old jump.</i> Use {@link
   * #subst(Instr, String, InstrData)} to do that if both jumps have the same # of return values,
   * otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new jump, an empty string, or {@code null} to take the old
   *     jump's name (empty string makes the new jump unnamed). This is useful for debugging and
   *     error messages.
   * @param newArgs The new jump's arguments (data).
   * @return The new jump.
   * @throws IllegalStateException If the BB doesn't have a jump. If this is the case, use {@link
   *     BB#addJump(String, JumpData)} instead.
   */
  <I extends Jump> I replaceJumpNoSubst(@Nullable String newName, JumpData<I> newArgs);

  /**
   * Add an input to a {@link Phi} in this BB.
   *
   * @throws NoSuchElementException If the φ-node isn't in this BB.
   * @throws IllegalArgumentException If there's already an input from the incoming {@link BB}.
   */
  <N extends Node> void addPhiInput(Phi<N> phi, BB incomingBB, N node);

  /**
   * Remove an input from a {@link Phi} in this BB.
   *
   * @return The input corresponding to the incoming BB, which was just removed.
   * @throws NoSuchElementException If the φ-node isn't in this BB.
   * @throws IllegalArgumentException If the input isn't present.
   */
  <N extends Node> N removePhiInput(Phi<N> phi, BB incomingBB);

  /**
   * Replace the data within {@code oldInstr} with {@code newArgs} and update accordingly. This is
   * equivalent to removing {@code oldInstr} and inserting a new instruction with {@code newArgs} in
   * its place, then replacing {@code oldInstr}'s return values in arguments with those from the new
   * instruction. However, it has a much lower time complexity (O(1) without the assertions).
   *
   * @param newName A small name for the new instruction, an empty string, or {@code null} to take
   *                the old instruction's name (empty string makes the new instruction unnamed).
   *                This is useful for debugging and error messages.
   * @param newArgs The new instruction's arguments (data).
   * @throws IllegalArgumentException if {@code oldInstr} is not in this BB.
   * @throws IllegalArgumentException if {@code newArgs} is an incompatible type. Specifically, it
   *                                  must produce contain the same # of values as {@code oldInstr}.
   *                                  If not, you must call
   *                                  {@link BB#replaceNoSubst(int, String, StmtData)} or
   *                                  {@link BB#replaceJumpNoSubst(String, JumpData), and be aware
   *                                  that those won't replace the instruction's return values in
   *                                  arguments (those must either not exist or be replaced
   *                                  manually).
   */
  <I extends Instr> void subst(I instr, @Nullable String newName, InstrData<I> newArgs);

  // endregion

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
  void removeAllPhis(Collection<? extends Phi<?>> phis);

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
   * Remove the statements from {@code fromIndex} to {@code toIndex}.
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
  void removeAllStmts(Collection<? extends Stmt> stmts);

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
  // endregion
  // endregion
}