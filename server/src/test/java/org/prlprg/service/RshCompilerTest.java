package org.prlprg.service;

import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.service.RshCompiler.RuntimeVariant;

class RshCompilerTest {
  /// A module's floating-point arithmetic rounds as GNU-R's, so the C compiler doesn't contract it
  /// (a fused multiply-add). Clang contracts only within one expression, so no example fails on
  /// it.
  @Test
  void modules_compileWithoutFpContraction() {
    for (var variant : RuntimeVariant.values()) {
      for (var level : new int[] {0, 3}) {
        var flags = RshCompiler.getInstance(level, variant).flags();
        assertTrue(flags.contains("-ffp-contract=off"), flags.toString());
      }
    }
  }
}
