package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.interpret.InterpretUtil.testInterpretFirFile;

import java.nio.file.Path;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;

class OptimizeCalleeTest {
  /// Runs all FIŘ files in the test resources, applies OptimizeCallee optimization,
  /// and ensures it doesn't crash.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testOptimizeCalleeDoesntCrash(Path firFilePath) {
    testInterpretFirFile(
        firFilePath,
        false,
        c -> {
          new OptimizeCallee(c.interpreter()::feedback, 1).run(c.module());
          c.retest();
        });
  }

  @Test
  void testOptimizeCalleeNoImprovementWhenAlreadyOptimal() {
    testInterpretFirFile(
        """
        fun main {
          () --> I { reg r:I |
            external(1, 2, 3);
            r = identity.0(42);
            return r;
          }
        }

        fun external { --> I }

        fun identity {
          (reg x:I) --> I { |
            return x;
          }
        }
        """,
        true,
        c -> {
          var pass = new OptimizeCallee(c.interpreter()::feedback, 1);

          var main = Objects.requireNonNull(c.module().lookupFunction("main")).version(0);

          var original = main.toString();

          pass.run(c.module());

          var optimized = main.toString();

          // Since the call is already using the most specific version,
          // no optimization should occur
          assertEquals(
              original, optimized, "OptimizeCallee should not change already optimal calls");

          c.retest();
        });
  }

  @Test
  void testOptimizeCalleeConvertsToStaticCall() {
    testInterpretFirFile(
        """
        fun main {
          () --> I { reg r:I |
            r = f(42);
            return r;
          }
        }

        fun f {
          (reg r:*) --> I { |
            return 24;
          }
          (reg r:I) --> I { |
            return r;
          }
        }
        """,
        true,
        c -> {
          var pass = new OptimizeCallee(c.interpreter()::feedback, 1);

          var main = Objects.requireNonNull(c.module().lookupFunction("main")).version(0);

          // Before optimization, should have dispatch call
          assertEquals(
              """
              () --> I { reg r:I |
                r = f(42);
                return r;
              }"""
                  .stripIndent(),
              main.toString());

          pass.run(c.module());

          // After optimization, the call should be optimized to use the more specific version
          assertEquals(
              """
              () --> I { reg r:I |
                r = f.1(42);
                return r;
              }"""
                  .stripIndent(),
              main.toString());

          // Also, the code should run
          c.retest();
        });
  }

  @Test
  void testOptimizeCalleeImproves() {
    testInterpretFirFile(
        """
        fun main {
          () --> I { reg r:I |
            r = f.0(42);
            return r;
          }
        }

        fun f {
          (reg r:*) --> I { |
            return 24;
          }
          (reg r:I) --> I { |
            return r;
          }
        }
        """,
        true,
        c -> {
          var pass = new OptimizeCallee(c.interpreter()::feedback, 1);

          var main = Objects.requireNonNull(c.module().lookupFunction("main")).version(0);

          pass.run(c.module());

          assertEquals(
              """
              () --> I { reg r:I |
                r = f.1(42);
                return r;
              }"""
                  .stripIndent(),
              main.toString());
        });
  }

  @Test
  void testOptimizeCalleeWithMultipleArgumentTypes() {
    testInterpretFirFile(
        """
        fun main {
          () --> I { reg r:I |
            f(1, 2.0);
            r = f(3, 4);
            return r;
          }
        }

        fun f {
          (reg a:*, reg b:*) --> V { |
            return 42;
          }
          (reg a:I, reg b:I) --> I { |
            return a;
          }
          (reg a:I, reg b:R) --> I { |
            return a;
          }
        }
        """,
        true,
        c -> {
          var pass = new OptimizeCallee(c.interpreter()::feedback, 1);

          var main = Objects.requireNonNull(c.module().lookupFunction("main")).version(0);

          pass.run(c.module());

          assertEquals(
              """
              () --> I { reg r:I |
                f.2(1, 2.0);
                r = f.1(3, 4);
                return r;
              }"""
                  .stripIndent(),
              main.toString());

          c.retest();
        });
  }

  @Test
  void testOptimizeCalleeConvertsToDispatchCall() {
    testInterpretFirFile(
        """
        fun main {
          () --> V { reg r:V, reg r1:V |
            r = 42 as V;
            r1 = 4.2 as V;
            f(r);
            f(24);
            f(r1);
            f(24.0);
            return r;
          }
        }

        fun f {
          (reg r:V) --> V { |
            return r;
          }
          (reg r:I) --> I { |
            return r;
          }
        }
        """,
        true,
        c -> {
          var pass = new OptimizeCallee(c.interpreter()::feedback, 1);

          var main = Objects.requireNonNull(c.module().lookupFunction("main")).version(0);

          pass.run(c.module());

          // First call: can't guarantee `r` is an integer, but feedback says so, so dispatch
          // Second call: can guarantee `24` is an integer, so static
          // Third call: can't guarantee `r` is an integer, and it hasn't been, so static
          // Fourth call: trivial, can guarantee `24.0` is never an integer, so static
          assertEquals(
              """
              () --> V { reg r:V, reg r1:V |
                r = 42 as V;
                r1 = 4.2 as V;
                f< V --> V >(r);
                f.1(24);
                f.0(r1);
                f.0(24.0);
                return r;
              }"""
                  .stripIndent(),
              main.toString());
        });
  }
}
