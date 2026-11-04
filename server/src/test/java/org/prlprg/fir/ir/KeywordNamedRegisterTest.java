package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;

/// A register or function named like a keyword (e.g. R's `v` in `function(v) v[1]`) prints
/// backquoted where it begins an expression, and parses back.
class KeywordNamedRegisterTest {
  private static final @Language("FIR") String MODULE =
      """
      fun v(x) {
        (x:V) -+> V {
          return x;
        }
      }

      fun main(v, v1, force, goto) {
        (v:V, v1:V, force:V, goto:V) -+> V {
          `v` ?: V;
          r: V = `v1` as V;
          r1: V = `force`[goto];
          `goto`$x = r1;
          r2: V = `v`< V -+> V >(r);
          return r2;
        }
      }""";

  @Test
  void parsePrintRoundTrip() {
    assertEquals(MODULE, parseModule(MODULE).toString());
  }
}
