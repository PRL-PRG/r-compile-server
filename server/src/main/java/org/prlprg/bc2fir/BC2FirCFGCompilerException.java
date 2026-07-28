package org.prlprg.bc2fir;

import org.jspecify.annotations.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;

/**
 * Exception thrown when {@link BC2FirCFGCompiler} fails to compile a {@link Bc} into a {@link CFG}.
 *
 * <p>Compilation either failed because the {@link Bc} contained invalid data (nonsensical
 * instructions), there's a bug in the {@link BC2FirCFGCompiler}, or the {@link Bc} contains an
 * unsupported instruction (in which case this is a {@link BC2FirCFGCompilerUnsupportedException}).
 */
public class BC2FirCFGCompilerException extends RuntimeException {
  private final Bc bc;
  private final int bcPos;
  private final CFGCursor irPos;

  BC2FirCFGCompilerException(String message, Bc bc, int bcPos, CFGCursor irPos) {
    this(message, bc, bcPos, irPos, null);
  }

  BC2FirCFGCompilerException(
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
        + "\n"
        + irPos
        + "\n\nAt BC instruction "
        + bcPos
        + " in:\n\n"
        + bc
        + "\n\nCFG:\n"
        + irPos.cfg();
  }
}
