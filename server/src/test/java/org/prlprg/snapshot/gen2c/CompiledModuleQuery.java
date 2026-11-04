package org.prlprg.snapshot.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.*;
import java.nio.charset.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;
import org.prlprg.examples.Example;
import org.prlprg.gen2c.CUnit;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.util.cc.CCompilationException;

public interface CompiledModuleQuery extends Query<CompiledModule> {
  RuntimeVariant runtime();

  /// Whether the generated C code is optimized
  boolean isOptimized();

  /// Optimize the generated C code
  CompiledModuleQuery optimized();

  /// Produces a module whose code may be structurally different but has the same eval and
  /// interpret behavior.
  ///
  /// This isn't the oracle of the query itself, since the snapshot's structure matters.
  CompiledModuleQuery evalOracle();

  /// The query whose compiled module [EvalQuery] runs for this one: by default this one.
  default CompiledModuleQuery forEval() {
    return this;
  }

  /// Whether the compiled module is loaded on its own, with its runtime compiled in, as opposed to
  /// into an R that has the `rsh` package (which provides the runtime, and the connection to the
  /// compile server).
  default boolean isStandalone() {
    return true;
  }

  /// Whether the module is compiled with `-DFIR_STATS`, the runtime build that counts copies and
  /// promises (see `Fir_stats_get` in `client/rsh/src/fir2c/runtime.h`). It is slower, so a timed
  /// benchmark mustn't run it. A module that isn't [standalone][#isStandalone()] is compiled with
  /// `-DFIR_VERSION_STATS` instead, which only counts calls of each version.
  default boolean isStats() {
    return false;
  }

  /// What the compile server knows `compiled`'s module as (see
  /// [org.prlprg.fir2c.Fir2CSession#id()]), or empty if it doesn't know it (it isn't connected).
  default String moduleId(CompiledModule compiled) {
    return "";
  }

  @Override
  default void verifyEqual(
      CompiledModule expected, CompiledModule actual, Example example, SnapshotStore store) {
    assertEquals(expected.code().toString(), actual.code().toString(), "code not equal");
    assertEquals(expected.constantPool(), actual.constantPool(), "constant pool not equal");
  }

  @Override
  default boolean isComplete(Path path) {
    return Files.exists(path.resolve("code.so"));
  }

  @Override
  default CompiledModule deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();

    var cPath = path.resolve("code.c");
    var bindingsPath = path.resolve("bindings.rds");

    // `CUnit` prints a newline after its extra code, which `serialize` already printed.
    var text = Files.readString(cPath, StandardCharsets.UTF_8);
    var code = new CUnit();
    code.addExtra(text.endsWith("\n") ? text.substring(0, text.length() - 1) : text);
    var constantPool = (VecSXP) RDSReader.readFile(R.getSession(), bindingsPath.toFile());

    return new CompiledModule(code, constantPool);
  }

  @Override
  default void serialize(CompiledModule data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var cPath = path.resolve("code.c");
    var bindingsPath = path.resolve("bindings.rds");

    if (!Files.exists(path)) {
      Files.createDirectory(path);
    }

    data.code().writeTo(cPath);
    RDSWriter.writeFile(bindingsPath.toFile(), data.constantPool());
    // So whoever runs the module can find what the server has of it.
    Files.writeString(path.resolve("id.txt"), moduleId(data));

    // Compile for both `EvalQuery` and easier debugging outside of tests. Without debug info,
    // because nothing here reads it, and on macOS it costs a `dsymutil` run per module.
    try {
      var compiler = RshCompiler.getInstance(isOptimized() ? 3 : 0, runtime(), false);
      var defines =
          isStats()
              ? List.of(
                  "-DRSH_TESTS", "-DRSH_PC", isStandalone() ? "-DFIR_STATS" : "-DFIR_VERSION_STATS")
              : List.of("-DRSH_TESTS", "-DRSH_PC");
      var runtimeObjects = new ArrayList<Path>();
      if (isStandalone()) {
        for (var source : RshCompiler.standaloneRuntimeSources(runtime())) {
          runtimeObjects.add(
              CompileCache.compile(
                  compiler,
                  source,
                  List.of(),
                  Stream.concat(defines.stream(), Stream.of("-c")).toList()));
        }
      }
      var module =
          CompileCache.compile(
              compiler,
              cPath,
              runtimeObjects,
              Stream.concat(defines.stream(), Stream.of("-shared", "-Wl,-undefined,dynamic_lookup"))
                  .toList());
      Files.copy(module, path.resolve("code.so"), StandardCopyOption.REPLACE_EXISTING);
    } catch (CCompilationException e) {
      throw new AssertionError("Failed to compile", e);
    } catch (InterruptedException e) {
      throw new RuntimeException("Compilation interrupted", e);
    }
  }
}
