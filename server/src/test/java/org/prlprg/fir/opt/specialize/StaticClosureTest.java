package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class StaticClosureTest implements OptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new StaticClosure());
  }

  @Test
  void freeVariableNotInLocalEnv_convertsToStaticClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> cls { ... }
              () --> cls { reg c:cls |
                mkenv;
                c = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () --> I { reg loaded:* |
                loaded = ld free;
                return 1;
              }
            }
            """);

    assertTrue(run(module), "closure should become static");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("c = clos-static target"), "closure should be static:\n" + printed);
  }

  @Test
  void maybeDefinedFreeVariable_keepsDynamicClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (reg cond:B) --> cls { ... }
              (reg cond:B) --> cls { reg c:cls, var free:* |
                mkenv;
                if cond then Defines() else Empty();
              Defines():
                st free = 1;
                goto Join();
              Empty():
                goto Join();
              Join():
                c = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () --> I { reg loaded:* |
                loaded = ld free;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "maybe-defined captured variable should block conversion");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("c = clos target"), "closure should remain dynamic:\n" + printed);
    assertFalse(
        printed.contains("clos-static target"), "closure should not be static:\n" + printed);
  }

  @Test
  void taintedLocalEnv_keepsDynamicClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> cls { ... }
              () -+> cls { reg c:cls, reg p:p(V +), reg g:* |
                mkenv;
                p = prom<V +>{ return 1; };
                g = p$free;
                c = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () --> I { reg loaded:* |
                loaded = ld free;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "tainted local env should block conversion");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("c = clos target"), "closure should remain dynamic:\n" + printed);
    assertFalse(
        printed.contains("clos-static target"), "closure should not be static:\n" + printed);
  }

  @Test
  void reflectiveClosureFunction_keepsDynamicClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> cls { ... }
              () --> cls { reg c:cls |
                mkenv;
                c = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () -+> I { reg g:* |
                g = ldf g;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "reflective closure function should block conversion");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("c = clos target"), "closure should remain dynamic:\n" + printed);
    assertFalse(
        printed.contains("clos-static target"), "closure should not be static:\n" + printed);
  }

  @Test
  void superStoreToMaybeDefinedVariable_keepsDynamicClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> cls { ... }
              () --> cls { reg c:cls, var free:* |
                mkenv;
                st free = 1;
                c = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () -~> I { |
                st-super free = 2;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "super-store to a local variable should block conversion");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("c = clos target"), "closure should remain dynamic:\n" + printed);
    assertFalse(
        printed.contains("clos-static target"), "closure should not be static:\n" + printed);
  }
}
