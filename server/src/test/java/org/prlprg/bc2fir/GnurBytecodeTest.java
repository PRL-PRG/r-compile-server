package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;

/// Tests that [BC2FirClosureCompiler] compiles the inlined subscripts in the bytecode of GNU-R's
/// compiler, which is what the rsh JIT sends (`rsh_cmpfun`), into static calls.
class GnurBytecodeTest {
  @ParameterizedTest
  @ValueSource(
      strings = {
        "function(x, i, v) { x[i] <- v; x }",
        "function(x, i, v) { x[[i]] <- v; x }",
        "function(x, i, j, v) { x[i, j] <- v; x[i, j] }",
        "function(x, i) x[[i]] + x[i]",
        "function(x) { x[] <- 0; x[drop = FALSE] }",
        "function(x, i) { x[[i]][[1]] <- quote(a); x }",
        "function(x, i) { names(x)[i] <- \"a\"; x }"
      })
  void subscripts(@Language("R") String source) {
    var r = GNUR.instance();
    var closure = (CloSXP) r.eval("compiler::cmpfun(" + source + ")");
    var function = BC2FirClosureCompiler.compile(r.getSession(), new Module(), "f", closure, null);
    var body = Printer.toString(function.baseline().body());
    assertTrue(body.contains("`[") && body.contains("%<"), body);
    assertFalse(body.contains("ldf `["), body);
  }
}
