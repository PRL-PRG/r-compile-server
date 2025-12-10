package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.fail;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Either;
import org.prlprg.util.Files;

public record InterpretQuery(@Override String name, String functionName, SEXP... arguments)
    implements Query<InterpretOutput> {
  public static final InterpretQuery MAIN = new InterpretQuery("interpret", "main");

  public static final InterpretQuery DEOPT_INT =
      new InterpretQuery("interpret.deopt.integer", "f", SEXPs.integer(1));
  public static final InterpretQuery DEOPT_REAL =
      new InterpretQuery("interpret.deopt.real", "f", SEXPs.real(1));
  public static final InterpretQuery DEOPT_LGL =
      new InterpretQuery("interpret.deopt.logical", "f", SEXPs.TRUE);

  @Override
  public InterpretOutput compute(Example example, SnapshotStore store) {
    var module = store.query(example, FirQuery.INSTANCE);

    return new TestInterpreter(module).call(functionName, arguments);
  }

  @Override
  public InterpretOutput deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = store.query(example, GNURQuery.INSTANCE);

    var returnValuePath = path.resolve("returnValue.RDS");
    var crashPath = path.resolve("crash.txt");
    var checkpointTracePath = path.resolve("trace.log");

    if (Files.exists(returnValuePath) && Files.exists(crashPath)) {
      fail("Snapshot has both return value and crash");
    }
    Either<SEXP, String> returnValue =
        Files.exists(returnValuePath)
            ? Either.left(RDSReader.readFile(R.getSession(), returnValuePath.toFile()))
            : Either.right(Files.readString(crashPath).trim());
    var checkpointTrace = Files.readString(checkpointTracePath);

    return new InterpretOutput(returnValue, checkpointTrace);
  }

  @Override
  public void serialize(InterpretOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var returnValuePath = path.resolve("returnValue.RDS");
    var crashPath = path.resolve("crash.txt");
    var checkpointTracePath = path.resolve("trace.log");

    Files.createDirectories(path);
    if (data.returnValue().isLeft()) {
      Files.deleteIfExists(crashPath);
      RDSWriter.writeFile(returnValuePath.toFile(), data.returnValue().getLeft());
    } else {
      Files.deleteIfExists(returnValuePath);
      Files.writeString(crashPath, data.returnValue().getRight());
    }
    Files.writeString(checkpointTracePath, data.checkpointTrace());
  }
}
