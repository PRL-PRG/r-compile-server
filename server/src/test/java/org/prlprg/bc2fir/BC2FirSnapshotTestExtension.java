package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;

import java.lang.reflect.Method;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

public class BC2FirSnapshotTestExtension
    extends SnapshotExtension<BC2FirSnapshotTestExtension.TestResult> {
  private final RSession session;

  @SuppressWarnings("unused")
  public BC2FirSnapshotTestExtension() {
    this(new TestRSession());
  }

  public BC2FirSnapshotTestExtension(RSession session) {
    super(new RDSFileSnapshotStoreFactory<>(session, TestResult::toSEXP, TestResult::fromSEXP));
    this.session = session;
  }

  public record TestResult(String rCodeInput, String firCodeOutput) {
    public SEXP toSEXP() {
      return SEXPs.string(rCodeInput, firCodeOutput);
    }

    public static TestResult fromSEXP(SEXP sexp) {
      if (!(sexp instanceof StrSXP v) || v.size() != 2) {
        throw new IllegalArgumentException("Value must be a string vector of size 2, got: " + sexp);
      }

      var rCode = v.get(0);
      var firCode = v.get(1);

      return new TestResult(rCode, firCode);
    }
  }

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.rCodeInput, actual.firCodeOutput, "Input (R code) is different");
    assertEquals(expected.firCodeOutput, actual.firCodeOutput, "Output (FIŘ code) is different");
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return new BC2FirSnapshot() {
      int seq = 0;

      @Override
      public void verify(String rModuleCode, EnvSXP rModuleEnv) {
        var firModule = compile(rModuleEnv, session);
        var firOutput = firModule.toString();
        var res = new TestResult(rModuleCode, firOutput);

        BC2FirSnapshotTestExtension.this.verify(testMethod, String.valueOf(++seq), res, null);
      }
    };
  }

  @Override
  protected Class<?> getSnapshotClass() {
    return BC2FirSnapshot.class;
  }

  public interface BC2FirSnapshot {
    void verify(String rModuleCode, EnvSXP rModuleEnv);
  }
}
