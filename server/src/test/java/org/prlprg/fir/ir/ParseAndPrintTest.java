package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

/// Tests parsing and printing FIŘ files.
class ParseAndPrintTest {
  /// Tests that all FIŘ files in the test resources directory can be parsed.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseFirFiles(TestPath firPath) {
    var firText = firPath.read();

    Parser.fromString(firText, Module.class);
  }

  /// Tests that all FIŘ files in the test resources directory can be parsed and then printed back
  /// to a string that matches the original content.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseAndPrintFirFiles(TestPath firPath) {
    var originalFirText = firPath.read();

    var module = Parser.fromString(originalFirText, Module.class);
    var printedFirText = Printer.toString(module);

    System.err.println(printedFirText);

    var reparsedModule = Parser.fromString(printedFirText, Module.class);
    var reprintedFirText = Printer.toString(reparsedModule);

    // Compare the normalized contents
    assertEquals(
        printedFirText,
        reprintedFirText,
        "Printed FIR content should match original FIR content after normalization");
  }
}
