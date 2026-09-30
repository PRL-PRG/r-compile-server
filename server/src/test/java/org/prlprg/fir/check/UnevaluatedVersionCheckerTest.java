package org.prlprg.fir.check;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// What the checkers say about unevaluated versions (which they don't evaluate).
class UnevaluatedVersionCheckerTest {
  @Test
  void nonBaselineWithoutFallbackIsAnError() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x) {
              (x:*) -+> V {
                v: V = force? x;
                return v;
              }
            }
            """);
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var version =
        f.addVersion(
            List.of(new FunctionParameter("x", Type.INTEGER)),
            body ->
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));

    assertFalse(checkAll(module), "an unevaluated version needs a fallback");
    assertFalse(version.isEvaluated(), "checking didn't evaluate it");
  }

  @Test
  void baselineWithoutFallbackIsFine() {
    var module = new org.prlprg.fir.ir.module.Module();
    var g =
        module.addFunction(
            Variable.named("g"),
            List.of(Variable.named("y")),
            body ->
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));

    assertTrue(checkAll(module));
    assertFalse(g.baseline().isEvaluated(), "checking didn't evaluate it");
  }

  @Test
  void assumptionAfterOtherStatementsInCheckpointBlockIsAnError() {
    var version =
        ParseUtil.parseAbstraction(
            """
            (x:*) -+> V {
              mkenv;
              check L1() else D0();
            L1():
              x1: v1(I) = x ?: v1(I);
              y: I = unbox< v1(I) --> I >(x1);
              x2: v1(I) = x ?: v1(I);
              popenv;
              return x2;
            D0():
              deopt 0 [];
            }
            """);

    var checker = new CFGChecker(true);
    checker.run(null, version);
    assertTrue(
        checker.errors().stream()
            .anyMatch(e -> e.getMessage().contains("leading assumptions of the checkpoint")),
        "the second assumption is never checked: " + checker.errors());
  }
}
