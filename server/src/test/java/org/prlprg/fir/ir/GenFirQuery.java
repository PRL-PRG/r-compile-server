package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.check.Checker.checkAll;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;

public interface GenFirQuery extends Query<Module> {
  @Override
  default Class<Module> dataClass() {
    return Module.class;
  }

  @Override
  default void verifyExtra(Module data, Example example, SnapshotStore store) {
    // TODO: Handle and explicitly look for expected errors
    assertTrue(checkAll(data), "Verification failed with unexpected errors");
  }

  @Override
  default String snapshotExtension() {
    return "fir";
  }

  @Override
  default Module deserialize(Path path, Example example, SnapshotStore store) throws IOException {
    return Parser.fromFile(path.toFile(), Module.class);
  }

  @Override
  default void serialize(Module data, Path path, Example example, SnapshotStore store)
      throws IOException {
    new Printer(path.toFile()).print(data);
  }
}
