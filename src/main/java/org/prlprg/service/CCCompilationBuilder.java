package org.prlprg.service;

import java.io.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.logging.Logger;

// TODO: consider in-memory filesystem
public class CCCompilationBuilder {

  // TODO: configurable from environment variable
  private static final String DEFAULT_COMPILER = "gcc";

  private final File input;
  private final File output;
  private final List<String> flags = new ArrayList<>();
  private String compiler = DEFAULT_COMPILER;
  private File workingDirectory;

  public CCCompilationBuilder(File input, File output) {
    this.input = input;
    this.output = output;
  }

  public CCCompilationBuilder flag(String flag) {
    flags.add(flag);
    return this;
  }

  // TODO: return something with warnings, ...
  public void compile() throws IOException, InterruptedException {
    var logger = Logger.getLogger(CCCompilationBuilder.class.getName());

    var builder = new ProcessBuilder();
    builder.redirectErrorStream(true);
    builder.directory(workingDirectory);
    builder.command(compiler, "-o", output.getPath(), input.getPath());
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
      throw new RuntimeException(
          "Compilation failed with exit code "
              + exitCode
              + ":\n"
              + String.join(" ", builder.command())
              + "\n"
              + output);
    }

    if (!output.isEmpty()) {
      logger.warning("Compilation warnings:\n" + output);
    }
  }

  public CCCompilationBuilder flags(Collection<String> flags) {
    this.flags.addAll(flags);
    return this;
  }

  public CCCompilationBuilder workingDirectory(File directory) {
    this.workingDirectory = directory;
    return this;
  }
}