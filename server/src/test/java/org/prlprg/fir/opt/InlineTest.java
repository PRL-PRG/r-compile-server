package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.MockModuleFeedback;
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
  void calleeCallingAnotherVersionOfItsFunction_notInlined() {
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
              (x:v(I)b) -~> v(I)f {
                y: v(I)o = dup x;
                y[0] = 9;
                z: v(I)o = f< v(I)b -~> v(I)f >(y);
                return consume y;
              }
              (x:v(I)o) -~> v(I)f {
                x[0] = 9;
                z: v(I)o = f< v(I)b -~> v(I)f >(x);
                return consume x;
              }
            }
            """);

    assertFalse(runOnMain(module), "inlining a recursive function unrolls it forever");
  }

  @Test
  void mutuallyRecursiveCallee_notInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -~> I {
                r: I = f< I -~> I >(1);
                return r;
              }
            }

            fun f(x) {
              (x:I) -~> I {
                r: I = g< I -~> I >(x);
                return r;
              }
            }

            fun g(x) {
              (x:I) -~> I {
                r: I = f< I -~> I >(x);
                return r;
              }
            }
            """);

    assertFalse(runOnMain(module), "inlining a recursive cycle unrolls it forever");
  }

  @Test
  void recursiveFunctionWithOwnedVersion_reachesFixpoint() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -~> v(I)f {
                r: v(I)o = f< v(I)b -~> v(I)f >(<int 1, 2, 3>);
                return consume r;
              }
            }

            fun f(x) {
              (x:*) -+> V { ... }
              (x:v(I)b) -~> v(I)f {
                y: v(I)o = dup x;
                y[0] = 9;
                z: v(I)o = f< v(I)b -~> v(I)f >(y);
                return consume y;
              }
            }
            """);

    // Fails with "Didn't reach a fixpoint" if `Inline` unrolls `f` through its owned version.
    Optimizations.defaultOptimizations().run(new MockModuleFeedback(module), module);

    assertTrue(Checker.checkAll(module), "the optimized module should type-check:\n" + module);
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
