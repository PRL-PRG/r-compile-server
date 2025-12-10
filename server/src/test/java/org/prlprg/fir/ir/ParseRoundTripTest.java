package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.snapshots.SnapshotStore;

class ParseRoundTripTest {
  /// Tests that for all FIŘ examples, print = print → parse → print.
  @FirExampleTest
  void test(Example example, SnapshotStore store) {
    var module = store.query(example, FirQuery.INSTANCE);
    var print = module.toString();

    System.err.println(print);

    var module2 = Parser.fromString(print, Module.class);
    var print2 = Printer.toString(module2);

    // Compare the normalized contents
    assertEquals(print, print2, "Reprinted FIŘ should match original printed");
  }
}
