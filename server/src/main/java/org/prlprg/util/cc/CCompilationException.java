package org.prlprg.util.cc;

import java.io.File;
import org.prlprg.util.Files;

public class CCompilationException extends Exception {
  private final String command;
  private final File cFile;
  private final String stdout;
  private final int exitCode;

  public CCompilationException(String command, File cFile, String stdout, int exitCode) {
    this.command = command;
    this.cFile = cFile;
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
        .append("File: ");
    if (cFile.exists()) {
      sb.append("\n")
          .append(cFile.getAbsolutePath())
          .append("\n")
          .append(Files.readString(cFile.toPath()))
          .append("\n");
    } else {
      sb.append("<no file>\n");
    }
    return sb.toString();
  }
}
