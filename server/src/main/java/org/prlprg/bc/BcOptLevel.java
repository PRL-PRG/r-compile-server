package org.prlprg.bc;

public enum BcOptLevel {
  /// The optimization level for BC generated specifically for FIŘ.
  ///
  /// This is equivalent to [#DEFAULT], with minor tweaks to prevent complex bytecode generation
  /// and maintain the stack size in unreachable bytecode.
  FIR(-1),
  /// No optimization. Specifically, no inlining.
  NONE(0),
  /// Less than default.
  ///
  /// From GNU-R's `compiler.R`:
  /// > Functions in the base packages found through a namespace that are not
  /// > shadowed by function arguments or visible local assignments may be inlined.
  MINIMAL(1),
  /// The default optimization level in GNU-R's `compiler::cmpfun` and here.
  ///
  /// From GNU-R's `compiler.R`:
  /// > In addition to the inlining permitted by Level 1, functions that are
  /// > syntactically special or are considered core language functions and are found via the global
  /// > environment at compile time may be inlined. Other functions in the base packages found via
  /// > the global environment may be inlined with a guard that ensures at runtime that the
  /// > inlined function has not been masked; if it has, then the call in handled by the AST
  /// > interpreter.
  DEFAULT(2),
  /// The maximum optimization level that affects GNU-R's `compiler::cmpfun` and here.
  ///
  /// From GNU-R's `compiler.R`:
  /// > Any function in the base packages found via the global environment may be inlined.
  MAX(3);

  public static BcOptLevel fromValue(int value) {
    for (var level : values()) {
      if (level.value() == value) {
        return level;
      }
    }
    throw new IllegalArgumentException("Invalid optimization level: " + value);
  }

  private final int value;

  BcOptLevel(int value) {
    this.value = value;
  }

  public int value() {
    return value;
  }
}
