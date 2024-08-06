package org.prlprg.service;

import java.io.File;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Logger;
import org.prlprg.util.cc.CCCompilationBuilder;

public class RshCompiler {
  private static final Logger logger = Logger.getLogger(RshCompiler.class.getName());

  // TODO: make it configurable
  private static final String INCLUDE_PATH = "../client/include";

  // TODO: which ones are needed? Can we bootstrap it from R?
  private static final List<String> COMMON_COMPILER_FLAGS =
      List.of(
          "-I.",
          "-I" + INCLUDE_PATH,
          "-fpic",
          "-fno-plt",
          "-fexceptions",
          "-fstack-clash-protection",
          "-fcf-protection",
          "-flto=auto",
          "-ffat-lto-objects",
          "-pedantic",
          "-Wformat",
          "-Werror=format-security",
          "-Wall",
          "-Wno-unused-but-set-variable",
          "-Wno-comment");

  private static RshCompiler instance;

  private final List<String> compilerFlags;

  public RshCompiler(List<String> compilerFlags) {
    this.compilerFlags = compilerFlags;
  }

  public static RshCompiler getInstance(int optimizationLevel) {
    var flags = new ArrayList<>(COMMON_COMPILER_FLAGS);

    if (optimizationLevel == 0) {
      flags.add("-g3");
      flags.add("-ggdb");
      flags.add("-DDEBUG");
    } else {
      flags.add("-DNDEBUG");
      flags.add("-g");
    }
    flags.add("-O" + optimizationLevel);

    if (instance == null) {
      try {
        instance = new RshCompiler(flags);
        instance.initialize();
      } catch (Exception e) {
        throw new RuntimeException(e);
      }
    }

    return instance;
  }

  private void initialize() throws Exception {
    // TODO: make it constants
    var input = "Rsh.h";
    var output = "Rsh.h.gch";
    new CCCompilationBuilder(input, output)
        .workingDirectory(new File(INCLUDE_PATH))
        .flags(compilerFlags)
        .compile();
  }

  public CCCompilationBuilder createBuilder(String input, String output) {
    return new CCCompilationBuilder(input, output).flags(compilerFlags);
  }
}
