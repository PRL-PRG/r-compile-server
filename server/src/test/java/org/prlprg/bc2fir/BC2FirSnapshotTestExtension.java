package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;

import java.lang.reflect.Method;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

public class BC2FirSnapshotTestExtension
    extends SnapshotExtension<BC2FirSnapshotTestExtension.TestResult> {
  @SuppressWarnings("unused")
  public BC2FirSnapshotTestExtension() {
    this(new TestRSession());
  }

  public BC2FirSnapshotTestExtension(RSession session) {
    super(new RDSFileSnapshotStoreFactory<>(session, TestResult::toSEXP, TestResult::fromSEXP));
  }

  public record TestResult(EnvSXP rModuleEnv, String firCode) {
    public SEXP toSEXP() {
      return SEXPs.vec(rModuleEnv, SEXPs.string(firCode));
    }

    public static TestResult fromSEXP(SEXP sexp) {
      if (!(sexp instanceof VecSXP v) || v.size() != 2) {
        throw new IllegalArgumentException("Value must be a vector of size 2, got: " + sexp);
      }

      var rModuleEnv =
          v.get(0)
              .as(EnvSXP.class)
              .orElseThrow(
                  () ->
                      new IllegalArgumentException(
                          "Expected first element to be an environment (R module)"));
      var firOutput =
          v.get(1)
              .asScalarString()
              .orElseThrow(
                  () ->
                      new IllegalArgumentException(
                          "Expected second element to be a string (FIŘ output)"));

      return new TestResult(rModuleEnv, firOutput);
    }
  }

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.rModuleEnv(), actual.rModuleEnv(), "Input (R module) is different");
    assertEquals(expected.firCode(), actual.firCode(), "Output (FIŘ code) is different");
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return new BC2FirSnapshot() {
      int seq = 0;

      @Override
      public void verify(EnvSXP rModuleEnv) {
        var firModule = compile(rModuleEnv);
        var firOutput = firModule.toString();
        var res = new TestResult(rModuleEnv, firOutput);

        BC2FirSnapshotTestExtension.this.verify(testMethod, String.valueOf(++seq), res, null);
      }
    };
  }

  @Override
  protected Class<?> getSnapshotClass() {
    return BC2FirSnapshot.class;
  }

  public interface BC2FirSnapshot {
    void verify(EnvSXP rModuleEnv);
  }
}
