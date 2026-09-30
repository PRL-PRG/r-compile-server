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
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.LazyCopy;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.session.gnur.GNUR;

class Fir2CCompilerTest {
  private static final String MAIN_FUNCTION = "main";

  private static final String ASSUME_LOAD_VAR_MODULE =
      """
      fun main() {
        () --> V {
          check BBopt() else BBfail();
        BBopt():
          ld target ?= <int 1>;
          return <int 1>;
        BBfail():
          return <int 0>;
        }
      }
      """;

  @Test
  void emitsDedicatedGuardForAssumeLoadVar() {
    assertTrue(
        compileMainToC().contains("Fir_assume_load_var("),
        "generated C should use the dedicated var assumption helper");
  }

  /// `main` calls a version of `f` that's an unevaluated copy of its `v1(I)` version.
  private static Module moduleWithLazyVersion() {
    var module =
        ParseUtil.parseModule(
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
            """);
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var source = f.versions().first();
    LazyCopy.create(
        new NoOptimization(),
        new MockModuleFeedback(module),
        f,
        source,
        List.of(Type.BOXED_INTEGER));
    return module;
  }

  private static final class NoOptimization extends Optimization {
    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      return false;
    }
  }

  @Test
  void unevaluatedVersionCompilesToAStubThenAPatch() {
    var module = moduleWithLazyVersion();
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var copy = f.versions().first();
    assertFalse(copy.isEvaluated());

    var session =
        new Fir2CSession(
            "m",
            module,
            GNUR.instance().getSession(),
            null,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    var compiled = Fir2CCompiler.compile(session, main);
    var code = compiled.code().toString();

    assertFalse(copy.isEvaluated(), "compiling doesn't evaluate the version");
    var state = Objects.requireNonNull(session.version(copy));
    assertTrue(state.isStub());
    assertEquals(List.of(copy), session.stubs());
    assertTrue(
        code.contains(
            "Fir_Stub Fir_m_ver_stub_f_" + state.stubPart() + " = {.module = \"m\", .id = 0"),
        code);
    assertTrue(code.contains("Fir_stub_enter(&Fir_m_ver_stub_f_" + state.stubPart() + ")"), code);
    assertTrue(
        code.contains("Fir_m_ver_call_f_vec_int_fx_none_ret_value(env, r_x)"),
        "the fallback calls the source, in the same environment:\n" + code);
    assertTrue(code.contains("Fir_m_ver_call_f_baseline("), "with the module prefix:\n" + code);

    var patch = Fir2CCompiler.compileStub(session, 0);
    assertNotNull(patch);
    assertTrue(copy.isEvaluated(), "compiling the patch evaluates the version");
    var patchCode = patch.code().toString();
    assertTrue(patch.init().startsWith("Fir_m_patch_init_"), patch.init());
    assertTrue(patchCode.contains(patch.init() + "(SEXP pool)"), patchCode);
    assertTrue(
        patchCode.contains(
            "Fir_stub_compiled(&Fir_m_ver_stub_f_" + state.stubPart() + ", (void *)"),
        "the patch replaces the stub:\n" + patchCode);
    assertTrue(
        patchCode.contains("extern Fir_Stub Fir_m_ver_stub_f_" + state.stubPart()),
        "the stub is in the piece the client already has:\n" + patchCode);
    assertFalse(Objects.requireNonNull(session.version(copy)).isStub());

    assertNull(
        Fir2CCompiler.compileStub(session, 0), "the client already has the compiled version");
  }

  @Test
  void narrowedVersionsStubIsPatchedThroughABoxingAdapter() {
    var module = moduleWithLazyVersion();
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var copy = f.versions().first();

    var session =
        new Fir2CSession(
            "m",
            module,
            GNUR.instance().getSession(),
            null,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    Fir2CCompiler.compile(session, main);
    var stub = Objects.requireNonNull(session.version(copy));
    assertTrue(stub.isStub());
    assertEquals(Repr.SEXP, stub.returnRepr());
    assertEquals(Repr.SEXP, stub.stubReturnRepr());

    // Evaluate the version and narrow its return type to an unboxed integer, like optimizing it
    // (`Unbox`, then `ImproveSignatures`) would.
    var unboxedInt = Type.primitiveScalar(PrimitiveKind.INTEGER);
    var entry = copy.body().entry();
    var returned = entry.jump().args().getFirst();
    var unbox =
        new Statement(
            new Call(
                new StaticFnCallee(
                    UNBOX_FUN,
                    false,
                    new Signature(ImmutableList.of(Type.BOXED_INTEGER), unboxedInt, Effects.NONE))),
            List.of(Constant.ELIDED_CLOSURE, returned));
    var u = unbox.setAssignee(copy.freshName("u"), unboxedInt);
    entry.appendStatement(unbox);
    entry.setJump(new Jump(new Return(), List.of(new Read(u))));
    copy.setReturnType(unboxedInt);

    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, 0));
    var patchCode = patch.code().toString();
    var compiled = Objects.requireNonNull(session.version(copy));
    assertFalse(compiled.isStub());
    assertEquals(Repr.INT, compiled.returnRepr());
    assertEquals(Repr.SEXP, compiled.stubReturnRepr(), "the stub still returns what it did");
    var compiledCName = "Fir_m_ver_call_f_" + compiled.part();
    var adapterCName = "Fir_m_ver_call_f_" + stub.stubPart() + "_boxed";
    assertTrue(
        patchCode.contains("int " + compiledCName + "(SEXP env, SEXP r_x)"),
        "the compiled version returns the unboxed integer:\n" + patchCode);
    assertTrue(
        patchCode.contains("SEXP " + adapterCName + "(SEXP env, SEXP r_x)"),
        "the adapter has the stub's signature:\n" + patchCode);
    assertTrue(
        patchCode.contains(
            "return Fir_ver_call_box_scalar_int_fx_none_ret_vec1_int(R_EmptyEnv, "
                + compiledCName
                + "(env, r_x));"),
        "the adapter boxes what the compiled version returns:\n" + patchCode);
    assertTrue(
        patchCode.contains(
            "Fir_stub_compiled(&Fir_m_ver_stub_f_"
                + stub.stubPart()
                + ", (void *)"
                + adapterCName
                + ");"),
        "the stub is patched with the adapter:\n" + patchCode);
  }

  @Test
  void callsToANarrowedCompiledVersionUnboxWhatItsCodeReturns() {
    var module = moduleWithLazyVersion();
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var copy = f.versions().first();
    var source = f.versions().last();
    var unboxedInt = Type.primitiveScalar(PrimitiveKind.INTEGER);

    // Another lazy version, whose body (once evaluated) calls `copy` by its signature then.
    var caller =
        f.addVersion(
            List.of(new FunctionParameter("x", Type.BOXED_INTEGER)),
            body -> {
              var x = body.scope().parameters().getFirst();
              var call =
                  new Statement(
                      new Call(new StaticFnCallee(f, false, copy.signature())),
                      List.of(Constant.ELIDED_CLOSURE, new Read(x)));
              var r = call.setAssignee(body.scope().freshName("r"), copy.returnType());
              body.entry().appendStatement(call);
              body.entry().setJump(new Jump(new Return(), List.of(new Read(r))));
            });
    var fallback = Objects.requireNonNull(caller.lazyBody()).initFallback().entry();
    var fallbackCall =
        new Statement(
            new Call(new FallbackCallee(source.signature())),
            List.of(Constant.ELIDED_CLOSURE, new Read(caller.parameters().getFirst())));
    var fallbackResult = fallbackCall.setAssignee(caller.freshName("r"), Type.ANY_VALUE_SEXP);
    fallback.appendStatement(fallbackCall);
    fallback.setJump(new Jump(new Return(), List.of(new Read(fallbackResult))));

    var session =
        new Fir2CSession(
            "m",
            module,
            GNUR.instance().getSession(),
            null,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    Fir2CCompiler.compile(session, main);
    var copyStub = Objects.requireNonNull(Objects.requireNonNull(session.version(copy)).stubId());
    var callerStub =
        Objects.requireNonNull(Objects.requireNonNull(session.version(caller)).stubId());

    // The client gets `copy` compiled, returning a boxed integer...
    Objects.requireNonNull(Fir2CCompiler.compileStub(session, copyStub));
    var compiledCopy = Objects.requireNonNull(session.version(copy));
    assertEquals(Repr.SEXP, compiledCopy.returnRepr());
    var copyCallCName = "Fir_m_ver_call_f_" + compiledCopy.part();

    // ...and then its signature is narrowed (say by a later optimization run), without the
    // client's code for it changing.
    copy.setReturnType(unboxedInt);
    caller.setReturnType(unboxedInt);

    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, callerStub));
    var patchCode = patch.code().toString();
    assertEquals(
        Repr.SEXP,
        Objects.requireNonNull(session.version(copy)).returnRepr(),
        "what the client has doesn't change");
    assertTrue(
        patchCode.contains("SEXP " + copyCallCName + "(SEXP env, SEXP r_x)"),
        "the compiled version is declared as it was compiled:\n" + patchCode);
    assertFalse(patchCode.contains("int " + copyCallCName + "("), patchCode);
    assertTrue(
        patchCode.contains(
            "Fir_ver_call_unbox_vec1_int_borrowed_fx_none_ret_scalar_int(R_EmptyEnv, "
                + copyCallCName
                + "(R_EmptyEnv, r_x))"),
        "the call unboxes what the compiled version returns:\n" + patchCode);
  }

  private static String compileMainToC() {
    var module = ParseUtil.parseModule(Fir2CCompilerTest.ASSUME_LOAD_VAR_MODULE);
    var main = module.localFunction(Variable.named(MAIN_FUNCTION));
    assertNotNull(main, "FIR module missing main function");

    return Fir2CCompiler.compile(main, GNUR.instance().getSession(), Option.values())
        .code()
        .toString();
  }
}
