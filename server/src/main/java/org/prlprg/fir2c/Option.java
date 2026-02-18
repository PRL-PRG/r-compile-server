package org.prlprg.fir2c;

/// Configuration flags for the FIŘ to C compiler.
public enum Option {
  /// Compile referenced functions (otherwise they're `extern`)
  ///
  /// Specifically useful for tests, where we compile entire FIŘ modules instead of individual
  /// functions.
  COMPILE_REFERENCED_FUNCTIONS,
  /// Emit eprint statements describing the original FIŘ that the C code was generated from.
  EMIT_DEBUG_PRINTS,
  /// Emit comments describing the original FIŘ that the C code was generated from.
  EMIT_DEBUG_COMMENTS
}
