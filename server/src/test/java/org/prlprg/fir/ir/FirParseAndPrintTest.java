package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DirectorySource;

/// Tests parsing and printing FIR files.
public class FirParseAndPrintTest {
  /// Tests that all FIR files in the test resources directory can be parsed.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseFirFiles(Path firFilePath) throws IOException {
    var firText = Files.readString(firFilePath);

    Parser.fromString(firText, Module.class);
  }

  /// Tests that all FIR files in the test resources directory can be parsed and then printed back
  // to
  /// a string that matches the original content.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseAndPrintFirFiles(Path firFilePath) throws IOException {
    String originalFirText = Files.readString(firFilePath);

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
