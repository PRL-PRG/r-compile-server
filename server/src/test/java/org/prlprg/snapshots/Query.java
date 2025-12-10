package org.prlprg.snapshots;

import java.io.IOException;
import java.lang.reflect.ParameterizedType;
import java.nio.file.Path;
import java.util.Arrays;
import org.prlprg.examples.Example;

/// Cached/snapshot data in an example, e.g. bytecode generated from AST closures.
public interface Query<T> {
  /// Default is package name after `org.prlprg`.
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

  /// Default uses reflection
  @SuppressWarnings("unchecked")
  default Class<T> dataClass() {
    var queryInterface =
        Arrays.stream(getClass().getGenericInterfaces())
            .filter(
                type ->
                    type instanceof ParameterizedType p
                        && p.getRawType().equals(Query.class)
                        && p.getActualTypeArguments().length == 1)
            .findFirst()
            .orElseThrow(
                () ->
                    new UnsupportedOperationException(
                        "No default for `Query#dataClass` for subclass that doesn't directly inherit `Query<T>` for some `T`"));
    return (Class<T>) ((ParameterizedType) queryInterface).getActualTypeArguments()[0];
  }

  /// Compute the actual data from the example for verification.
  T compute(Example example, SnapshotStore store);

  /// Compute the expected data from the example.
  ///
  /// By default, calls `compute`. But if overridden, we check actual data against this. For
  /// example, overridden by [org.prlprg.bc.BCQuery] to use R's built-in bytecode compiler
  /// instead of ours.
  default T oracle(Example example, SnapshotStore store) {
    return compute(example, store);
  }

  /// Run extra checks (assertions) on the computed data.
  ///
  /// By default, does nothing.
  default void verifyExtra(T data, Example example, SnapshotStore store) {}

  T deserialize(Path path, Example example, SnapshotStore store) throws IOException;

  void serialize(T data, Path path, Example example, SnapshotStore store) throws IOException;
}
