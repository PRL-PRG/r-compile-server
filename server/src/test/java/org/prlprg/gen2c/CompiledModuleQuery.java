package org.prlprg.gen2c;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.prlprg.bc2c.DirectCompiledModule;
import org.prlprg.examples.Example;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.cc.CCompilationException;

public interface CompiledModuleQuery extends Query<DirectCompiledModule> {
  RuntimeVariant runtime();

  @Override
  default DirectCompiledModule deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();

    var cPath = path.resolve("code.c");
    var rPath = path.resolve("bindings.R");
    var rdsPath = path.resolve("constants.RDS");

    var code = Files.readString(cPath);
    var rCode = Files.readString(rPath).trim();
    var constantPool = (VecSXP) RDSReader.readFile(R.getSession(), rdsPath.toFile());

    return new DirectCompiledModule(code, rCode, constantPool);
  }

  @Override
  default void serialize(DirectCompiledModule data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var cPath = path.resolve("code.c");
    var rPath = path.resolve("bindings.R");
    var rdsPath = path.resolve("constants.RDS");

    if (!Files.exists(path)) {
      Files.createDirectory(path);
    }

    Files.writeString(cPath, data.cCode());
    Files.writeString(rPath, data.rCode());
    RDSWriter.writeFile(rdsPath.toFile(), data.constantPool());

    // Compile for both `EvalQuery` and easier debugging outside of tests.
    var soPath = path.resolve("code.so");
    try {
      RshCompiler.getInstance(0, runtime())
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
