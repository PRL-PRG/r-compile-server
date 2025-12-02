package org.prlprg.session.snapshot;

import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import javax.annotation.Nullable;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.prlprg.bc.BCSnapshotTestExtension.TestResult;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.snapshot.SnapshotExtension;
import org.prlprg.util.snapshot.SnapshotStoreFactory;

public abstract class RDSSnapshotExtension<T> extends SnapshotExtension<T> {
  private @Nullable GNUR R;

  @Override
  public void beforeAll(ExtensionContext context) {
    R = resolveSingleton(GNUR.class, context);
    super.beforeAll(context);
  }

  @Override
  protected SnapshotStoreFactory<T> createStoreFactory(ExtensionContext context) {
    assert R != null : "This is called in `super.beforeAll` which is called after `R` is initialized";
    return new RDSFileSnapshotStoreFactory<>(R.getSession(), this::serializeTestResult, this::deserializeTestResult);
  }

  protected abstract SEXP serializeTestResult(T testResult);
  protected abstract T deserializeTestResult(SEXP value);

  protected final GNUR R() {
    assert R != null : "`beforeAll` not called yet";
    return R;
  }
}
