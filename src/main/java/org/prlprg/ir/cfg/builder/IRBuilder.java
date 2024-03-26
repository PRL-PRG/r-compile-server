package org.prlprg.ir.cfg.builder;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;

/** Perform compound operations on a {@link CFG}. */
public class IRBuilder {
  private final CFG cfg;
  private BB bb;
  private int stmtIdx;

  // region configuration
  // region construct
  /** Initializes with the location set to the entry-point of the given CFG. */
  public IRBuilder(CFG cfg) {
    this.cfg = cfg;
    this.bb = cfg.entry();
    this.stmtIdx = 0;
  }

  /**
   * Initializes with the location set to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   */
  public IRBuilder(BB bb, int stmtIdx) {
    if (stmtIdx < 0 || stmtIdx > bb.stmts().size()) {
      throw new IndexOutOfBoundsException("Index " + stmtIdx + " out of bounds for " + bb);
    }

    this.cfg = bb.cfg();
    this.bb = bb;
    this.stmtIdx = stmtIdx;
  }

  // endregion

  // region move
  /**
   * Moves to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveTo(BB bb, int stmtIdx) {
    if (bb.cfg() != cfg) {
      throw new IllegalArgumentException("Block " + bb + " belongs to a different CFG");
    }
    if (stmtIdx < 0 || stmtIdx > bb.stmts().size()) {
      throw new IndexOutOfBoundsException("Index " + stmtIdx + " out of bounds for " + bb);
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
      throw new IllegalArgumentException("Block " + bb + " belongs to a different CFG");
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
      throw new IllegalArgumentException("Block " + bb + " belongs to a different CFG");
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
      throw new IndexOutOfBoundsException("Index " + stmtIdx + " out of bounds for " + bb);
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

  // endregion
  // endregion

  // region build
  // region insert
  /**
   * Insert a statement at the current insertion point.
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
   * @param namesAndArgs The name and argument of each statement. See {@link #insert(String,
   *     StmtData)}.
   * @return Ths inserted statements.
   * @see #insert(String, StmtData)
   */
  public ImmutableList<? extends Stmt> insert(List<Stmt.Args<?>> namesAndArgs) {
    var result = bb.insertAllAt(stmtIdx, namesAndArgs);
    stmtIdx += namesAndArgs.size();
    return result;
  }

  /**
   * Insert an instruction at the current insertion point. If the instruction is a phi and index
   * isn't 0, or if it's a jump and index isn't the end with the existing jump {@code null}, this
   * will split the BB.
   *
   * @param name A name of the instruction, or an empty string. This is useful for debugging and
   *     error messages.
   * @param args The instruction's arguments (data).
   * @return The inserted instruction.
   * @throws IndexOutOfBoundsException If the index is out of range.
   */
  @SuppressWarnings("unchecked")
  public <I extends Instr> I insert(String name, BBInsertion<? extends I> args) {
    return switch ((BBInsertion<?>) args) {
      case PhiInsertion<?> phiArgs -> {
        if (stmtIdx != 0) {
          bb.splitNewPredecessor(stmtIdx);
          stmtIdx = 0;
        }
        yield (I) bb.addPhi(phiArgs.nodeClass(), name, phiArgs.inputs());
      }
      case StmtInsertion<?>(var data) -> (I) insert(name, data);
      case JumpInsertion<?> jumpArgs -> {
        BB newSuccessor = null;
        if (stmtIdx != bb.stmts().size() || bb.jump() != null) {
          newSuccessor = bb.splitNewSuccessor(stmtIdx);
        }
        stmtIdx++;
        yield (I) bb.addJump(name, jumpArgs.compute(newSuccessor));
      }
    };
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

  // endregion

  // region remove
  /**
   * Remove the instruction at (immediately after) the current insertion.
   *
   * <p>Specifically, remove the statement at the current insertion point, or remove the jump if at
   * at the end of statements.
   *
   * @throws IllegalStateException If at the end and there is no jump.
   */
  public void remove() {
    if (stmtIdx == bb.stmts().size()) {
      if (bb.jump() == null) {
        throw new IllegalStateException("Cannot remove jump at end of block without jump");
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
   * @throws IndexOutOfBoundsException If at the end and there is no jump.
   */
  public void removeN(int n) {
    if (stmtIdx + n > bb.numInstrs()) {
      throw new IndexOutOfBoundsException("Cannot remove " + n + " instructions at " + stmtIdx);
    }
    if (stmtIdx + n == bb.stmts().size() + 1) {
      bb.removeAllAt(stmtIdx, bb.stmts().size());
      bb.removeJump();
    } else {
      bb.removeAllAt(stmtIdx, stmtIdx + n);
    }
  }
  // endregion
}
