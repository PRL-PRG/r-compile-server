package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Variable;

class CreateBestVersionTest {
  @Test
  void testNoCallsNoChange() {
    // A function with no calls — nothing should happen
    var module = new Module();
    var callerFun = module.addFunction(Variable.named("caller"), List.of(), false);
    var feedback = new MockModuleFeedback(module);

    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    assertEquals(1, callerFun.versions().size());
  }

  @Test
  void testCallWithExactMatchNoChange() {
    // A call whose argument types already exactly match the best version's parameters
    var module = new Module();

    // Create callee with a version that has BOXED_INTEGER parameters
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), true);
    var intParams = List.of(new FunctionParameter("x", Type.BOXED_INTEGER));
    calleeFun.addVersion(intParams, false);

    // Create caller that calls callee with an BOXED_INTEGER argument
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), false);
    // Override baseline to have BOXED_INTEGER parameter type so typeOf(a) returns BOXED_INTEGER
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var callerVersion = callerFun.addVersion(List.of(paramA), false);
    assert callerVersion.cfg() != null;

    var call = new Call(new StaticFnCallee(calleeFun, true, calleeFun.baseline().signature()));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(
            new Statement(call, ImmutableList.of(Constant.ELIDED_CLOSURE, new Read(paramA))));

    var feedback = new MockModuleFeedback(module);
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should still have 2 versions (baseline stub + BOXED_INTEGER version), no new one added
    assertEquals(2, calleeFun.versions().size());
  }

  @Test
  void testCallWithMismatchCreatesNewVersion() {
    // A call whose argument types are more specific than the best version's parameters
    var module = new Module();

    // Create callee with only a baseline (ANY) version
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), false);

    // Create caller with a BOXED_INTEGER parameter calling the callee
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var callerVersion = callerFun.addVersion(List.of(paramA), false);
    assert callerVersion.cfg() != null;

    var call = new Call(new StaticFnCallee(calleeFun, true, calleeFun.baseline().signature()));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(
            new Statement(call, ImmutableList.of(Constant.ELIDED_CLOSURE, new Read(paramA))));

    var feedback = new MockModuleFeedback(module);
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should now have a new version with BOXED_INTEGER parameter
    assertEquals(2, calleeFun.versions().size());
    // First = best, in this case non-baseline
    var newVersion = calleeFun.versions().getFirst();
    assertEquals(Type.BOXED_INTEGER, newVersion.parameters().getFirst().type());
  }

  @Test
  void testVersionLimitPreventsCreation() {
    // When the callee already has versions at the limit, no new version is created
    var module = new Module();

    // Create callee with a baseline version
    var calleeFun =
        module.addFunction(Variable.named("callee"), List.of(Variable.named("x")), false);

    // Create caller with BOXED_INTEGER parameter
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var callerVersion = callerFun.addVersion(List.of(paramA), false);
    assert callerVersion.cfg() != null;

    var call = new Call(new StaticFnCallee(calleeFun, true, calleeFun.baseline().signature()));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(
            new Statement(call, ImmutableList.of(Constant.ELIDED_CLOSURE, new Read(paramA))));

    var feedback = new MockModuleFeedback(module);
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

    // Create caller with BOXED_INTEGER parameter
    var callerFun =
        module.addFunction(Variable.named("caller"), List.of(Variable.named("a")), true);
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var callerVersion = callerFun.addVersion(List.of(paramA), false);
    assert callerVersion.cfg() != null;

    var call = new Call(new StaticFnCallee(calleeFun, true, calleeFun.baseline().signature()));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(
            new Statement(call, ImmutableList.of(Constant.ELIDED_CLOSURE, new Read(paramA))));

    var feedback = new MockModuleFeedback(module);
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
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var callerVersion = callerFun.addVersion(List.of(paramA), false);
    assert callerVersion.cfg() != null;

    // Use a DynamicCallee which returns null for function(). Its args are
    // `[actualCallee, ...callArgs]`, so the callee is `args[0]`.
    var call = new Call(new DynamicCallee(ImmutableList.of(OptionalNamedVariable.empty())));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(new Statement(call, ImmutableList.of(new Read(paramA), new Read(paramA))));

    var feedback = new MockModuleFeedback(module);
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

    // Create caller with BOXED_INTEGER and BOXED_REAL parameters
    var callerFun =
        module.addFunction(
            Variable.named("caller"), List.of(Variable.named("a"), Variable.named("b")), true);
    var paramA = new FunctionParameter("a", Type.BOXED_INTEGER);
    var paramB = new FunctionParameter("b", Type.BOXED_REAL);
    var callerVersion = callerFun.addVersion(List.of(paramA, paramB), false);
    assert callerVersion.cfg() != null;

    var call = new Call(new StaticFnCallee(calleeFun, true, calleeFun.baseline().signature()));
    callerVersion
        .cfg()
        .entry()
        .appendStatement(
            new Statement(
                call,
                ImmutableList.of(Constant.ELIDED_CLOSURE, new Read(paramA), new Read(paramB))));

    var feedback = new MockModuleFeedback(module);
    var opt = new CreateBestVersion(10);
    opt.run(feedback, callerFun);

    // Callee should now have a new version with BOXED_INTEGER, BOXED_REAL parameters
    assertEquals(2, calleeFun.versions().size());
    // First = best, in this case non-baseline
    var newVersion = calleeFun.versions().getFirst();
    assertEquals(Type.BOXED_INTEGER, newVersion.parameters().get(0).type());
    assertEquals(Type.BOXED_REAL, newVersion.parameters().get(1).type());
  }
}
