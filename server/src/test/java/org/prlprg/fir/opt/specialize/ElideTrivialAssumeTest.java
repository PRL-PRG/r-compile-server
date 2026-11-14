package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class ElideTrivialAssumeTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new ElideTrivialAssume());
  }

  /// An optimization can have removed a use (e.g. a `checkMissing`) because of the result's type.
  @Test
  void unusedTypeAssume_kept() {
    assertKept("x1: v1(I) = x ?: v1(I);\nreturn x;", "?:");
  }

  @Test
  void typeAssumeWithoutAssignee_kept() {
    assertKept("x ?: v1(I);\nreturn x;", "?:");
  }

  @Test
  void unusedMaybePromiseAssumeAfterForce_removed() {
    assertRemoved("p1: V = force p;\np ?: p?(V -);\nreturn p1;", "?:");
  }

  @Test
  void usedTypeAssume_kept() {
    assertKept("x1: v1(I) = x ?: v1(I);\nreturn x1;", "?:");
  }

  @Test
  void unusedFunctionAssume_kept() {
    // `ResolveDynamicCallee` makes a static call that doesn't read the result: the assumption is
    // its only guard.
    assertKept("f1: cls = f ?- g;\nreturn x;", "?-");
  }

  @Test
  void functionAssumeWithoutAssignee_kept() {
    assertKept("f ?- g;\nreturn x;", "?-");
  }

  @Test
  void constantAssume_kept() {
    assertKept("x ?= <int 1>;\nreturn x;", "?=");
  }

  /// The `?=` builds the origin analysis, then the pass replaces the statement of `r` (with a new
  /// register). The analysis keeps the state at the entry of `L1`, where the origin of `h` is the
  /// old `r`, which is no longer in the version.
  @Test
  void loadAssumeAfterOriginReplaced_kept() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (rv:v(I)b, x:I) -~> I {
              x ?= <int 1>;
              r: I = `[[`< v(I)b,I,miss,miss -~> I >(rv, 3, <missing>, <missing>);
              mkenv;
              st h = r;
              goto L1();
            L1():
              ld h ?= <int 1>;
              popenv;
              return r;
            }
            """);

    assertTrue(
        new Specialize("specialize", new ElideTrivialAssume(), new SpecializeSubscript())
            .run(null, AbstractionFeedback.standaloneForTesting(abstraction), abstraction),
        "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("r: I = rv[[2]]"), "should be a subscript read:\n" + printed);
    assertTrue(printed.contains("ld h ?= <int 1>"), "the assumption should stay:\n" + printed);
  }

  private void assertRemoved(String body, String operator) {
    var module = module(body);
    assertTrue(run(module), "optimization should report a change");
    var printed = Printer.toString(module);
    assertFalse(printed.contains(operator), "the assumption should be removed:\n" + printed);
  }

  private void assertKept(String body, String operator) {
    var module = module(body);
    run(module);
    var printed = Printer.toString(module);
    assertTrue(printed.contains(operator), "the assumption should stay:\n" + printed);
  }

  private static Module module(String body) {
    return ParseUtil.parseModule(
        """
        fun main(x, f, p) {
          (x:*, f:*, p:*) -+> V { ... }
          (x:V, f:cls, p:p(V +)) -+> V {
            %s
          }
        }

        fun g() {
          () -+> V { ... }
        }
        """
            .formatted(body));
  }
}
