package org.prlprg.bc2fir;

import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;

/**
 * Exception thrown when {@link CFGCompiler} fails to compile a {@link Bc} into a {@link CFG}.
 *
 * <p>Compilation either failed because the {@link Bc} contained invalid data (nonsensical
 * instructions), there's a bug in the {@link CFGCompiler}, or the {@link Bc} contains an
 * unsupported instruction (in which case this is a {@link CFGCompilerUnsupportedBcException}).
 */
public class CFGCompilerException extends RuntimeException {
  private final Bc bc;
  private final int bcPos;
  private final CFGCursor irPos;

  CFGCompilerException(String message, Bc bc, int bcPos, CFGCursor irPos) {
    this(message, bc, bcPos, irPos, null);
  }

  CFGCompilerException(
      String message, Bc bc, int bcPos, CFGCursor irPos, @Nullable Throwable cause) {
    super(message, cause);
    this.bc = bc;
    this.bcPos = bcPos;
    this.irPos = irPos;
  }

  /** The index of the bytecode instruction where the exception was thrown. */
  public int bcPos() {
    return bcPos;
  }

  /**
   * The IR cursor at the position where the exception was thrown.
   *
   * <p>Contains the erroneous {@link CFG}, {@link BB}, and statement index.
   */
  public CFGCursor irPos() {
    return irPos;
  }

  @Override
  public String getMessage() {
    return super.getMessage()
        + "\nAt BC instruction "
        + bcPos
        + ", IR BB "
        + irPos.bb().label()
        + " instruction "
        + irPos.instructionIndex()
        + " in:\n\n"
        + irPos.cfg()
        + "\n\n"
        + bc;
  }
}
