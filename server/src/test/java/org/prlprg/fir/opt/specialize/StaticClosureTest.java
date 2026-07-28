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
              () --> cls {
                mkenv;
                c: cls = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () --> I {
                loaded: * = ld free;
                return 1;
              }
            }
            """);

    assertTrue(run(module), "closure should become static");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("c: cls = clos-static target"), "closure should be static:\n" + printed);
  }

  @Test
  void maybeDefinedFreeVariable_keepsDynamicClosure() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (reg cond:B) --> cls { ... }
              (reg cond:B) --> cls {
                mkenv;
                if cond then Defines() else Empty();
              Join():
                c: cls = clos target;
                popenv;
                return c;
              Empty():
                goto Join();
              Defines():
                st free = 1;
                goto Join();
              }
            }

            fun target() {
              () --> I {
                loaded: * = ld free;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "maybe-defined captured variable should block conversion");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("c: cls = clos target"), "closure should remain dynamic:\n" + printed);
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
              () -+> cls {
                mkenv;
                p: p(V +) = prom<V +>{
                  return 1;
                };
                g: * = p$free;
                c: cls = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () --> I {
                loaded: * = ld free;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "tainted local env should block conversion");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("c: cls = clos target"), "closure should remain dynamic:\n" + printed);
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
              () --> cls {
                mkenv;
                c: cls = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () -+> I {
                g: * = ldf g;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "reflective closure function should block conversion");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("c: cls = clos target"), "closure should remain dynamic:\n" + printed);
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
              () --> cls {
                mkenv;
                st free = 1;
                c: cls = clos target;
                popenv;
                return c;
              }
            }

            fun target() {
              () -~> I {
                st-super free = 2;
                return 1;
              }
            }
            """);

    assertFalse(run(module), "super-store to a local variable should block conversion");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("c: cls = clos target"), "closure should remain dynamic:\n" + printed);
    assertFalse(
        printed.contains("clos-static target"), "closure should not be static:\n" + printed);
  }
}
