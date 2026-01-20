package org.prlprg.bc2fir;

import org.jspecify.annotations.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;

/**
 * {@link BC2CFGCompilerException} thrown when encountering an unsupported bytecode instruction,
 * e.g. {@link org.prlprg.bc.BcInstr.GetSymFun GetSymFun}.
 */
public final class BC2CFGCompilerUnsupportedException extends BC2CFGCompilerException {
  BC2CFGCompilerUnsupportedException(
      String message, Bc bc, int bcPos, CFGCursor irPos, @Nullable Throwable cause) {
    super(message, bc, bcPos, irPos, cause);
  }
}
