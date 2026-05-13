package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;

/// Test [InternalInterpreter] behavior with larger, parsed modules.
class InternalInterpretTest {
  private static final String ASSUME_LOAD_FUN_GLOBAL_MODULE =
      """
      fun main() {
        () -+> V { |
          check BBopt() else BBfail();
        BBopt():
          ldf target ?- static_target;
          return <int 1>;
        BBfail():
          return <int 0>;
        }
      }

      fun static_target() {
        () --> v1(I) { |
          return <int 7>;
        }
      }
      """;

  private static final String ASSUME_LOAD_FUN_LOCAL_MODULE =
      """
      fun main(x) {
        (reg x:*) -+> V { var target:* |
          mkenv;
          st target = x;
          check BBopt() else BBfail();
        BBopt():
          ldf target ?- static_target;
          popenv;
          return <int 1>;
        BBfail():
          popenv;
          return <int 0>;
        }
      }

      fun static_target() {
        () --> v1(I) { |
          return <int 7>;
        }
      }
      """;

  private static final String ASSUME_LOAD_GLOBAL_VAR_MODULE =
      """
      fun main() {
        () --> V { var target:* |
          check BBopt() else BBfail();
        BBopt():
          ld target ?= <int 1>;
          return <int 1>;
        BBfail():
          return <int 0>;
        }
      }
      """;

  private static final String ASSUME_LOAD_GLOBAL_VAR_LOCAL_MODULE =
      """
      fun main() {
        () --> V { var target:* |
          mkenv;
          st target = <int 1>;
          check BBopt() else BBfail();
        BBopt():
          ld target ?= <int 1>;
          popenv;
          return <int 1>;
        BBfail():
          popenv;
          return <int 0>;
        }
      }
      """;

  @Test
  void deoptRestoreReverseEvaluatesBoxAndUnbox() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> v1(I) { reg xi:I, reg result:v1(I) |
                xi = unbox< v1(I) --> I >(x);
                result = f< I --> v1(I) >(xi);
                return result;
              }
            }

            fun f(x) {
              (reg x:v1(I)) --> v1(I) { reg checked:v1(I), reg i:I, reg roundTrip:v1(I) |
                check Ok() else Deopt();
              Ok():
                checked = x ?: v1(I);
                return checked;
              Deopt():
                i = unbox< v1(I) --> I >(x);
                roundTrip = box< I --> v1(I) >(i);
                deopt 0 [roundTrip];
              }
              (reg x:I) --> v1(I) { reg checked:v1(I), reg roundTrip:v1(I) |
                check Ok() else Deopt();
              Ok():
                checked = x ?: v1(I);
                return checked;
              Deopt():
                roundTrip = box< I --> v1(I) >(x);
                deopt 0 [roundTrip];
              }
            }
            """);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var result = interpreter.call("main", new Value.Sexp(SEXPs.integer(1)));

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void checkpointSnapshotKeepsDeoptOnlyBoxedRegistersLocal() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> v1(I) { reg boxed:v1(I), var y:v1(I) |
                check Ok() else Deopt();
              Ok():
                boxed = box< I --> v1(I) >(x);
                return boxed;
              Deopt():
                mkenv;
                boxed = box< I --> v1(I) >(x);
                st y = boxed;
                deopt 0 [];
              }
            }
            """);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var snapshots =
        interpreter.checkpointTrace().track(() -> interpreter.call("main", new Value.Int(1)));

    assertEquals(1, snapshots.size());
    assertEquals(SEXPs.integer(1), snapshots.getFirst().env().getLocal("y").orElseThrow());
    assertSame(snapshots.getFirst().env().parent(), interpreter.globalEnv());
  }

  @Test
  void assumeLoadFunSucceedsForClosureFoundInLocalEnv() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_FUN_GLOBAL_MODULE));
    interpreter
        .baseEnv()
        .set("target", staticTarget(interpreter, new UserEnvSXP(interpreter.globalEnv())));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void assumeLoadFunSucceedsForClosureFoundInGlobalEnv() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_FUN_GLOBAL_MODULE));
    interpreter.globalEnv().set("target", staticTarget(interpreter, interpreter.globalEnv()));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void assumeLoadFunSucceedsForClosureFoundInBaseEnv() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_FUN_GLOBAL_MODULE));
    interpreter.baseEnv().set("target", staticTarget(interpreter, interpreter.baseEnv()));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void assumeLoadFunSucceedsForNonGlobalBinding() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_FUN_LOCAL_MODULE));

    var result =
        interpreter.call(
            "main", new Value.Sexp(staticTarget(interpreter, interpreter.globalEnv())));

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void assumeLoadGlobalVarSucceedsForMatchingGlobalBinding() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_GLOBAL_VAR_MODULE));
    interpreter.globalEnv().set("target", SEXPs.integer(1));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void assumeLoadGlobalVarSucceedsForNonMatchingGlobalBinding() {
    var interpreter = new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_GLOBAL_VAR_MODULE));
    interpreter.globalEnv().set("target", SEXPs.integer(2));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(0)), result);
  }

  @Test
  void assumeLoadGlobalVarSucceedsForMatchingNonGlobalBinding() {
    var interpreter =
        new InternalInterpreter(ParseUtil.parseModule(ASSUME_LOAD_GLOBAL_VAR_LOCAL_MODULE));
    interpreter.globalEnv().set("target", SEXPs.integer(2));

    var result = interpreter.call("main");

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  private static org.prlprg.sexp.CloSXP staticTarget(
      InternalInterpreter interpreter, EnvSXP cloEnv) {
    return interpreter.closureStub(
        Objects.requireNonNull(interpreter.module().localFunction(Variable.named("static_target"))),
        cloEnv);
  }
}
