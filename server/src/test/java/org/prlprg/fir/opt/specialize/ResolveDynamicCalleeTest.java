package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ResolveDynamicCalleeTest implements OptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ResolveDynamicCallee());
  }

  /// A name that must be quoted when printed is matched and passed unquoted. (Only non-baseline
  /// versions are optimized.)
  @Test
  void quotedArgumentName() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                c: cls = clos f;
                r: V = dyn c[, `length.out`, `a.b`](<int 1>, <int 2>, <int 3>);
                return r;
              }
            }

            fun f(x, `a.b`, `...`) {
              (x:*, ab:*, ddd:dots) -+> V { ... }
            }
            """);

    assertTrue(run(module), "the call should be resolved");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("dots[`length.out` = <int 2>]"), printed);
    assertTrue(printed.contains("(<int 1>, <int 3>, vargs)"), printed);
  }
}
