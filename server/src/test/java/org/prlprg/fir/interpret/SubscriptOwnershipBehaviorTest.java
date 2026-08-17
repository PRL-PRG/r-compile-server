package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.CallOwnedVersion;
import org.prlprg.fir.opt.ConsumeDeadDup;
import org.prlprg.fir.opt.CreateOwnedParameterVersion;
import org.prlprg.fir.opt.ElideConsumedDup;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;
import org.prlprg.fir.opt.specialize.SpecializeSubscript;
import org.prlprg.parseprint.Printer;

/// Tests that the vector-ownership optimizations ([CreateOwnedParameterVersion],
/// [CallOwnedVersion], [SpecializeSubscript], [ConsumeDeadDup], [ElideConsumedDup]) turn a
/// sub-assignment that copies a borrowed vector into one that mutates an owned vector in place,
/// without changing what the code computes.
class SubscriptOwnershipBehaviorTest {
  private static final Optimization OWNERSHIP =
      new ModuleFixpointSequence(
          "ownership",
          new AbstractionFixpointSequence(
              "main",
              new Specialize("specialize", new SpecializeSubscript()),
              new CallOwnedVersion(),
              new ConsumeDeadDup(),
              new ElideConsumedDup()),
          new CreateOwnedParameterVersion(9));

  /// `main` builds a vector and hands it to `set`, which sub-assigns into it. `set` borrows the
  /// vector, so it starts out `dup`ping it, and `[<-` copies it a second time.
  private static final String MODULE =
      """
      fun main() {
        () -+> V { ... }
        () -~> v(I)f {
          v: v(I)o = v(I)[1, 2, 3];
          r: v(I)o = set< v(I)b -~> v(I)f >(v);
          return consume r;
        }
      }

      fun set(v) {
        (reg v:*) -+> V { ... }
        (reg v:v(I)b) -~> v(I)f {
          d: v(I)o = dup v;
          r: v(I)o = `[<-`< v(I)b,I,I,miss -~> v(I)f >(d, 1, 42, <missing>);
          return consume r;
        }
      }
      """;

  @Test
  void subAssignBecomesInPlaceWriteAndKeepsBehavior() {
    var module = ParseUtil.parseModule(MODULE);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var before = interpreter.call("main");

    assertTrue(
        OWNERSHIP.run(interpreter.feedback(), module), "optimization should report a change");

    var after = interpreter.call("main");
    var printed = Printer.toString(module);

    assertEquals(before, after, "optimization changed the output; printed:\n" + printed);
    assertTrue(
        printed.contains("(reg v:v(I)o) -~> v(I)f"),
        "`set` should get a version that owns its vector; printed:\n" + printed);
    assertTrue(
        printed.contains("set< v(I)o -~> v(I)f >(consume v)"),
        "`main` should call that version, handing over its own vector; printed:\n" + printed);
    assertFalse(
        printed.contains("`[<-`"),
        "every sub-assignment should be an in-place write; printed:\n" + printed);
    assertTrue(
        printed.contains("v[0] = 42"),
        "the owned version should write into its own vector; printed:\n" + printed);
    assertTrue(
        printed.contains("d[0] = 42"),
        "the borrowed version should write into its copy; printed:\n" + printed);
    assertEquals(
        1,
        ParseUtil.countOccurrences(printed, "dup "),
        "only the version that borrows the vector should copy it; printed:\n" + printed);
  }
}
