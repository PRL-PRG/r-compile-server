package org.prlprg.bc;

import org.junit.jupiter.api.TestInstance;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@GNURTestSupport
@ExtendWith(BCSnapshotTestExtension.class)
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class BCCompilerIT implements StdlibClosuresSource {

  private final GNUR R;

  public BCCompilerIT(GNUR R) {
    this.R = R;
  }

  @Override
  public SEXP eval(String source) {
    return R.eval(source);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionsList")
  public void testStdlibFunctions(String name, BCSnapshotTestExtension.BCCodeSnapshot snapshot) {
    snapshot.verify(name, name, 3);
  }
}
