package org.prlprg.service;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

public class NativeCompilerBuilder {

  private final File input;
  private final File output;
  private final List<String> flags = new ArrayList<>();
  private String compiler = "gcc";

  public NativeCompilerBuilder(File input, File output) {
    this.input = input;
    this.output = output;
  }

  public NativeCompilerBuilder flag(String flag) {
    flags.add(flag);
    return this;
  }

  public void compile() throws IOException, InterruptedException {
    var logger = Logger.getLogger(NativeCompilerBuilder.class.getName());
    logger.setLevel(Level.FINE);

    var builder = new ProcessBuilder();
    builder.redirectErrorStream(true);
    builder.command(compiler, "-o", output.getAbsolutePath(), "-c", input.getAbsolutePath());
    builder.command().addAll(flags);

    logger.fine("Running command: " + String.join(" ", builder.command()));

    Process process = builder.start();

    // Capture the output and error streams
    StringBuilder output = new StringBuilder();
    try (BufferedReader reader =
        new BufferedReader(new InputStreamReader(process.getInputStream()))) {
      String line;
      while ((line = reader.readLine()) != null) {
        output.append(line).append(System.lineSeparator());
      }
    }

    int exitCode = process.waitFor();

    if (exitCode != 0) {
      throw new RuntimeException("Compilation failed with exit code " + exitCode + ":\n" + output);
    }
  }
}
