package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.lang.reflect.Method;
import org.opentest4j.TestAbortedException;
import org.prlprg.bc2fir.BC2CFGCompilerException;
import org.prlprg.bc2fir.BC2ClosureCompilerUnsupportedException;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.rsession.TestRSession;
import org.prlprg.session.RSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

public class BC2Fir2CSnapshotTestExtension
    extends SnapshotExtension<BC2Fir2CSnapshotTestExtension.TestResult> {
  private final RSession session;

  @SuppressWarnings("unused")
  public BC2Fir2CSnapshotTestExtension() {
    this(new TestRSession());
  }

  public BC2Fir2CSnapshotTestExtension(RSession session) {
    super(new RDSFileSnapshotStoreFactory<>(session, TestResult::toSEXP, TestResult::fromSEXP));
    this.session = session;
  }

  public record TestResult(String rCodeInput, String cCodeOutput) {
    public SEXP toSEXP() {
      return SEXPs.string(rCodeInput, cCodeOutput);
    }

    public static TestResult fromSEXP(SEXP sexp) {
      if (!(sexp instanceof StrSXP v) || v.size() != 2) {
        throw new IllegalArgumentException("Value must be a string vector of size 2, got: " + sexp);
      }

      var rCode = v.get(0);
      var cCode = v.get(1);

      return new TestResult(rCode, cCode);
    }
  }

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.rCodeInput, actual.rCodeInput, "Input (R code) is different");
    assertEquals(expected.cCodeOutput, actual.cCodeOutput, "Output (C code) is different");
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return (BC2Fir2CSnapshot)
        (snapshotName, rModuleCode, rModuleEnv) -> {
          try {
            var firModule = BC2Fir2CTestSupport.compileRModule(rModuleEnv, session);
            var compiled = BC2Fir2CTestSupport.compileToC(firModule, session);
            var cOutput = compiled.cModule().toString();
            var function = firstFunction(firModule);

            try (var artifact =
                BC2Fir2CTestSupport.buildSharedObject(
                    firModule,
                    compiled,
                    function,
                    snapshotName,
                    function.parameterNames().size())) {
              var res = new TestResult(rModuleCode, cOutput);

              BC2Fir2CSnapshotTestExtension.this.verify(
                  testMethod, snapshotName, res, null, true);
            }
          } catch (IllegalStateException
              | BC2ClosureCompilerUnsupportedException
              | BC2CFGCompilerException e) {
            throw new TestAbortedException("Closure isn't compilable", e);
          }
        };
  }

  @Override
  protected Class<?> getSnapshotClass() {
    return BC2Fir2CSnapshot.class;
  }

  private static Function firstFunction(Module firModule) {
    return firModule.localFunctions().stream()
        .findFirst()
        .orElseThrow(() -> new IllegalArgumentException("No functions compiled"));
  }

  public interface BC2Fir2CSnapshot {
    void verify(String snapshotName, String rModuleCode, EnvSXP rModuleEnv);
  }
}
