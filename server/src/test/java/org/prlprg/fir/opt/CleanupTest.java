package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.regex.Pattern;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DirectorySource;

public class CleanupTest {
  private static final Pattern CLEANUP_COMMENT_PATTERN = Pattern.compile("^(\\s*)# cleanup: (.*)$");

  /// Tests that all FIŘ files in the test resources directory are unaffected by the [Cleanup]
  /// pass.
  @ParameterizedTest
  @DirectorySource(root = "..", glob = "*.fir")
  void testCleanupNoOps(Path firFilePath) throws IOException {
    try {
      var firText = Files.readString(firFilePath);
      var firModule = Parser.fromString(firText, Module.class);

      var firModuleBeforeCleanup = firModule.toString();
      var expectedAfterCleanup = processCleanupComments(firText, firModuleBeforeCleanup);

      try {
        new Cleanup().run(firModule);

        var firModuleAfterCleanup = firModule.toString();

        assertEquals(expectedAfterCleanup, firModuleAfterCleanup, "FIŘ module changed by cleanup");
      } catch (Exception e) {
        fail(
            "Cleanup pass failed on FIŘ file: "
                + firFilePath
                + "\nError: "
                + e.getMessage()
                + "\nOriginal Content:\n"
                + firModuleBeforeCleanup
                + "\nExpected Content:\n"
                + expectedAfterCleanup);
      }
    } catch (ParseException e) {
      abort(
          "Failed to parse FIŘ file: "
              + firFilePath
              + "\nError: "
              + e.getMessage()
              + "\nContent:\n"
              + Files.readString(firFilePath));
    }
  }

  /// Process cleanup comments in `firText` and apply substitutions to `expectedText``
  private String processCleanupComments(String firText, String expectedText) {
    var firLines = firText.split("\n");
    var expectedLines = expectedText.split("\n");

    for (int i = 0; i < firLines.length; i++) {
      var matcher = CLEANUP_COMMENT_PATTERN.matcher(firLines[i]);
      if (matcher.matches()) {
        var indentation = matcher.group(1);
        var replacement = matcher.group(2);

        // Fail if there's no line after the replacement.
        if (i + 1 == firLines.length) {
          throw new IllegalArgumentException(
              "No line after replacement:\n" + firLines[i] + "\nIn:\n" + firText);
        }

        // Find the corresponding line in expectedText that matches the line after the comment
        var replacee = removeTrailingCommentIfNecessary(firLines[i + 1]);
        var replaced = false;
        // Find and replace the matching line in expectedText
        for (int j = 0; j < expectedLines.length; j++) {
          if (expectedLines[j].equals(replacee)) {
            expectedLines[j] = indentation + replacement;
            replaced = true;
            break;
          }
        }

        if (!replaced) {
          throw new IllegalArgumentException(
              "Line to replace not found:\n" + replacee + "\nIn:\n" + expectedText);
        }
      }
    }

    return String.join("\n", expectedLines);
  }

  private String removeTrailingCommentIfNecessary(String line) {
    return line.contains("#") ? line.substring(0, line.indexOf('#')).stripTrailing() : line;
  }
}
