package org.prlprg.util.snapshot;

import java.lang.reflect.Method;

public interface SnapshotStoreFactory<T> {
  SnapshotStore<T> create(Method testMethod);
}
