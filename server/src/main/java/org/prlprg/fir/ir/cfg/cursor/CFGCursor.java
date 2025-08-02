package org.prlprg.fir.ir.cfg.cursor;

import static org.prlprg.fir.ir.cfg.cursor.BBSplitter.splitNewSuccessor;

import java.util.List;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * Stores a location within a {@link CFG} and updates when operations are performed on it.
 *
 * <p>You can already mutate {@link CFG} and {@link BB} directly. This class lets you write code
 * like "go to BB X position N, insert A, insert B, insert C, now go to BB Y position M, remove 5
 * instructions, ..."; whereas when you insert/remove basic blocks and instructions in {@link CFG}
 * and {@link BB} respectively, you have to specify the location every time ("in BB X, insert A at
 * position N, etc.").
 *
 * <p>Note that the cursor won't update its block or index if external edits are applied to the
 * graph while it's alive.
 */
public final class CFGCursor {
  private final CFG cfg;
  private BB bb;
  private int instructionIndex;

  // region configure
  // region construct
  /** Initializes with the location set to the entry-point of the given CFG. */
  public CFGCursor(CFG cfg) {
    this.cfg = cfg;
    this.bb = cfg.entry();
    this.instructionIndex = 0;
  }

  /**
   * Initializes with the location set to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   */
  public CFGCursor(BB bb, int instructionIndex) {
    if (instructionIndex < 0 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException("index " + instructionIndex + " out of bounds for " + bb);
    }

    this.cfg = bb.owner();
    this.bb = bb;
    this.instructionIndex = instructionIndex;
  }

  // endregion construct

  // region move (cursor)
  /**
   * Moves to the given block and statement index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveTo(BB bb, int instructionIndex) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }
    if (instructionIndex < 0 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException("index " + instructionIndex + " out of bounds for " + bb);
    }

    this.bb = bb;
    this.instructionIndex = instructionIndex;
  }

  /**
   * Moves to the start (before first statement) of the given block.
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToStart(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }

    this.bb = bb;
    this.instructionIndex = 0;
  }

  /**
   * Moves to the end (after last statement) of the given block.
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToEnd(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb + " belongs to a different CFG");
    }

    this.bb = bb;
    this.instructionIndex = bb.statements().size();
  }

  /**
   * Moves to the given statement index within the current block.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds.
   */
  public void moveToLocal(int instructionIndex) {
    if (instructionIndex < 0 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException("index " + instructionIndex + " out of bounds for " + bb);
    }

    this.instructionIndex = instructionIndex;
  }

  /** Moves to the next instruction in the current block. */
  public void advance() {
    if (instructionIndex < bb.statements().size()) {
      instructionIndex++;
    } else {
      throw new IllegalStateException("can't move to next instruction at end of block " + bb);
    }
  }

  /** Moves to the start (before first statement) of the current block. */
  public void moveToLocalStart() {
    this.instructionIndex = 0;
  }

  /** Moves to the end (after last statement) of the current block. */
  public void moveToLocalEnd() {
    this.instructionIndex = bb.statements().size();
  }

  /** Moves to the start (before first statement) of the CFG entry. */
  public void moveToEntryStart() {
    this.bb = cfg.entry();
    this.instructionIndex = 0;
  }

  // endregion move (cursor)
  // endregion configure

  // region build
  // region insert
  /**
   * Insert a statement at the current insertion point.
   *
   * <p>This advances the insertion point to after the inserted statement.
   */
  public void insert(Statement statement) {
    bb.insertStatement(instructionIndex, statement);
    instructionIndex++;
  }

  /**
   * Insert statements at the current insertion point.
   *
   * <p>This is faster than {@link #insert(Statement)} for many instructions.
   *
   * <p>This advances the insertion point to after the inserted statements.
   */
  public void insert(List<Statement> statements) {
    bb.insertStatements(instructionIndex, statements);
    instructionIndex += statements.size();
  }

  /**
   * Insert a jump at the current insertion point, splitting the BB in two, passing it to the given
   * function which computes the jump, and move to the split successor.
   */
  public void insert(JumpInsertion insertion) {
    var newSuccessor = splitNewSuccessor(bb, instructionIndex);
    bb.setJump(insertion.compute(newSuccessor));
    moveToStart(newSuccessor);
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
   * @throws IllegalStateException If at the end and the jump is {@link Unreachable}.
   */
  public Instruction remove() {
    if (instructionIndex == bb.statements().size()) {
      var oldJump = bb.jump();
      if (oldJump instanceof Unreachable) {
        throw new IllegalStateException("can't remove jump at end of block without jump");
      }
      bb.setJump(new Unreachable());
      return oldJump;
    } else {
      return bb.removeStatementAt(instructionIndex);
    }
  }

  // endregion remove

  // region replace
  /**
   * Replace the instruction at the current insertion point with a new instruction.
   *
   * <p>The replaced instruction's return values won't be substituted in other instructions'
   * arguments, it will just be removed.
   *
   * <p>If the cursor is at the end of the current block, the instruction must be a jump. Otherwise,
   * it must be a statement. Throws {@link IllegalStateException} if not followed.
   */
  public Instruction replace(Instruction replacement) {
    if (instructionIndex == bb.statements().size()) {
      if (!(replacement instanceof Jump r)) {
        throw new IllegalStateException("can't replace jump with non-jump at end of block");
      }
      var old = bb.jump();
      bb.setJump(r);
      return old;
    } else if (replacement instanceof Statement r) {
      return bb.replaceStatementAt(instructionIndex, r);
    } else {
      throw new IllegalStateException("can't replace statement with non-expression at " + bb);
    }
  }

  // endregion replace

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
  public int instructionIndex() {
    return instructionIndex;
  }

  /**
   * The instruction immediately after the {@linkplain #instructionIndex() current index} in the
   * {@linkplain #bb() current block}; the instruction the cursor is "at".
   *
   * <p>Returns {@code null} if the cursor is at the end of the current block and there is no jump.
   */
  public Instruction instruction() {
    assert instructionIndex <= bb.statements().size();
    return instructionIndex < bb.statements().size()
        ? bb.statements().get(instructionIndex)
        : bb.jump();
  }

  /** Whether the cursor is at the end of the current block. */
  public boolean isAtLocalEnd() {
    return instructionIndex == bb.statements().size();
  }

  // endregion access

  public CFGCursor copy() {
    return new CFGCursor(bb, instructionIndex);
  }

  /// Pretty-print the cursor's position and context.
  ///
  /// Useful for debugging and error messages.
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  private static final int CONTEXT_LINES = 2;

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    var f = w.formatter();

    if (!bb.isEntry()) {
      w.write(bb.label());
      p.printAsList("(", ")", bb.phiParameters());
      w.write(":");
    } else {
      w.write("  ");
    }

    w.runIndented(
        () -> {
          // Show `CONTEXT_LINES` lines above and below the target line.
          // Show `...` if there are more lines above or below the context.
          // Each line is `-> ####:  instr`.
          // If the instruction spans multiple lines, we indent them.
          var firstIndex = Math.max(0, instructionIndex - CONTEXT_LINES);
          var lastIndex = Math.min(bb.instructions().size() - 1, instructionIndex + CONTEXT_LINES);
          var maxDigits = String.valueOf(lastIndex).length();
          var padding = 3 + maxDigits + 3;

          if (instructionIndex > CONTEXT_LINES) {
            w.write(" ".repeat(padding));
            w.write("...\n");
          }

          for (int i = firstIndex; i <= lastIndex; i++) {
            w.write(i == instructionIndex ? "-> " : "   ");
            f.format("%" + maxDigits + "d", i);
            w.write(":  ");

            var instruction = bb.instructions().get(i);
            w.runIndented(padding, () -> p.print(instruction));

            w.write("\n");
          }

          if (instructionIndex + CONTEXT_LINES + 1 < bb.instructions().size()) {
            w.write(" ".repeat(padding));
            w.write("...\n");
          }
        });
  }
}
