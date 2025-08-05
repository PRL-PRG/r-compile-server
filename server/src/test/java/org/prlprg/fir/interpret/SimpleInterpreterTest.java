package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertThrows;

import java.util.List;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Fine-grained tests for the FIR interpreter where everything is hard-coded.
final class SimpleInterpreterTest {
  private Module module;
  private Interpreter interpreter;

  @BeforeEach
  void setUp() {
    // The interpreter supports functions being added to the module after creation.
    module = new Module();
    interpreter = new Interpreter(module);
  }

  @Test
  void testSimpleConstantReturn() {
    // Create a function that returns constant 42
    // fun test { () --> I { | return 42; } }
    var function = module.addFunction("test");
    var version = function.addVersion(List.of());

    var cfg = version.cfg();
    var entry = cfg.entry();

    // Add return instruction: return 42
    var returnInstr = new Return(new Constant(SEXPs.integer(42)));
    entry.setJump(returnInstr);

    // Interpret the function
    var result = interpreter.call("test");

    // Verify result
    assertEquals(42, result.asScalarInteger().orElseThrow());
  }

  @Test
  void testParameterAccess() {
    // Create a function that returns its parameter
    // fun test { (reg r:I) --> I { | return r; } }
    var function = module.addFunction("test");
    var param = new Parameter(Variable.register("r"), Type.INTEGER);
    var version = function.addVersion(List.of(param));

    var cfg = version.cfg();
    var entry = cfg.entry();

    // Add return instruction: return r
    var returnInstr = new Return(new Read(param.variable()));
    entry.setJump(returnInstr);

    // Interpret the function with argument 123
    var result = interpreter.call("test", SEXPs.integer(123));

    // Verify result
    assertNotNull(result);
    assertEquals(123, result.asScalarInteger().orElseThrow());
  }

  @Test
  void testArgumentCountMismatch() {
    // Create a function that expects one parameter
    var function = module.addFunction("test");
    var param = new Parameter(Variable.register("r"), Type.INTEGER);
    var version = function.addVersion(List.of(param));

    var cfg = version.cfg();
    var entry = cfg.entry();
    entry.setJump(new Return(new Constant(SEXPs.integer(0))));

    // Try to call with wrong number of arguments
    assertThrows(InterpreterException.class, () -> interpreter.call("test"));

    assertThrows(
        InterpreterException.class,
        () -> interpreter.call("test", SEXPs.integer(1), SEXPs.integer(2)));
  }

  @Test
  void testNoVersionsAvailable() {
    // Create a function with no versions
    module.addFunction("test");

    // Try to interpret
    assertThrows(InterpreterException.class, () -> interpreter.call("test"));
  }

  @Test
  void testUninitializedRegister() {
    // Create a function that tries to read uninitialized register
    var function = module.addFunction("test");
    var version = function.addVersion(List.of());

    var cfg = version.cfg();
    var entry = cfg.entry();

    // Try to return uninitialized register
    var uninitializedReg = Variable.register("uninitialized");
    var returnInstr = new Return(new Read(uninitializedReg));
    entry.setJump(returnInstr);

    // Should throw exception
    assertThrows(InterpreterException.class, () -> interpreter.call("test"));
  }
}
