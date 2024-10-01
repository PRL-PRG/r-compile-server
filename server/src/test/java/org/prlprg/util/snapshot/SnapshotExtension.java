package org.prlprg.util.snapshot;

import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import org.junit.jupiter.api.extension.*;
import org.prlprg.util.ThrowingSupplier;

public abstract class SnapshotExtension<T> implements ParameterResolver, AfterAllCallback {

  private final Map<Method, SnapshotStore<T>> stores = new HashMap<>();
  private final SnapshotStoreFactory<T> storeFactory;

  protected SnapshotExtension(SnapshotStoreFactory<T> storeFactory) {
    this.storeFactory = storeFactory;
  }

  @Override
  public boolean supportsParameter(
      ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    return parameterContext.getParameter().getType() == getSnapshotClass();
  }

  @Override
  public Object resolveParameter(
      ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    return createSnapshot(extensionContext.getRequiredTestMethod());
  }

  @Override
  public void afterAll(ExtensionContext context) {
    for (var store : stores.values()) {
      try {
        store.close();
      } catch (Exception e) {
        throw new RuntimeException("Unable to close snapshot store: " + store, e);
      }
    }
  }

  protected void verify(
      Method testMethod, String snapshotName, T actual, @Nullable ThrowingSupplier<T> oracle) {
    var store = stores.computeIfAbsent(testMethod, storeFactory::create);

    var expectedOpt = Optional.<T>empty();
    T expected;

    try {
      expectedOpt = store.load(snapshotName);
    } catch (Exception e) {
      throw new RuntimeException("Unable to load snapshot: " + snapshotName, e);
    }

    if (expectedOpt.isPresent()) {
      expected = expectedOpt.get();
    } else {
      if (oracle != null) {
        expected = oracle.get();
      } else {
        expected = actual;
      }

      try {
        store.save(snapshotName, expected);
      } catch (Exception e) {
        throw new RuntimeException("Unable to save snapshot: " + snapshotName, e);
      }
    }

    checkEqual(expected, actual);
  }

  protected abstract void checkEqual(T expected, T actual);

  protected abstract Object createSnapshot(Method testMethod);

  protected abstract Class<?> getSnapshotClass();
}
