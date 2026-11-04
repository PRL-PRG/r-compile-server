package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.LangSXP;

/// A [org.prlprg.fir.ir.instruction.Statement]'s source call prints as an `in <lang ...>` suffix
// and parses back.
class StatementSourceTest {
  private static final @Language("FIR") String MODULE =
      """
      fun main(f) {
        (f:V) -+> V {
          r: V = log%< *@!,*@! -+> V >(<str "a">, <missing>) in <lang log("a")>;
          r1: V = dyn f(r) in <lang f(log("a"))>;
          r2: V = log%< *@!,*@! -+> V >(r1, <missing>);
          return r2;
        }
      }
      """;

  @Test
  void parsePrintRoundTrip() {
    var module = parseModule(MODULE);
    var stmts =
        Objects.requireNonNull(module.localFunction(Variable.named("main")))
            .baseline()
            .body()
            .entry()
            .statements();

    assertInstanceOf(LangSXP.class, stmts.get(0).source());
    assertInstanceOf(LangSXP.class, Objects.requireNonNull(stmts.get(1).source()).arg(0));
    assertNull(stmts.get(2).source());

    var printed = module.toString();
    assertTrue(printed.contains(" in <lang log(\"a\")>;"), printed);
    assertTrue(printed.contains(" in <lang f(log(\"a\"))>;"), printed);
    assertEquals(printed, parseModule(printed).toString());
  }
}
