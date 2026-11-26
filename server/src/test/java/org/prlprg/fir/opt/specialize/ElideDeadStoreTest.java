package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideDeadStoreTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideDeadStore());
  }

  @Test
  void dotsReadByDdNum_isKept() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (ddd:dots) --> * {
              mkenv~;
              st `...` = ddd;
              a: * = ld `..1`;
              popenv;
              return a;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("st `...` = ddd;"), printed);
  }

  /// The stub evaluates `x` when it's forced, which may be after the store.
  @Test
  void storeAfterADeoptStubOfTheVariable_isKept() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:*) --> * {
              mkenv~;
              st x = x;
              p: p(V +) = prom<V +>[<sym x>]{
                deopt 0 [];
              };
              st x = <real 99.0>;
              popenv;
              return p;
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("st x = <real 99.0>;"), printed);
  }

  /// The checkpoint checks the assumption by loading `x`.
  @Test
  void storeReadByALoadAssumption_isKept() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) --> I {
              mkenv~;
              st x = x;
              check L0() else D0();
            L0():
              ld x ?= <int 1>;
              popenv;
              return x;
            D0():
              deopt 0 [];
            }
            """);

    run(abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("  st x = x;\n  check"), printed);
  }
}
