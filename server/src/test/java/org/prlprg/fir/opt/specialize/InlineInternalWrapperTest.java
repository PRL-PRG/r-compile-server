package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class InlineInternalWrapperTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new InlineInternalWrapper());
  }

  @Test
  void promiseArguments_forcedInOrderThenInternal() {
    var printed =
        rewritten(
            """
            (x:V, y:V) -+> V {
              pa: p(V ~) = prom<V ~>{
                return x;
              };
              pb: p(V ~) = prom<V ~>{
                return y;
              };
              r: V = bitwXor< *@!,*@! -+> V >(pa, pb);
              return r;
            }
            """);

    // `debugCleanup` may forward the forces' results.
    assertOrder(printed, "force pa;", "force pb;");
    assertOrder(printed, "force pb;", "setVisible<");
    assertOrder(printed, "setVisible<", "r: V = bitwiseXor< V,V --> v(I) >(");
    assertFalse(printed.contains("(pa, pb)"), printed);
    assertFalse(printed.contains("bitwXor<"), printed);
  }

  @Test
  void valueArguments_onlyInternal() {
    var printed =
        rewritten(
            """
            (clo:cls, x:V, n:v(R)) -+> V {
              r: V = bitwShiftL@clo< *@!,*@! -+> V >(x, n);
              return r;
            }
            """);

    assertFalse(printed.contains("force"), printed);
    assertFalse(printed.contains("setVisible"), printed);
    assertTrue(printed.contains("r: V = bitwiseShiftL< V,V --> v(I) >(x, n)"), printed);
  }

  @Test
  void promiseOfSecondArgumentCreatedFirst_firstArgumentForcedFirst() {
    var printed =
        rewritten(
            """
            (x:V, y:V) -+> V {
              pb: p(V ~) = prom<V ~>{
                return y;
              };
              pa: p(V ~) = prom<V ~>{
                return x;
              };
              r: V = bitwAnd< *@!,*@! -+> V >(pa, pb);
              return r;
            }
            """);

    assertOrder(printed, "force pa;", "force pb;");
    assertOrder(printed, "force pb;", "r: V = bitwiseAnd< V,V --> v(I) >(");
  }

  @Test
  void reflectivePromise_unchanged() {
    assertUnchanged(
        """
        (pa:p(V +), y:V) -+> V {
          r: V = bitwAnd< *@!,*@! -+> V >(pa, y);
          return r;
        }
        """);
  }

  @Test
  void missingArgument_unchanged() {
    assertUnchanged(
        """
        (x:V) -+> V {
          r: V = bitwAnd< *@!,*@! -+> V >(x, <missing>);
          return r;
        }
        """);
  }

  @Test
  void integerVersion_unchanged() {
    assertUnchanged(
        """
        (x:I, y:I) --> I {
          r: I = bitwAnd< I,I --> I >(x, y);
          return r;
        }
        """);
  }

  @Test
  void dispatchCall_unchanged() {
    assertUnchanged(
        """
        (x:V, y:V) -+> V {
          r: V = bitwAnd%< *@!,*@! -+> V >(x, y);
          return r;
        }
        """);
  }

  private String rewritten(String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    assertTrue(run(abstraction), "the call should be rewritten");
    return Printer.toString(abstraction);
  }

  private void assertUnchanged(String source) {
    var abstraction = ParseUtil.parseAbstraction(source);
    var before = Printer.toString(abstraction);
    assertFalse(run(abstraction), "the call should stay");
    assertEquals(before, Printer.toString(abstraction));
  }

  private static void assertOrder(String printed, String first, String second) {
    var i = printed.indexOf(first);
    var j = printed.indexOf(second);
    assertTrue(i >= 0 && j > i, "expected `" + first + "` before `" + second + "` in:\n" + printed);
  }
}
