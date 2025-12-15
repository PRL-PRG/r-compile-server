package org.prlprg.gen2c;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.cc.CCompilationException;

public interface CompiledModuleQuery extends Query<CompiledModule> {
  RuntimeVariant runtime();

  @Override
  default Class<CompiledModule> dataClass() {
    return CompiledModule.class;
  }

  @Override
  default CompiledModule deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = store.query(example, GNURQuery.INSTANCE);

    var cPath = path.resolve("code.c");
    var entryPath = path.resolve("entrypoint.txt");
    var rdsPath = path.resolve("constants.RDS");

    var code = Files.readString(cPath);
    var entryFunName = Files.readString(entryPath).trim();
    var constantPool = (VecSXP) RDSReader.readFile(R.getSession(), rdsPath.toFile());

    return new CompiledModule(code, entryFunName, constantPool);
  }

  @Override
  default void serialize(CompiledModule data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var cPath = path.resolve("code.c");
    var entryPath = path.resolve("entrypoint.txt");
    var rdsPath = path.resolve("constants.RDS");

    if (!Files.exists(path)) {
      Files.createDirectory(path);
    }

    Files.writeString(cPath, data.cCode());
    Files.writeString(entryPath, data.entryFunName());
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
