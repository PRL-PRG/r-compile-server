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

/// Lazy static store of [Example] snapshot data.
public class SnapshotStore {
  private final HashMap<Query<?>, HashMap<Example, Object>> queries = new HashMap<>();

  public SnapshotStore() {}

  /// Compute `query` (using cached dependencies but not itself), then check against the stored
  /// computation which is cached across dependencies and
  /// [Query#oracle(Example, SnapshotStore)] instead of [Query#compute(Example, SnapshotStore)]
  /// (they may be different, if not it checks determinism).
  public <T> void verify(Example example, Query<T> query) {
    var actual = query.compute(example, this);
    verify(example, query, actual);
  }

  /// Check `actual` against the stored computation for `query`.
  public <T> void verify(Example example, Query<T> query, T actual) {
    verify(example, query, actual, null);
  }

  public <T> void verify(Example example, Query<T> query, T actual, @Nullable String context) {
    query.verifyExtra(actual, example, this);
    var expected = query(example, query);
    assertEquals(
        expected,
        actual,
        "Verification failed for " + query.name() + (context != null ? ", " + context : ""));
  }

  /// Abort if [#verify(Example, Query, Object)] would fail
  public <T> void assumeVerify(Example example, Query<T> query, T actual) {
    try {
      verify(example, query, actual);
    } catch (AssertionError e) {
      throw new TestAbortedException("Verification failed for " + query.name(), e);
    }
  }

  /// Load or compute the result of `query` for `example`.
  ///
  /// This only computes if not saved in-memory or in a prior run, and uses
  /// [Query#oracle(Example, SnapshotStore)].
  public <T> T query(Example example, Query<T> query) {
    return query(example, query, new LinkedHashSet<>());
  }

  /// Compute and save a snapshot for `query` if it doesn't exist, then return its *path*.
  ///
  /// @throws TestAbortedException if no snapshot exists
  public <T> Path queryPath(Example example, Query<T> query) {
    query(example, query);
    var path = cachePath(example, query);
    if (!Files.exists(path)) {
      throw new TestAbortedException("No snapshot for " + query.name());
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
                var path = cachePath(example, query);

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
  private Path cachePath(Example example, Query<?> query) {
    var path =
        Paths.getResourceSource(getClass(), example.type())
            .resolve(query.name())
            .resolve(Paths.removingExtension(example.rpath()));
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
