package org.prlprg.snapshot;

import org.prlprg.util.SingletonParameterResolver;

public class SnapshotStoreParameterResolver extends SingletonParameterResolver<SnapshotStore> {
  protected SnapshotStoreParameterResolver() {
    super(SnapshotStore.class);
  }
}
