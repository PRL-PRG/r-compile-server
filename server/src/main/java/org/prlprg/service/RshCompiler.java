package org.prlprg.service;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Logger;

import org.prlprg.util.cc.CCCompilationBuilder;

public class RshCompiler {
    private static final Logger logger = Logger.getLogger(RshCompiler.class.getName());

    // TODO: this is just temporary
    //  what we need is to keep this in the resources, versioned by R version
    //  and upon server instantiation, copy it to some temp directory
    //  and precompile the header file (if needed)
    private static final Path RSH_INCLUDE_PATH =
            Paths.get("../client/rsh/src/bc2c").normalize().toAbsolutePath();
    private static final Path R_INCLUDE_PATH =
            Paths.get("../external/R/include").normalize().toAbsolutePath();

    // TODO: which ones are needed?
    private static final List<String> COMMON_COMPILER_FLAGS =
            List.of(
                    "-I" + RSH_INCLUDE_PATH,
                    "-I" + R_INCLUDE_PATH,
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
                    "-Wno-comment",
                    "-DRSH_INLINE");

    private final List<String> compilerFlags;

    public RshCompiler(List<String> compilerFlags) {
        this.compilerFlags = compilerFlags;
    }

    public static RshCompiler getInstance(int optimizationLevel) {
        var flags = new ArrayList<>(COMMON_COMPILER_FLAGS);

        if (optimizationLevel == 0) {
            flags.add("-g3");
            flags.add("-ggdb");
            flags.add("-Wno-unused-function");
        } else {
            flags.add("-DNDEBUG");
            flags.add("-g");
        }
        flags.add("-O" + optimizationLevel);

        // TODO: cache
        return new RshCompiler(flags);
    }

    public CCCompilationBuilder createBuilder(String input, String output) {
        return new CCCompilationBuilder(input, output).flags(compilerFlags);
    }
}
