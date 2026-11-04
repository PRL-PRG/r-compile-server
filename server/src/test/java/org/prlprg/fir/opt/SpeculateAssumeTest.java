package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.function.BiConsumer;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

class SpeculateAssumeTest {
  private static final int THRESHOLD = 10;

  @Test
  void checkpointOnlyInsideTheRegistersOwnPromise_notAssumed() {
    // The only checkpoint is in `p`'s own promise body. `DominatorTree`'s block-level check walks
    // that body's blocks up to the statement that defines the promise -- the very statement that
    // defines `p` -- and then compares blocks, so `p`'s definition "dominates" the checkpoint and
    // the assume lands inside the body, reading `p` before it's assigned.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                p: p(V +) = prom<V +>{
                  check L1() else D1();
                L1():
                  return <int 42>;
                D1():
                  deopt 0 [];
                };
                r: V = force p;
                return r;
              }
            }
            """);

    assertFalse(
        run(module, "p", "v1(I)"),
        "an assume for `p` can't go inside `p`'s own promise:\n" + Printer.toString(module));
    assertFalse(
        Printer.toString(module).contains("?:"),
        "no assume should have been inserted at all:\n" + Printer.toString(module));
  }

  @Test
  void checkpointInTheRegistersOwnCfg_isAssumed() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                x: V = f< -+> V >();
                check L1() else D1();
              L1():
                return x;
              D1():
                deopt 0 [];
              }
            }

            fun f() {
              () -+> V {
                return <int 1>;
              }
            }
            """);

    assertTrue(
        run(module, "x", "v1(I)"),
        "a checkpoint after the definition in the same CFG is still usable:\n"
            + Printer.toString(module));

    var printed = Printer.toString(module);
    assertTrue(printed.contains("?: v1(I)"), "the assume should be inserted:\n" + printed);
  }

  @Test
  void feedbackWiderThanTheRegistersType_notAssumed() {
    // Assuming `V` on a register already known to be `v1(I)` isn't a no-op: `InferType` reads an
    // `AssumeType`'s result straight off the assumption, so the assume's result is the *wider*
    // type. Where that reaches a promise's return value it widens the promise's declared type, and
    // `Specialize` then fails its "specializations only narrow" check on the next run.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                x: v1(I) = f< -+> v1(I) >();
                check L1() else D1();
              L1():
                return x;
              D1():
                deopt 0 [];
              }
            }

            fun f() {
              () -+> v1(I) {
                return <int 1>;
              }
            }
            """);

    assertFalse(
        run(module, "x", "V"),
        "an assumption wider than what's already declared shouldn't be inserted:\n"
            + Printer.toString(module));
  }

  @Test
  void successBlockNotDominatedByTheDefinition_notAssumed() {
    // The definition and the checkpoint are both in `L0`, but the checkpoint's success block `L2`
    // is also reachable from `L1`. An assume placed at the top of `L2` would read `x` on a path
    // that never assigned it, so dominance has to be judged where the assume lands, not where the
    // checkpoint is.
    var module =
        ParseUtil.parseModule(
            """
            fun main(c) {
              (c:*) -+> V { ... }
              (c:B) -+> V {
                if c then L0() else L1();
              L0():
                x: V = f< -+> V >();
                check L2() else D0();
              L1():
                goto L2();
              L2():
                return <int 1>;
              D0():
                deopt 0 [];
              }
            }

            fun f() {
              () -+> V {
                return <int 1>;
              }
            }
            """);

    assertFalse(
        run(module, "x", "v1(I)"),
        "the assume would land where `x` isn't assigned on every path:\n"
            + Printer.toString(module));
  }

  @Test
  void branchConditionUsedOnlyByItsIf_notAssumed() {
    // `bench_awf_mandelbrot`: the condition's only use is the `if`, before the checkpoints in both
    // branches. Assuming it's `FALSE` there refines nothing, and deoptimizes whenever `L0` runs.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                c: B = blackBox< --> B >();
                if c then L0() else L1();
              L0():
                check L2() else D0();
              L1():
                check L3() else D1();
              L2():
                return <int 1>;
              L3():
                return <int 2>;
              D0():
                deopt 0 [];
              D1():
                deopt 1 [];
              }
            }

            fun blackBox() {
              () --> B { ... }
            }
            """);

    assertFalse(
        runConstant(module, "c", new Value.Bool(false)),
        "an assumption that replaces no use shouldn't be inserted:\n" + Printer.toString(module));
  }

  @Test
  void constantUsedAfterTheCheckpoint_isAssumed() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V { ... }
              () -+> V {
                c: B = blackBox< --> B >();
                check L0() else D0();
              L0():
                if c then L1() else L2();
              L1():
                return <int 1>;
              L2():
                return <int 2>;
              D0():
                deopt 0 [];
              }
            }

            fun blackBox() {
              () --> B { ... }
            }
            """);

    assertTrue(runConstant(module, "c", new Value.Bool(false)));
    var printed = Printer.toString(module);
    assertTrue(printed.contains("c ?= FALSE"), "the assume should be inserted:\n" + printed);
    // The `if` reads the constant, and may be folded away entirely
    assertFalse(printed.contains("if c then"), "the `if` should read the constant:\n" + printed);
  }

  /// Record `type` for the register named `registerName`, often enough to pass the threshold, then
  /// run [SpeculateAssume] on `module`'s non-baseline `main` version.
  private static boolean run(Module module, String registerName, String type) {
    return run(
        module,
        registerName,
        (feedback, register) -> feedback.recordType(register, Parser.fromString(type, Type.class)));
  }

  /// Like [#run(Module, String, String)], but record `constant` instead of a type.
  private static boolean runConstant(Module module, String registerName, Value constant) {
    return run(
        module, registerName, (feedback, register) -> feedback.recordConstant(register, constant));
  }

  private static boolean run(
      Module module, String registerName, BiConsumer<AbstractionFeedback, Register> record) {
    var function = module.localFunction(Variable.named("main"));
    assertNotNull(function);
    var version =
        function.versions().stream()
            .filter(v -> v != function.baseline() && !v.isStub())
            .findFirst()
            .orElseThrow();

    var feedback = new MockModuleFeedback(module).get(version);
    var register =
        version
            .streamRegisters()
            .filter(r -> r.name().equals(registerName))
            .findFirst()
            .orElseThrow(() -> new AssertionError("no register named " + registerName));
    record.accept(feedback, register);
    feedback.setTimes(register, THRESHOLD * 10);
    return new SpeculateAssume(THRESHOLD).run(function, feedback, version);
  }
}
