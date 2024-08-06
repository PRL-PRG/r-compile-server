package org.prlprg.parseprint;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

public class ScannerTests {
  @Test
  public void testReadPastEndOfLine() {
    var scanner = new Scanner("Hello, world!\nFoo bar!\n");
    assertEquals("Hello, world!\n", scanner.readPastEndOfLine());
    assertEquals('F', scanner.readChar());
    assertEquals("oo bar!\n", scanner.readPastEndOfLine());

    var scanner2 = new Scanner("Test\n2\n3");
    assertEquals("Test\n", scanner2.readPastEndOfLine());
    assertEquals('2', scanner2.readChar());
    assertEquals("\n", scanner2.readPastEndOfLine());
    assertEquals("3", scanner2.readPastEndOfLine());
  }

  @Test
  public void testReadQuoted() {
    var scanner = new Scanner("\"\\\"Hello\\\", \\\"world!\\\"\"");
    assertEquals("\"Hello\", \"world!\"", scanner.readQuoted('"'));
    scanner = new Scanner("\"\\\"Hello\\\", \\\"world!\\\"\"");
    assertEquals("\"\\\"Hello\\\", \\\"world!\\\"\"", scanner.readQuotedLiterally('"'));
  }
}
