package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.prlprg.fir.interpret.InterpretUtil.testInterpretFirFile;

import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.util.DirectorySource;

class SpeculateDispatchTest {
  /// Runs all FIŘ files in the test resources, compile new versions of its methods based on
  /// feedback (no optimizations), and runs once more.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testSpeculateDispatchDoesntCrash(Path firFilePath) {
    testInterpretFirFile(
        firFilePath,
        false,
        c -> {
          new SpeculateDispatch(c.interpreter()::feedback, 1, 9, 99).run(c.module());
          c.retest();
        });
  }

  @Test
  void testSpeculateDispatchCreatesVersion() {
    testInterpretFirFile(
        """
        fun main {
          () --> I { reg r:I |
            f(1.0);
            f(2);
            r = f(3.0);
            f(r);
            f(5.0);
            f("Hello");
            return 42;
          }
        }

        fun f { (reg r:*) --> I { | return 42; } }
        """,
        true,
        c -> {
          var pass = new SpeculateDispatch(c.interpreter()::feedback, 2, 9, 99);

          var f = c.module().lookupFunction("f");
          assertNotNull(f);

          pass.run(c.module());
          assertEquals(
              """
              fun f {
                (reg r:*) --> I { |
                  return 42;
                }
                (reg r:R) --> I { |
                  return 42;
                }
                (reg r:I) --> I { |
                  return 42;
                }
              }"""
                  .stripIndent(),
              f.toString(),
              "'f' wasn't specialized as expected (first call to `main`)");

          c.retest();
          pass.run(c.module());
          assertEquals(
              """
              fun f {
                (reg r:*) --> I { |
                  return 42;
                }
                (reg r:R) --> I { |
                  return 42;
                }
                (reg r:I) --> I { |
                  return 42;
                }
                (reg r:S) --> I { |
                  return 42;
                }
              }"""
                  .stripIndent(),
              f.toString(),
              "'f' wasn't specialized as expected (second call to `main`)");
        });
  }
}
