package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.StructuralUtils.printStructurally;

import java.io.File;
import java.io.IOException;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.*;

public class CompilerTest implements Tests {

  private final RSession rsession = new TestRSession();
  private final GNUR R = new GNUR(rsession);

  @Test
  public void testEmptyBlock() {
    assertBytecode("""
        function() {}
    """);
  }

  @Test
  public void testSingleExpressionBlock() {
    assertBytecode("""
        function() { 1 }
    """);
  }

  @Test
  public void testMultipleExpressionBlock() {
    assertBytecode("""
        function() { 1; 2 }
    """);
  }

  @Test
  public void testIf() {
    assertBytecode("""
        function(x) if (x) 1
    """);
  }

  @Test
  public void testIfElse() {
    assertBytecode("""
        function(x) if (x) 1 else 2
    """);
  }

  @Test
  public void testFunctionInlining() {
    assertBytecode("""
        function(x) function(y) 1
    """);
  }

  @Test
  public void testFunctionLeftParenInlining() {
    assertBytecode("""
        function(x) (x)
    """);

    assertBytecode("""
        function(x) (...)
    """);

    // TODO: (x <- 1)
  }

  @Test
  public void builtinsInlining() {
    assertBytecode("""
      function() invisible(1)
    """, 2);

    assertBytecode("""
      function() invisible(1)
    """, 3);

    assertBytecode("""
      function(...) invisible(...)
    """, 2);
  }

  private void assertBytecode(String code) {
    assertBytecode(code, 2);
  }

  private void assertBytecode(String funCode, int optimizationLevel) {
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
            + "', keep.source = TRUE)" // TODO: set conditionally
            + " |> eval()"
            + " |> compiler::cmpfun(options = list(optimize="
            + optimizationLevel
            + "))";

    var gnurfun = (CloSXP) R.eval(code);
    var gnurbc = ((BCodeSXP) gnurfun.body()).bc();
    var astfun =
        SEXPs.closure(
            gnurfun.formals(), gnurbc.consts().getFirst(), gnurfun.env(), gnurfun.attributes());

    var compiler = new Compiler(astfun, rsession);
    compiler.setOptimizationLevel(optimizationLevel);
    var ourbc = compiler.compile();

    assertEquals(
        printStructurally(gnurbc),
        printStructurally(ourbc),
        "`compile(read(ast)) == read(R.compile(ast))`");
  }
}
