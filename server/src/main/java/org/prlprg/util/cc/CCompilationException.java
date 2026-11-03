package org.prlprg.util.cc;

import com.google.common.collect.ImmutableList;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Path;
import java.util.List;
import org.prlprg.util.Files;

public class CCompilationException extends Exception {
  private final String command;
  private final ImmutableList<Path> cPaths;
  private final String stdout;
  private final int exitCode;

  public CCompilationException(String command, List<Path> cPaths, String stdout, int exitCode) {
    this.command = command;
    this.cPaths = ImmutableList.copyOf(cPaths);
    this.stdout = stdout;
    this.exitCode = exitCode;
  }

  @Override
  public String getMessage() {
    var sb = new StringBuilder();
    sb.append("Compilation failed with exit code: ")
        .append(exitCode)
        .append("\n")
        .append("Command:")
        .append(command)
        .append("\n")
        .append("Stdout:")
        .append(stdout)
        .append("\n");
    var printedAPath = false;
    for (var cPath : cPaths) {
      if (!Files.exists(cPath)) {
        continue;
      }
      sb.append("Path: ").append("\n").append(cPath.toAbsolutePath()).append("\n");
      // Only print C sources: other inputs (e.g. cached object files) are binary.
      if (cPath.getFileName().toString().endsWith(".c")) {
        try {
          // Decodes leniently, because a message getter must not throw.
          sb.append(new String(java.nio.file.Files.readAllBytes(cPath), StandardCharsets.UTF_8))
              .append("\n");
        } catch (IOException e) {
          sb.append("<unreadable: ").append(e).append(">\n");
        }
      }
      printedAPath = true;
    }
    if (!printedAPath) {
      sb.append("<no files>\n");
    }
    return sb.toString();
  }
}
