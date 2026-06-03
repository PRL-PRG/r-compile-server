package org.prlprg.util.cc;

import java.nio.file.Path;
import org.prlprg.util.Files;

public class CCompilationException extends Exception {
  private final String command;
  private final Path cPath;
  private final String stdout;
  private final int exitCode;

  public CCompilationException(String command, Path cPath, String stdout, int exitCode) {
    this.command = command;
    this.cPath = cPath;
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
        .append("\n")
        .append("Path: ");
    if (Files.exists(cPath)) {
      sb.append("\n")
          .append(cPath.toAbsolutePath())
          .append("\n")
          .append(Files.readString(cPath))
          .append("\n");
    } else {
      sb.append("<no file>\n");
    }
    return sb.toString();
  }
}
