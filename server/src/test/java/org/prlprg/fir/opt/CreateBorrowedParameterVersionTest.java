package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

class CreateBorrowedParameterVersionTest implements OptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new CreateBorrowedParameterVersion(9);
  }

  @Test
  void readsOwnedParameter_createsBorrowedVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("(reg vec:v(I)b) -~> I"),
        "a borrowed-parameter version should exist:\n" + printed);
    assertTrue(
        printed.contains("(reg vec:v(I)o) -~> I"), "the owned version should remain:\n" + printed);
    assertTrue(Checker.checkAll(module), "the borrowed copy should type-check:\n" + printed);
  }

  @Test
  void runTwice_createsOneVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertTrue(run(module), "the first run should create the version");
    assertFalse(run(module), "the second run shouldn't create a duplicate");

    var function = module.localFunction(Variable.named("main"));
    assertNotNull(function);
    assertEquals(3, function.versions().size(), "baseline, owned and borrowed:\n" + module);
  }

  @Test
  void consumesParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec, i, val) {
              (reg vec:*, reg i:*, reg val:*) -+> V { ... }
              (reg vec:v(I)o, reg i:I, reg val:I) -~> v(I)f {
                r: v(I)o = `[<-`< v(I)o,I,I,miss -~> v(I)f >(consume vec, i, val, <missing>);
                return consume r;
              }
            }
            """);

    assertFalse(run(module), "a parameter consumed by a call has to stay owned");
  }

  @Test
  void returnsConsumedParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) --> v(I)f {
                return consume vec;
              }
            }
            """);

    assertFalse(
        run(module),
        "a parameter consumed by a jump has to stay owned, even though the type checker doesn't"
            + " report that one");
  }

  @Test
  void writesParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                vec[0] = 1;
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertFalse(run(module), "a mutated parameter has to stay owned");
  }

  @Test
  void consumesParameterInPromise_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> v(I) {
                p: p(v(I) ~) = prom-<v(I) ~>{
                  return consume vec;
                };
                r: v(I) = force p;
                return r;
              }
            }
            """);

    assertFalse(run(module), "a parameter consumed inside a promise has to stay owned");
  }

  @Test
  void readInLocalPromise_createsBorrowedVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> v1(I) {
                p: p(v1(I) ~) = prom-<v1(I) ~>{
                  e: I = vec[0];
                  b: v1(I) = box< I --> v1(I) >(e);
                  return b;
                };
                r: v1(I) = force p;
                return r;
              }
            }
            """);

    assertTrue(run(module), "a local promise doesn't outlive the frame, so it can read a loan");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("(reg vec:v(I)b) -~> v1(I)"),
        "a borrowed-parameter version should exist:\n" + printed);
  }

  @Test
  void readInNonLocalPromise_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> v1(I) {
                p: p(v1(I) ~) = prom<v1(I) ~>{
                  e: I = vec[0];
                  b: v1(I) = box< I --> v1(I) >(e);
                  return b;
                };
                r: v1(I) = force p;
                return r;
              }
            }
            """);

    assertFalse(
        run(module),
        "a non-local promise may be forced after the frame returns, so it can't read a loan");
  }

  @Test
  void readInLocalPromiseInsideNonLocalPromise_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> v1(I) {
                outer: p(v1(I) ~) = prom<v1(I) ~>{
                  inner: p(v1(I) ~) = prom-<v1(I) ~>{
                    e: I = vec[0];
                    b: v1(I) = box< I --> v1(I) >(e);
                    return b;
                  };
                  r: v1(I) = force inner;
                  return r;
                };
                q: v1(I) = force outer;
                return q;
              }
            }
            """);

    assertFalse(
        run(module),
        "the inner promise is local, but it only runs inside a non-local one, which escapes");
  }

  @Test
  void passedToBorrowedParameter_createsBorrowedVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                r: I = other< v(I)b -~> I >(vec);
                return r;
              }
            }

            fun other(x) {
              (reg x:v(I)b) -~> I {
                e: I = x[0];
                return e;
              }
            }
            """);

    assertTrue(run(module), "a callee that only borrows can be handed a loan");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("(reg vec:v(I)b) -~> I"),
        "a borrowed-parameter version should exist:\n" + printed);
    assertTrue(Checker.checkAll(module), "the borrowed copy should type-check:\n" + printed);
  }

  @Test
  void passedToSharedParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -+> I {
                r: I = other< v(I) -+> I >(vec);
                return r;
              }
            }

            fun other(x) {
              (reg x:v(I)) -+> I {
                e: I = x[0];
                return e;
              }
            }
            """);

    assertFalse(
        run(module),
        "a shared parameter is exactly the one the callee may retain, so it can't be a loan");
  }

  @Test
  void passedToDynamicCall_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec, callee) {
              (reg vec:*, reg callee:*) -+> V { ... }
              (reg vec:v(I)o, reg callee:cls) -+> V {
                r: V = dyn callee(vec);
                return r;
              }
            }
            """);

    assertFalse(run(module), "nothing bounds what an unknown callee does with its arguments");
  }

  @Test
  void dupsParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                d: v(I)o = dup vec;
                d[0] = 1;
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertFalse(
        run(module),
        "a `dup`ped parameter is what CreateOwnedParameterVersion promotes, so demoting it would"
            + " trade versions with that optimization forever");
  }

  @Test
  void alreadyBorrowedParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)b) -~> I {
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertFalse(run(module), "the parameter is already borrowed");
  }

  @Test
  void equivalentBorrowedVersionExists_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)b) -~> I {
                r: I = vec[0];
                return r;
              }
              (reg vec:v(I)o) -~> I {
                r: I = vec[0];
                return r;
              }
            }
            """);

    assertFalse(run(module), "the borrowed version already exists");
  }

  @Test
  void borrowedVersion_becomesReachableFromCallsThatOwnedVersionRejected() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(vec) {
              (reg vec:*) -+> V { ... }
              (reg vec:v(I)o) -~> I {
                r: I = vec[0];
                return r;
              }
            }
            """);
    var function = module.localFunction(Variable.named("main"));
    assertNotNull(function);

    // What a caller holding a vector it doesn't own asks for.
    var borrowedCall = Parser.fromString("v(I)b -~> I", Signature.class);

    // The owned version rejects a borrowed argument and the baseline's postconditions are worse,
    // so the call has no version at all to dispatch to.
    assertNull(
        function.guess(borrowedCall),
        "before: a caller that doesn't own its vector has nothing to call:\n" + module);

    assertTrue(run(module), "optimization should report a change");

    var guessed = function.guess(borrowedCall);
    assertNotNull(guessed, "after: the call should reach a version:\n" + module);
    assertEquals(
        Ownership.BORROWED,
        guessed.parameters().getFirst().type().ownership(),
        "after: the call should reach the borrowed version:\n" + module);
  }
}
