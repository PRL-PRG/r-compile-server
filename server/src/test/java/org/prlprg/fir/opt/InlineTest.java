package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;

class InlineTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Inline(1000);
  }

  private static Abstraction main(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  /// Inlines into `main`'s baseline (its only version, which a module-level run skips).
  private boolean runOnMain(Module module) {
    var main = main(module);
    return optimization().run(null, AbstractionFeedback.standaloneForTesting(main), main);
  }

  @Test
  void consumedArgumentWrittenByCallee_keepsWrite() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -~> v(I)f {
                d: v(I)o = dup <int 1, 2, 3>;
                r: v(I)o = f< v(I)o -~> v(I)f >(consume d);
                return consume r;
              }
            }

            fun f(x) {
              (x:v(I)o) -~> v(I)f {
                x[0] = 9;
                return consume x;
              }
            }
            """);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    var before = interpreter.call("main");

    assertTrue(runOnMain(module), "the call should be inlined");

    var printed = Printer.toString(main(module));
    assertFalse(printed.contains("f<"), "the call should be inlined:\n" + printed);
    assertTrue(
        Checker.checkAll(main(module), Checker.Exclude.STRICT_CFG),
        "the inlined code should type-check:\n" + printed);
    assertEquals(before, interpreter.call("main"), "inlining changed the output:\n" + printed);
  }

  @Test
  void returnOfOwnedRegister_typeChecks() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -~> v(I)f {
                r: v(I)o = f< -~> v(I)f >();
                return consume r;
              }
            }

            fun f() {
              () -~> v(I)f {
                d: v(I)o = dup <int 1, 2, 3>;
                return consume d;
              }
            }
            """);

    assertTrue(runOnMain(module), "the call should be inlined");

    var printed = Printer.toString(main(module));
    assertTrue(
        Checker.checkAll(main(module), Checker.Exclude.STRICT_CFG),
        "the inlined code should type-check:\n" + printed);
  }
}
