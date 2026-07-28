package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertThrows;

import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.FunctionParameter;
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
    entry.setJump(new Jump(new Return(), List.of(new Constant(new Value.Int(42)))));

    // Interpret the function
    var result = interpreter.call("test");

    // Verify result
    assertEquals(new Value.Int(42), result);
  }

  @Test
  void testParameterAccess() {
    // Create a function that returns its parameter
    // fun test(r) { (reg r:I) --> I { | return r; } }
    var param = new FunctionParameter("r", Type.INTEGER);
    var function =
        module.addFunction(
            Variable.named("test"), List.of(Variable.named("r")), List.of(param), false);
    var version = function.baseline();
    version.setReturnType(Type.INTEGER);

    var cfg = Objects.requireNonNull(version.cfg());
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

    var cfg = Objects.requireNonNull(version.cfg());
    var entry = cfg.entry();
    entry.setJump(new Jump(new Return(), List.of(new Constant(SEXPs.integer(0)))));

    // Try to call with wrong number of arguments
    assertThrows(InterpretException.class, () -> interpreter.call("test"));

    assertThrows(
        InterpretException.class,
        () -> interpreter.call("test", new Value.Int(1), new Value.Int(2)));
  }

  @Test
  void testUninitializedRegister() {
    // Create a function that tries to read uninitialized register
    var function = module.addFunction(Variable.named("test"), List.of(), false);
    var version = function.baseline();

    var cfg = Objects.requireNonNull(version.cfg());
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
}
