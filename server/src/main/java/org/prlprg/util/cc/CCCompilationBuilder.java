package org.prlprg.util.cc;

import java.io.*;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.prlprg.AppConfig;
import org.prlprg.util.Files;

// TODO: consider in-memory filesystem
public class CCCompilationBuilder {
  public static final Logger LOG = Logger.getLogger(CCCompilationBuilder.class.getName());

  private final List<Path> inputs = new ArrayList<>();
  private final Path output;
  private final List<String> flags = new ArrayList<>();

  public CCCompilationBuilder(Path input, Path output) {
    this.inputs.add(input);
    this.output = output;
  }

  /// Compile `input` into the output as well, in the same translation-unit-per-file way `cc` would.
  public CCCompilationBuilder input(Path input) {
    inputs.add(input);
    return this;
  }

  public CCCompilationBuilder inputs(Collection<Path> inputs) {
    this.inputs.addAll(inputs);
    return this;
  }

  public CCCompilationBuilder flag(String flag) {
    flags.add(flag);
    return this;
  }

  public CCCompilationBuilder flags(Collection<String> flags) {
    this.flags.addAll(flags);
    return this;
  }

  public void compile() throws IOException, InterruptedException, CCompilationException {
    if (LOG.isLoggable(Level.FINE)) {
      var size = inputs.stream().mapToLong(Files::size).sum();
      LOG.fine("Compiling inputs: %s (size: %s), output: %s".formatted(inputs, size, output));
    }

    var time = System.currentTimeMillis();

    var builder = new ProcessBuilder();
    builder.redirectErrorStream(true);
    builder.command(AppConfig.CC, "-o", output.toString());
    inputs.forEach(input -> builder.command().add(input.toString()));
    builder.command().addAll(flags);

    var cmd = String.join(" ", builder.command());

    if (LOG.isLoggable(Level.FINER)) {
      LOG.finer("Running command: " + cmd);
    }

    try (Process process = builder.start()) {

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
        throw new CCompilationException(cmd, inputs, stdout.toString(), exitCode);
      }

      if (!stdout.isEmpty()) {
        LOG.warning("Compilation warnings:\n" + stdout);
      }
    }

    time = System.currentTimeMillis() - time;
    var size = Files.size(output);

    if (LOG.isLoggable(Level.FINE)) {
      LOG.fine("Finished compilation in %d ms (size: %d)\n".formatted(time, size));
    }
  }
}
