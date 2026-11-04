package org.prlprg.snapshot.bench;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.util.Files;

/// A query whose snapshot is a benchmark's CSV table.
interface BenchmarkOutputQuery extends Query<BenchmarkOutput> {
  @Override
  default void verifyEqual(
      BenchmarkOutput expected, BenchmarkOutput actual, Example example, SnapshotStore store) {
    // Benchmarks don't have to be equal, so do nothing
  }

  @Override
  default String snapshotExtension() {
    return "csv";
  }

  @Override
  default BenchmarkOutput deserialize(Path path, Example example, SnapshotStore store) {
    return new BenchmarkOutput(Files.readString(path), null);
  }

  @Override
  default void serialize(BenchmarkOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    data.writeCsv(path.toFile());
  }
}
