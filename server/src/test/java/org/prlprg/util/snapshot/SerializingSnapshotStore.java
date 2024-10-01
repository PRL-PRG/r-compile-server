package org.prlprg.util.snapshot;

import java.util.Optional;
import java.util.function.Function;

public class SerializingSnapshotStore<T, R> implements SnapshotStore<T> {
  private final SnapshotStore<R> store;
  private final Function<T, R> serializer;
  private final Function<R, T> deserializer;

  public SerializingSnapshotStore(
      SnapshotStore<R> store, Function<T, R> serializer, Function<R, T> deserializer) {
    this.store = store;
    this.serializer = serializer;
    this.deserializer = deserializer;
  }

  @Override
  public Optional<T> load(String name) {
    return store.load(name).map(deserializer);
  }

  @Override
  public void save(String name, T value) {
    store.save(name, serializer.apply(value));
  }

  @Override
  public void close() {
    store.close();
  }
}
