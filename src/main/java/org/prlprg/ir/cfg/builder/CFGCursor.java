package org.prlprg.ir.cfg.builder;

import com.google.common.collect.ImmutableList;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InstrOrPhi;
import org.prlprg.ir.cfg.Jump;
import org.prlprg.ir.cfg.JumpData;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;

/**
 * Stores a location within a {@link CFG} and updates when operations are performed on it.
 *
 * <p>You can already mutate {@link CFG}, {@link BB}, and {@link InstrOrPhi} directly. This class
 * lets you write code like "go to BB X position N, insert A, insert B, insert C, now go to BB Y
 * position M, remove 5 instructions, ..."; whereas when you insert/remove basic blocks and
 * instructions in {@link CFG} and {@link BB} respectively, you have to specify the location every
 * time ("in BB X, insert A at position N, etc.").
 *
 * <p>Note that the cursor won't update it's block or index if external edits are applied to the
 * graph while it's alive.
 */
public class CFGCursor {
  private final CFG cfg;
  private BB bb;
  private int stmtIdx;

  // region configure
  // region construct
  /** Initializes with the location set to the entry-point of the given CFG. */
  public CFGCursor(CFG cfg) {
    this.cfg = cfg;
    this.bb = cfg.entry();
    this.stmtIdx = 0;
  }

  /**
   * Initializes with the location set to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   */
  public CFGCursor(BB bb, int stmtIdx) {
    if (stmtIdx < 0 || stmtIdx > bb.stmts().size()) {
      throw new IndexOutOfBoundsException("index " + stmtIdx + " out of bounds for " + bb);
    }

    this.cfg = bb.cfg();
    this.bb = bb;
    this.stmtIdx = stmtIdx;
  }

  // endregion construct

  // region move (cursor)
  /**
   * Moves to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveTo(BB bb, int stmtIdx) {
    if (bb.cfg() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }
    if (stmtIdx < 0 || stmtIdx > bb.stmts().size()) {
      throw new IndexOutOfBoundsException("index " + stmtIdx + " out of bounds for " + bb);
    }

    this.bb = bb;
    this.stmtIdx = stmtIdx;
  }

  /**
   * Moves to the start (before first statement) of the given block.
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToStart(BB bb) {
    if (bb.cfg() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }

    this.bb = bb;
    this.stmtIdx = 0;
  }

  /**
   * Moves to the end (after last statement) of the given block.
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToEnd(BB bb) {
    if (bb.cfg() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }

    this.bb = bb;
    this.stmtIdx = bb.stmts().size();
  }

  /**
   * Moves to the given statement index within the current block.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   */
  public void moveToLocal(int stmtIdx) {
    if (stmtIdx < 0 || stmtIdx > bb.stmts().size()) {
      throw new IndexOutOfBoundsException("index " + stmtIdx + " out of bounds for " + bb);
    }

    this.stmtIdx = stmtIdx;
  }

  /** Moves to the start (before first statement) of the current block. */
  public void moveToLocalStart() {
    this.stmtIdx = 0;
  }

  /** Moves to the end (after last statement) of the current block. */
  public void moveToLocalEnd() {
    this.stmtIdx = bb.stmts().size();
  }

  /** Moves to the start (before first statement) of the CFG entry. */
  public void moveToEntryStart() {
    this.bb = cfg.entry();
    this.stmtIdx = 0;
  }

  // endregion move (cursor)
  // endregion configure

  // region build
  // region insert
  /**
   * Insert a statement at the current insertion point.
   *
   * <p>This advances the insertion point to after the inserted statement.
   *
   * @param args The statement's arguments (data).
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I insert(StmtData<I> args) {
    return insert("", args);
  }

  /**
   * Insert a statement at the current insertion point.
   *
   * <p>This advances the insertion point to after the inserted statement.
   *
   * @param name A small name for the statement, or an empty string. This is useful for debugging
   *     and error messages.
   * @param args The statement's arguments (data).
   * @return Ths inserted statement.
   */
  public <I extends Stmt> I insert(String name, StmtData<I> args) {
    var result = bb.insertAt(stmtIdx, name, args);
    stmtIdx++;
    return result;
  }

  /**
   * Insert statements at the current insertion point.
   *
   * <p>This is faster than {@link #insert(String, StmtData)} for many instructions.
   *
   * <p>This advances the insertion point to after the inserted statements.
   *
   * @param namesAndArgs The name and argument of each statement. See {@link #insert(String,
   *     StmtData)}.
   * @return Ths inserted statements.
   * @see #insert(String, StmtData)
   */
  public ImmutableList<Stmt> insert(List<Stmt.Args> namesAndArgs) {
    var result = bb.insertAllAt(stmtIdx, namesAndArgs);
    stmtIdx += namesAndArgs.size();
    return result;
  }

  /**
   * Insert a jump at the current insertion point, assuming it's at the end of the block.
   *
   * <p>Throws {@link IllegalStateException} if the cursor is not at the end of the current block,
   * or if the block already has a jump.
   *
   * <p>This <i>doesn't</i> move the insertion point, unlike statement insertions (e.g. {@link
   * #insert(String, StmtData)}), since the jump may be a return or branch, so it's ambiguous where
   * the new insertion point should be.
   *
   * @param args The jump's arguments (data).
   * @return Ths inserted jump.
   */
  public <I extends Jump> I insert(JumpData<I> args) {
    return insert("", args);
  }

  /**
   * Insert a jump at the current insertion point, assuming it's at the end of the block.
   *
   * <p>Throws {@link IllegalStateException} if the cursor is not at the end of the current block,
   * or if the block already has a jump.
   *
   * <p>This <i>doesn't</i> move the insertion point, unlike statement insertions (e.g. {@link
   * #insert(String, StmtData)}), since the jump may be a return or branch, so it's ambiguous where
   * the new insertion point should be.
   *
   * @param name A small name for the jump, or an empty string. This is useful for debugging and
   *     error messages.
   * @param args The jump's arguments (data).
   * @return Ths inserted jump.
   */
  public <I extends Jump> I insert(String name, JumpData<I> args) {
    if (stmtIdx != bb.stmts().size()) {
      throw new IllegalStateException("can't insert jump in the middle of a block");
    }
    return bb.addJump(name, args);
  }

  /**
   * Insert a jump at the current insertion point, splitting the BB in two, and move to the
   * successor.
   *
   * @param insertion Computes the jump's data (arguments) given the new successor.
   * @return The inserted jump.
   */
  public <I extends Jump> I insert(JumpInsertion<? extends I> insertion) {
    return insert("", insertion);
  }

  /**
   * Insert a jump at the current insertion point, splitting the BB in two, and move to the
   * successor.
   *
   * @param name A name of the jump, or an empty string. This is useful for debugging and error
   *     messages.
   * @param insertion Computes the jump's data (arguments) given the new successor.
   * @return The inserted jump.
   */
  public <I extends Jump> I insert(String name, JumpInsertion<? extends I> insertion) {
    var newSuccessor = bb.splitNewSuccessor(stmtIdx);
    var result = bb.replaceJump(name, insertion.compute(newSuccessor));
    moveToStart(newSuccessor);
    return result;
  }

  /**
   * Insert the entire {@link CFG} in between statements in the current basic block.
   *
   * <p>Specifically, at the current index, insert the CFG's entry block, then the CFG's blocks in
   * order, then the CFG's exits will all be followed by the instructions after.
   *
   * <p>This effectively copies the CFG: it doesn't mutate the original, and all inserted BBs and
   * instructions are new.
   */
  public void inline(CFG cfgToInline) {
    bb = bb.inlineAt(stmtIdx, cfgToInline);
    stmtIdx = 0;
  }

  // endregion insert

  // region remove
  /**
   * Remove the instruction at (immediately after) the current insertion.
   *
   * <p>Specifically, remove the statement at the current insertion point, or remove the jump if at
   * at the end of statements.
   *
   * <p>This doesn't affect the insertion point; it will point to the instruction after the removed
   * one, or {@code null} if it was the last.
   *
   * @throws IllegalStateException If at the end and there is no jump.
   */
  public void remove() {
    if (stmtIdx == bb.stmts().size()) {
      if (bb.jump() == null) {
        throw new IllegalStateException("can't remove jump at end of block without jump");
      }
      bb.removeJump();
    } else {
      bb.removeAt(stmtIdx);
    }
  }

  /**
   * Remove {@code n} instructions at (immediately after) the current insertion point.
   *
   * <p>This is equivalent to calling {@link #remove()} {@code n} times, but faster for large {@code
   * n}.
   *
   * <p>This doesn't affect the insertion point; it will point to the instruction after the removed
   * one, or {@code null} if it was the last.
   *
   * @throws IndexOutOfBoundsException If at the end and there is no jump.
   */
  public void removeN(int n) {
    if (stmtIdx + n > bb.numInstrs()) {
      throw new IndexOutOfBoundsException("can't remove " + n + " instructions at " + stmtIdx);
    }
    if (stmtIdx + n == bb.stmts().size() + 1) {
      bb.removeAllAt(stmtIdx, bb.stmts().size());
      bb.removeJump();
    } else {
      bb.removeAllAt(stmtIdx, stmtIdx + n);
    }
  }

  // endregion remove

  // region replace
  /**
   * Replace the statement or jump at the current insertion point with a new statement.
   *
   * <p>The replaced instruction's return values won't be substituted in other instructions'
   * arguments, it will just be removed.
   *
   * @return the new statement which replaced the current one.
   */
  public <I extends Stmt> I replace(String name, StmtData<I> args) {
    if (bb.stmts().size() == stmtIdx) {
      bb.removeJump();
      return bb.insertAt(stmtIdx, name, args);
    } else {
      return bb.replace(stmtIdx, name, args);
    }
  }

  // endregion replace

  // region move (instructions)
  /**
   * Move the instruction at the current insertion point to the given index, possibly in a different
   * block.
   *
   * <p>This doesn't move the cursor <i>unless</i> you move the statement before the index in this
   * block, then it will increment by 1.
   *
   * @throws IllegalArgumentException If at the end of the current block. <b>OR</b> if any
   *     preconditions in {@link BB#moveInstr(int, BB, int)} are violated.
   * @throws IndexOutOfBoundsException If {@code newIndex} is out of bounds for the new block.
   */
  public void moveInstr(BB newBB, int newIndex) {
    if (stmtIdx == bb.numInstrs()) {
      throw new IllegalStateException(
          "No instruction to move, because we're at the end of the current block.");
    }
    if (newIndex < 0 || newIndex > newBB.stmts().size()) {
      throw new IndexOutOfBoundsException("Index " + newIndex + " out of bounds for " + newBB.id());
    }

    bb.moveInstr(stmtIdx, newBB, newIndex);

    if (newBB == bb && newIndex < stmtIdx) {
      stmtIdx++;
    }
  }

  /**
   * Move {@code n} instructions at the current insertion point to the given index, possibly in a
   * different block.
   *
   * <p>This doesn't move the cursor <i>unless</i> you move the statement before the index in this
   * block, then it will increment by {@code n}.
   *
   * @throws IllegalArgumentException If {@code count} goes past the end of the current block.
   *     <b>OR</b> if any preconditions in {@link BB#moveInstrs(int, int, BB, int)} are violated.
   * @throws IndexOutOfBoundsException If {@code newIndex} is out of bounds for the new block.
   */
  public void moveInstrs(int count, BB newBB, int newIndex) {
    if (stmtIdx + count > bb.numInstrs()) {
      throw new IllegalStateException(
          "Don't have "
              + count
              + " instructions to move, because the cursor plus that count goes past the end of the current block.");
    }
    if (newIndex < 0 || newIndex > newBB.stmts().size()) {
      throw new IndexOutOfBoundsException("Index " + newIndex + " out of bounds for " + newBB.id());
    }

    bb.moveInstrs(count, stmtIdx, newBB, newIndex);

    if (newBB == bb && newIndex < stmtIdx) {
      stmtIdx += count;
    }
  }

  // endregion move (instructions)

  // endregion build

  // region access
  /** The control-flow-graph the cursor operates on. */
  public CFG cfg() {
    return cfg;
  }

  /** The current block the cursor is "in". */
  public BB bb() {
    return bb;
  }

  /**
   * The index of the current statement within the {@linkplain #bb() current block}, where the
   * cursor is "at".
   */
  public int stmtIdx() {
    return stmtIdx;
  }

  /**
   * The instruction immediately after the {@linkplain #stmtIdx() current index} in the {@linkplain
   * #bb() current block}; the instruction the cursor is "at".
   *
   * <p>Returns {@code null} if the cursor is at the end of the current block and there is no jump.
   */
  public @Nullable Instr instr() {
    assert stmtIdx <= bb.stmts().size();
    return stmtIdx < bb.stmts().size() ? bb.stmts().get(stmtIdx) : bb.jump();
  }
  // endregion access
}
