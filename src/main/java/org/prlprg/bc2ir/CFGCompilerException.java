package org.prlprg.bc2ir;

import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.builder.CFGCursor;

/**
 * Exception thrown when {@link CFGCompiler} fails to compile a {@link Bc} into a {@link CFG}.
 *
 * <p>Compilation either failed because the {@link Bc} contained invalid data (nonsensical
 * instructions), there's a bug in the {@link CFGCompiler}, or the {@link Bc} contains an
 * unsupported instruction (in which case this is a {@link CFGCompilerUnsupportedBcException}).
 */
public class CFGCompilerException extends RuntimeException {
  private final int bcPos;
  private final CFGCursor irPos;

  CFGCompilerException(String message, int bcPos, CFGCursor irPos) {
    super(message);
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
        + irPos.bb().id()
        + " statement "
        + irPos.stmtIdx()
        + " in:\n\n"
        + irPos.cfg();
  }
}
