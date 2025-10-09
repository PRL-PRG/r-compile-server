package org.prlprg.bc2fir;

final class BcCompilerUnsupportedException extends RuntimeException {
  public BcCompilerUnsupportedException() {
    super("closure can't be compiled into R bytecode");
  }
}
