package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.feedback.AbstractionFeedback;
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
