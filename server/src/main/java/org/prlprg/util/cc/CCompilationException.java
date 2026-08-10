package org.prlprg.util.cc;

import com.google.common.collect.ImmutableList;
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
      sb.append("Path: ")
          .append("\n")
          .append(cPath.toAbsolutePath())
          .append("\n")
          .append(Files.readString(cPath))
          .append("\n");
      printedAPath = true;
    }
    if (!printedAPath) {
      sb.append("<no files>\n");
    }
    return sb.toString();
  }
}
