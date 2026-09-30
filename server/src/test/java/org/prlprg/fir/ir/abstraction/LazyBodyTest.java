package org.prlprg.fir.ir.abstraction;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXPs;

class LazyBodyTest {
  private static Abstraction lazy(Module module, LazyBody.Initializer body) {
    return new Abstraction(module, List.of(new FunctionParameter("x", Type.ANY_SEXP)), body);
  }

  @Test
  void evaluatesOnceOnFirstAccess() {
    var module = new Module();
    int[] evaluations = {0};
    var version =
        lazy(
            module,
            body -> {
              evaluations[0]++;
              body.entry()
                  .setJump(
                      new Jump(
                          new Return(), List.of(new Read(body.scope().parameters().getFirst()))));
            });

    assertFalse(version.isStub());
    assertFalse(version.isEvaluated());
    assertEquals(0, evaluations[0]);

    var body = version.body();
    assertTrue(version.isEvaluated());
    assertSame(body, version.body());
    assertEquals(1, evaluations[0], "the initializer runs once");
    assertTrue(version.isRoot(body));
    assertFalse(body.isPromise());
  }

  @Test
  void recursiveEvaluationThrows() {
    var module = new Module();
    Abstraction[] self = {null};
    self[0] = lazy(module, body -> self[0].body());

    assertThrows(IllegalStateException.class, () -> self[0].body());
  }

  @Test
  void failedEvaluationIsRethrown() {
    var module = new Module();
    int[] evaluations = {0};
    var version =
        lazy(
            module,
            body -> {
              evaluations[0]++;
              throw new UnsupportedOperationException("nope");
            });

    assertThrows(UnsupportedOperationException.class, version::body);
    assertThrows(UnsupportedOperationException.class, version::body);
    assertEquals(1, evaluations[0], "a failed initializer isn't retried");
    assertFalse(version.isEvaluated());
  }

  @Test
  void afterEvaluatedSeesTheBody() {
    var module = new Module();
    CFG[] seen = {null};
    var version =
        lazy(
            module,
            new LazyBody.Initializer() {
              @Override
              public void evaluate(CFG body) {
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL)))));
              }

              @Override
              public void afterEvaluated(Abstraction version) {
                assertTrue(version.isEvaluated());
                seen[0] = version.body();
              }
            });

    assertSame(version.body(), seen[0]);
  }

  @Test
  void fallbackIsDiscardedButLeftIntactOnEvaluation() {
    var module = new Module();
    var version =
        lazy(
            module,
            body ->
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));
    var lazyBody = Objects.requireNonNull(version.lazyBody());
    var fallback = lazyBody.initFallback();
    var parameter = version.parameters().getFirst();
    fallback.entry().setJump(new Jump(new Return(), List.of(new Read(parameter))));

    assertSame(fallback, version.fallback());
    assertTrue(version.isRoot(fallback));
    assertEquals(1, parameter.uses().size(), "the fallback uses the parameter");
    assertThrows(IllegalStateException.class, lazyBody::initFallback, "only one fallback");

    version.body();
    assertNull(version.fallback());
    assertEquals(0, parameter.uses().size(), "only the body's uses remain (it has none)");
    assertTrue(
        fallback.entry().jump().expression() instanceof Return,
        "the fallback's instructions are left for anything still running them");
    assertThrows(IllegalStateException.class, lazyBody::initFallback, "not after evaluation");
  }

  @Test
  void streamCfgsEvaluates() {
    var module = new Module();
    var version =
        lazy(
            module,
            body ->
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));

    assertEquals(1, version.streamCfgs().count());
    assertTrue(version.isEvaluated());
  }

  @Test
  void unevaluatedVersionsArentPrintedExceptTheBaseline() {
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
    var f = module.localFunction(Variable.named("f"));
    assertNotNull(f);
    f.addVersion(
        List.of(new FunctionParameter("x", Type.INTEGER)),
        body ->
            body.entry()
                .setJump(
                    new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));

    var printed = module.toString();
    assertFalse(printed.contains("(x:I)"), "unevaluated version isn't printed:\n" + printed);
    assertFalse(printed.contains(IrPrintContext.UNEVALUATED_BODY));

    var g =
        module.addFunction(
            Variable.named("g"),
            List.of(Variable.named("y")),
            body ->
                body.entry()
                    .setJump(
                        new Jump(new Return(), List.of(new Constant(new Value.Sexp(SEXPs.NULL))))));
    var printedWithG = module.toString();
    assertTrue(
        printedWithG.contains("(y:*) -+> V { " + IrPrintContext.UNEVALUATED_BODY + " }"),
        "unevaluated baseline prints its signature and a marker:\n" + printedWithG);
    var e = assertThrows(ParseException.class, () -> Parser.fromString(printedWithG, Module.class));
    assertTrue(e.getMessage().contains("unevaluated"), e.getMessage());

    module.evaluateAll();
    assertTrue(g.baseline().isEvaluated());
    assertFalse(module.toString().contains(IrPrintContext.UNEVALUATED_BODY));
  }
}
