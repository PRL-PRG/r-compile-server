package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import javax.annotation.Nullable;

interface BBIntrinsicMutate {
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
   * Add a {@linkplain Phi phi node}, whose input nodes are of the given class, to this BB and
   * return it.
   *
   * <p>The actual input nodes are all "unset" {@link InvalidNode}s, one for each of the BB's
   * predecessors.
   *
   * @throws UnsupportedOperationException If there's no phi class implemented for the given class
   *     (e.g. {@link RValuePhi} is for {@link RValue}s; there isn't an analogue for all node types,
   *     those without one will cause this exception).
   */
  <N extends Node> Phi<N> addPhi(Class<? extends N> nodeClass);

  /**
   * {@link #addPhi(Class)} with a preset inputs.
   *
   * @throws IllegalArgumentException If {@code inputs} doesn't contain an input for each of this
   *     block's predecessors.
   */
  <N extends Node> Phi<N> addPhi(
      Class<? extends N> nodeClass, Collection<? extends Phi.Input<? extends N>> inputs);

  /**
   * Add {@linkplain Phi phi nodes}, whose input nodes are of the given class, to this BB and
   * returns them.
   *
   * @see #addPhi(Class)
   */
  ImmutableList<? extends Phi<?>> addPhis(Collection<? extends Class<? extends Node>> nodeClasses);

  /**
   * {@link #addPhis(Collection)} with preset inputs
   *
   * @throws IllegalArgumentException If any of the args' inputs doesn't contain an input for each
   *     of this block's predecessors.
   */
  ImmutableList<? extends Phi<?>> addPhis1(Collection<Phi.Args> phiArgs);

  /**
   * Insert a statement in this BB at the given index.
   *
   * @param name A name for the statement, useful for debugging and error messages, e.g. the
   *     variable name if this is {@link org.prlprg.ir.cfg.StmtData.LdVar}. If there's no good name,
   *     pass the empty string.
   * @param args The statement's arguments (data).
   * @return The inserted statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  <I extends Stmt> I insertAt(int index, String name, StmtData<I> args);

  /**
   * Insert a statement in this BB at the given index.
   *
   * @param args The statement's arguments (data).
   * @return The inserted statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  default <I extends Stmt> I insertAt(int index, StmtData<I> args) {
    return insertAt(index, "", args);
  }

  /**
   * Insert statements in this BB starting from the given index.
   *
   * @param namesAndArgs The name and data of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, String, StmtData)
   */
  ImmutableList<? extends Stmt> insertAllAt(int index, List<Stmt.Args> namesAndArgs);

  /**
   * Insert statements in this BB starting from the given index.
   *
   * @param args The data of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If the index is out of range.
   * @see #insertAt(int, String, StmtData)
   */
  default ImmutableList<? extends Stmt> insertAllAt1(int index, List<StmtData<?>> args) {
    return insertAllAt(index, args.stream().map(Stmt.Args::new).toList());
  }

  /**
   * Insert statements in this BB at the given indices.
   *
   * <p>The statements are inserted so that later indices aren't offset by earlier ones, as if we
   * inserted the statements with bigger indices before those with smaller ones.
   *
   * @param indicesNamesAndArgs The index to insert, name, and data of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If any of the indices are out of range.
   * @see #insertAt(int, String, StmtData)
   */
  ImmutableList<? extends Stmt> insertAllAt(Map<Integer, Stmt.Args> indicesNamesAndArgs);

  /**
   * Insert statements in this BB at the given indices.
   *
   * <p>The statements are inserted so that later indices aren't offset by earlier ones, as if we
   * inserted the statements with bigger indices before those with smaller ones.
   *
   * @param indicesAndArgs The index to insert, name, and data of each statement.
   * @return The inserted statements.
   * @throws IndexOutOfBoundsException If any of the indices are out of range.
   * @see #insertAt(int, String, StmtData)
   */
  default ImmutableList<? extends Stmt> insertAllAt1(Map<Integer, StmtData<?>> indicesAndArgs) {
    return insertAllAt(
        indicesAndArgs.entrySet().stream()
            .collect(Collectors.toMap(Map.Entry::getKey, e -> new Stmt.Args(e.getValue()))));
  }

  /**
   * Add a jump to this BB.
   *
   * @param name Usually the empty string; see {@link #insertAt(int, String, StmtData)}.
   * @param args The jump's arguments (data).
   * @return The added jump.
   * @throws IllegalArgumentException If the BB already has a jump.
   */
  <I extends Jump> I addJump(String name, JumpData<I> args);

  /**
   * Add a jump to this BB.
   *
   * @param args The jump's arguments (data).
   * @return The added jump.
   * @throws IllegalArgumentException If the BB already has a jump.
   */
  default <I extends Jump> I addJump(JumpData<I> args) {
    return addJump("", args);
  }

  // endregion add nodes

  // region update nodes (replace and subst)
  /**
   * Create a new statement with {@code newArgs} and replace the statement at {@code index} with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old statement.</i> Use {@link
   * Instr#mutateArgs(Instr, InstrData)} to do that if both statements have the same # of return
   * values, otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new statement, an empty string, or {@code null} to take the
   *     old statement's name (empty string makes the new statement unnamed). This is useful for
   *     debugging and error messages. See {@link #insertAt(int, String, StmtData)}.
   * @param newArgs The new statement's arguments (data).
   * @return The new statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  <I extends Stmt> I replace(int index, @Nullable String newName, StmtData<I> newArgs);

  /**
   * Create a new statement with {@code newArgs} and replace the statement at {@code index} with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old statement.</i> Use {@link
   * Instr#mutateArgs(Instr, InstrData)} to do that if both statements have the same # of return
   * values, otherwise you must replace them manually (if there are any).
   *
   * @param newArgs The new statement's arguments (data).
   * @return The new statement.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  default <I extends Stmt> I replace(int index, StmtData<I> newArgs) {
    return replace(index, "", newArgs);
  }

  /**
   * Create a new jump with {@code newArgs} and replace the BB's current jump with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old jump.</i> Use {@link
   * Instr#mutateArgs(Instr, InstrData)} to do that if both jumps have the same # of return values,
   * otherwise you must replace them manually (if there are any).
   *
   * @param newName A small name for the new jump, an empty string, or {@code null} to take the old
   *     jump's name (empty string makes the new jump unnamed). This is useful for debugging and
   *     error messages. See {@link #insertAt(int, String, StmtData)}.
   * @param newArgs The new jump's arguments (data).
   * @return The new jump.
   * @throws IllegalStateException If the BB doesn't have a jump. If this is the case, use {@link
   *     BB#addJump(String, JumpData)} instead.
   */
  <I extends Jump> I replaceJump(@Nullable String newName, JumpData<I> newArgs);

  /**
   * Create a new jump with {@code newArgs} and replace the BB's current jump with it.
   *
   * <p><i>This won't replace occurrences of any return values of the old jump.</i> Use {@link
   * Instr#mutateArgs(Instr, InstrData)} to do that if both jumps have the same # of return values,
   * otherwise you must replace them manually (if there are any).
   *
   * @param newArgs The new jump's arguments (data).
   * @return The new jump.
   * @throws IllegalStateException If the BB doesn't have a jump. If this is the case, use {@link
   *     BB#addJump(String, JumpData)} instead.
   */
  default <I extends Jump> I replaceJump(JumpData<I> newArgs) {
    return replaceJump("", newArgs);
  }

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
  // endregion remove nodes
}
