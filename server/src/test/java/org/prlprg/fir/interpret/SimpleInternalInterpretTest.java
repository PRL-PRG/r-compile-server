package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
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

    var cfg = Objects.requireNonNull(version.cfg());
    var entry = cfg.entry();

    // Add return instruction: return 42
    var returnInstr = new Return(new Constant(new Value.Int(42)));
    entry.setJump(returnInstr);

    // Interpret the function
    var result = interpreter.call("test");

    // Verify result
    assertEquals(new Value.Int(42), result);
  }

  @Test
  void testParameterAccess() {
    // Create a function that returns its parameter
    // fun test(r) { (reg r:I) --> I { | return r; } }
    var param = new Parameter(Variable.register("r"), Type.INTEGER);
    var function =
        module.addFunction(
            Variable.named("test"), List.of(Variable.named("r")), List.of(param), false);
    var version = function.baseline();
    version.setReturnType(Type.INTEGER);

    var cfg = Objects.requireNonNull(version.cfg());
    var entry = cfg.entry();

    // Add return instruction: return r
    var returnInstr = new Return(new Read(param.variable()));
    entry.setJump(returnInstr);

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

    var cfg = Objects.requireNonNull(version.cfg());
    var entry = cfg.entry();
    entry.setJump(new Return(new Constant(SEXPs.integer(0))));

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

    var entry = Objects.requireNonNull(version.cfg()).entry();
    entry.appendStatement(new Statement(new MkEnv(MkEnvType.ELIDED)));
    entry.appendStatement(
        new Statement(
            new Store(StoreType.LOCAL_VAR, Variable.named("x"), new Constant(SEXPs.integer(1)))));
    entry.setJump(new Return(new Constant(SEXPs.integer(0))));

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

    var entry = Objects.requireNonNull(version.cfg()).entry();
    var r = version.addLocal("r", Type.ANY_VALUE_SEXP);
    entry.appendStatement(new Statement(new MkEnv(MkEnvType.ELIDED)));
    entry.appendStatement(new Statement(r, new Load(LoadType.LOCAL_VAR, Variable.named("x"))));
    entry.setJump(new Return(new Read(r)));

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
    var innerEntry = Objects.requireNonNull(innerV.cfg()).entry();
    var vargs = innerV.addLocal("vargs", Type.DOTS);
    var innerR = innerV.addLocal("r", Type.ANY_VALUE_SEXP);
    innerEntry.appendStatement(
        new Statement(
            vargs,
            new MkVector(
                new Kind.Dots(),
                ImmutableList.of(new NamedArgument(new Constant(SEXPs.integer(-1)))))));
    var sysFrame = Objects.requireNonNull(module.lookupFunction(Variable.named("sys.frame")));
    var sysFrameSig =
        new Signature(ImmutableList.of(Type.DOTS), Type.ANY_VALUE_SEXP, Effects.REFLECT);
    innerEntry.appendStatement(
        new Statement(
            innerR,
            new Call(
                new StaticFnCallee(sysFrame, true, Constant.ELIDED_CLOSURE, sysFrameSig),
                ImmutableList.of(new Read(vargs)))));
    innerEntry.setJump(new Return(new Read(innerR)));

    var main = module.addFunction(Variable.named("main"), List.of(), false);
    var mainV = main.baseline();
    mainV.setReturnType(Type.ANY_VALUE_SEXP);
    var mainEntry = Objects.requireNonNull(mainV.cfg()).entry();
    var mainR = mainV.addLocal("r", Type.ANY_VALUE_SEXP);
    mainEntry.appendStatement(new Statement(new MkEnv(MkEnvType.REGULAR)));
    var innerSig = new Signature(ImmutableList.of(), Type.ANY_VALUE_SEXP, Effects.REFLECT);
    mainEntry.appendStatement(
        new Statement(
            mainR,
            new Call(
                new StaticFnCallee(inner, false, Constant.ELIDED_CLOSURE, innerSig),
                ImmutableList.of())));
    mainEntry.appendStatement(new Statement(new PopEnv()));
    mainEntry.setJump(new Return(new Read(mainR)));

    interpreter.call("main");

    assertEquals(1, interpreter.feedback().get(main.baseline()).reflectiveEnvs.size());
    assertEquals(0, interpreter.feedback().get(inner.baseline()).reflectiveEnvs.size());
  }

  @Test
  void testUninitializedRegister() {
    // Create a function that tries to read uninitialized register
    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();

    var cfg = Objects.requireNonNull(version.cfg());
    var entry = cfg.entry();

    // Try to return uninitialized register
    var uninitializedReg = Variable.register("uninitialized");
    var returnInstr = new Return(new Read(uninitializedReg));
    entry.setJump(returnInstr);

    // Should throw exception
    assertThrows(InterpretException.class, () -> interpreter.call("test"));
  }
}
