package org.prlprg.snapshots;

import java.io.IOException;
import java.lang.reflect.ParameterizedType;
import java.nio.file.Path;
import java.util.Arrays;
import org.prlprg.examples.Example;
import org.prlprg.util.Streams;

/// Data computed from an example that gets stored in a snapshot, e.g. bytecode generated from
/// AST closures.
///
/// This interface computes the data, verifies it's correct, checks if deviations from a
/// snapshot in a previous run are OK, and saves/loads the data to/from disk.
public interface Query<T> {
  /// Identifies the query and determines the snapshot directory.
  ///
  /// Queries must be equal iff they have the same name.
  ///
  /// If the query has a static `INSTANCE` field and is in `org.prlprg.`, this can be the
  /// default, which is the package name after `org.prlprg.`. Otherwise, it must be overridden.
  default String name() {
    try {
      getClass().getDeclaredField("INSTANCE");
    } catch (NoSuchFieldException e) {
      throw new UnsupportedOperationException(
          "No default for `Query#name` for class without static `INSTANCE` field");
    }

    var packageName = getClass().getPackageName();
    if (!packageName.startsWith("org.prlprg.")) {
      throw new UnsupportedOperationException(
          "No default for `Query#name` for subclass outside `org.prlprg`");
    }
    return packageName.substring("org.prlprg.".length()).replace('.', '/');
  }

  /// `T.class`.
  ///
  /// If the query directly `implements Query<T>` for some `T`, or implements an interface that
  /// does so, this can be the default. Otherwise, it must be overridden.
  @SuppressWarnings("unchecked")
  default Class<T> dataClass() {
    var thisAndAncestors =
        Streams.<Class<?>>worklist(
            getClass(),
            (prev, worklist) -> {
              if (prev.getSuperclass() != null) {
                worklist.add(prev.getSuperclass());
              }
              worklist.addAll(Arrays.asList(prev.getInterfaces()));
            });
    var genericInterfaces =
        thisAndAncestors.map(Class::getGenericInterfaces).flatMap(Arrays::stream);
    var queryInterface =
        genericInterfaces
            .filter(
                type ->
                    type instanceof ParameterizedType p
                        && p.getRawType().equals(Query.class)
                        && p.getActualTypeArguments().length == 1)
            .collect(
                Streams.oneOrThrow(
                    () ->
                        new UnsupportedOperationException(
                            "No default for `Query#dataClass` for subclass that doesn't inherit a single `Query<T>` for some `T`")));
    return (Class<T>) ((ParameterizedType) queryInterface).getActualTypeArguments()[0];
  }

  /// Compute the actual data from the example for verification.
  T compute(Example example, SnapshotStore store);

  /// Compute the expected data from the example.
  ///
  /// We check that actual data equals this. By default, this means we check for non-determinism
  /// (the oracle's determinism isn't checked). For example, this is overridden by
  /// [org.prlprg.bc.BCQuery] to use R's built-in bytecode compiler instead of ours.
  default T oracle(Example example, SnapshotStore store) {
    return compute(example, store);
  }

  /// Check the parts of the snapshot that shouldn't change between runs.
  ///
  /// For example, if the snapshot shouldn't change at all between runs (e.g. for eval), assert
  /// that `current` equals `previous`.
  ///
  /// By default, does nothing.
  default void verifyNoRegression(T current, T previous, Example example, SnapshotStore store) {}

  /// Run extra checks (assertions) on the computed data.
  ///
  /// By default, does nothing.
  default void verifyExtra(T data, Example example, SnapshotStore store) {}

  /// Add an extension to the snapshot file.
  ///
  /// By default, is empty (for directories or binaries).
  default String snapshotExtension() {
    return "";
  }

  /// Deserialize the snapshot data from `path`.
  ///
  /// `store` and `example` are provided to query dependencies if necessary, but usually aren't.
  T deserialize(Path path, Example example, SnapshotStore store) throws IOException;

  /// Serialize the `data`'s snapshot to `path`.
  ///
  /// `store` and `example` are provided to query dependencies if necessary, but usually aren't.
  void serialize(T data, Path path, Example example, SnapshotStore store) throws IOException;
}
