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
          "-Wno-comment",
          "-pedantic",
          "-O3",
          // FIXME: the debugging should be parameterize
          "-ggdb",
          "-g3");

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

  public CCCompilationBuilder createBuilder(File input, File output) {
    return new CCCompilationBuilder(input, output).flags(COMPILER_FLAGS);
  }
}
