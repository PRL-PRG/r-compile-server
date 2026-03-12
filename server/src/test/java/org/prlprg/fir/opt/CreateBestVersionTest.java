package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;

class CreateBestVersionTest {
  @Test
  void testNoCallsNoChange() {
    // A function with no calls — nothing should happen
    var module = new Module();
    var callerFun = module.addFunction(Variable.named("caller"), List.of(), false);
    var feedback = new MockModuleFeedback();

    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    assertEquals(1, callerFun.versions().size());
  }

  @Test
  void testCallWithExactMatchNoChange() {
    // A call whose argument types already exactly match the best version's parameters
    var module = new Module();

    // Create callee with a version that has INTEGER parameters
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), true);
    var intParams = List.of(new Parameter(Variable.register("x"), Type.INTEGER));
    calleeFun.addVersion(intParams, false);

    // Create caller that calls callee with an INTEGER argument
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), false);
    // Override baseline to have INTEGER parameter type so typeOf(a) returns INTEGER
    var callerVersion =
        callerFun.addVersion(List.of(new Parameter(Variable.register("a"), Type.INTEGER)), false);
    assert callerVersion.cfg() != null;

    var call =
        new Call(
            new DispatchCallee(calleeFun, null),
            ImmutableList.of(new Read(Variable.register("a"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should still have 2 versions (baseline stub + INTEGER version), no new one added
    assertEquals(2, calleeFun.versions().size());
  }

  @Test
  void testCallWithMismatchCreatesNewVersion() {
    // A call whose argument types are more specific than the best version's parameters
    var module = new Module();

    // Create callee with only a baseline (ANY) version
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), false);

    // Create caller with an INTEGER parameter calling the callee
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var callerVersion =
        callerFun.addVersion(List.of(new Parameter(Variable.register("a"), Type.INTEGER)), false);
    assert callerVersion.cfg() != null;

    var call =
        new Call(
            new DispatchCallee(calleeFun, null),
            ImmutableList.of(new Read(Variable.register("a"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should now have a new version with INTEGER parameter
    assertEquals(2, calleeFun.versions().size());
    var versions = List.copyOf(calleeFun.versions());
    var newVersion = versions.get(1);
    assertEquals(Type.INTEGER, newVersion.parameters().getFirst().type());
  }

  @Test
  void testVersionLimitPreventsCreation() {
    // When the callee already has versions at the limit, no new version is created
    var module = new Module();

    // Create callee with a baseline version
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), false);

    // Create caller with INTEGER parameter
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var callerVersion =
        callerFun.addVersion(List.of(new Parameter(Variable.register("a"), Type.INTEGER)), false);
    assert callerVersion.cfg() != null;

    var call =
        new Call(
            new DispatchCallee(calleeFun, null),
            ImmutableList.of(new Read(Variable.register("a"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    // Set version limit to 1 — callee already has 1 version (baseline)
    var opt = new CreateBestVersion(1);
    opt.run(feedback, callerFun);

    // Should not add a new version since limit is reached
    assertEquals(1, calleeFun.versions().size());
  }

  @Test
  void testStubVersionSkipped() {
    // When the best version is a stub, don't create a new version
    var module = new Module();

    // Create callee with only a stub baseline
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), true);

    // Create caller with INTEGER parameter
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var callerVersion =
        callerFun.addVersion(List.of(new Parameter(Variable.register("a"), Type.INTEGER)), false);
    assert callerVersion.cfg() != null;

    var call =
        new Call(
            new DispatchCallee(calleeFun, null),
            ImmutableList.of(new Read(Variable.register("a"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should still have only the stub baseline
    assertEquals(1, calleeFun.versions().size());
  }

  @Test
  void testNullCalleeFunction() {
    // When the callee has no function (DynamicCallee), nothing happens
    var module = new Module();

    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var callerVersion =
        callerFun.addVersion(List.of(new Parameter(Variable.register("a"), Type.INTEGER)), false);
    assert callerVersion.cfg() != null;

    // Use a DynamicCallee which returns null for function()
    var call =
        new Call(
            new org.prlprg.fir.ir.callee.DynamicCallee(new Read(Variable.register("a"))),
            ImmutableList.of(new Read(Variable.register("a"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    var opt = new CreateBestVersion(10);

    // Should not throw, just skip
    opt.run(feedback, callerFun);
  }

  @Test
  void testMultipleParameters() {
    // A call with multiple arguments creates a version with all narrowed types
    var module = new Module();

    // Create callee with two ANY parameters
    var calleeFun =
        module.addFunction(
            Variable.named("callee"), List.of(Variable.named("x"), Variable.named("y")), false);

    // Create caller with INTEGER and REAL parameters
    var callerFun =
        module.addFunction(
            Variable.named("caller"), List.of(Variable.named("a"), Variable.named("b")), true);
    var callerVersion =
        callerFun.addVersion(
            List.of(
                new Parameter(Variable.register("a"), Type.INTEGER),
                new Parameter(Variable.register("b"), Type.REAL)),
            false);
    assert callerVersion.cfg() != null;

    var call =
        new Call(
            new DispatchCallee(calleeFun, null),
            ImmutableList.of(new Read(Variable.register("a")), new Read(Variable.register("b"))));
    callerVersion.cfg().entry().appendStatement(new Statement(call));

    var feedback = new MockModuleFeedback();
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should now have a new version with INTEGER, REAL parameters
    assertEquals(2, calleeFun.versions().size());
    var versions = List.copyOf(calleeFun.versions());
    var newVersion = versions.get(1);
    assertEquals(Type.INTEGER, newVersion.parameters().get(0).type());
    assertEquals(Type.REAL, newVersion.parameters().get(1).type());
  }
}
