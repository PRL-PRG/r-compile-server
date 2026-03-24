package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import java.io.IOException;
import java.nio.file.Files;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Paths;

class ElideRedundantBoxUnboxTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new Specialize(new ElideRedundantBoxUnbox());
  }

  @Test
  void exampleBoxThenUnbox_reusesOriginal() throws IOException {
    var module = ParseUtil.parseModule(example("opt_elide_redundant_box_unbox_chain.fir"));

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("return x;"), "box/unbox chain should return x; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "box/unbox chain should not return r2; got:\n" + printed);
  }

  @Test
  void exampleDuplicateBox_reusesFirstBox() throws IOException {
    var module = ParseUtil.parseModule(example("opt_elide_redundant_box_unbox_duplicate.fir"));

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("return r1;"), "duplicate box should return r1; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "duplicate box should not return r2; got:\n" + printed);
  }

  @Test
  void unboxThenBox_reusesOriginal() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> v1(I) { reg x:I, reg r1:v1(I), reg r2:I, reg r3:v1(I) |
                x = 42;
                r1 = box< I --> v1(I) >(x);
                r2 = unbox< v1(I) --> I >(r1);
                r3 = box< I --> v1(I) >(r2);
                return r3;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("return r1;"), "unbox/box chain should return r1; got:\n" + printed);
    assertFalse(
        printed.contains("return r3;"), "unbox/box chain should not return r3; got:\n" + printed);
  }

  @Test
  void duplicateUnbox_elidesToEquivalentValue() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg x:I, reg boxed:v1(I), reg r1:I, reg r2:I |
                x = 42;
                boxed = box< I --> v1(I) >(x);
                r1 = unbox< v1(I) --> I >(boxed);
                r2 = unbox< v1(I) --> I >(boxed);
                return r2;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("return x;"),
        "duplicate unbox should return x after folding; got:\n" + printed);
    assertFalse(
        printed.contains("return r2;"), "duplicate unbox should not return r2; got:\n" + printed);
  }

  private static String example(String name) throws IOException {
    return Files.readString(
        Paths.getResource(ElideRedundantBoxUnboxTest.class, "/org/prlprg/examples/fir/" + name));
  }
}
