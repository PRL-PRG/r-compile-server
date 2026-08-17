package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;

class CreateOwnedParameterVersionTest implements OptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new CreateOwnedParameterVersion(9);
  }

  @Test
  void dupsBorrowedParameter_createsOwnedVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(v) {
              (reg v:v(I)b) --> v(I)f { ... }
              (reg v:v(I)b) --> v(I)f {
                d: v(I)o = dup v;
                d[0] = 1;
                return consume d;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("(reg v:v(I)o) --> v(I)f"),
        "an owned-parameter version should exist:\n" + printed);
    assertTrue(
        printed.contains("(reg v:v(I)b) --> v(I)f"),
        "the borrowed version should remain:\n" + printed);
  }

  @Test
  void runTwice_createsOneVersion() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(v) {
              (reg v:v(I)b) --> v(I)f { ... }
              (reg v:v(I)b) --> v(I)f {
                d: v(I)o = dup v;
                d[0] = 1;
                return consume d;
              }
            }
            """);

    assertTrue(run(module), "the first run should create the version");
    assertFalse(run(module), "the second run shouldn't create a duplicate");

    var function = module.localFunction(Variable.named("main"));
    assertNotNull(function);
    assertEquals(3, function.versions().size(), "baseline, borrowed and owned:\n" + module);
  }

  @Test
  void dupsLocal_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(v) {
              (reg v:v(I)b) --> v(I)f { ... }
              (reg v:v(I)b) --> v(I)f {
                l: v(I)o = v(I)[1, 2, 3];
                d: v(I)o = dup l;
                d[0] = 1;
                return consume d;
              }
            }
            """);

    assertFalse(run(module), "only duplicated *parameters* get an owned version");
  }

  @Test
  void alreadyOwnedParameter_unchanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(v) {
              (reg v:v(I)o) --> v(I)f { ... }
              (reg v:v(I)o) --> v(I)f {
                d: v(I)o = dup v;
                d[0] = 1;
                return consume d;
              }
            }
            """);

    assertFalse(run(module), "the parameter is already owned");
  }
}
