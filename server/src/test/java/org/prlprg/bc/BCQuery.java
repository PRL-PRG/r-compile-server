package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc.BCCompiler.DEFAULT_OPTIMIZATION_LEVEL;

import java.io.IOException;
import java.lang.reflect.Method;
import java.nio.file.Path;
import javax.annotation.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.examples.ExampleOption;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.session.snapshot.RDSSnapshotExtension;
import org.prlprg.sexp.*;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Files;
import org.prlprg.util.ThrowingSupplier;

public class BCQuery implements Query<SEXP> {
  public static BCQuery INSTANCE = new BCQuery();

  private BCQuery() {

  }

  @Override
  public SEXP compute(Example example, SnapshotStore store) {
    return genCompute(example, store, (R, temp, optimizationLevel) -> {
      var fun = (CloSXP) R.eval("eval(parse('" + temp + "'))");
      var compiler = new BCCompiler(fun, R.getSession());
      compiler.setOptimizationLevel(optimizationLevel);
      return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
    });
  }

  @Override
  public SEXP oracle(Example example, SnapshotStore store) {
    return genCompute(example, store, (R, temp, optimizationLevel) -> {
      var value =
          R.eval(
              "compiler::cmpfun(eval(parse('"
                  + temp
                  + "')), options = list(optimize = "
                  + optimizationLevel
                  + "))");
      if (!(value instanceof CloSXP closure)) {
        throw new IllegalArgumentException("Expected a closure, got: " + value);
      }
      return closure.body();
    });
  }

  private SEXP genCompute(Example example, SnapshotStore store, ComputeImpl impl) {
    var optimizationLevel = example.options(name()).get("optimizationLevel", ExampleOption::expectOneScalarIntegerArgument, DEFAULT_OPTIMIZATION_LEVEL);
    var temp = Files.writeString(example.text());
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      return impl.run(R, temp, optimizationLevel);
    } finally {
      Files.delete(temp);
    }
  }

  @FunctionalInterface
  private interface ComputeImpl {
    SEXP run(GNUR R, Path temp, int optimizationLevel) throws Exception;
  }


  @Override
  public SEXP deserialize(Path path, Example example, SnapshotStore store) throws IOException {
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      return RDSReader.readFile(R.getSession(), path.toFile());
    }
  }

  @Override
  public void serialize(SEXP body, Path path, Example example, SnapshotStore store) throws IOException {
    RDSWriter.writeFile(path.toFile(), body);
  }
}
