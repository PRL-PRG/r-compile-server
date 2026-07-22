package org.prlprg.snapshot.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Assumptions;
import org.junit.jupiter.api.MethodOrderer.OrderAnnotation;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.TestMethodOrder;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.snapshot.SnapshotStore;

@TestMethodOrder(OrderAnnotation.class)
public class FirParseTest {
  /// Tests that all FIŘ examples not generated from R are parsed the same.
  @FirExampleTest(includeFromR = false)
  @Order(1)
  void test(Example example, SnapshotStore store) {
    store.verify(example, FirQuery.INSTANCE);
  }

  /// Tests that for all FIŘ examples (including those generated from R),
  /// print = print → parse → print.
  @FirExampleTest
  @Order(2)
  void testRoundTrip(Example example, SnapshotStore store) {
    var module = store.load(example, FirQuery.INSTANCE);
    var print = module.toString();

    // Skip negative-test examples: they carry expected-error annotations (`# <checker>-error:`)
    // because they are intentionally *invalid* IR (e.g. a non-dominating definition). The tool is
    // not expected to correctly print incorrect IR — the printer may emit blocks in an order
    // (e.g. exits first) that places a use before its non-dominating definition, which the parser
    // then rejects. Round-trip is only a guarantee for valid IR.
    Assumptions.assumeFalse(
        print.contains("-error:"), "round-trip is not expected for invalid (negative-test) IR");

    var module2 = Parser.fromString(print, Module.class);
    var print2 = Printer.toString(module2);

    // Compare the normalized contents
    assertEquals(print, print2, "Reprinted FIŘ should match original printed");
  }
}
