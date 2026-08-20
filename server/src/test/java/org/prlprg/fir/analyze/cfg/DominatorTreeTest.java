package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

class DominatorTreeTest {
  private static Abstraction mainOf(@Language("FIR") String firText) {
    var module = parseModule(firText);
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  private static CFG cfgOf(Abstraction scope) {
    return Objects.requireNonNull(scope.cfg());
  }

  private static BB bb(CFG cfg, String label) {
    return Objects.requireNonNull(cfg.bb(label), () -> "no block labelled '" + label + "'");
  }

  /// The register named `name`, wherever in `scope` (a promise's code included) it's defined.
  private static Register reg(Abstraction scope, String name) {
    return scope
        .streamRegisters()
        .filter(r -> r.name().equals(name))
        .findFirst()
        .orElseThrow(() -> new AssertionError("no register named '" + name + "'"));
  }

  /// The statement that assigns the register named `name`.
  private static Statement definition(Abstraction scope, String name) {
    if (!(reg(scope, name) instanceof AssigneeOf assignee)) {
      throw new AssertionError("'" + name + "' isn't assigned by a statement");
    }
    return assignee.statement();
  }

  /// The code of the promise assigned to the register named `name`.
  private static CFG promiseCfg(Abstraction scope, String name) {
    if (!(definition(scope, name).expression() instanceof Promise promise)) {
      throw new AssertionError("'" + name + "' isn't a promise");
    }
    return promise.code();
  }

  /// A version whose body creates a promise between two other statements, so that one statement
  /// dominates the promise's definition and the other doesn't.
  private static Abstraction withPromise() {
    return mainOf(
        """
        fun main() {
          (reg x:R) -~> R {
            outer: R = dup x;
            p: p(R ~) = prom<R ~>{
              inner: R = dup outer;
              return inner;
            };
            later: R = dup x;
            r: R = force p;
            return r;
          }
        }
        """);
  }

  @Test
  void dominatesWithinOneCfgAgreesWithThatCfgsTree() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            if n then A() else B();
          A():
            goto J();
          B():
            goto J();
          J():
            return n;
          }
        }
        """);
    var cfg = cfgOf(main);
    var domTree = new DominatorTree(main);
    var cfgTree = domTree.cfg(cfg);

    for (var dominator : cfg.bbs()) {
      for (var dominee : cfg.bbs()) {
        assertEquals(
            cfgTree.dominates(dominator, dominee),
            domTree.dominates(dominator, dominee),
            () -> "dominates(" + dominator.label() + ", " + dominee.label() + ")");
      }
    }

    assertTrue(domTree.dominates(cfg.entry(), bb(cfg, "J")));
    assertFalse(domTree.dominates(bb(cfg, "A"), bb(cfg, "J")));
  }

  @Test
  void instructionsDominatingAPromiseDominateItsBody() {
    var main = withPromise();
    var domTree = new DominatorTree(main);

    // `outer` dominates the promise's definition, so it dominates everything the promise's body
    // runs; `later` comes after the definition, so it dominates nothing in the body (we don't
    // analyze where the promise is forced).
    assertTrue(domTree.dominates(definition(main, "outer"), definition(main, "inner")));
    assertTrue(domTree.dominates(definition(main, "p"), definition(main, "inner")));
    assertFalse(domTree.dominates(definition(main, "later"), definition(main, "inner")));
    assertFalse(domTree.dominates(definition(main, "r"), definition(main, "inner")));
  }

  @Test
  void instructionsInAPromiseDominateNothingOutside() {
    var main = withPromise();
    var domTree = new DominatorTree(main);

    assertFalse(domTree.dominates(definition(main, "inner"), definition(main, "later")));
    assertFalse(domTree.dominates(definition(main, "inner"), definition(main, "r")));
    assertFalse(domTree.dominates(definition(main, "inner"), definition(main, "outer")));
    // Even so, it dominates itself and the rest of its own body.
    assertTrue(domTree.dominates(definition(main, "inner"), definition(main, "inner")));
  }

  @Test
  void blocksAcrossPromiseScopes() {
    var main =
        mainOf(
            """
        fun main() {
          (reg x:R, reg n:I) -~> R {
            if n then A() else B();
          A():
            a: R = dup x;
            p: p(R ~) = prom<R ~>{
              inner: R = dup a;
              return inner;
            };
            r: R = force p;
            return r;
          B():
            b: R = dup x;
            return b;
          }
        }
        """);
    var cfg = cfgOf(main);
    var promise = promiseCfg(main, "p");
    var domTree = new DominatorTree(main);

    // The promise is created in `A`, so `A` and everything dominating it dominates the body.
    assertTrue(domTree.dominates(bb(cfg, "A"), promise.entry()));
    assertTrue(domTree.dominates(cfg.entry(), promise.entry()));
    assertFalse(domTree.dominates(bb(cfg, "B"), promise.entry()));
    assertFalse(domTree.dominates(promise.entry(), bb(cfg, "A")));

    assertTrue(domTree.dominates(definition(main, "a"), definition(main, "inner")));
    assertFalse(domTree.dominates(definition(main, "b"), definition(main, "inner")));
  }

  @Test
  void nestedPromisesReachThroughEveryLevel() {
    var main =
        mainOf(
            """
        fun main() {
          (reg x:R) -~> R {
            outer: R = dup x;
            p: p(R ~) = prom<R ~>{
              mid: R = dup outer;
              q: p(R ~) = prom<R ~>{
                deep: R = dup mid;
                return deep;
              };
              qr: R = force q;
              return qr;
            };
            r: R = force p;
            return r;
          }
        }
        """);
    var domTree = new DominatorTree(main);

    // Two levels up, through both promises' definitions.
    assertTrue(domTree.dominates(definition(main, "outer"), definition(main, "deep")));
    assertTrue(domTree.dominates(definition(main, "mid"), definition(main, "deep")));
    // `qr` is after the nested promise's definition, and `deep` is inside it.
    assertFalse(domTree.dominates(definition(main, "qr"), definition(main, "deep")));
    assertFalse(domTree.dominates(definition(main, "deep"), definition(main, "qr")));
    assertFalse(domTree.dominates(definition(main, "deep"), definition(main, "r")));
  }

  @Test
  void dominatesFromADefinitionSite() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            goto Head(n);
          Head(i: I):
            if i then Body() else Exit();
          Body():
            i2: I = dup i;
            goto Head(i2);
          Exit():
            return i;
          }
        }
        """);
    var cfg = cfgOf(main);
    var domTree = new DominatorTree(main);
    var exitJump = bb(cfg, "Exit").jump();

    // A function parameter is defined before the entry, so it dominates everything.
    assertTrue(domTree.dominates(reg(main, "n"), exitJump));
    assertTrue(domTree.dominates(reg(main, "n"), definition(main, "i2")));
    // A phi parameter dominates its block's dominees...
    assertTrue(domTree.dominates(reg(main, "i"), definition(main, "i2")));
    assertTrue(domTree.dominates(reg(main, "i"), exitJump));
    // ...but the loop body's definition doesn't dominate the exit.
    assertFalse(domTree.dominates(reg(main, "i2"), exitJump));
    assertTrue(domTree.dominates(reg(main, "i2"), bb(cfg, "Body").jump()));
  }

  @Test
  void functionParameterDominatesAPromiseBody() {
    var main = withPromise();
    var domTree = new DominatorTree(main);

    assertTrue(domTree.dominates(reg(main, "x"), definition(main, "inner")));
    assertTrue(domTree.dominates(reg(main, "outer"), definition(main, "inner")));
    assertFalse(domTree.dominates(reg(main, "later"), definition(main, "inner")));
  }

  @Test
  void everyCfgInScopeHasItsOwnTree() {
    var main = withPromise();
    var cfg = cfgOf(main);
    var promise = promiseCfg(main, "p");
    var domTree = new DominatorTree(main);

    assertNotSame(domTree.cfg(cfg), domTree.cfg(promise));
    assertSame(domTree.cfg(cfg), domTree.cfg(cfg));
    assertNull(domTree.cfg(promise).immediateDominator(promise.entry()));
  }

  @Test
  void everythingDominatesTheOnlyExitOfStraightLineCode() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            return r0;
          }
        }
        """);
    var domTree = new DominatorTree(main);

    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "r0")));
    assertTrue(domTree.dominatesNonDeoptExits(cfgOf(main).entry().jump()));
  }

  @Test
  void dominatingNonDeoptExitsIgnoresDeopts() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            check L1() else D();
          L1():
            r1: I = dup n;
            return r1;
          D():
            deopt 13 [r0];
          }
        }
        """);
    var cfg = cfgOf(main);
    var domTree = new DominatorTree(main);

    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "r0")));
    // `r1` doesn't dominate the deopt block, but a deopt resumes in the interpreter instead of
    // returning, so it doesn't count as a path that skips `r1`.
    assertFalse(domTree.dominates(definition(main, "r1"), bb(cfg, "D").jump()));
    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "r1")));
  }

  @Test
  void dominatingNonDeoptExitsNeedsEveryReturn() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            if n then A() else B();
          A():
            ra: I = dup n;
            return ra;
          B():
            return n;
          }
        }
        """);
    var domTree = new DominatorTree(main);

    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "r0")));
    assertFalse(domTree.dominatesNonDeoptExits(definition(main, "ra")));
  }

  @Test
  void instructionsInAPromiseDominateNoNonDeoptExit() {
    var main = withPromise();
    var domTree = new DominatorTree(main);

    // The promise may never be forced.
    assertFalse(domTree.dominatesNonDeoptExits(definition(main, "inner")));
    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "outer")));
  }

  @Test
  void nothingDominatesNonDeoptExitsWhenThereAreNone() {
    var allDeopt =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            check L1() else D();
          L1():
            deopt 12 [r0];
          D():
            deopt 13 [r0];
          }
        }
        """);
    assertFalse(new DominatorTree(allDeopt).dominatesNonDeoptExits(definition(allDeopt, "r0")));

    var neverExits =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            goto Spin();
          Spin():
            goto Spin();
          }
        }
        """);
    assertFalse(new DominatorTree(neverExits).dominatesNonDeoptExits(definition(neverExits, "r0")));
  }

  @Test
  void rejectsBlocksOutsideTheScope() {
    var main = withPromise();
    var cfg = cfgOf(main);
    var foreign = cfgOf(withPromise());
    var domTree = new DominatorTree(main);

    assertThrows(IllegalArgumentException.class, () -> domTree.cfg(foreign));
    assertThrows(
        IllegalArgumentException.class, () -> domTree.dominates(foreign.entry(), cfg.entry()));
    assertThrows(
        IllegalArgumentException.class, () -> domTree.dominates(cfg.entry(), foreign.entry()));
    assertThrows(
        IllegalArgumentException.class,
        () -> domTree.dominates(foreign.entry(), 0, cfg.entry(), 0));
    assertThrows(
        IllegalArgumentException.class,
        () -> domTree.dominatesNonDeoptExits(foreign.entry().jump()));
  }
}
