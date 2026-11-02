package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.LazyCopy;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.fir2c.Fir2CCompilerTest.NoOptimization;
import org.prlprg.session.gnur.GNUR;

/// A version that optimizing doesn't change once it's evaluated is the same as its fallback, so
/// the client keeps running the fallback instead of getting it compiled (see
/// `server/doc/lazy-versions.md`).
class FallbackEquivalentVersionTest {
  private static final String MODULE =
      """
      fun main() {
        () -+> V {
          r: V = f< v1(I) --> V >(<int 41>);
          return r;
        }
      }

      fun f(x) {
        (x:*) -+> V {
          v: V = force? x;
          return v;
        }
        (x:v(I)) --> V {
          r: v(I) = `+`< v(I),v(I) --> v(I) >(x, <int 1>);
          return r;
        }
      }
      """;

  @Test
  void unchangedCopyKeepsItsFallback() {
    // `f`'s versions are at a fixpoint, so a copy of one with its signature is too.
    var module = ParseUtil.parseModule(MODULE);
    var optimizations = Optimizations.defaultOptimizations();
    var feedback = new MockModuleFeedback(module);
    optimizations.run(feedback, module);
    var f = f(module);
    var source = f.versions().first();
    var copy =
        LazyCopy.create(
            optimizations,
            feedback,
            f,
            source,
            source.parameters().stream().map(FunctionParameter::type).toList());
    var session = compile(module);
    var stubId = Objects.requireNonNull(Objects.requireNonNull(session.version(copy)).stubId());

    var answer = Fir2CCompiler.compileStub(session, stubId);
    assertTrue(copy.isEvaluated());
    assertTrue(answer.fallback(), "the stub keeps its fallback:\n" + module);
    assertNull(answer.patch(), "and the client needs nothing else");
    assertTrue(Objects.requireNonNull(session.version(copy)).isStub());
  }

  @Test
  void changedCopyIsCompiled() {
    // A copy of the baseline that takes an integer, so `force?` (of a value) is elided.
    var module = ParseUtil.parseModule(MODULE);
    var f = f(module);
    var copy =
        LazyCopy.create(
            Optimizations.defaultOptimizations(),
            new MockModuleFeedback(module),
            f,
            f.baseline(),
            List.of(Type.BOXED_INTEGER));
    var session = compile(module);
    var stubId = Objects.requireNonNull(Objects.requireNonNull(session.version(copy)).stubId());

    var answer = Fir2CCompiler.compileStub(session, stubId);
    assertFalse(answer.fallback(), "optimizing changed the copy:\n" + module);
    assertNotNull(answer.patch());
    assertFalse(Objects.requireNonNull(session.version(copy)).isStub());
  }

  @Test
  void compiledVersionThatBecomesRedundantIsReverted() {
    var module = Fir2CCompilerTest.moduleWithLazyVersion(new NoOptimization());
    var f = f(module);
    var copy = f.versions().first();
    var other =
        LazyCopy.create(
            new NoOptimization(),
            new MockModuleFeedback(module),
            f,
            f.baseline(),
            List.of(Type.ANY_VALUE_SEXP));
    var session = compile(module);
    var copyStub = Objects.requireNonNull(Objects.requireNonNull(session.version(copy)).stubId());
    var otherStub = Objects.requireNonNull(Objects.requireNonNull(session.version(other)).stubId());
    var part = Objects.requireNonNull(session.version(copy)).part();

    // The client gets `copy` compiled, since it changed after it was evaluated...
    copy.body();
    copy.comments().add(" changed");
    assertNotNull(Fir2CCompiler.compileStub(session, copyStub).patch());
    assertFalse(Objects.requireNonNull(session.version(copy)).isStub());

    // ...and then the change is undone, so it's the same as its fallback again.
    copy.comments().clear();
    other.body();
    other.comments().add(" changed");
    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, otherStub).patch());
    var patchCode = patch.code().toString();
    var stubImplCName = "Fir_m_ver_impl_f_" + part + "_0";
    assertTrue(
        patchCode.contains("extern SEXP " + stubImplCName + "(SEXP env, SEXP r_x);"),
        "the stub's implementation is in the piece the client has:\n" + patchCode);
    assertTrue(
        patchCode.contains("Fir_m_ver_call_f_" + part + " = " + stubImplCName + ";"),
        "the entry is assigned the stub:\n" + patchCode);
    assertTrue(
        patchCode.contains("Fir_stub_fallback(&Fir_m_ver_stub_f_" + part + ");"),
        "which runs its fallback from now on:\n" + patchCode);
    var reverted = Objects.requireNonNull(session.version(copy));
    assertTrue(reverted.isStub());
    assertNull(reverted.ir());

    // When it changes again, the next patch compiles it again.
    copy.comments().add(" changed again");
    var again = Objects.requireNonNull(Fir2CCompiler.compileStub(session, copyStub).patch());
    var againCode = again.code().toString();
    var implCName = "Fir_m_ver_impl_f_" + part + "_2";
    assertTrue(
        againCode.contains("Fir_m_ver_call_f_" + part + " = " + implCName + ";")
            && againCode.contains(
                "Fir_stub_compiled(&Fir_m_ver_stub_f_" + part + ", (void *)" + implCName + ");"),
        againCode);
    assertFalse(Objects.requireNonNull(session.version(copy)).isStub());
  }

  @Test
  void revertedNarrowedVersionUnboxesWhatItsStubReturns() {
    var module = Fir2CCompilerTest.moduleWithLazyVersion(new NoOptimization());
    var f = f(module);
    var copy = f.versions().first();
    var other =
        LazyCopy.create(
            new NoOptimization(),
            new MockModuleFeedback(module),
            f,
            f.baseline(),
            List.of(Type.ANY_VALUE_SEXP));
    var session = compile(module);
    var copyStub = Objects.requireNonNull(Objects.requireNonNull(session.version(copy)).stubId());
    var otherStub = Objects.requireNonNull(Objects.requireNonNull(session.version(other)).stubId());
    var stubPart = Objects.requireNonNull(session.version(copy)).part();

    // The client gets `copy` compiled with its return type narrowed to an unboxed integer...
    var entry = copy.body().entry();
    var returned = entry.jump().args().getFirst();
    var unbox =
        new Statement(
            new Call(
                new StaticFnCallee(
                    UNBOX_FUN,
                    false,
                    new Signature(
                        ImmutableList.of(Type.BOXED_INTEGER), Type.INTEGER, Effects.NONE))),
            List.of(Constant.ELIDED_CLOSURE, returned));
    var u = unbox.setAssignee(copy.freshName("u"), Type.INTEGER);
    entry.appendStatement(unbox);
    entry.setJump(new Jump(new Return(), List.of(new Read(u))));
    var returnType = copy.returnType();
    copy.setReturnType(Type.INTEGER);
    assertNotNull(Fir2CCompiler.compileStub(session, copyStub).patch());
    var compiled = Objects.requireNonNull(session.version(copy));
    assertEquals(Repr.INT, compiled.returnRepr());
    var newPart = compiled.part();

    // ...and then that's undone.
    entry.setJump(new Jump(new Return(), List.of(returned)));
    unbox.detach();
    copy.setReturnType(returnType);
    other.body();
    other.comments().add(" changed");
    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, otherStub).patch());
    var patchCode = patch.code().toString();
    var stubImplCName = "Fir_m_ver_impl_f_" + stubPart + "_0";
    var adapterCName = stubImplCName + "_as_int";
    assertTrue(
        patchCode.contains("Fir_m_ver_call_f_" + stubPart + " = " + stubImplCName + ";")
            && patchCode.contains("Fir_m_ver_call_f_" + newPart + " = " + adapterCName + ";"),
        "the newer entry, which returns an integer, is assigned an adapter:\n" + patchCode);
    assertTrue(
        patchCode.contains("static int " + adapterCName + "(SEXP env, SEXP r_x)")
            && patchCode.contains("Fir_ver_call_unbox_")
            && patchCode.contains(stubImplCName + "(env, r_x))"),
        "which unboxes what the stub returns:\n" + patchCode);
    assertTrue(Objects.requireNonNull(session.version(copy)).isStub());
  }

  private static Fir2CSession compile(Module module) {
    var session =
        new Fir2CSession(
            "m",
            module,
            GNUR.instance().getSession(),
            null,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    Fir2CCompiler.compile(
        session, Objects.requireNonNull(module.localFunction(Variable.named("main"))));
    return session;
  }

  private static Function f(Module module) {
    return Objects.requireNonNull(module.localFunction(Variable.named("f")));
  }
}
