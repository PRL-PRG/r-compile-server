package org.prlprg.snapshot.bc2fir;

final class BCCompilerUnsupportedException extends RuntimeException {
  public BCCompilerUnsupportedException() {
    super("closure can't be compiled into R bytecode");
  }
}
