package org.prlprg.bc;

public interface BCCodeSnapshot {

  default void verify(String name, String code) {
    verify(name, code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
  }

  default void verify(String code) {
    verify(code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
  }

  void verify(String code, int optimizeLevel);

  void verify(String name, String code, int optimizationLevel);
}
