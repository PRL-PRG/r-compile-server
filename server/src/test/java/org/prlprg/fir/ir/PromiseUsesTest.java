package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.List;
import java.util.Objects;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

/// A promise's body is a separate [CFG] whose instructions read registers of the *enclosing* frame.
/// Discarding the body has to drop those def-use links, or they linger in the register's
/// [Register#uses] while pointing into a CFG no longer reachable from the [Abstraction] --
/// which downstream reads as "a use in an unknown CFG".
class PromiseUsesTest {
  private static final @Language("FIR") String CAPTURING_PROMISE =
      """
      fun main() {
        (reg x:R) -~> R {
          outer: R = dup x;
          p: p(R ~) = prom<R ~>{
            inner: R = dup outer;
            return inner;
          };
          r: R = force p;
          return r;
        }
      }
      """;

  private static Abstraction mainOf(@Language("FIR") String firText) {
    var module = parseModule(firText);
    return Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
  }

  private static Register reg(Abstraction version, String name) {
    return version
        .streamRegisters()
        .filter(r -> r.name().equals(name))
        .findFirst()
        .orElseThrow(() -> new AssertionError("no register named '" + name + "'"));
  }

  /// The statement whose expression is a [Promise], in `cfg`'s entry block.
  private static Statement promiseStatement(CFG cfg) {
    return cfg.entry().statements().stream()
        .filter(s -> s.expression() instanceof Promise)
        .findFirst()
        .orElseThrow(() -> new AssertionError("no promise statement"));
  }

  /// The uses of `register` that live in a CFG not reachable from `version`.
  private static List<String> usesInUnknownCfgs(Abstraction version, Register register) {
    return register.uses().stream()
        .map(use -> Objects.requireNonNull(use.instruction().parentBB()).owner())
        .filter(owner -> version.streamCfgs().noneMatch(c -> c == owner))
        .map(Object::toString)
        .toList();
  }

  @Test
  void capturedRegisterIsUsedByThePromiseBody() {
    var main = mainOf(CAPTURING_PROMISE);
    var outer = reg(main, "outer");

    // Baseline: `outer` is read inside the promise, and that CFG is part of the abstraction.
    assertEquals(1, outer.useCount());
    assertTrue(usesInUnknownCfgs(main, outer).isEmpty());
  }

  @Test
  void replacingAPromiseDropsItsBodysUses() {
    // What ElideUnforcedPromise does: swap in a new promise whose body is an immediate deopt.
    var main = mainOf(CAPTURING_PROMISE);
    var cfg = Objects.requireNonNull(main.cfg());
    var outer = reg(main, "outer");
    var statement = promiseStatement(cfg);

    var newCode = new CFG(main);
    newCode.entry().setJump(new Jump(new Deopt(0), List.of()));
    statement.setExpression(
        new Promise(((Promise) statement.expression()).valueType(), Effects.NONE, newCode));

    assertEquals(
        List.of(),
        usesInUnknownCfgs(main, outer),
        "the discarded promise body's read of `outer` should be gone");
    assertEquals(0, outer.useCount());
  }

  @Test
  void replacingAPromiseWithANonPromiseDropsItsBodysUses() {
    var main = mainOf(CAPTURING_PROMISE);
    var cfg = Objects.requireNonNull(main.cfg());
    var outer = reg(main, "outer");

    promiseStatement(cfg).setExpression(new Noop());

    assertEquals(List.of(), usesInUnknownCfgs(main, outer));
    assertEquals(0, outer.useCount());
  }

  @Test
  void keepingTheSameBodyKeepsItsUses() {
    // Re-wrapping the *same* CFG (e.g. to narrow the promise's type or effects) must not drop the
    // links, because the body is still live.
    var main = mainOf(CAPTURING_PROMISE);
    var cfg = Objects.requireNonNull(main.cfg());
    var outer = reg(main, "outer");
    var statement = promiseStatement(cfg);
    var promise = (Promise) statement.expression();

    statement.setExpression(new Promise(promise.valueType(), Effects.NONE, promise.code()));

    assertEquals(1, outer.useCount(), "the body still reads `outer`");
    assertTrue(usesInUnknownCfgs(main, outer).isEmpty());
  }

  @Test
  void detachingAPromiseStatementDropsItsBodysUses() {
    var main = mainOf(CAPTURING_PROMISE);
    var cfg = Objects.requireNonNull(main.cfg());
    var outer = reg(main, "outer");

    // `detach` rather than `remove`, since the promise register is still used by the `force`.
    promiseStatement(cfg).detach();

    assertEquals(List.of(), usesInUnknownCfgs(main, outer));
    assertEquals(0, outer.useCount());
  }

  @Test
  void removingABlockDropsNestedPromiseUses() {
    // The whole-block path, which CFG#removeBB already handled; kept so it stays handled.
    var main =
        mainOf(
            """
            fun main() {
              (reg x:R) -~> R {
                outer: R = dup x;
                goto BB1();
              BB1():
                p: p(R ~) = prom<R ~>{
                  inner: R = dup outer;
                  return inner;
                };
                return outer;
              }
            }
            """);
    var cfg = Objects.requireNonNull(main.cfg());
    var outer = reg(main, "outer");
    var bb1 = Objects.requireNonNull(cfg.bb("BB1"));

    assertEquals(2, outer.useCount(), "read by the promise body and by the return");

    cfg.entry().setJump(new Jump(new Deopt(0), List.of()));
    cfg.removeBB(bb1);

    assertEquals(List.of(), usesInUnknownCfgs(main, outer));
    assertEquals(0, outer.useCount());
  }
}
