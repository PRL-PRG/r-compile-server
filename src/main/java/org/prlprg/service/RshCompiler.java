package org.prlprg.service;

import java.io.File;
import java.io.IOException;
import java.util.List;
import java.util.logging.Logger;

public class RshCompiler {
  private static final Logger logger = Logger.getLogger(RshCompiler.class.getName());

  // TODO: make it configurable
  private static final String INCLUDE_PATH = "backend/include";

  // TODO: which ones are needed? Can we bootstrap it from R?
  private static final List<String> COMPILER_FLAGS =
      List.of(
          "-DNDEBUG",
          "-DR_NO_REMAP",
          "-I.",
          "-I" + INCLUDE_PATH,
          "-fpic",
          "-march=x86-64",
          "-mtune=generic",
          "-pipe",
          "-fno-plt",
          "-fexceptions",
          "-fstack-clash-protection",
          "-fcf-protection",
          "-flto=auto",
          "-ffat-lto-objects",
          "-Wformat",
          "-Werror=format-security",
          "-Wall",
          "-Wno-unused-but-set-variable",
          "-pedantic",
          "-g");

  private static RshCompiler instance;

  public static RshCompiler getInstance() {
    if (instance == null) {
      try {
        instance = new RshCompiler();
        instance.initialize();
      } catch (Exception e) {
        throw new RuntimeException(e);
      }
    }

    return instance;
  }

  private void initialize() throws IOException, InterruptedException {
    // TODO: make it constants
    var input = new File("Rsh.h");
    var output = new File("Rsh.h.gch");
    new CCCompilationBuilder(input, output)
        .workingDirectory(new File(INCLUDE_PATH))
        .flags(COMPILER_FLAGS)
        .compile();
  }

  public void compile(File input, File output, int ccOptimization)
      throws IOException, InterruptedException {
    logger.fine("Compiling input: " + input + ", output: " + output);

    var builder =
        new CCCompilationBuilder(input, output)
            .flags(COMPILER_FLAGS)
            .flag("-c")
            .flag("-O" + ccOptimization);
    var time = System.currentTimeMillis();
    builder.compile();
    time = System.currentTimeMillis() - time;

    var size = output.length();

    logger.fine("Finished compilation in %d ms (size: %d)\n".formatted(time, size));
  }

  // FIXME: remove the duplication
  public void compileShared(File input, File output) throws IOException, InterruptedException {
    logger.fine("Compiling input: " + input + ", output: " + output);

    var builder = new CCCompilationBuilder(input, output).flags(COMPILER_FLAGS).flag("-shared");
    var time = System.currentTimeMillis();
    builder.compile();
    time = System.currentTimeMillis() - time;

    var size = output.length();

    logger.fine("Finished compilation in %d ms (size: %d)\n".formatted(time, size));
  }
}
