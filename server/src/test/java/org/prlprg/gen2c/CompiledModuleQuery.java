package org.prlprg.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.*;
import java.nio.charset.*;
import java.nio.file.Files;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.variable.*;
import org.prlprg.fir2c.*;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.cc.CCompilationException;

public interface CompiledModuleQuery extends Query<CompiledModule> {
  RuntimeVariant runtime();

  boolean isOptimized();

  CompiledModuleQuery optimized();

  /// Produces a module whose code may be structurally different but has the same eval and
  /// interpret behavior.
  ///
  /// This isn't the oracle of the query itself, since the snapshot's structure matters.
  CompiledModuleQuery evalOracle();

  @Override
  default void verifyEqual(
      CompiledModule expected, CompiledModule actual, Example example, SnapshotStore store) {
    assertEquals(expected.code().toString(), actual.code().toString(), "code not equal");
    assertEquals(expected.constantPool(), actual.constantPool(), "constant pool not equal");
  }

  @Override
  default CompiledModule deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();

    var cPath = path.resolve("code.c");
    var bindingsPath = path.resolve("bindings.rds");

    var code = new CUnit();
    code.addExtra(Files.readString(cPath, StandardCharsets.UTF_8));
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

    // Compile for both `EvalQuery` and easier debugging outside of tests.
    var soPath = path.resolve("code.so");
    try {
      RshCompiler.getInstance(isOptimized() ? 3 : 0, runtime())
          .createBuilder(cPath, soPath)
          .flag("-shared")
          .flag("-Wl,-undefined,dynamic_lookup")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .compile();
    } catch (CCompilationException e) {
      throw new AssertionError("Failed to compile", e);
    } catch (InterruptedException e) {
      throw new RuntimeException("Compilation interrupted", e);
    }
  }
}
