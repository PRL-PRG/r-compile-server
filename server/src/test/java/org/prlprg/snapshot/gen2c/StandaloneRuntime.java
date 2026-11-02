package org.prlprg.snapshot.gen2c;

import java.io.IOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.util.Files;
import org.prlprg.util.cc.CCompilationException;

/// The [runtime a standalone module is linked with][RshCompiler#standaloneRuntimeSources],
/// compiled into objects once per set of flags instead of into every module.
///
/// An object is rebuilt when it's older than its source or a header the source includes (which
/// the compiler lists, with `-MMD`).
final class StandaloneRuntime {
  private static final Path DIRECTORY = Path.of("target", "standalone-runtime");

  /// `variant`'s runtime objects, compiled by `compiler` with `extraFlags`.
  static synchronized @Unmodifiable List<Path> objects(
      RshCompiler compiler, RuntimeVariant variant, List<String> extraFlags)
      throws IOException, InterruptedException, CCompilationException {
    var flags = Stream.concat(compiler.flags().stream(), extraFlags.stream()).toList();
    var directory = DIRECTORY.resolve(variant + "-" + Integer.toHexString(flags.hashCode()));

    var objects = new ArrayList<Path>();
    for (var source : RshCompiler.standaloneRuntimeSources(variant)) {
      var name = source.getFileName().toString().replaceFirst("\\.c$", "");
      var object = directory.resolve(name + ".o");
      var depFile = directory.resolve(name + ".d");
      if (!isUpToDate(object, depFile)) {
        Files.createDirectories(directory);
        compiler
            .createBuilder(source, object)
            .flags(extraFlags)
            .flag("-c")
            .flag("-MMD")
            .flag("-MF")
            .flag(depFile.toString())
            .compile();
      }
      objects.add(object);
    }
    return List.copyOf(objects);
  }

  private static boolean isUpToDate(Path object, Path depFile) {
    if (!Files.exists(object) || !Files.exists(depFile)) {
      return false;
    }
    // `<object>: <source> <header> ...`, with lines continued by `\` and spaces escaped by `\`.
    var rule = Files.readString(depFile).replace("\\\n", " ");
    var dependencies = rule.substring(rule.indexOf(": ") + 2).strip();
    return Arrays.stream(dependencies.split("(?<!\\\\)\\s+"))
        .map(dependency -> Path.of(dependency.replace("\\ ", " ")))
        .allMatch(dependency -> Files.exists(dependency) && !Files.isOlder(object, dependency));
  }

  private StandaloneRuntime() {}
}
