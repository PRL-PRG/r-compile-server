package org.prlprg.util.snapshot;

import java.nio.file.Path;
import java.util.function.Function;
import org.prlprg.RSession;
import org.prlprg.sexp.SEXP;

public class RDSFileSnapshotStoreFactory<T> extends FileSnapshotStoreFactory<T> {
  private final RSession session;
  private final Function<T, SEXP> serialize;
  private final Function<SEXP, T> deserialize;

  public RDSFileSnapshotStoreFactory(
      RSession session, Function<T, SEXP> serialize, Function<SEXP, T> deserialize) {
    this.session = session;
    this.serialize = serialize;
    this.deserialize = deserialize;
  }

  @Override
  protected SnapshotStore<T> create(Path snapshotPath) {
    return new ObjectSnapshotStore<>(
        new RDSSnapshotStore(session, snapshotPath), serialize, deserialize);
  }
}
