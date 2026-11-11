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
}
