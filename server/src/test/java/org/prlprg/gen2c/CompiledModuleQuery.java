package org.prlprg.gen2c;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Map.Entry;
import org.prlprg.examples.Example;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Streams;
import org.prlprg.util.cc.CCompilationException;

public interface CompiledModuleQuery extends Query<CompiledModule> {
  RuntimeVariant runtime();

  @Override
  default CompiledModule deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();

    var cPath = path.resolve("code.c");
    var rdsPath = path.resolve("data.rds");

    var code = Files.readString(cPath);
    var data = (VecSXP) RDSReader.readFile(R.getSession(), rdsPath.toFile());
    var constantPool = (VecSXP)data.get(0);
    var bindings = CompiledModule.bindingsFromSexp((EnvSXP)data.get(1));

    return new CompiledModule(code, bindings, constantPool);
  }

  @Override
  default void serialize(CompiledModule data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var cPath = path.resolve("code.c");
    var rdsPath = path.resolve("data.RDS");

    if (!Files.exists(path)) {
      Files.createDirectory(path);
    }

    Files.writeString(cPath, data.cCode());
    RDSWriter.writeFile(rdsPath.toFile(), SEXPs.vec(data.bindingsAsSexp(), data.constantPool()));

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
