package org.prlprg.snapshot.bench;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@SuppressWarnings("NewClassNamingConvention")
public class VersionBenchmark {
  /// Count how many versions each function has after the benchmark runs on the lazy module (see
  /// [VersionBenchmarkQuery]).
  @RExampleTest(benchmark = true)
  void benchmarkVersions(Example example, SnapshotStore store) {
    var output = store.verify(example, VersionBenchmarkQuery.INSTANCE);

    System.err.println("Version benchmark:");
    System.err.println(output);
  }
}
