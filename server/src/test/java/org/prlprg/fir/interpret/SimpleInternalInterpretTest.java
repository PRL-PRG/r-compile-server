package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import com.google.common.collect.ImmutableList;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicReference;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Fine-grained tests for [InternalInterpreter] with hard-coded module creation and checks.
class SimpleInternalInterpretTest {
  private Module module;
  private Interpreter interpreter;

  @BeforeEach
  void setUp() {
    // The interpreter supports functions being added to the module after creation.
    module = new Module();
    interpreter = new InternalInterpreter(module);
  }

  @Test
  void testSimpleConstantReturn() {
    // Create a function that returns constant 42
    // fun test() { () --> I { | return 42; } }
    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();
    version.setReturnType(Type.INTEGER);

    var cfg = version.body();
    var entry = cfg.entry();

    // Add return instruction: return 42
    entry.setJump(new Jump(new Return(), List.of(new Constant(new Value.Int(42)))));

    // Interpret the function
    var result = interpreter.call("test");

    // Verify result
    assertEquals(new Value.Int(42), result);
  }

  @Test
  void testParameterAccess() {
    // Create a function that returns its parameter
    // fun test(r) { (r:I) --> I { | return r; } }
    var param = new FunctionParameter("r", Type.INTEGER);
    var function =
        module.addFunction(
            Variable.named("test"), List.of(Variable.named("r")), List.of(param), false);
    var version = function.baseline();
    version.setReturnType(Type.INTEGER);

    var cfg = version.body();
    var entry = cfg.entry();

    // Add return instruction: return r
    entry.setJump(new Jump(new Return(), List.of(new Read(param))));

    // Interpret the function with argument 123
    var result = interpreter.call("test", new Value.Int(123));

    // Verify result
    assertNotNull(result);
    assertEquals(new Value.Int(123), result);
  }

  @Test
  void testArgumentCountMismatch() {
    // Create a function that expects one parameter
    var function = module.addFunction(Variable.named("test"), List.of(Variable.named("r")), false);
    var version = function.baseline();

    var cfg = version.body();
    var entry = cfg.entry();
    entry.setJump(new Jump(new Return(), List.of(new Constant(SEXPs.integer(0)))));

    // Try to call with wrong number of arguments
    assertThrows(InterpretException.class, () -> interpreter.call("test"));

    assertThrows(
        InterpretException.class,
        () -> interpreter.call("test", new Value.Int(1), new Value.Int(2)));
  }

  @Test
  void mkEnvElidedLocalStoreCrashes() {
    // fun test() { () --> V { | mkenv-; st x = <int 1>; return <int 0>; } }
    // A local store to an elided environment is illegal: it should have been removed/super-stored.
    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();

    var entry = version.body().entry();
    entry.appendStatement(new Statement(new MkEnv(MkEnvType.ELIDED)));
    entry.appendStatement(
        new Statement(
            new Store(StoreType.LOCAL_VAR, Variable.named("x")),
            List.of(new Constant(SEXPs.integer(1)))));
    entry.setJump(new Jump(new Return(), List.of(new Constant(SEXPs.integer(0)))));

    assertThrows(InterpretException.class, () -> interpreter.call("test"));
  }

  @Test
  void mkEnvElidedLoadPassesThrough() {
    // fun test() { () --> V { reg r:V | mkenv-; r = ld x; return r; } }
    // Loads pass through an elided environment as if it were empty, finding `x` in the parent.
    var interp = (InternalInterpreter) interpreter;
    interp.globalEnv().set("x", SEXPs.integer(7));

    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();
    version.setReturnType(Type.ANY_VALUE_SEXP);

    var entry = version.body().entry();
    entry.appendStatement(new Statement(new MkEnv(MkEnvType.ELIDED)));
    var loadStmt = new Statement(new Load(LoadType.LOCAL_VAR, Variable.named("x")));
    entry.appendStatement(loadStmt);
    var r = loadStmt.setAssignee("r", Type.ANY_VALUE_SEXP);
    entry.setJump(new Jump(new Return(), List.of(new Read(r))));

    var result = interpreter.call("test");

    assertEquals(new Value.Sexp(SEXPs.integer(7)), result);
  }

  @Test
  void sysFrameMarksCallerEnvironmentReflective() {
    // fun main() { mkenv; r = inner(); popenv; return r; }
    // fun inner() { vargs = dots[<int -1>]; r = sys.frame(vargs); return r; }
    // `sys.frame(-1)` accesses `main`'s frame, marking `main`'s `mkenv` reflective.
    var interp = (InternalInterpreter) interpreter;
    registerBuiltins(interp);

    var inner = module.addFunction(Variable.named("inner"), List.of(), false);
    var innerV = inner.baseline();
    innerV.setReturnType(Type.ANY_VALUE_SEXP);
    var innerEntry = innerV.body().entry();
    var vargsStmt =
        new Statement(
            new MkVector(new Kind.Dots(), Collections.<NamedVariable>singletonList(null)),
            List.of(new Constant(SEXPs.integer(-1))));
    innerEntry.appendStatement(vargsStmt);
    var vargs = vargsStmt.setAssignee("vargs", Type.DOTS);
    var sysFrame = Objects.requireNonNull(module.lookupFunction(Variable.named("sys.frame")));
    var sysFrameSig =
        new Signature(ImmutableList.of(Type.DOTS), Type.ANY_VALUE_SEXP, Effects.REFLECT);
    var innerCallStmt =
        new Statement(
            new Call(new StaticFnCallee(sysFrame, true, sysFrameSig)),
            List.of(Constant.ELIDED_CLOSURE, new Read(vargs)));
    innerEntry.appendStatement(innerCallStmt);
    var innerR = innerCallStmt.setAssignee("r", Type.ANY_VALUE_SEXP);
    innerEntry.setJump(new Jump(new Return(), List.of(new Read(innerR))));

    var main = module.addFunction(Variable.named("main"), List.of(), false);
    var mainV = main.baseline();
    mainV.setReturnType(Type.ANY_VALUE_SEXP);
    var mainEntry = mainV.body().entry();
    mainEntry.appendStatement(new Statement(new MkEnv(MkEnvType.REGULAR)));
    var innerSig = new Signature(ImmutableList.of(), Type.ANY_VALUE_SEXP, Effects.REFLECT);
    var mainCallStmt =
        new Statement(
            new Call(new StaticFnCallee(inner, false, innerSig)), List.of(Constant.ELIDED_CLOSURE));
    mainEntry.appendStatement(mainCallStmt);
    var mainR = mainCallStmt.setAssignee("r", Type.ANY_VALUE_SEXP);
    mainEntry.appendStatement(new Statement(new PopEnv()));
    mainEntry.setJump(new Jump(new Return(), List.of(new Read(mainR))));

    interpreter.call("main");

    assertEquals(1, interpreter.feedback().get(main.baseline()).reflectiveEnvs.size());
    assertEquals(0, interpreter.feedback().get(inner.baseline()).reflectiveEnvs.size());
  }

  @Test
  void testUninitializedRegister() {
    // Create a function that tries to read uninitialized register
    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();

    var cfg = version.body();
    var entry = cfg.entry();

    // Define a register in an unreachable block, then return it from the entry: at runtime its
    // defining statement never executes, so reading it fails (an "uninitialized" register).
    var dead = cfg.addBB();
    var deadStmt = new Statement(new Noop());
    var uninitializedReg = deadStmt.setAssignee("uninitialized", Type.ANY_VALUE_SEXP);
    dead.appendStatement(deadStmt);
    dead.setJump(new Jump(new Unreachable()));

    entry.setJump(new Jump(new Return(), List.of(new Read(uninitializedReg))));

    // Should throw exception
    assertThrows(InterpretException.class, () -> interpreter.call("test"));
  }

  /// A test timeout interrupts the test thread, and an infinite loop must not ignore that.
  @Test
  void testInterruptStopsInfiniteLoop() throws InterruptedException {
    var loop =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> v1(I) {
                goto LOOP();
              LOOP():
                goto LOOP();
              }
            }
            """);
    var thrown = new AtomicReference<Throwable>();
    var thread =
        new Thread(
            () -> {
              try {
                new InternalInterpreter(loop).call("main");
              } catch (Throwable e) {
                thrown.set(e);
              }
            });

    thread.start();
    Thread.sleep(100);
    thread.interrupt();
    thread.join(10_000);

    assertFalse(thread.isAlive());
    assertInstanceOf(CancellationException.class, thrown.get(), () -> String.valueOf(thrown.get()));
  }

  /// `goto H(b, a, k2)` swaps `a` and `b`: phis are assigned in parallel.
  @Test
  void phiArgumentThatIsAnotherPhiOfTheTarget_readsTheOldValue() {
    var parsed =
        ParseUtil.parseModule(
            """
            fun f(n) {
              (n:*) -+> V { ... }
              (n:I) -+> v1(I) {
                goto H(1, 2, 0);
              H(a: I, b: I, k: I):
                c: L = `<`< I,I --> L >(k, n);
                t: B = naToFalse< L --> B >(c);
                if t then B1() else E();
              B1():
                k2: I = `+`< I,I --> I >(k, 1);
                goto H(b, a, k2);
              E():
                d: I = `*`< I,I --> I >(a, 10);
                e: I = `+`< I,I --> I >(d, b);
                r: v1(I) = box< I --> v1(I) >(e);
                return r;
              }
            }
            """);
    var swapper = new InternalInterpreter(parsed);
    registerBuiltins(swapper);
    assertEquals(
        new Value.Sexp(SEXPs.integer(21)), swapper.call("f", new Value.Int(1)), "one swap");
    assertEquals(
        new Value.Sexp(SEXPs.integer(12)), swapper.call("f", new Value.Int(2)), "two swaps");
  }
}
