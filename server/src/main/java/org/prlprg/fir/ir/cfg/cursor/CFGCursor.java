package org.prlprg.fir.ir.cfg.cursor;

import static org.prlprg.fir.ir.cfg.cursor.BBSplitter.splitNewSuccessor;

import java.util.List;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.function.Function;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
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
    this.instructionIndex = -1;
  }

  /**
   * Initializes with the location set to the given block and instruction index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds (-1 is OK).
   */
  public CFGCursor(BB bb, int instructionIndex) {
    if (instructionIndex < -1 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException(
          "index " + instructionIndex + " out of bounds for " + bb.label());
    }

    this.cfg = bb.owner();
    this.bb = bb;
    this.instructionIndex = instructionIndex;
  }

  // endregion construct

  // region move (cursor)
  /**
   * Moves to the given block and instruction index.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds (-1 is OK).
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveTo(BB bb, int instructionIndex) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb.label() + " belongs to a different CFG");
    }
    if (instructionIndex < -1 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException(
          "index " + instructionIndex + " out of bounds for " + bb.label());
    }

    this.bb = bb;
    this.instructionIndex = instructionIndex;
  }

  /**
   * Moves to the given block's entry-point (before the first instruction).
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToStart(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb.label() + " belongs to a different CFG");
    }

    this.bb = bb;
    this.instructionIndex = -1;
  }

  /**
   * Moves to the given block's last instruction (jump).
   *
   * @throws IllegalArgumentException If the block belongs to a different CFG.
   */
  public void moveToEnd(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("block " + bb.label() + " belongs to a different CFG");
    }

    this.bb = bb;
    this.instructionIndex = bb.statements().size();
  }

  /**
   * Moves to the given instruction index within the current block.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds (-1 is OK).
   */
  public void moveToLocal(int instructionIndex) {
    if (instructionIndex < -1 || instructionIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException(
          "index " + instructionIndex + " out of bounds for " + bb.label());
    }

    this.instructionIndex = instructionIndex;
  }

  /** Moves to the next instruction in the current block. */
  public void advance() {
    if (instructionIndex == bb.statements().size()) {
      throw new IllegalStateException(
          "can't move to next instruction at end of block " + bb.label());
    }

    instructionIndex++;
  }

  /** Moves to the previous instruction in the current block. */
  public void unadvance() {
    if (instructionIndex == -1) {
      throw new IllegalStateException(
          "can't move to previous instruction at start of block " + bb.label());
    }

    instructionIndex--;
  }

  /** Moves to the current block's entry-point (before the first instruction). */
  public void moveToLocalStart() {
    this.instructionIndex = -1;
  }

  /** Moves to the current block's last instruction (jump). */
  public void moveToLocalEnd() {
    this.instructionIndex = bb.statements().size();
  }

  /** Moves to the CFG's entry-point. */
  public void moveToEntryStart() {
    this.bb = cfg.entry();
    this.instructionIndex = -1;
  }

  /**
   * Moves to the start of the block and advances to its end, calling the functions on each
   * instruction.
   */
  public void iterateBb(BB bb, Consumer<Statement> runStmt, Consumer<Jump> runJump) {
    moveToStart(bb);
    iterateCurrentBb(runStmt, runJump);
  }

  /**
   * Starting at the next instruction (`instructionIndex + 1`), advances to the end of the current
   * block, calling the functions on each (subsequent) instruction.
   */
  public void iterateCurrentBb(Consumer<Statement> runStmt, Consumer<Jump> runJump) {
    iterateCurrentBb1(
        runStmt,
        jump -> {
          runJump.accept(jump);
          return null;
        });
  }

  /**
   * Starting at the next instruction (`instructionIndex + 1`), advances to the end of the current
   * block, calling the functions on each (subsequent) instruction.
   *
   * @return The result of the function taking jump instruction.
   */
  public <T> T iterateCurrentBb1(Consumer<Statement> runStmt, Function<Jump, T> runJump) {
    for (advance(); !isAtLocalEnd(); advance()) {
      runStmt.accept((Statement) Objects.requireNonNull(instruction()));
    }
    return runJump.apply((Jump) Objects.requireNonNull(instruction()));
  }

  /**
   * Starting at the next instruction (`instructionIndex + 1`), advances up to the given index
   * (stops at `lastIndex + 1`), calling the functions on each (subsequent) instruction.
   *
   * @throws IndexOutOfBoundsException If the index is out of bounds or before `instructionIndex`.
   */
  public void iterateCurrentBbUpTo(
      int lastIndex, Consumer<Statement> runStmt, Consumer<Jump> runJump) {
    if (lastIndex < instructionIndex || lastIndex > bb.statements().size()) {
      throw new IndexOutOfBoundsException(
          "index " + lastIndex + " out of bounds for " + bb.label() + " at " + instructionIndex);
    }
    if (lastIndex == instructionIndex) {
      return;
    }
    for (advance(); instructionIndex < lastIndex; advance()) {
      runStmt.accept((Statement) Objects.requireNonNull(instruction()));
    }
    if (isAtLocalEnd()) {
      runJump.accept((Jump) Objects.requireNonNull(instruction()));
    } else {
      runStmt.accept((Statement) Objects.requireNonNull(instruction()));
    }
  }

  // endregion move (cursor)
  // endregion configure

  // region build
  // region insert
  /**
   * Insert a statement after the current instruction, and advance to it.
   *
   * @throws IndexOutOfBoundsException If the current instruction is the jump.
   */
  public void insert(Statement statement) {
    if (instructionIndex == bb.statements().size()) {
      throw new IndexOutOfBoundsException("can't insert a statement at the end of the block");
    }

    bb.insertStatement(instructionIndex + 1, statement);
    instructionIndex++;
  }

  /**
   * Insert statements after the current instruction, and advance to the last one.
   *
   * <p>This is faster than {@link #insert(Statement)} for many instructions.
   *
   * @throws IndexOutOfBoundsException If the current instruction is the jump.
   */
  public void insert(List<Statement> statements) {
    if (instructionIndex == bb.statements().size()) {
      throw new IndexOutOfBoundsException("can't insert statements at the end of the block");
    }

    bb.insertStatements(instructionIndex + 1, statements);
    instructionIndex += statements.size();
  }

  /**
   * Insert a jump after the current instruction, splitting the BB in two, passing it to the given
   * function which computes the jump, and move to the split successor.
   *
   * @throws IndexOutOfBoundsException If the current instruction is the jump.
   */
  public void insert(JumpInsertion insertion) {
    if (instructionIndex == bb.statements().size()) {
      throw new IndexOutOfBoundsException("can't insert jump-insertion at the end of the block");
    }

    var newSuccessor = splitNewSuccessor(bb, instructionIndex + 1);
    bb.setJump(insertion.compute(newSuccessor));
    moveToStart(newSuccessor);
  }

  // endregion insert

  // region remove
  /**
   * Remove the current instruction.
   *
   * @throws IndexOutOfBoundsException If there is no current instruction.
   * @throws IndexOutOfBoundsException If the current instruction is the jump.
   */
  public Instruction remove() {
    if (instructionIndex == -1) {
      throw new IndexOutOfBoundsException("cursor is before the block's first instruction");
    }
    if (instructionIndex == bb.statements().size()) {
      throw new IndexOutOfBoundsException("can't remove the jump instruction");
    }

    return bb.removeStatementAt(instructionIndex);
  }

  // endregion remove

  // region replace
  /**
   * Replace the current instruction.
   *
   * <p>The replaced instruction's return values won't be substituted in other instructions'
   * arguments, it will just be removed.
   *
   * @throws IndexOutOfBoundsException If there is no current instruction.
   * @throws IllegalArgumentException If the current instruction is a statement and its replacement
   *     is a jump, or vice versa.
   */
  public Instruction replace(Instruction replacement) {
    if (instructionIndex == -1) {
      throw new IndexOutOfBoundsException("cursor is before the block's first instruction");
    }

    if (instructionIndex == bb.statements().size()) {
      if (!(replacement instanceof Jump r)) {
        throw new IllegalArgumentException("can't replace jump with statement at end of block");
      }
      var old = bb.jump();
      bb.setJump(r);
      return old;
    } else if (replacement instanceof Statement r) {
      return bb.replaceStatementAt(instructionIndex, r);
    } else {
      throw new IllegalStateException("can't replace statement with jump");
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
   * The index of the current instruction within the {@linkplain #bb() current block}, where the
   * cursor is "at".
   *
   * <p>May be -1 if the cursor is before the first instruction, at the block's phi group or {@link
   * CFG} entry.
   */
  public int instructionIndex() {
    return instructionIndex;
  }

  /**
   * The current instruction, i.e. the instruction at {@link #instructionIndex()}.
   *
   * <p>Returns {@code null} if the cursor is before the first instruction.
   */
  public @Nullable Instruction instruction() {
    assert instructionIndex >= -1 && instructionIndex <= bb.statements().size();
    return instructionIndex < 0
        ? null
        : instructionIndex < bb.statements().size()
            ? bb.statements().get(instructionIndex)
            : bb.jump();
  }

  /** Whether the current instruction is the block's last instruction, i.e. a jump. */
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

    var scope = cfg.scope();
    p.printAsList("(", ")", scope.parameters());
    w.write(" -");
    p.print(scope.effects());
    w.write("> ");
    p.print(scope.returnType());
    w.write(", ");
    p.printSeparated(", ", scope.locals());
    if (!scope.locals().isEmpty()) {
      w.write(' ');
    }
    w.write("|\n");

    if (!bb.isEntry()) {
      w.write(bb.label());
      p.printAsList("(", ")", bb.phiParameters());
      w.write(":\n");
    }

    if (instructionIndex == -1) {
      w.write("^^^\n");
    }

    // Show `CONTEXT_LINES` lines above and below the target line.
    // Show `...` if there are more lines above or below the context.
    // Each line is ` -> ####:  instr`.
    // If the instruction spans multiple lines, we indent them.
    var firstIndex = Math.max(0, instructionIndex - CONTEXT_LINES);
    var lastIndex = Math.min(bb.instructions().size() - 1, instructionIndex + CONTEXT_LINES);
    var maxDigits = String.valueOf(lastIndex).length();
    var padding = 4 + maxDigits + 3;

    if (instructionIndex > CONTEXT_LINES) {
      w.write(" ".repeat(padding));
      w.write("...\n");
    }

    for (int i = firstIndex; i <= lastIndex; i++) {
      w.write(i == instructionIndex ? " -> " : "    ");
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
  }
}
