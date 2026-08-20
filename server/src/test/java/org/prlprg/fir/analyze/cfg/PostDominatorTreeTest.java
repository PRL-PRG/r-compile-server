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

class PostDominatorTreeTest {
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

  /// A version whose body creates a promise, forces it, and returns the result.
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
            r: R = force p;
            return r;
          }
        }
        """);
  }

  @Test
  void everyInstructionInStraightLineCodeIsGuaranteedToRun() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            r1: I = dup r0;
            return r1;
          }
        }
        """);
    var pdTree = new PostDominatorTree(main);

    assertTrue(pdTree.postDominatesEntry(definition(main, "r0")));
    assertTrue(pdTree.postDominatesEntry(definition(main, "r1")));
    assertTrue(pdTree.postDominatesEntry(cfgOf(main).entry().jump()));
  }

  @Test
  void instructionsInOneBranchAreNotGuaranteedToRun() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            if n then A() else B();
          A():
            ra: I = dup n;
            goto J();
          B():
            rb: I = dup n;
            goto J();
          J():
            rj: I = dup n;
            return rj;
          }
        }
        """);
    var pdTree = new PostDominatorTree(main);

    assertTrue(pdTree.postDominatesEntry(definition(main, "r0")));
    assertFalse(pdTree.postDominatesEntry(definition(main, "ra")));
    assertFalse(pdTree.postDominatesEntry(definition(main, "rb")));
    // Both branches join, so the join runs either way.
    assertTrue(pdTree.postDominatesEntry(definition(main, "rj")));
  }

  @Test
  void instructionsAfterADeoptAreNotGuaranteedToRun() {
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
    var domTree = new DominatorTree(main);
    var pdTree = new PostDominatorTree(main);

    assertTrue(pdTree.postDominatesEntry(definition(main, "r0")));
    // A deopt is a way of not running `r1`, unlike for `DominatorTree#dominatesNonDeoptExits`,
    // which only counts the paths that return.
    assertFalse(pdTree.postDominatesEntry(definition(main, "r1")));
    assertTrue(domTree.dominatesNonDeoptExits(definition(main, "r1")));
  }

  @Test
  void instructionsAfterADivergentBranchAreNotGuaranteedToRun() {
    var main =
        mainOf(
            """
        fun main() {
          (reg n:I) --> I {
            r0: I = dup n;
            if n then Spin() else Exit();
          Spin():
            goto Spin();
          Exit():
            re: I = dup n;
            return re;
          }
        }
        """);
    var pdTree = new PostDominatorTree(main);

    assertTrue(pdTree.postDominatesEntry(definition(main, "r0")));
    // The other branch never returns, so `re` may never run.
    assertFalse(pdTree.postDominatesEntry(definition(main, "re")));
  }

  @Test
  void instructionsAfterALoopAreGuaranteedToRunButTheBodyIsnt() {
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
            re: I = dup n;
            return re;
          }
        }
        """);
    var pdTree = new PostDominatorTree(main);

    // Like every dominance analysis, this assumes a loop with an exit terminates.
    assertTrue(pdTree.postDominatesEntry(definition(main, "re")));
    assertFalse(pdTree.postDominatesEntry(definition(main, "i2")));
  }

  @Test
  void instructionsInAPromiseAreNeverGuaranteedToRun() {
    var main = withPromise();
    var pdTree = new PostDominatorTree(main);

    // The promise may never be forced, even though this one is forced right away.
    assertFalse(pdTree.postDominatesEntry(definition(main, "inner")));
    assertTrue(pdTree.postDominatesEntry(definition(main, "outer")));
    assertTrue(pdTree.postDominatesEntry(definition(main, "r")));
  }

  @Test
  void postDominatesEntryRejectsInstructionsOutsideTheScope() {
    var main = withPromise();
    var foreign = cfgOf(withPromise());
    var pdTree = new PostDominatorTree(main);

    assertThrows(
        IllegalArgumentException.class, () -> pdTree.postDominatesEntry(foreign.entry().jump()));
  }

  @Test
  void nothingPostDominatesAcrossPromiseScopes() {
    var main = withPromise();
    var cfg = cfgOf(main);
    var promise = promiseCfg(main, "p");
    var pdTree = new PostDominatorTree(main);

    // Neither direction: the force may never happen, and if it does, it may happen after the
    // instructions that dominate the promise's definition already ran.
    assertFalse(pdTree.postDominates(definition(main, "r"), definition(main, "inner")));
    assertFalse(pdTree.postDominates(definition(main, "inner"), definition(main, "r")));
    assertFalse(pdTree.postDominates(definition(main, "inner"), definition(main, "outer")));
    assertFalse(pdTree.postDominates(cfg.entry(), promise.entry()));
    assertFalse(pdTree.postDominates(promise.entry(), cfg.entry()));

    // Within the promise's own code, it post-dominates as usual.
    assertTrue(pdTree.postDominates(promise.entry().jump(), definition(main, "inner")));
    assertTrue(pdTree.postDominates(promise.entry(), promise.entry()));
  }

  @Test
  void postDominatesWithinOneCfgAgreesWithThatCfgsTree() {
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
    var pdTree = new PostDominatorTree(main);
    var cfgTree = pdTree.cfg(cfg);

    for (var postDominator : cfg.bbs()) {
      for (var postDominee : cfg.bbs()) {
        assertEquals(
            cfgTree.postDominates(postDominator, postDominee),
            pdTree.postDominates(postDominator, postDominee),
            () -> "postDominates(" + postDominator.label() + ", " + postDominee.label() + ")");
      }
    }

    assertTrue(pdTree.postDominates(bb(cfg, "J"), cfg.entry()));
    assertFalse(pdTree.postDominates(bb(cfg, "A"), cfg.entry()));
  }

  @Test
  void everyCfgInScopeHasItsOwnTree() {
    var main = withPromise();
    var cfg = cfgOf(main);
    var promise = promiseCfg(main, "p");
    var pdTree = new PostDominatorTree(main);

    assertNotSame(pdTree.cfg(cfg), pdTree.cfg(promise));
    assertSame(pdTree.cfg(cfg), pdTree.cfg(cfg));
    // The promise's body is straight-line, so its entry is its only block and its own exit.
    assertNull(pdTree.cfg(promise).immediatePostDominator(promise.entry()));
  }

  @Test
  void rejectsBlocksOutsideTheScope() {
    var main = withPromise();
    var cfg = cfgOf(main);
    var foreign = cfgOf(withPromise());
    var pdTree = new PostDominatorTree(main);

    assertThrows(IllegalArgumentException.class, () -> pdTree.cfg(foreign));
    assertThrows(
        IllegalArgumentException.class, () -> pdTree.postDominates(foreign.entry(), cfg.entry()));
    assertThrows(
        IllegalArgumentException.class, () -> pdTree.postDominates(cfg.entry(), foreign.entry()));
    assertThrows(
        IllegalArgumentException.class,
        () -> pdTree.postDominates(foreign.entry(), 0, cfg.entry(), 0));
  }
}
