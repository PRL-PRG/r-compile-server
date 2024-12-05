package org.prlprg.util.snapshot;

import java.lang.reflect.Method;
import java.nio.file.Path;

public abstract class FileSnapshotStoreFactory<T> implements SnapshotStoreFactory<T> {
  public static final String SNAPSHOT_BASE_DIR = "src/test/resources";
  public static final String SNAPSHOTS_DIR = "snapshots";

  public SnapshotStore<T> create(Method testMethod) {
    return create(getSnapshotPath(testMethod));
  }

  protected abstract SnapshotStore<T> create(Path snapshotPath);

  protected Path getSnapshotPath(Method testMethod) {
    var currentClass = testMethod.getDeclaringClass();
    var testName = testMethod.getName();
    var packageName = currentClass.getPackageName();
    var className = currentClass.getSimpleName();

    return Path.of(
        SNAPSHOT_BASE_DIR, packageName.replace(".", "/"), SNAPSHOTS_DIR, className, testName);
  }
}
