package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.util.cc.CCompilerUtils.eval;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.List;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc.BCQuery;
import org.prlprg.bc.Bc;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.gen2c.CUnit;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.parseprint.Parser;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.VecSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Pair;
import org.prlprg.util.Paths;
import org.prlprg.util.cc.EvalOutput;

public class BC2CDirectCompilerTest {
  @RExampleTest
  void test(Example example, SnapshotStore store) {
    store.verify(example, QUERY);
  }

  private static Query<Artifact> QUERY = new Query<>() {
    @Override
    public Artifact compute(Example example, SnapshotStore store) {
      var R = store.query(example, GNURQuery.INSTANCE);

      var compilePromises = example.hasOption(name(), "compilePromises");
      var bc = store.query(example, BCQuery.INSTANCE);

      var module = compile(bc, compilePromises);
      var output = eval(module, RuntimeVariant.DIRECT_BC2C, R);
      return new Artifact(module.cUnit().toString(), module.constantPool(), output);
    }

    private static CompiledModule compile(Bc bc, boolean compilePromises) {
      var name = "f_" + (bc.hashCode() < 0 ? "n" + -bc.hashCode() : bc.hashCode());
      return new BC2CCompiler(bc, name, compilePromises).finish();
    }

    @Override
    public Artifact deserialize(Path path, Example example,
        SnapshotStore store) throws IOException {
      try (var R = store.query(example, GNURQuery.INSTANCE)) {
        var cPath = path.resolve("code.c");
        var rdsPath = path.resolve("constants.RDS");
        var returnValuePath = path.resolve("return.RDS");
        var outputLogPath = path.resolve("output.log");

        var code = Files.readString(cPath);
        var constantPool = (VecSXP) RDSReader.readFile(R.getSession(), rdsPath.toFile());
        var returnValue = RDSReader.readFile(R.getSession(), returnValuePath.toFile());
        var outputLog = Files.readString(outputLogPath);

        return new Artifact(code, constantPool, new EvalOutput(returnValue, outputLog, PerformanceCounters.EMPTY));
      }
    }

    @Override
    public void serialize(Artifact data, Path path, Example example,
        SnapshotStore store) throws IOException {
      var cPath = path.resolve("code.c");
      var rdsPath = path.resolve("constants.RDS");
      var returnValuePath = path.resolve("return.RDS");
      var outputLogPath = path.resolve("output.log");

      Files.createDirectory(path);

      Files.writeString(cPath, data.cCode);
      RDSWriter.writeFile(rdsPath.toFile(), data.constantPool);
      RDSWriter.writeFile(returnValuePath.toFile(), data.output.returnValue());
      Files.writeString(outputLogPath, data.output.output());
    }
  };

  private record Artifact(String cCode, VecSXP constantPool, EvalOutput output) {}
}

