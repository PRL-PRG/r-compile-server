package org.prlprg.snapshot.gen2c;

import com.google.common.hash.Hasher;
import com.google.common.hash.Hashing;
import com.google.common.io.MoreFiles;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.nio.file.attribute.FileTime;
import java.time.Duration;
import java.time.Instant;
import java.util.Arrays;
import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.service.RshCompiler;
import org.prlprg.util.Files;
import org.prlprg.util.cc.CCompilationException;

/// Compiles C for the tests, reusing the output of an earlier compilation of the same source with
/// the same text, flags, other inputs, and headers.
///
/// An entry is keyed by a hash of the compiler, the source's path and text, the flags, and the
/// other inputs' contents. It also records a hash of the headers the source included (which the
/// compiler lists, with `-MMD`; system headers aren't), and is only reused if that still matches.
///
/// Entries that weren't used for [#MAX_AGE] are deleted the first time this is used in a JVM.
final class CompileCache {
  private static final Path DIRECTORY = Path.of("target", "cc-cache");
  private static final Duration MAX_AGE = Duration.ofDays(7);
  private static boolean isPruned = false;

  /// Compile `source` and `otherInputs` (e.g. objects) with `compiler` and `flags`, or reuse an
  /// earlier compilation, and return the output's path in the cache (which mustn't be modified).
  static synchronized Path compile(
      RshCompiler compiler, Path source, List<Path> otherInputs, List<String> flags)
      throws IOException, InterruptedException, CCompilationException {
    prune();

    var key = Hashing.sha256().newHasher();
    putString(key, AppConfig.CC);
    putString(key, source.toAbsolutePath().toString());
    putString(key, Files.readString(source));
    compiler.flags().forEach(flag -> putString(key, flag));
    flags.forEach(flag -> putString(key, flag));
    for (var input : otherInputs) {
      key.putBytes(MoreFiles.asByteSource(input).hash(Hashing.sha256()).asBytes());
    }
    var entry = DIRECTORY.resolve(key.hash().toString());
    var output = entry.resolve("output");
    var depFile = entry.resolve("deps.d");
    var headersHashFile = entry.resolve("headers.sha256");

    if (Files.exists(output)
        && Files.exists(headersHashFile)
        && Files.readString(headersHashFile).equals(headersHash(depFile))) {
      java.nio.file.Files.setLastModifiedTime(entry, FileTime.from(Instant.now()));
      return output;
    }

    Files.createDirectories(entry);
    var building = entry.resolve("output.tmp");
    compiler
        .createBuilder(source, building)
        .inputs(otherInputs)
        .flags(flags)
        .flag("-MMD")
        .flag("-MF")
        .flag(depFile.toString())
        .compile();
    Files.writeString(headersHashFile, headersHash(depFile));
    java.nio.file.Files.move(building, output, StandardCopyOption.REPLACE_EXISTING);
    return output;
  }

  /// A hash of the paths and contents of the headers in `depFile`.
  private static String headersHash(Path depFile) {
    if (!Files.exists(depFile)) {
      return "";
    }
    // `<output>: <source> <header> ...`, with lines continued by `\` and spaces escaped by `\`.
    var rule = Files.readString(depFile).replace("\\\n", " ");
    var hasher = Hashing.sha256().newHasher();
    Arrays.stream(rule.substring(rule.indexOf(": ") + 2).strip().split("(?<!\\\\)\\s+"))
        .skip(1)
        .map(header -> Path.of(header.replace("\\ ", " ")))
        .forEach(
            header -> {
              putString(hasher, header.toString());
              putString(hasher, Files.exists(header) ? Files.readString(header) : "");
            });
    return hasher.hash().toString();
  }

  private static void putString(Hasher hasher, String string) {
    hasher.putInt(string.length()).putString(string, StandardCharsets.UTF_8);
  }

  private static void prune() {
    if (isPruned) {
      return;
    }
    isPruned = true;
    if (!Files.exists(DIRECTORY)) {
      return;
    }
    var oldest = Instant.now().minus(MAX_AGE);
    try (var entries = Files.list(DIRECTORY)) {
      entries
          .filter(entry -> Files.getLastModifiedTime(entry).toInstant().isBefore(oldest))
          .forEach(Files::deleteRecursively);
    }
  }

  private CompileCache() {}
}
