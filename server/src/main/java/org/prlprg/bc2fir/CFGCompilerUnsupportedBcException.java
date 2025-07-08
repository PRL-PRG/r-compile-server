package org.prlprg.bc2fir;

import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc2ir.CFGCompilerException;
import org.prlprg.ir.cfg.builder.CFGCursor;

/**
 * {@link org.prlprg.bc2ir.CFGCompilerException} thrown when encountering an unsupported bytecode
 * instruction, e.g. {@link org.prlprg.bc.BcInstr.StartLoopCntxt}.
 */
public class CFGCompilerUnsupportedBcException extends CFGCompilerException {
  CFGCompilerUnsupportedBcException(
      String message, Bc bc, int bcPos, CFGCursor irPos, @Nullable Throwable cause) {
    super(message, bc, bcPos, irPos, cause);
  }
}
