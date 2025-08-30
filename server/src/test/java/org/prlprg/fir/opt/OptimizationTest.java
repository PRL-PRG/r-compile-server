package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.fir.interpret.InterpretUtil.testInterpretFirFile;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.ArrayList;
import java.util.regex.Pattern;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.TestPath;

public abstract class OptimizationTest {
  /// Replace lines below `# commentType: ...` with `...` in `firText`.
  public static String replaceAfterComments(String commentType, String firText) {
    var commentRegex = Pattern.compile("^(\\s*)# " + Pattern.quote(commentType) + ":( ?.*)$");
    var firLines = firText.split("\n");

    for (int i = 0; i < firLines.length; ) {
      var matcher = commentRegex.matcher(firLines[i++]);
      if (matcher.matches()) {
        var indentation = matcher.group(1);
        var inlineReplacement = matcher.group(2);

        var replacementLines = new ArrayList<String>();
        if (inlineReplacement.startsWith(" ")) {
          replacementLines.add(inlineReplacement.substring(1));
        } else if (inlineReplacement.isEmpty()) {
          while (i < firLines.length && firLines[i].stripLeading().startsWith("# ")) {
            replacementLines.add(firLines[i++].stripLeading().substring(2));
          }
          if (replacementLines.isEmpty()) {
            replacementLines.add("");
          }
        } else {
          throw new IllegalArgumentException(
              "Expected space or newline after \":\" in:\n"
                  + firLines[i]
                  + "\nFull text:\n"
                  + firText);
        }

        // Fail if there's no line after the replacement.
        if (i + replacementLines.size() > firLines.length) {
          throw new IllegalArgumentException(
              "No line after replacement:\n" + firLines[i] + "\nIn:\n" + firText);
        }

        for (var line : replacementLines) {
          firLines[i++] = indentation + line;
        }
      }
    }

    return String.join("\n", firLines);
  }

  protected abstract Optimization optimization(TestInterpretCtx c);

  /// Tests that the optimization never crashes on valid FIŘ.
  @ParameterizedTest
  @DirectorySource(root = "..", rootClass = OptimizationTest.class, glob = "*.fir")
  void testNeverCrashes(TestPath firPath) {
    testInterpretFirFile(
        firPath,
        false,
        c -> {
          optimization(c).run(c.module());
          c.retest();
        });
  }

  /// Tests that the optimization works as expected on specific tests.
  @ParameterizedTest
  @DirectorySource(appendClassName = true, glob = "*.fir")
  void test(TestPath firPath) {
    var firText = firPath.read();

    testInterpretFirFile(
        firText,
        true,
        c -> {
          optimization(c).run(c.module());

          // Parse expected output (if this fails, the test is bad).
          var expectedFirModule = parseModule(replaceAfterComments("after", firText));

          // Check that output is expected.
          assertEquals(expectedFirModule.toString(), c.module().toString());

          // Also check that the expected output isn't invalid, the test should still run.
          c.retest();
        });
  }
}
