package org.prlprg.snapshots;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.nio.file.Path;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.logging.Logger;
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
    var expected = query(example, query);
    assertEquals(expected, actual);
    query.verifyExtra(actual, example, this);
  }

  /// Load or compute the result of `query` for `example`.
  ///
  /// This only computes if not saved in-memory or in a prior run, and uses
  /// [Query#oracle(Example, SnapshotStore)].
  public <T> T query(Example example, Query<T> query) {
    return query(example, query, new LinkedHashSet<>());
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
                if (!TestConfig.OVERRIDE_SNAPSHOTS && Files.exists(path)) {
                  try {
                    return query.deserialize(path, example, this);
                  } catch (Exception e) {
                    throw new RuntimeException("Failed to load snapshot for " + path, e);
                  }
                }

                // Can't use snapshot, instead compute
                var next = query.oracle(example, this);

                // Run extra checks on oracle, only to avoid saving if it fails.
                // We actually report extra check failures in `verify`.
                var snapshotPassedExtraChecks = true;
                try {
                  query.verifyExtra(next, example, this);
                } catch (AssertionError e) {
                  snapshotPassedExtraChecks = false;

                  var logger = Logger.getLogger("org.prlprg." + query.name());
                  logger.warning("Oracle's data failed extra check: " + e.getMessage());
                }

                // Save snapshot
                if (snapshotPassedExtraChecks && !example.hasOption("", "dontSaveSnapshots")) {
                  Files.createDirectories(path.getParent());
                  try {
                    query.serialize(next, path, example, this);
                  } catch (Exception e) {
                    throw new RuntimeException("Failed to save snapshot for " + path, e);
                  }
                }

                return next;
              });
      return query.dataClass().cast(queryData);
    } catch (DependencyCycleException | TestAbortedException e) {
      throw e;
    } catch (Exception e) {
      throw new TestAbortedException(
          "Failed to load snapshot or compute dependency of " + query.name(), e);
    } finally {
      pending.remove(query);
    }
  }

  /// Returns the path where `query`'s data is cached on-disk.
  private Path cachePath(Example example, Query<?> query) {
    return Paths.getResource(getClass(), example.type())
        .resolve(query.name())
        .resolve(example.rpath());
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
