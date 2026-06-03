package org.prlprg.service;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.util.cc.CCCompilationBuilder;

public class RshCompiler {
  // Make it work whether we run it  from the server directory or from the root of the project
  private static final Path BASE_DIRECTORY =
      Paths.get("").toAbsolutePath().endsWith("server")
          ? Paths.get("").toAbsolutePath().getParent()
          : Paths.get("").toAbsolutePath();
  public static final Path RSH_DIRECTORY = BASE_DIRECTORY.resolve("client/rsh");
  public static final Path R_DIRECTORY =
      BASE_DIRECTORY.resolve(AppConfig.DEBUG ? "external/R-debug" : "external/R");

  // TODO: this is just temporary
  //  what we need is to keep this in the resources, versioned by R version
  //  and upon server instantiation, copy it to some temp directory
  //  and precompile the header file (if needed)
  private static final Path BC2C_RSH_INCLUDE_PATH =
      RSH_DIRECTORY.resolve("src/bc2c").normalize().toAbsolutePath();
  private static final Path FIR2C_RSH_INCLUDE_PATH =
      RSH_DIRECTORY.resolve("src/fir2c").normalize().toAbsolutePath();
  private static final Path R_INCLUDE_PATH =
      R_DIRECTORY.resolve("include").normalize().toAbsolutePath();

  // TODO: which ones are needed?
  private static final List<String> COMMON_COMPILER_FLAGS =
      List.of(
          "-I" + R_INCLUDE_PATH,
          "-fPIC",
          "-fno-plt",
          "-fexceptions",
          "-fstack-clash-protection",
          //          "-fcf-protection",
          "-pedantic",
          "-Wformat",
          "-Werror=format-security",
          "-Wall",
          "-Wno-unused-but-set-variable",
          "-Wno-comment",
          "-Wno-unused-function" // , // (or INLINE)
          // "-DRSH_INLINE"
          );

  private final List<String> compilerFlags;

  public enum RuntimeVariant {
    DIRECT_BC2C,
    FIR2C
  }

  public RshCompiler(List<String> compilerFlags) {
    this.compilerFlags = compilerFlags;
  }

  public static RshCompiler getInstance(int optimizationLevel, RuntimeVariant variant) {
    var flags = new ArrayList<>(COMMON_COMPILER_FLAGS);

    var rshInclude =
        switch (variant) {
          case DIRECT_BC2C -> BC2C_RSH_INCLUDE_PATH;
          case FIR2C -> FIR2C_RSH_INCLUDE_PATH;
        };
    flags.add("-I" + rshInclude);

    if (optimizationLevel == 0) {
      flags.add("-g3");
      flags.add("-ggdb");
      flags.add("-Wno-unused-function");
    } else {
      flags.add("-DNDEBUG");
      flags.add("-g");
    }
    flags.add("-O" + optimizationLevel);

    return new RshCompiler(flags);
  }

  public CCCompilationBuilder createBuilder(Path input, Path output) {
    return new CCCompilationBuilder(input, output).flags(compilerFlags);
  }
}
