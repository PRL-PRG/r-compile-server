package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import java.util.List;
import java.util.Objects;
import java.util.regex.Pattern;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.LazyBody;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
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

  /// `main` calls a version of `f` that's an unevaluated copy of its `v1(I)` version, which
  /// optimizing changes (once it's evaluated), so it isn't redundant.
  static Module moduleWithLazyVersion() {
    return moduleWithLazyVersion(new Annotate());
  }

  /// [#moduleWithLazyVersion()], with the copy's optimization `optimization`.
  static Module moduleWithLazyVersion(Optimization optimization) {
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
        optimization,
        optimization,
        new MockModuleFeedback(module),
        f,
        source,
        List.of(Type.BOXED_INTEGER));
    return module;
  }

  /// Changes nothing.
  static final class NoOptimization extends Optimization {
    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      return false;
    }
  }

  /// Changes every version that was evaluated lazily, once: adds a comment.
  static final class Annotate extends Optimization {
    @Override
    public boolean runWithoutRecording(
        Optimization topLevel, ModuleFeedback feedback, Function function) {
      var changed = false;
      for (var version : function.versions()) {
        var lazyBody = version.lazyBody();
        if (lazyBody != null
            && lazyBody.evaluatedFingerprint() != null
            && !version.comments().contains(COMMENT)) {
          version.comments().add(COMMENT);
          changed = true;
        }
      }
      return changed;
    }

    private static final String COMMENT = " optimized";
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
    var part = state.part();
    assertTrue(
        code.contains("Fir_Stub Fir_m_ver_stub_f_" + part + " = {.module = \"m\", .id = 0"), code);
    assertTrue(code.contains("Fir_stub_enter(&Fir_m_ver_stub_f_" + part + ")"), code);
    assertTrue(
        code.contains("SEXP (*Fir_m_ver_call_f_" + part + ")(SEXP env, SEXP r_x);")
            && code.contains("Fir_m_ver_call_f_" + part + " = Fir_m_ver_impl_f_" + part + "_0;"),
        "calls of the version go through an entry, assigned the stub:\n" + code);
    assertTrue(
        code.contains("Fir_m_ver_call_f_vec_int_fx_none_ret_value(env, r_x)"),
        "the fallback calls the source, in the same environment:\n" + code);
    assertTrue(code.contains("Fir_m_ver_call_f_baseline("), "with the module prefix:\n" + code);
    assertTrue(
        code.contains("Fir_fun_data(Fir_m_fun_constants_f)->dispatch_impl(env, signature, args)")
            && code.contains("Fir_fun_data(Fir_m_fun_constants_f)->from_r(env, data)"),
        "the entries forward to their implementations:\n" + code);
    assertTrue(
        code.contains(".dispatch_impl = Fir_m_fun_dispatch_f_0, .from_r = Fir_m_fun_from_r_f_0"),
        "which are generation 0:\n" + code);

    var answer = Fir2CCompiler.compileStub(session, 0);
    assertFalse(answer.fallback());
    var patch = answer.patch();
    assertNotNull(patch);
    assertTrue(copy.isEvaluated(), "compiling the patch evaluates the version");
    var patchCode = patch.code().toString();
    assertTrue(patch.init().startsWith("Fir_m_patch_init_"), patch.init());
    assertTrue(patchCode.contains(patch.init() + "(SEXP pool)"), patchCode);
    var replaced = Objects.requireNonNull(session.version(copy));
    assertFalse(replaced.isStub());
    assertEquals(part, replaced.part(), "same entry (same calling convention)");
    assertEquals(1, replaced.implementation());
    var implCName = "Fir_m_ver_impl_f_" + part + "_1";
    assertTrue(
        patchCode.contains("SEXP " + implCName + "(SEXP env, SEXP r_x)")
            && patchCode.contains("Fir_m_ver_call_f_" + part + " = " + implCName + ";"),
        "the patch defines the compiled version and assigns it to the entry:\n" + patchCode);
    assertTrue(
        patchCode.contains("extern SEXP (*Fir_m_ver_call_f_" + part + ")(SEXP env, SEXP r_x);"),
        "which the client has:\n" + patchCode);
    assertTrue(
        patchCode.contains(
            "Fir_stub_compiled(&Fir_m_ver_stub_f_" + part + ", (void *)" + implCName + ");"),
        "the patch tells the stub:\n" + patchCode);
    assertTrue(
        patchCode.contains("extern Fir_Stub Fir_m_ver_stub_f_" + part),
        "the stub is in the piece the client already has:\n" + patchCode);
    assertFalse(
        patchCode.contains("Fir_fun_set_entries(Fir_m_fun_constants_f"),
        "f's dispatch and from-R already reach the compiled version through the entry, and f has"
            + " the same versions, so they aren't regenerated:\n"
            + patchCode);
    assertFalse(patchCode.contains("Fir_fun_set_entries(Fir_m_fun_constants_main"), patchCode);

    assertNull(
        Fir2CCompiler.compileStub(session, 0).patch(),
        "the client already has the compiled version");
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
    var stubPart = stub.part();

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

    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, 0).patch());
    var patchCode = patch.code().toString();
    var compiled = Objects.requireNonNull(session.version(copy));
    assertFalse(compiled.isStub());
    assertEquals(Repr.INT, compiled.returnRepr());
    assertEquals(2, compiled.entries().size(), "a new entry, for the new calling convention");
    assertEquals(Repr.SEXP, compiled.entries().getFirst().returnRepr(), "the old one is kept");
    var newPart = compiled.part();
    var implCName = "Fir_m_ver_impl_f_" + newPart + "_1";
    var adapterCName = implCName + "_boxed";
    assertTrue(
        patchCode.contains("int " + implCName + "(SEXP env, SEXP r_x)"),
        "the compiled version returns the unboxed integer:\n" + patchCode);
    assertTrue(
        patchCode.contains("int (*Fir_m_ver_call_f_" + newPart + ")(SEXP env, SEXP r_x);")
            && patchCode.contains("Fir_m_ver_call_f_" + newPart + " = " + implCName + ";"),
        "the new entry is defined and assigned it:\n" + patchCode);
    assertTrue(
        patchCode.contains("SEXP " + adapterCName + "(SEXP env, SEXP r_x)")
            && patchCode.contains(
                "return Fir_ver_call_box_scalar_int_fx_none_ret_vec1_int(R_EmptyEnv, "
                    + implCName
                    + "(env, r_x));"),
        "the adapter has the old entry's convention and boxes the result:\n" + patchCode);
    assertTrue(
        patchCode.contains("Fir_m_ver_call_f_" + stubPart + " = " + adapterCName + ";"),
        "the old entry (which the client's calls use) is assigned the adapter:\n" + patchCode);
    assertTrue(
        patchCode.contains(
            "Fir_stub_compiled(&Fir_m_ver_stub_f_" + stubPart + ", (void *)" + adapterCName + ");"),
        "as is the stub:\n" + patchCode);
    assertTrue(
        patchCode.contains("Fir_fun_set_entries(Fir_m_fun_constants_f"),
        "f's dispatch and from-R are regenerated, since the version's signature changed:\n"
            + patchCode);
  }

  @Test
  void changedCompiledVersionIsReimplementedWithTheNextPatch() {
    var module = moduleWithLazyVersion();
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var copy = f.versions().first();
    var source = f.versions().last();
    var unboxedInt = Type.primitiveScalar(PrimitiveKind.INTEGER);

    // Another lazy version, whose body (once evaluated) calls `copy` by its signature then, and
    // which optimizing changes.
    var caller =
        f.addVersion(
            List.of(new FunctionParameter("x", Type.BOXED_INTEGER)),
            new LazyBody.Initializer() {
              @Override
              public void evaluate(CFG body) {
                var x = body.scope().parameters().getFirst();
                var call =
                    new Statement(
                        new Call(new StaticFnCallee(f, false, copy.signature())),
                        List.of(Constant.ELIDED_CLOSURE, new Read(x)));
                var r = call.setAssignee(body.scope().freshName("r"), copy.returnType());
                body.entry().appendStatement(call);
                body.entry().setJump(new Jump(new Return(), List.of(new Read(r))));
              }

              @Override
              public void afterEvaluated(Abstraction version) {
                version.comments().add(" optimized");
              }
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
    Objects.requireNonNull(Fir2CCompiler.compileStub(session, copyStub).patch());
    var compiledCopy = Objects.requireNonNull(session.version(copy));
    assertEquals(Repr.SEXP, compiledCopy.returnRepr());
    assertEquals(1, compiledCopy.implementation());
    var oldPart = compiledCopy.part();

    // ...and then it changes (say a later optimization run narrows its return type), so the
    // client's code for it is out of date.
    copy.setReturnType(unboxedInt);
    caller.setReturnType(unboxedInt);

    // The next patch (for anything) brings the new implementation, with a new entry for its new
    // calling convention; the old entry converts, for the client's existing calls.
    var patch = Objects.requireNonNull(Fir2CCompiler.compileStub(session, callerStub).patch());
    var patchCode = patch.code().toString();
    var updatedCopy = Objects.requireNonNull(session.version(copy));
    assertEquals(2, updatedCopy.implementation());
    assertEquals(Repr.INT, updatedCopy.returnRepr());
    var newPart = updatedCopy.part();
    var implCName = "Fir_m_ver_impl_f_" + newPart + "_2";
    assertTrue(
        patchCode.contains("int " + implCName + "(SEXP env, SEXP r_x)")
            && patchCode.contains("Fir_m_ver_call_f_" + newPart + " = " + implCName + ";")
            && patchCode.contains("Fir_m_ver_call_f_" + oldPart + " = " + implCName + "_boxed;"),
        "the copy is reimplemented:\n" + patchCode);
    assertTrue(
        patchCode.contains("Fir_m_ver_call_f_" + newPart + "(R_EmptyEnv, r_x)"),
        "the caller calls the new entry, with the new convention:\n" + patchCode);
    assertFalse(patchCode.contains("Fir_ver_call_unbox_"), patchCode);

    assertNull(
        Fir2CCompiler.compileStub(session, copyStub).patch(),
        "the copy's stub was replaced before, so there's nothing to do for it");
  }

  /// `main` calls `f`, which needs a closure context, at `signature`.
  private static String compileNeedsContextCall(String signature) {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                c: cls = clos f;
                r: V = f@c<%s>(<int 1>);
                return r;
              }
            }

            @needsContext
            fun f(x) {
              (x:*) -+> V {
                v: V = force? x;
                return v;
              }
              (x:I) --> I {
                return x;
              }
            }
            """
                .formatted(signature));
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    return Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
  }

  /// A builtin or dynamic call passes its source call to the runtime as `call`, or `NULL` if it has
  /// none. The trailing `<missing>` padding is dropped at compile time.
  @Test
  void callPassesSourceCall() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(f) {
              (f:V) -+> V {
                r: V = log%< *@!,*@! -+> V >(<str "a">, <missing>) in <lang log("a")>;
                r1: V = dyn f(r) in <lang f(log("a"))>;
                r2: V = log%< *@!,*@! -+> V >(r1, <missing>);
                return r2;
              }
            }
            """);
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var code = Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
    assertTrue(
        code.matches("(?s).*Fir_call_builtin\\(\\d+, Fir_const\\(pool, \\d+\\), env, 1, .*"), code);
    assertTrue(
        code.matches("(?s).*Fir_call_dynamic_values\\(r_f, Fir_const\\(pool, \\d+\\), env, 1, .*"),
        code);
    assertTrue(code.matches("(?s).*Fir_call_builtin\\(\\d+, NULL, env, 1, .*"), code);
  }

  /// A setter call runs in GNU-R's assignment protocol, and counts the registers that outlive it,
  /// so it doesn't modify a vector one of them holds. A call without the `st` after it doesn't.
  @Test
  void setterCallRunsInAssignmentProtocol() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                mkenv;
                v: v(I)o = v(I)[10, 20, 30];
                st x = v;
                alias: * = ld x;
                lhs: * = ld x;
                f: cls = ldf `[<-`;
                r: V = dyn f[, , value](lhs, <real 1.0>, <int 99>) in <lang `[<-`(`*tmp*`, 1.0, value=99.0)>;
                st x = r;
                lhs1: * = ld x;
                r1: V = dyn f[, , value](lhs1, <real 2.0>, <int 98>) in <lang `[<-`(`*tmp*`, 2.0, value=98.0)>;
                popenv;
                return alias;
              }
            }
            """);
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var code = Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
    assertTrue(code.contains("t_linked_0[0] = r_alias;"), code);
    assertTrue(
        code.matches(
            "(?s).*Fir_setter_begin\\(&t_setter_0, Fir_const\\(pool, \\d+\\), env, r_lhs, 2, t_linked_0\\);.*"),
        code);
    assertTrue(
        code.contains("Fir_setter_end(&t_setter_0, Fir_call_setter(&t_setter_0, r_f, "), code);
    assertTrue(code.contains("Fir_call_dynamic_values(r_f, "), code);
    assertFalse(code.contains("t_setter_1"), code);
  }

  /// `[[<-` is `(x, i, value, ...)`, so `x[[i, j]] <- v` matches `j` to the `...`, but the
  /// primitive takes the last argument as the value.
  @Test
  void subassignPassesValueLast() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                j: dots = dots[<int 2>];
                r: V = `[[<-`%< *@!,*,*,dots -+> V >(<int 1, 2, 3, 4 | dim=<int 2, 2>>, <int 1>, <int 3>, j);
                return r;
              }
            }
            """);
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var code = Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
    assertTrue(code.contains("t_args_0[2] = r_j;"), code);
    assertTrue(code.contains("t_arg_names_0[2] = R_DotsSymbol;"), code);
    assertTrue(code.contains("t_args_0, t_arg_names_0, 0x4ULL)"), "`j` is the value bit:\n" + code);
  }

  /// A pushed frame outlives the block that pushes it, whose `UNPROTECT` counts only the block's
  /// own protects. So the frame and each saved parent are in protect slots of the activation,
  /// which the env operations `REPROTECT` and the return releases.
  @Test
  void pushedFramesAreInActivationProtectSlots() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                mkenv-;
                mkenv~;
                goto L1();
              L1():
                v: v1(I) = box< I --> v1(I) >(1);
                popenv;
                popenv;
                return v;
              }
            }
            """);
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    var code = Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
    assertTrue(
        code.contains(
            """
            PROTECT_WITH_INDEX(env, &env_idx);
              PROTECT(env_saved[0] = R_NilValue);
              PROTECT(env_saved[1] = R_NilValue);"""),
        code);
    assertTrue(
        code.contains(
            """
            Fir_push_env(&env, FIR_MKENV_ELIDED, &env_saved[env_depth]);
              REPROTECT(env, env_idx);
              REPROTECT(env_saved[env_depth], env_idx + 1 + env_depth);"""),
        code);
    assertTrue(
        code.contains(
            """
            Fir_push_env(&env, FIR_MKENV_NON_REFLECTIVE, &env_saved[env_depth]);
              REPROTECT(env, env_idx);
              env_depth++;"""),
        code);
    assertEquals(
        2,
        code.split("Fir_pop_env\\([^\\n]*\\n\\s*REPROTECT\\(env, env_idx\\);", -1).length - 1,
        code);
    assertTrue(code.contains("UNPROTECT(3);\n  return r_v;"), code);
  }

  @Test
  void needsContextCallGoesThroughApplyClosure() {
    var code = compileNeedsContextCall("* -+> V");
    assertTrue(code.contains("Fir_call_dynamic(r_c, "), code);
    assertTrue(code.contains(".needs_context = true"), code);
  }

  @Test
  void needsContextCallOfUnboxedVersionThrows() {
    assertThrows(IllegalArgumentException.class, () -> compileNeedsContextCall("I --> I"));
  }

  /// A deopt stub compiles to one promise for its site, so the version tracks no promise.
  @Test
  void deoptStubsInNonReflectiveEnvAreShared() {
    var code = compileDeoptStubs("mkenv~");
    assertEquals(2, count(code, "Fir_mk_stub_promise("), code);
    assertFalse(code.contains("Fir_track_promise("), code);
    assertFalse(code.contains("local_promises"), code);
  }

  /// `missing` reads the environment of a promise whose expression is a symbol, so in a version
  /// with a `REGULAR` environment such a stub keeps a promise in that environment for each
  /// execution (with the site's shared code).
  @Test
  void symbolDeoptStubInRegularEnvIsNotShared() {
    var code = compileDeoptStubs("mkenv");
    assertEquals(1, count(code, "Fir_mk_stub_promise("), code);
    assertEquals(1, count(code, "Fir_mk_promise_shared("), code);
  }

  private static String compileDeoptStubs(String mkEnv) {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (x:V) -+> V {
                %s;
                p: p(V +) = prom<V +>[<lang g(x)>]{
                  deopt 0 [];
                };
                q: p(V +) = prom<V +>[<sym x>]{
                  deopt 0 [];
                };
                r: V = f< p(V +),p(V +) -+> V >(p, q);
                popenv;
                return r;
              }
            }

            fun f(a, b) {
              (a:*, b:*) -+> V {
                return <int 1>;
              }
              (a:p(V +), b:p(V +)) -+> V {
                return <int 1>;
              }
            }
            """
                .formatted(mkEnv));
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    return Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
  }

  /// A local promise without captures shares its code for the site, and its escape test reads
  /// the frame's `FIR_FRAME_RETURNED`, in a version whose only frame is real.
  @Test
  void localPromiseWithoutCapturesSharesItsCode() {
    var code = compilePromise("mkenv~", "prom-", "y1: * = ld y;\n  return y1;");
    assertEquals(1, count(code, "Fir_promise_site_code("), code);
    assertTrue(code.contains(", true));"), code);
    assertEquals(1, count(code, "Fir_mk_promise_shared("), code);
    assertFalse(code.contains("Fir_track_promise("), code);
  }

  /// A statement that isn't a promise may come before the `MkEnv` (queens' `solve_queens` boxes
  /// a parameter first).
  @Test
  void localPromiseSharesItsCodeAfterAStatementBeforeTheFrame() {
    var code =
        compilePromise(
            "x0: v1(I) = box< I --> v1(I) >(1);\n    mkenv~",
            "prom-",
            "y1: * = ld y;\n  return y1;");
    assertEquals(1, count(code, "Fir_mk_promise_shared("), code);
    assertFalse(code.contains("Fir_track_promise("), code);
  }

  /// A frame of an elided `MkEnv` is its parent's, which outlives the activation.
  @Test
  void localPromiseInElidedFrameDoesNotShareItsCode() {
    var code = compilePromise("mkenv-", "prom-", "y1: * = ld y;\n  return y1;");
    assertEquals(1, count(code, "Fir_track_promise(Fir_mk_promise("), code);
    assertFalse(code.contains("Fir_mk_promise_shared("), code);
  }

  /// A promise that isn't local has no escape test, so it shares its code in any frame.
  @Test
  void nonLocalPromiseInElidedFrameSharesItsCode() {
    var code = compilePromise("mkenv-", "prom", "y1: * = ld y;\n  return y1;");
    assertTrue(code.contains("Fir_promise_site_code(") && code.contains(", false));"), code);
    assertEquals(1, count(code, "Fir_mk_promise_shared("), code);
  }

  @Test
  void promiseWithCapturesDoesNotShareItsCode() {
    var code = compilePromise("mkenv~", "prom-", "return x;");
    assertEquals(1, count(code, "Fir_track_promise(Fir_mk_promise("), code);
    assertFalse(code.contains("Fir_mk_promise_shared("), code);
  }

  private static String compilePromise(String mkEnv, String prom, String body) {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (x:V) -+> V {
                %s;
                st y = x;
                p: p(V +) = %s<V +>[<sym y>]{
                  %s
                };
                r: V = f< p(V +) -+> V >(p);
                popenv;
                return r;
              }
            }

            fun f(a) {
              (a:*) -+> V {
                return <int 1>;
              }
              (a:p(V +)) -+> V {
                return <int 1>;
              }
            }
            """
                .formatted(mkEnv, prom, body));
    var main = Objects.requireNonNull(module.localFunction(Variable.named(MAIN_FUNCTION)));
    return Fir2CCompiler.compile(main, GNUR.instance().getSession()).code().toString();
  }

  private static int count(String code, String part) {
    return code.split(Pattern.quote(part), -1).length - 1;
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
