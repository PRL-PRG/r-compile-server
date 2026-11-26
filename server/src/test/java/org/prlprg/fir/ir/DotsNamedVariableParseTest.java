package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertFalse;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.TypeAndEffectChecker;

class DotsNamedVariableParseTest {
  /// A parsed version gives `...` the type that `bc2fir` gave it, so a load of `...` keeps the
  /// type it was printed with (e.g. in a copy of an optimized module).
  @Test
  void loadOfDots_keepsItsType() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(`...`) {
              (ddd:dots) -+> V {
                mkenv;
                st `...` = ddd;
                d: dots? = ld `...`;
                popenv;
                return <nil>;
              }
            }
            """);
    var checker = new TypeAndEffectChecker();
    checker.run(module);
    checker.print();
    assertFalse(checker.hasErrors());
  }
}
