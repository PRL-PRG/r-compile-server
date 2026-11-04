package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.Set;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

/// Tests that [BC2FirClosureCompiler] sets `@needsContext` on exactly the closures that call a
/// `@readsContext` builtin in their own frame, and `@needsPromises` on exactly the closures that
/// call a `@readsPromise` builtin.
class NeedsContextTest {
  @Test
  void useMethod() {
    assertTrue(needsContext(compile(new Module(), "function(x) UseMethod(\"f\")")));
  }

  @Test
  void matchArg() {
    assertTrue(
        needsContext(compile(new Module(), "function(x, m = c(\"a\", \"b\")) match.arg(m)")));
  }

  @Test
  void promise() {
    assertTrue(needsContext(compile(new Module(), "function(x) f(sys.call())")));
  }

  @Test
  void defaultArgument() {
    assertTrue(needsContext(compile(new Module(), "function(x, e = parent.frame()) e")));
  }

  @Test
  void noReader() {
    assertFalse(needsContext(compile(new Module(), "function(x) x + 1")));
  }

  @Test
  void onlyInnerClosure() {
    var module = new Module();
    var outer = compile(module, "function(e) { g <- function(i) Recall(i); g(e) }");
    outer.baseline().body();
    assertFalse(needsContext(outer));

    var inner = module.localFunctions().stream().filter(f -> f != outer).findFirst().orElseThrow();
    assertTrue(needsContext(inner));
  }

  @Test
  void substituteNeedsPromises() {
    var function = compile(new Module(), "function(x) { x; deparse(substitute(x)) }");
    assertTrue(function.userProperties().needsPromises());
    assertFalse(needsContext(function));
  }

  @Test
  void missingNeedsPromises() {
    assertTrue(compile(new Module(), "function(x) missing(x)").userProperties().needsPromises());
  }

  @Test
  void passOnDoesNotNeedPromises() {
    // `g` gets a normal promise for `x`.
    assertFalse(compile(new Module(), "function(x) g(x)").userProperties().needsPromises());
  }

  @Test
  void builtinsDeclareReaders() {
    assertTrue(GlobalModules.CONTEXT_READERS.contains("UseMethod"));
    assertTrue(GlobalModules.CONTEXT_READERS.contains("match.arg"));
    assertTrue(GlobalModules.PROMISE_READERS.containsAll(Set.of("substitute", "missing")));
    assertTrue(
        GlobalModules.BUILTINS
            .localFunction(Variable.named("sys.function"))
            .userProperties()
            .readsContext());
  }

  @Test
  void parsePrintRoundTrip() {
    var text =
        """
        @readsContext
        fun f(x) {
          (x:*) -+> V { ... }
        }

        @needsContext
        fun g(x) {
          (x:*) -+> V { ... }
        }

        @readsPromise
        fun h(x) {
          (x:*) -+> V { ... }
        }

        @needsPromises
        fun i(x) {
          (x:*) -+> V { ... }
        }
        """;
    var printed = Printer.toString(ParseUtil.parseModule(text));
    assertTrue(printed.contains("@readsContext\nfun f"), printed);
    assertTrue(printed.contains("@needsContext\nfun g"), printed);
    assertTrue(printed.contains("@readsPromise\nfun h"), printed);
    assertTrue(printed.contains("@needsPromises\nfun i"), printed);
    assertEquals(printed, Printer.toString(ParseUtil.parseModule(printed)));
  }

  private static boolean needsContext(Function function) {
    return function.userProperties().needsContext();
  }

  private static Function compile(Module module, @Language("R") String source) {
    var session = GNUR.instance().getSession();
    var closure0 = (CloSXP) GNUR.instance().eval(source);
    var bc =
        new BCCompiler(closure0, session)
            .compile()
            .orElseThrow(() -> new AssertionError("example didn't compile"));
    var closure = SEXPs.closure(closure0.parameters(), SEXPs.bcode(bc), closure0.env());
    return BC2FirClosureCompiler.compile(session, module, "f", closure);
  }
}
