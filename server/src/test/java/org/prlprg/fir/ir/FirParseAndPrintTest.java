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

/** Tests for parsing and printing FIR files. */
public class FirParseAndPrintTest {
  /** Tests that all FIR files in the test resources directory can be parsed. */
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseFirFiles(Path firFilePath) throws IOException {
    var firContent = Files.readString(firFilePath);

    Parser.fromString(firContent, Module.class);
  }

  /**
   * Tests that all FIR files in the test resources directory can be parsed and then printed back to
   * a string that matches the original content.
   */
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testParseAndPrintFirFiles(Path firFilePath) throws IOException {
    String originalFirContent = Files.readString(firFilePath);

    var module = Parser.fromString(originalFirContent, Module.class);
    var printedFirContent = Printer.toString(module);

    System.err.println(printedFirContent);

    var reparsedModule = Parser.fromString(printedFirContent, Module.class);
    var reprintedFirContent = Printer.toString(reparsedModule);

    // Compare the normalized contents
    assertEquals(
        printedFirContent,
        reprintedFirContent,
        "Printed FIR content should match original FIR content after normalization");
  }
}
