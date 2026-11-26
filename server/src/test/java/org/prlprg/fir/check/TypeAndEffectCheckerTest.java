package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class TypeAndEffectCheckerTest {
  /// A store of the owned `y` in the block that deopts, and `%s` in the block that returns.
  @Language("FIR")
  private static final String OWNED_STORE_TEMPLATE =
      """
      (x:v(I)) -+> v1(I) {
        mkenv;
        y: v(I)o = dup x;
        check L1() else D0();
      L1():
        %s
        popenv;
        r: v1(I) = box< I --> v1(I) >(1);
        return r;
      D0():
        st z = y;
        deopt 0 [];
      }
      """;

  /// A store of an owned register shares it, in the block that deopts and in the one that returns
  /// (`Provenance` reports a write after it).
  @Test
  void storeOfAnOwnedRegister_isAShare() {
    assertFalse(hasErrors(OWNED_STORE_TEMPLATE.formatted("")), "a hand-off before a deopt is ok");
    assertFalse(
        hasErrors(OWNED_STORE_TEMPLATE.formatted("st z = y;")),
        "a store of an owned register before a return is ok");
  }

  /// A return of an owned register where the return type is shared shares it.
  @Test
  void returnOfAnOwnedRegister_isAShare() {
    assertFalse(
        hasErrors(
            """
            (x:v(I)) -+> v(I) {
              y: v(I)o = dup x;
              y[0] = 1;
              return y;
            }
            """));
  }

  private static boolean hasErrors(@Language("FIR") String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    var checker = new TypeAndEffectChecker();
    checker.run(null, abstraction);
    if (checker.hasErrors()) {
      System.err.println("Errors in:\n" + Printer.toString(abstraction) + "\n" + checker.errors());
    }
    return checker.hasErrors();
  }
}
