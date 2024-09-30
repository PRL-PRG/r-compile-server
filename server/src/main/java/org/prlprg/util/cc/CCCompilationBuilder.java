package org.prlprg.util.cc;

import java.io.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.prlprg.util.Files;

// TODO: consider in-memory filesystem
public class CCCompilationBuilder {
  public static final Logger LOG = Logger.getLogger(CCCompilationBuilder.class.getName());

  // TODO: configurable from environment variable
  private static final String DEFAULT_COMPILER = "/usr/bin/gcc";

  private final String input;
  private final String output;
  private final List<String> flags = new ArrayList<>();
  private String compiler = DEFAULT_COMPILER;
  private File workingDirectory;

  public CCCompilationBuilder(String input, String output) {
    this.input = input;
    this.output = output;
  }

  public CCCompilationBuilder flag(String flag) {
    flags.add(flag);
    return this;
  }

  public void compile() throws IOException, InterruptedException, CCompilationException {
    if (LOG.isLoggable(Level.FINE)) {
      var lines = Files.readLines(new File(workingDirectory, input)).size();
      LOG.fine("Compiling input: " + input + " (lines: " + lines + "), output: " + output);
    }

    var time = System.currentTimeMillis();

    var builder = new ProcessBuilder();
    builder.redirectErrorStream(true);
    builder.directory(workingDirectory);
    builder.command(compiler, "-o", output, input);
    builder.command().addAll(flags);

    var cmd = String.join(" ", builder.command());

    if (LOG.isLoggable(Level.FINER)) {
      LOG.finer("Running command: " + cmd);
    }

    Process process = builder.start();

    // Capture the output and error streams
    StringBuilder stdout = new StringBuilder();
    try (BufferedReader reader =
        new BufferedReader(new InputStreamReader(process.getInputStream()))) {
      String line;
      while ((line = reader.readLine()) != null) {
        stdout.append(line).append(System.lineSeparator());
      }
    }

    int exitCode = process.waitFor();

    if (exitCode != 0) {
      throw new CCompilationException(
          cmd, new File(workingDirectory, input), stdout.toString(), exitCode);
    }

    if (!stdout.isEmpty()) {
      LOG.warning("Compilation warnings:\n" + stdout);
    }

    time = System.currentTimeMillis() - time;
    var size = new File(workingDirectory, output).length();

    if (LOG.isLoggable(Level.FINE)) {
      LOG.fine("Finished compilation in %d ms (size: %d)\n".formatted(time, size));
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
