package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.List;
import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

/// A [Promise]'s source expression ([Promise#expr]): its syntax, and that `bc2fir` sets it.
class PromiseExprTest {
  private static final @Language("FIR") String WITH_EXPR =
      """
      fun main() {
        () -+> V {
          p: p(V +) = prom<V +>[<lang f(x)>]{
            r: V = ldf f;
            return r;
          };
          v: V = force p;
          return v;
        }
      }
      """;

  private static Abstraction mainOf(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  private static List<Promise> promises(Abstraction version) {
    return version.body().bbs().stream()
        .flatMap(bb -> bb.statements().stream())
        .filter(s -> s.expression() instanceof Promise)
        .map(s -> (Promise) s.expression())
        .toList();
  }

  @Test
  void parsePrintWithExpr() {
    var module = parseModule(WITH_EXPR);
    var promise = promises(mainOf(module)).getFirst();
    assertEquals(SEXPs.lang(SEXPs.symbol("f"), SEXPs.symbol("x")), promise.expr());

    var printed = Printer.toString(module);
    assertTrue(printed.contains("prom<V +>[<lang f(x)>]{"), printed);
    assertEquals(printed, Printer.toString(parseModule(printed)));
  }

  @Test
  void parsePrintWithoutExpr() {
    var module = parseModule(WITH_EXPR.replace("[<lang f(x)>]", ""));
    assertNull(promises(mainOf(module)).getFirst().expr());

    var printed = Printer.toString(module);
    assertTrue(printed.contains("prom<V +>{"), printed);
    assertEquals(printed, Printer.toString(parseModule(printed)));
  }

  @Test
  void bc2firSetsExpr() {
    var session = GNUR.instance().getSession();
    var closure0 = (CloSXP) GNUR.instance().eval("function(x) g(h(x), x)");
    var bc =
        new BCCompiler(closure0, session)
            .compile()
            .orElseThrow(() -> new AssertionError("example didn't compile"));
    var closure = SEXPs.closure(closure0.parameters(), SEXPs.bcode(bc), closure0.env());
    var function = BC2FirClosureCompiler.compile(session, new Module(), "f", closure);

    var exprs = promises(function.baseline()).stream().map(Promise::expr).toList();
    assertEquals(
        List.of(SEXPs.lang(SEXPs.symbol("h"), SEXPs.symbol("x")), SEXPs.symbol("x")), exprs);
  }

  @Test
  void wrappedValue() {
    var module =
        parseModule(
            """
            fun main() {
              (x:V) --> V {
                p: p(V -) = prom<V ->{
                  return x;
                };
                return x;
              }
            }
            """);
    var promise = promises(mainOf(module)).getFirst();
    assertEquals("x", Objects.requireNonNull(promise.wrappedValue()).name());
    assertNull(promises(mainOf(parseModule(WITH_EXPR))).getFirst().wrappedValue());
  }
}
