package org.prlprg.util.cc;

import static org.junit.jupiter.api.Assertions.assertTrue;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.List;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;

class CCompilationExceptionTest {
  @Test
  void getMessagePrintsOnlyCSourcesAndDoesNotThrowOnBinaryInputs(@TempDir Path dir)
      throws IOException {
    var binary = Files.write(dir.resolve("output"), new byte[] {(byte) 0xFF, 0x00});
    var source = Files.writeString(dir.resolve("code.c"), "int main(void) { return 0; }");

    var message = new CCompilationException("cc", List.of(binary, source), "", 1).getMessage();

    assertTrue(message.contains("int main(void) { return 0; }"), message);
    assertTrue(message.contains(binary.toAbsolutePath().toString()), message);
  }
}
