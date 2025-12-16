package org.prlprg.snapshots;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.nio.file.Path;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Set;
import javax.annotation.Nullable;
import org.opentest4j.TestAbortedException;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.Strings;

/// Stores and manages snapshots for every [Example]/[Query] combination, in memory and on disk.
public class SnapshotStore {
  private final HashMap<Query<?>, HashMap<Example, Object>> queries = new HashMap<>();

  public SnapshotStore() {}

  /// Compute and check `query`.
  ///
  /// `query` itself is always computed, but its dependencies are cached.
  ///
  /// `query` is then checked by:
  /// - Asserting equality against [Query#oracle(Example, SnapshotStore)] (unless overridden,
  ///   this compares against itself i.e. tests non-determinism).
  /// - [Query#verifyExtra(Example, SnapshotStore)].
  /// - If there's a snapshot from a previous run,
  ///   [Query#verifyNoRegression(Object, Object, Example, SnapshotStore)].
  ///
  /// Finally, `query` is saved to disk, *only unless*:
  /// - `example` has the option `dontSaveSnapshots`
  /// - OR [Query#verifyNoRegression(Object, Object, Example, SnapshotStore)] fails, and
  ///   [TestConfig#ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS] is unset.
  /// If other checks (e.g. [Query#verifyExtra(Example, SnapshotStore)]) fail, they are reported
  /// (this call raises an exception) but the snapshot is still saved for debugging.
  public <T> void verify(Example example, Query<T> query) {
    var actual = query.compute(example, this);
    verify(example, query, actual);
  }

  /// Runs every check in [Query#verify(Object, Example, SnapshotStore)] on `actual`.
  ///
  /// Effectively [Query#verify(Object, Example, SnapshotStore)], but uses `actual` in place of
  /// computing `query`, and never saves to disk.
  public <T> void verify(Example example, Query<T> query, T actual) {
    verify(example, query, actual, null);
  }

  /// Same as [#verify(Example, Query, Object)] but provides `context` in the error message.
  public <T> void verify(Example example, Query<T> query, T actual, @Nullable String context) {
    query.verifyExtra(actual, example, this);
    var expected = query(example, query);
    assertEquals(
        expected,
        actual,
        "Verification failed for " + query.name() + (context != null ? ", " + context : ""));
  }

  /// Same as [#verify(Example, Query, Object)] but aborts the test instead of failing.
  ///
  /// For when verification is expected to fail in some cases, and in those cases the rest of
  /// the enclosing test is expected to not necessarily work either (abort != fail).
  public <T> void assumeVerify(Example example, Query<T> query, T actual) {
    try {
      verify(example, query, actual);
    } catch (AssertionError e) {
      throw new TestAbortedException("Verification failed for " + query.name(), e);
    }
  }

  /// Load the already-existing snapshot of `query` for `example`.
  ///
  /// If there is no snapshot on disk, [#verify(Example, Query)] must have been called at some
  /// point before in the run. If there's no snapshot, this won't compute, it will raise
  /// [MissingSnapshotException].
  public <T> T query(Example example, Query<T> query) {
    return query(example, query, new LinkedHashSet<>());
  }

  /// Return the path of the already-existing snapshot of `query` for `example`.
  ///
  /// Throws [TestAbortedException] if the example doesn't have a snapshot. Otherwise, like
  /// [#query(Example, Query)], throws [MissingSnapshotException] if no snapshot exists.
  ///
  /// @throws TestAbortedException if no snapshot exists
  public <T> Path queryPath(Example example, Query<T> query) {
    if (example.hasOption("", "dontSaveSnapshots")) {
      throw new TestAbortedException("Example has no snapshot");
    }
    var path = snapshotPath(example, query);
    if (!Files.exists(path)) {
      throw new MissingSnapshotException(query.name());
    }
    return path;
  }

  /// [#query(Example, Query)]'s implementation, which uses `pending` to track cycles.
  private <T> T query(Example example, Query<T> query, Set<Query<?>> pending) {
    // Check and report cycles
    if (!pending.add(query)) {
      throw new DependencyCycleException(pending, query);
    }

    try {
      // Try to load cached in-memory, else load cached from disk, else compute
      var queryStore = queries.computeIfAbsent(query, _ -> new HashMap<>());
      var queryData =
          queryStore.computeIfAbsent(
              example,
              _ -> {
                var path = snapshotPath(example, query);

                // Try to load snapshot
                if (!TestConfig.OVERRIDE_SNAPSHOTS
                    && Files.exists(path)
                    && !(Files.isDirectory(path) && Files.list(path).findAny().isPresent())) {
                  try {
                    return query.deserialize(path, example, this);
                  } catch (Exception e) {
                    throw new RuntimeException(
                        "Failed to load " + query.name() + " snapshot for " + path, e);
                  }
                }

                // Can't use snapshot, instead compute
                T next;
                try {
                  next = query.oracle(example, this);
                  query.verifyExtra(next, example, this);
                } catch (Throwable e) {
                  throw new TestAbortedException("Failed prerequisite: " + query.name(), e);
                }

                // Save snapshot
                if (!example.hasOption("", "dontSaveSnapshots")) {
                  Files.createDirectories(path.getParent());
                  if (!Files.exists(path.resolveSibling(".gitkeep"))) {
                    Files.writeString(path.resolveSibling(".gitkeep"), "");
                  }

                  try {
                    query.serialize(next, path, example, this);
                  } catch (Exception e) {
                    throw new RuntimeException(
                        "Failed to save " + query.name() + " snapshot for " + path, e);
                  }
                }

                return next;
              });
      return query.dataClass().cast(queryData);
    } finally {
      pending.remove(query);
    }
  }

  /// Returns the path where `query`'s data is cached on-disk.
  private Path snapshotPath(Example example, Query<?> query) {
    var path =
        Path.of(
            "src",
            "test",
            "snapshots",
            getClass().getPackageName().replace('.', '/'),
            example.type(),
            query.name().replace('.', '/'));
    path = path.resolve(Paths.removingExtension(example.rpath()));
    if (!query.snapshotExtension().isEmpty()) {
      path = Paths.addingExtension(path, query.snapshotExtension());
    }
    return path;
  }

  private static class DependencyCycleException extends RuntimeException {
    public DependencyCycleException(Set<Query<?>> pending, Query<?> next) {
      super(
          "Dependency cycle: "
              + Strings.join(" -> ", Query::name, pending)
              + " --> "
              + next.name());
    }
  }
}
