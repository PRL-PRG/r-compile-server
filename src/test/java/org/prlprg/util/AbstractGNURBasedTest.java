package org.prlprg.util;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.File;
import java.io.IOException;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.RSession;
import org.prlprg.bc.Compiler;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class AbstractGNURBasedTest {
  protected static RSession rsession = new TestRSession();

  // Gets initialized in `@BeforeAll`.
  @SuppressWarnings("NotNullFieldNotInitialized")
  protected GNUR R;

  @BeforeAll
  public void startR() {
    R = GNUR.spawn(rsession);
  }

  // It's not constant if `startR` fails.
  @SuppressWarnings("ConstantValue")
  @AfterAll
  public void stopR() {
    if (R != null) {
      R.close();
    }
  }

  /**
   * Parse the function, compile with both GNU-R and out bytecode compiler, assert that the
   * bytecodes are the same, and return our compiled closure.
   */
  protected CloSXP assertBytecode(String funCode, int optimizationLevel) {
    File temp;
    try {
      temp = File.createTempFile("R-snapshot", ".R");
      Files.writeString(temp.toPath(), funCode);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    String code =
        "parse(file = '"
            + temp.getAbsolutePath()
            + "', keep.source = TRUE)"
            + " |> eval()"
            + " |> compiler::cmpfun(options = list(optimize="
            + optimizationLevel
            + "))";

    var gnurFun = (CloSXP) R.eval(code);
    var astFun =
        SEXPs.closure(gnurFun.parameters(), gnurFun.bodyAST(), gnurFun.env(), gnurFun.attributes());

    // if a function calls browser() it won't be compiled into bytecode
    SEXP ourBody;
    if (gnurFun.body() instanceof BCodeSXP gnurBc) {
      ourBody = compileBody(astFun, optimizationLevel);

      if (ourBody instanceof BCodeSXP ourBc) {
        var eq = gnurBc.equals(ourBc);

        if (!eq) {
          // bytecode can be large, so we only want to do it when it is different
          assertEquals(
              gnurBc.toString(), ourBc.toString(), "`compile(read(ast)) == read(R.compile(ast))`");
          fail("Produced bytecode is different, but the toString() representation is the same.");
        }
      } else {
        assertEquals(gnurBc.toString(), ourBody.toString());
      }
    } else {
      ourBody = compileBody(astFun, optimizationLevel);

      if (ourBody instanceof BCodeSXP ourBc) {
        assertEquals(astFun.body().toString(), ourBc.toString());
      } else {
        assertEquals(astFun.body(), ourBody);
      }
    }

    return SEXPs.closure(gnurFun.parameters(), ourBody, gnurFun.env(), gnurFun.attributes());
  }

  /**
   * Parse the given function, compile with our bytecode compiler, and return the body.
   *
   * <p>Note that if the function can't be compiled (uses the browser function), the body will just
   * be an AST.
   */
  protected SEXP compileBody(String fun, int optimizationLevel) {
    return compileBody((CloSXP) R.eval(fun), optimizationLevel);
  }

  private SEXP compileBody(CloSXP fun, int optimizationLevel) {
    var compiler = new Compiler(fun, rsession);
    compiler.setOptimizationLevel(optimizationLevel);
    return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
  }
}
