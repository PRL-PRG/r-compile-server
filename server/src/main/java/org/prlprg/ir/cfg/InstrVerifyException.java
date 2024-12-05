package org.prlprg.ir.cfg;

/** Exception thrown when {@link org.prlprg.ir.cfg.Instr#verify()} fails. */
public class InstrVerifyException extends RuntimeException {
  InstrVerifyException(String message) {
    super(message);
  }
}
