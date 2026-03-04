package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.MethodOrderer.OrderAnnotation;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.TestMethodOrder;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.snapshots.SnapshotStore;

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

    System.err.println(print);

    var module2 = Parser.fromString(print, Module.class);
    var print2 = Printer.toString(module2);

    // Compare the normalized contents
    assertEquals(print, print2, "Reprinted FIŘ should match original printed");
  }
}
