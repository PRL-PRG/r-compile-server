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
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.module.Module;
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
