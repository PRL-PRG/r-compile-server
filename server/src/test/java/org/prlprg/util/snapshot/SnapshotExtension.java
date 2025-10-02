package org.prlprg.util.snapshot;

import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import org.junit.jupiter.api.extension.*;
import org.prlprg.util.ThrowingSupplier;

/**
 * JUnit 5 extension for snapshot testing.
 *
 * @param <T> the type of data stored in the snapshot.
 */
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

  /**
   * Verifies the actual value against the snapshot.
   *
   * <p>This contains the logic for loading, saving and comparing the snapshot.
   *
   * @param testMethod the test method
   * @param snapshotName the name of the snapshot
   * @param actual the actual value
   * @param oracle optionally, an oracle can generate the expected value in the case of a missing
   *     snapshot
   * @param saveSnapshot if true, saves the snapshot if it is missing
   */
  protected void verify(
      Method testMethod,
      String snapshotName,
      T actual,
      @Nullable ThrowingSupplier<T> oracle,
      boolean saveSnapshot) {
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

      if (saveSnapshot) {
        try {
          store.save(snapshotName, expected);
        } catch (Exception e) {
          throw new RuntimeException("Unable to save snapshot: " + snapshotName, e);
        }
      }
    }

    checkEqual(expected, actual);
  }

  /**
   * Checks if the expected and actual values are equal.
   *
   * @param expected the expected value
   * @param actual the actual value
   */
  protected abstract void checkEqual(T expected, T actual);

  /**
   * Creates a snapshot for the given test method.
   *
   * <p>The result will be passed as a parameter to the test method. Eventually, it should call back
   * the {@link #verify(Method, String, Object, ThrowingSupplier)}
   *
   * @param testMethod the test method
   * @return the snapshot
   */
  protected abstract Object createSnapshot(Method testMethod);

  /**
   * Returns the class of the snapshot.
   *
   * @return the class of the snapshot
   */
  protected abstract Class<?> getSnapshotClass();
}
