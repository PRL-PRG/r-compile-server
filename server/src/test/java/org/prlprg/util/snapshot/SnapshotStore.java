package org.prlprg.util.snapshot;

import java.util.Optional;

public interface SnapshotStore<T> {
  Optional<T> load(String name);

  void save(String name, T value);

  void close();
}
