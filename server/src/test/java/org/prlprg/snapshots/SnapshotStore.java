package org.prlprg.snapshots;

import java.nio.file.Path;
import java.util.HashMap;
import javax.annotation.Nullable;
import org.opentest4j.TestAbortedException;
import org.prlprg.TestConfig;
import org.prlprg.examples.Example;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Stores and manages snapshots for every [Example]/[Query] combination, in memory and on disk.
public class SnapshotStore {
  private final HashMap<Query<?>, HashMap<Example, SnapshotInMemory<?>>> snapshotsInMemory =
      new HashMap<>();

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

    RegressionStatus[] regresses = {RegressionStatus.UNCHECKED};
    Throwable error = null;
    try {
      verify(example, query, actual, null, regresses);
    } catch (Exception | Error e) {
      error = e;
      throw e;
    } finally {
      if (regresses[0] == RegressionStatus.UNCHECKED) {
        assert error != null
            : "didn't get to set regression status but no prior exception was thrown, how did control-flow divert?";
        try {
          verifyNoRegression(example, query, actual, regresses);
        } catch (Exception | Error e) {
          error.addSuppressed(e);
        }
      }
      assert regresses[0] != RegressionStatus.UNCHECKED
          : "`verifyNoRegression` didn't set regression status";

      var shouldSaveToDisk =
          !example.hasOption("", "dontSaveSnapshots")
              && (regresses[0] == RegressionStatus.NO
                  || TestConfig.ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS);
      if (shouldSaveToDisk) {
        saveToDisk(actual, example, query);
      }
    }
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
    verify(example, query, actual, context, new RegressionStatus[] {RegressionStatus.UNCHECKED});
  }

  private <T> void verify(
      Example example,
      Query<T> query,
      T actual,
      @Nullable String context,
      RegressionStatus[] regresses) {
    try {
      var oracle = loadFromMemory(true, example, query);
      if (oracle == null) {
        oracle = query.oracle(example, this);
        saveToMemory(oracle, true, example, query);
      }
      query.verifyEqual(oracle, actual, example, this);

      query.verifyExtra(actual, example, this);

      verifyNoRegression(example, query, actual, regresses);
    } catch (Exception | Error e) {
      if (context != null) {
        e.addSuppressed(new RuntimeException("Context: " + context));
      }
      throw e;
    }
  }

  private <T> void verifyNoRegression(
      Example example, Query<T> query, T actual, RegressionStatus[] regresses) {
    if (!example.hasOption("", "dontSaveSnapshots")
        && !TestConfig.ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS) {
      T oldFromDisk;
      try {
        oldFromDisk = loadFromDisk(example, query);
      } catch (Exception | Error e) {
        regresses[0] = RegressionStatus.NO;
        throw e;
      }
      if (oldFromDisk != null) {
        try {
          query.verifyNoRegression(oldFromDisk, actual, example, this);
        } catch (Exception | Error e) {
          regresses[0] = RegressionStatus.YES;
          throw e;
        }
      }
    }

    regresses[0] = RegressionStatus.NO;
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

  /// Load the snapshot of `query` for `example`, computing if necessary.
  ///
  /// @throws MissingSnapshotException if no snapshot exists and computation failed
  public <T> T load(Example example, Query<T> query) {
    // Try to load from memory
    var inMemory = loadFromMemory(false, example, query);
    if (inMemory != null) {
      return inMemory;
    }

    // Try to load from disk. If so, save to memory
    var onDisk = loadFromDisk(example, query);
    if (onDisk != null) {
      saveToMemory(onDisk, false, example, query);
      return onDisk;
    }

    // Try to compute. If so, save to disk and memory
    return computeAndSave(example, query);
  }

  /// Return the path of the snapshot of `query` for `example`.
  ///
  /// @throws TestAbortedException if the example doesn't have a snapshot.
  /// @throws MissingSnapshotException if no snapshot exists and computation failed
  public <T> Path loadPath(Example example, Query<T> query) {
    if (example.hasOption("", "dontSaveSnapshots")) {
      throw new TestAbortedException("Example has no snapshot");
    }
    var path = snapshotPath(example, query);
    if (!Files.exists(path)) {
      computeAndSave(example, query);
    }
    return path;
  }

  private <T> T computeAndSave(Example example, Query<T> query) {
    T computed;
    try {
      computed = query.oracle(example, this);
    } catch (Exception | Error e) {
      throw new MissingSnapshotException(query.name(), e);
    }
    saveToMemory(computed, true, example, query);
    if (!example.hasOption("", "dontSaveSnapshots")) {
      saveToDisk(computed, example, query);
    }
    return computed;
  }

  private <T> @Nullable T loadFromMemory(boolean isOracle, Example example, Query<T> query) {
    var querySnapshots = snapshotsInMemory.get(query);
    if (querySnapshots == null) {
      return null;
    }
    var snapshot = querySnapshots.get(example);
    if (snapshot == null) {
      return null;
    }

    if (isOracle && !snapshot.isOracle) {
      // May be old
      return null;
    }

    return query.dataClass().cast(snapshot.snapshot);
  }

  private <T> void saveToMemory(T snapshot, boolean isOracle, Example example, Query<T> query) {
    snapshotsInMemory
        .computeIfAbsent(query, _ -> new HashMap<>())
        .put(example, new SnapshotInMemory<>(snapshot, isOracle));
  }

  private <T> @Nullable T loadFromDisk(Example example, Query<T> query) {
    var path = snapshotPath(example, query);
    if (!Files.exists(path)) {
      return null;
    }

    try {
      return query.deserialize(path, example, this);
    } catch (Exception e) {
      if (TestConfig.ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS) {
        System.err.println(
            "Failed to load "
                + query.name()
                + " snapshot for "
                + path
                + "\nSuppressing because of `ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS`");
        return null;
      } else {
        throw new RuntimeException(
            "Failed to load "
                + query.name()
                + " snapshot for "
                + path
                + "\nYou may need to delete it or run with `ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS`",
            e);
      }
    }
  }

  private <T> void saveToDisk(T snapshot, Example example, Query<T> query) {
    var path = snapshotPath(example, query);
    Files.createDirectories(path.getParent());

    try {
      query.serialize(snapshot, path, example, this);
    } catch (Exception e) {
      throw new RuntimeException("Failed to save " + query.name() + " snapshot for " + path, e);
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

  private record SnapshotInMemory<T>(T snapshot, boolean isOracle) {}

  private enum RegressionStatus {
    YES,
    NO,
    UNCHECKED
  }
}
