package org.prlprg.fir2c;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.AssumeConstant;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeType;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledDispatchIndex;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledPromiseIndex;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledVersionIndex;
import org.prlprg.gen2c.CCode;
import org.prlprg.gen2c.CFunction;
import org.prlprg.gen2c.CUnit;
import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Compiles FIŘ modules into C translation units.
public final class Module2CCompiler {
  public static FirCompiledModule compile(Module module, RSession rSession, Option... options) {
    return new Module2CCompiler(module, rSession, ImmutableSet.copyOf(options)).run();
  }

  static final String VAR_ENV = "RHO";
  static final String VAR_POOL = "CCP";
  static final String VAR_NPARAMS = "NPARAMS";
  static final String VAR_SEXP_PARAMS = "PARAMS";
  static final String VAR_SEXP_PARAM_TYPES = "PARAM_TYPES";

  // Input
  private final Module module;
  private final RSession rSession;
  private final ImmutableSet<Option> options;

  // Output
  private final CUnit cUnit = new CUnit();
  private final Map<Function, FirCompiledDispatchIndex> compiledFunctionDispatches =
      new LinkedHashMap<>();
  private final Map<Abstraction, FirCompiledVersionIndex> compiledVersions = new LinkedHashMap<>();
  private final Map<Promise, FirCompiledPromiseIndex> compiledPromises = new LinkedHashMap<>();
  private final ConstantPool constantPool = new ConstantPool();

  // State
  private final IdentifierMangler mangler = new IdentifierMangler();

  private Module2CCompiler(Module module, RSession rSession, ImmutableSet<Option> options) {
    this.module = module;
    this.rSession = rSession;
    this.options = options;
  }

  private FirCompiledModule run() {
    cUnit.addInclude("runtime.h");

    // Add mangled names first, because some may be forward-referenced
    compileNames();

    // Now compile C parameters and bodies. `CModule` handles forward declarations
    compileDefinitions();

    return new FirCompiledModule(
        cUnit,
        ImmutableMap.copyOf(compiledFunctionDispatches),
        ImmutableMap.copyOf(compiledVersions),
        ImmutableMap.copyOf(compiledPromises),
        constantPool.asVecSxp());
  }

  // region compile names
  private void compileNames() {
    for (var function : module.localFunctions()) {
      var dispatchCName = dispatchCFunctionName(function);
      compiledFunctionDispatches.put(function, new FirCompiledDispatchIndex.Regular(dispatchCName));

      for (var versionIndex : function.versionIndices()) {
        var version = function.version(versionIndex);

        var versionCName = versionCFunctionName(function, versionIndex);
        compiledVersions.put(version, new FirCompiledVersionIndex(versionCName));
      }
    }
  }

  private String dispatchCFunctionName(Function function) {
    return mangler.unique("Rsh_Fir_user_function_%s", function.name().name());
  }

  private String versionCFunctionName(Function function, int versionIndex) {
    return mangler.unique("Rsh_Fir_user_version_%s_v%d", function.name().name(), versionIndex);
  }

  // endregion compile names

  // region compile definitions
  private void compileDefinitions() {
    for (var function : module.localFunctions()) {
      compileDispatchFunction(function);

      for (var versionIndex : function.versionIndices()) {
        var version = function.version(versionIndex);

        compileVersionFunction(function, versionIndex, version);
      }
    }
  }

  private void compileVersionFunction(Function function, int versionIndex, Abstraction version) {
    var cName = compiledVersions.get(version).cFunctionName();

    if (version.isStub()) {
      cUnit.addExternFunction("SEXP", cName, versionCFunctionParameters);
    } else {
      var cFunction = cUnit.addFunction("SEXP", cName, versionCFunctionParameters);
      new VersionEmitter(function, versionIndex, version, cFunction);
    }
  }

  private void compileDispatchFunction(Function function) {
    var index = compiledFunctionDispatches.get(function);
    assert index instanceof FirCompiledDispatchIndex.Regular
        : "Can't compile " + function.name() + " because it's a builtin (index = " + index + ")";
    var cName = ((FirCompiledDispatchIndex.Regular) index).cFunctionName();

    var cFunction = cUnit.addFunction("SEXP", cName, dispatchCFunctionParameters);
    new DispatchEmitter(function, cFunction);
  }

  private static final List<String> dispatchCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "int %s".formatted(VAR_NPARAMS),
          "SEXP const *%s".formatted(VAR_SEXP_PARAMS),
          "Rsh_Fir_Type const *%s".formatted(VAR_SEXP_PARAM_TYPES));

  // TODO: Elide env if possible, and store each parameter as a C parameter instead of putting
  //  them in `VAR_SEXP_PARAMS`
  private static final List<String> versionCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "int %s".formatted(VAR_NPARAMS),
          "SEXP const *%s".formatted(VAR_SEXP_PARAMS));

  // TODO: Elide env if possible
  private static final List<String> promiseCFunctionParameters =
      List.of("SEXP %s".formatted(VAR_POOL), "SEXP %s".formatted(VAR_ENV));

  // endregion compile definitions

  // region interned
  private String nvSymbolRef(NamedVariable nv) {
    return constantRef(SEXPs.symbol(nv.name()));
  }

  private String constantRef(SEXP sexp) {
    var idx = constantPool.intern(sexp);
    return "Rsh_const(%s, %d)".formatted(VAR_POOL, idx);
  }

  // endregion interned

  // region lookup
  private String dispatchPtrName(Function function) {
    if (!(compiledFunctionDispatch(function)
        instanceof FirCompiledDispatchIndex.Regular(var cFunctionName))) {
      throw new UnsupportedOperationException(
          "Can't get dispatch function pointer of "
              + function.name()
              + " because it's a builtin, so it doesn't dispatch like FIŘ functions");
    }
    return cFunctionName;
  }

  private FirCompiledDispatchIndex compiledFunctionDispatch(Function function) {
    if (compiledFunctionDispatches.containsKey(function)) {
      return compiledFunctionDispatches.get(function);
    }
    if (function.owner() == BUILTINS) {
      return FirCompiledDispatchIndex.builtin(function, rSession);
    }
    if (function.owner() == INTRINSICS) {
      return FirCompiledDispatchIndex.intrinsic(function);
    }
    throw new IllegalStateException("Missing compiled dispatch for " + function.name());
  }

  private FirCompiledVersionIndex compiledVersion(Function function, Abstraction version) {
    if (compiledVersions.containsKey(version)) {
      return compiledVersions.get(version);
    }
    if (version.module() == BUILTINS) {
      return FirCompiledVersionIndex.builtin(function, version);
    }
    if (version.module() == INTRINSICS) {
      return FirCompiledVersionIndex.intrinsic(function, version);
    }
    throw new IllegalStateException(
        "Missing compiled version for " + function.name() + '/' + function.indexOf(version));
  }

  // endregion lookup

  // region misc utils
  private static String sanitizeString(String value) {
    return value.replace("\"", "\\\"");
  }

  private record Array(int size, String pointer) {}

  private record ArrayAndNames(Array values, String names) {}

  // endregion misc utils

  /// Emits C for a [Function]'s dynamic-dispatch function.
  private final class DispatchEmitter {
    // Input
    private final Function function;

    // Output
    private final CFunction cFunction;

    DispatchEmitter(Function function, CFunction cFunction) {
      this.function = function;
      this.cFunction = cFunction;

      emit();
    }

    // region emit
    private void emit() {
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction
            .add()
            .comment(
                "FIR %s dynamic dispatch (%s)", function.name().name(), function.parameterNames());
      }

      // TODO: Actually dispatch based on argument types.
      var baselineIndex = compiledVersion(function, function.baseline());
      cFunction
          .add()
          .stmt(
              "return %s(%s, %s, %s, %s);",
              baselineIndex.cFunctionName(), VAR_POOL, VAR_ENV, VAR_NPARAMS, VAR_SEXP_PARAMS);
    }

    // endregion emit
  }

  /// Emits C for a single [Abstraction].
  ///
  /// The implementation keeps the translation extremely simple for now:
  /// - Registers are represented as local `SEXP` variables initialised to `R_NilValue`.
  /// - Arguments arrive as `SEXP const *PARAMS` with accompanying `int NPARAMS`.
  /// - Only a small subset of statements/jumps are lowered; the architecture is arranged so that
  ///   support can grow instruction-by-instruction.
  private final class VersionEmitter {
    // Input
    private final Function function;
    private final int versionIndex;
    private final Abstraction abstraction;

    // Output
    private final CFunction cFunction;

    // State
    private final Map<Register, String> registerNames = new LinkedHashMap<>();

    VersionEmitter(
        Function function, int versionIndex, Abstraction abstraction, CFunction cFunction) {
      if (abstraction.isStub()) {
        throw new IllegalArgumentException(
            "FirVersionEmitter doesn't handle stubs:\n" + abstraction);
      }

      this.function = function;
      this.versionIndex = versionIndex;
      this.abstraction = abstraction;
      this.cFunction = cFunction;

      prepare();
      emit();
    }

    // region prepare
    private void prepare() {
      // Prepare registers
      abstraction
          .streamRegisterBindings()
          .forEach(
              binding -> {
                var register = (Register) binding.variable();
                registerNames.put(register, mangler.unique("Rsh_Fir_reg_%s", register.name()));
              });
    }

    // endregion prepare

    // region emit
    private void emit() {
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction
            .add()
            .comment(
                "FIR %s version %d (%s)",
                function.name().name(), versionIndex, abstraction.signature());
      }

      emitArityCheck();
      emitParameterBinding();
      new CfgEmitter(Objects.requireNonNull(abstraction.cfg()), cFunction);
    }

    private void emitArityCheck() {
      if (!options.contains(Option.CHECK_ARITY)) {
        return;
      }

      var expected = abstraction.parameters().size();
      cFunction
          .add()
          .stmt(
              "if (%s != %d) Rsh_error(\"FIŘ arity mismatch for %s/%d: expected %d, got %%d\", %s);",
              VAR_NPARAMS,
              expected,
              sanitizeString(function.name().name()),
              versionIndex,
              expected,
              VAR_NPARAMS);
    }

    private void emitParameterBinding() {
      var sec = cFunction.add();

      var parameters = abstraction.parameters();
      if (parameters.isEmpty()) {
        return;
      }

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        sec.comment("Bind parameters");
      }

      for (var i = 0; i < parameters.size(); i++) {
        var param = parameters.get(i);
        var name = registerName(param.variable());
        sec.stmt("SEXP %s = %s[%d];", name, VAR_SEXP_PARAMS, i);
      }
    }

    // endregion emit

    // region interned

    private String promiseName(Promise promise) {
      return ensurePromiseCompiled(promise).cFunctionName();
    }

    private String registerName(Register register) {
      var name = registerNames.get(register);
      if (name == null) {
        throw new IllegalArgumentException("Unknown (not declared) register: " + register);
      }
      return name;
    }

    // endregion interned

    private FirCompiledPromiseIndex ensurePromiseCompiled(Promise promise) {
      return compiledPromises.computeIfAbsent(
          promise,
          _ -> {
            var cName = mangler.unique("Rsh_Fir_user_promise_%s", function.name().name());
            var promiseFunction = cUnit.addFunction("SEXP", cName, promiseCFunctionParameters);
            new CfgEmitter(promise.code(), promiseFunction);
            return new FirCompiledPromiseIndex(cName);
          });
    }

    final class CfgEmitter {
      // Input
      private final CFG cfg;

      // Output
      private final CFunction cFunction;

      // State
      private final Map<BB, String> labelNames = new LinkedHashMap<>();
      private final IdentifierMangler bbMangler = new IdentifierMangler();

      CfgEmitter(CFG cfg, CFunction cFunction) {
        this.cfg = cfg;
        this.cFunction = cFunction;

        prepare();
        emit();
      }

      // region prepare
      private void prepare() {
        for (var bb : cfg.bbs()) {
          if (!bb.isEntry()) {
            labelNames.put(bb, bbMangler.unique("%s", bb.label()));
          }
        }
      }

      // endregion prepare

      // region emit
      private void emit() {
        for (var bb : cfg.bbs()) {
          new BBEmitter(bb, cFunction.add());
        }
      }

      final class BBEmitter {

        private final BB bb;
        private final CCode cCode;

        BBEmitter(BB bb, CCode cCode) {
          this.bb = bb;
          this.cCode = cCode;

          emit();
        }

        private void emit() {
          if (!bb.isEntry()) {
            // ';' is necessary,
            // otherwise if the next statement is a declaration (e.g. `SEXP x`),
            // the C syntax is invalid.
            cCode.label("%s:;", labelName(bb));
          }
          for (var statement : bb.statements()) {
            emitStatement(statement);
          }
          emitJump(bb.jump());
        }

        private void emitStatement(Statement statement) {
          if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
            cCode.comment("%s", statement);
          }

          var expr = emitExpression(statement.expression());

          if (statement.assignee() == null) {
            cCode.stmt("(void)(%s);", expr);
          } else {
            cCode.stmt("SEXP %s = %s;", registerName(statement.assignee()), expr);
          }
        }

        // TODO(runtime): All Rsh_Fir_* helpers referenced below require runtime support.
        private String emitExpression(Expression expression) {
          return switch (expression) {
            case Aea(var arg) -> emitArgument(arg);
            case AssumeConstant(var _, var _), AssumeFunction _ -> "R_NilValue";
            case AssumeType(var target, var _) -> emitArgument(target);
            case Call call -> emitCall(call);
            case Cast(var target, var type) ->
                "Rsh_Fir_cast(%s, %s)".formatted(emitArgument(target), emitType(type));
            case Closure closure ->
                "Rsh_Fir_make_closure(&%s, %s, %s)"
                    .formatted(dispatchPtrName(closure.code()), VAR_ENV, VAR_POOL);
            case Dup(var value) -> "Rsh_Fir_dup(%s)".formatted(emitArgument(value));
            case Force(var value) -> "Rsh_Fir_force(%s)".formatted(emitArgument(value));
            case Load(var variable) ->
                "Rsh_Fir_load(%s, %s)".formatted(nvSymbolRef(variable), VAR_ENV);
            case LoadFun(var variable, var env) -> {
              var envSelector =
                  switch (env) {
                    case LoadFun.Env.LOCAL -> "Rsh_Fir_LoadFun_Local";
                    case LoadFun.Env.GLOBAL -> "Rsh_Fir_LoadFun_Global";
                    case LoadFun.Env.BASE -> "Rsh_Fir_LoadFun_Base";
                  };
              yield "Rsh_Fir_load_fun(%s, %s, %s)"
                  .formatted(envSelector, nvSymbolRef(variable), VAR_ENV);
            }
            case MaybeForce(var value) -> "Rsh_Fir_maybe_force(%s)".formatted(emitArgument(value));
            case MkEnv() -> {
              cCode.stmt("Rsh_Fir_push_env(&%s);", VAR_ENV);
              yield "R_NilValue";
            }
            case MkVector(var kind, var elements) -> {
              var namedArrays = emitNamedArgumentArrays(elements);
              yield "Rsh_Fir_mk_vector(%s, %d, %s, %s)"
                  .formatted(
                      emitKind(kind),
                      namedArrays.values().size(),
                      namedArrays.values().pointer(),
                      namedArrays.names());
            }
            case Placeholder() -> "Rsh_error(\"FIŘ placeholder reached\"); R_NilValue";
            case PopEnv() -> "Rsh_Fir_pop_env(&%s); R_NilValue".formatted(VAR_ENV);
            case Promise promise ->
                "Rsh_Fir_make_promise(&%s, %s, %s)"
                    .formatted(promiseName(promise), VAR_POOL, VAR_ENV);
            case ReflectiveLoad(var promArg, var variable) ->
                "Rsh_Fir_reflective_load(%s, %s)"
                    .formatted(emitArgument(promArg), nvSymbolRef(variable));
            case ReflectiveStore(var promArg, var variable, var value) ->
                "Rsh_Fir_reflective_store(%s, %s, %s)"
                    .formatted(emitArgument(promArg), nvSymbolRef(variable), emitArgument(value));
            case Store(var variable, var value) -> {
              var arg = emitArgument(value);
              cCode.stmt("Rsh_Fir_store(%s, %s, %s);", nvSymbolRef(variable), arg, VAR_ENV);
              yield arg;
            }
            case SubscriptRead(var vector, var index) ->
                "Rsh_Fir_subscript_read(%s, %s)"
                    .formatted(emitArgument(vector), emitArgument(index));
            case SubscriptWrite(var vector, var index, var value) ->
                "Rsh_Fir_subscript_write(%s, %s, %s)"
                    .formatted(emitArgument(vector), emitArgument(index), emitArgument(value));
            case SuperLoad(var variable) ->
                "Rsh_Fir_super_load(%s, %s)".formatted(nvSymbolRef(variable), VAR_ENV);
            case SuperStore(var variable, var value) -> {
              var arg = emitArgument(value);
              cCode.stmt("Rsh_Fir_super_store(%s, %s, %s);", nvSymbolRef(variable), arg, VAR_ENV);
              yield arg;
            }
          };
        }

        private String emitCall(Call call) {
          var arguments = emitArgumentArray("args", call.callArguments());
          return switch (call.callee()) {
            case DispatchCallee(var calleeFun, var signature) -> {
              var dispatch = compiledFunctionDispatch(calleeFun);
              var paramTypes =
                  signature == null ? "Rsh_Fir_param_types_empty()" : emitSignature(signature);
              yield switch (dispatch) {
                case FirCompiledDispatchIndex.Regular(var cFunctionName) ->
                    "%s(%s, %s, %d, %s, %s)"
                        .formatted(
                            cFunctionName,
                            VAR_POOL,
                            VAR_ENV,
                            arguments.size(),
                            arguments.pointer(),
                            paramTypes);
                case FirCompiledDispatchIndex.Builtin(var builtinIndex) ->
                    "Rsh_Fir_call_builtin(%d, %s, %s, %d, %s, %s)"
                        .formatted(
                            builtinIndex,
                            VAR_POOL,
                            VAR_ENV,
                            arguments.size(),
                            arguments.pointer(),
                            paramTypes);
              };
            }
            case StaticCallee(var calleeFunction, var calleeVersion) -> {
              var compiled = compiledVersion(calleeFunction, calleeVersion);
              yield "%s(%s, %s, %d, %s)"
                  .formatted(
                      compiled.cFunctionName(),
                      VAR_POOL,
                      VAR_ENV,
                      arguments.size(),
                      arguments.pointer());
            }
            case DynamicCallee(var actualCallee, var argumentNames) -> {
              var names = emitOptionalNameArray("arg_names", argumentNames, arguments.size());
              yield "Rsh_Fir_call_dynamic(%s, %d, %s, %s, %s, %s)"
                  .formatted(
                      emitArgument(actualCallee),
                      arguments.size(),
                      arguments.pointer(),
                      names.pointer(),
                      VAR_POOL,
                      VAR_ENV);
            }
          };
        }

        private void emitJump(Jump jump) {
          if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
            cCode.comment("%s", jump);
          }

          switch (jump) {
            case Return(var value) -> cCode.stmt("return %s;", emitArgument(value));
            case Goto(var target) -> emitJumpTo(1, target);
            case Unreachable() -> {
              cCode.stmt("Rsh_error(\"FIŘ unreachable reached\");");
              cCode.stmt("return R_NilValue;");
            }
            case If(var condition, var ifTrue, var ifFalse) -> {
              cCode.stmt("if (Rsh_Fir_is_true(%s)) {", condition);
              emitJumpTo(2, ifTrue);
              cCode.stmt("} else {");
              emitJumpTo(2, ifFalse);
              cCode.stmt("}");
            }
            case Checkpoint(var success, var deopt) -> {
              for (var assume : assumptionsFor(success)) {
                var condition = emitAssumptionCondition(assume);
                cCode.stmt("if (!(%s)) {", condition);
                emitJumpTo(2, deopt);
                cCode.stmt("}");
              }
              emitJumpTo(1, success);
            }
            case Deopt(var pc, var stack) -> {
              var stackArgs = emitArgumentArray("deopt_stack", stack);
              cCode.stmt(
                  "Rsh_Fir_deopt(%d, %d, %s, %s, %s);",
                  pc, stackArgs.size(), stackArgs.pointer(), VAR_POOL, VAR_ENV);
              cCode.stmt("return R_NilValue;");
            }
          }
        }

        private List<Assume> assumptionsFor(Target target) {
          var assumptions = new ArrayList<Assume>();
          for (var statement : target.bb().statements()) {
            if (!(statement.expression() instanceof Assume assume)) {
              break;
            }
            assumptions.add(assume);
          }
          return assumptions;
        }

        private String emitAssumptionCondition(Assume assume) {
          if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
            cCode.comment("Assume: %s", assume);
          }

          return switch (assume) {
            case AssumeConstant(var target, var constant) ->
                "Rsh_Fir_assume_constant(%s, %s)"
                    .formatted(emitArgument(target), constantRef(constant.sexp()));
            case AssumeFunction a ->
                "Rsh_Fir_assume_function(%s, &%s)"
                    .formatted(emitArgument(a.target()), dispatchPtrName(a.function()));
            case AssumeType(var target, var type) ->
                "Rsh_Fir_assume_type(%s, %s)".formatted(emitArgument(target), emitType(type));
          };
        }

        private void emitJumpTo(int indentLevel, Target target) {
          var parameters = target.bb().phiParameters();
          var phiArgs = target.phiArgs();
          if (parameters.size() != phiArgs.size()) {
            throw new IllegalStateException(
                "Phi parameter/argument count mismatch for " + target.bb().label());
          }

          if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
            cCode.comment("%s", target);
          }

          for (var i = 0; i < parameters.size(); i++) {
            var phi = parameters.get(i);
            var arg = phiArgs.get(i);

            var dest = registerName(phi);
            var value = emitArgument(arg);

            cCode.stmt(indentLevel, "SEXP %s = %s;", dest, value);
          }

          cCode.stmt(indentLevel, "goto %s;", labelName(target.bb()));
        }

        private Array emitArgumentArray(String baseName, List<Argument> arguments) {
          if (arguments.isEmpty()) {
            return new Array(0, "NULL");
          }

          var arrayName = mangler.unique("Rsh_Fir_array_%s", baseName);
          cCode.stmt("SEXP %s[%d];", arrayName, arguments.size());
          for (var i = 0; i < arguments.size(); i++) {
            cCode.stmt("%s[%d] = %s;", arrayName, i, emitArgument(arguments.get(i)));
          }
          return new Array(arguments.size(), arrayName);
        }

        private ArrayAndNames emitNamedArgumentArrays(List<NamedArgument> namedArguments) {
          var values = new ArrayList<Argument>(namedArguments.size());
          var names = new ArrayList<OptionalNamedVariable>(namedArguments.size());
          var hasNames = false;
          for (var element : namedArguments) {
            values.add(element.argument());
            names.add(OptionalNamedVariable.ofNullable(element.name()));
            if (element.name() != null) {
              hasNames = true;
            }
          }
          var valueArray = emitArgumentArray("vector_values", values);
          var nameArray = emitOptionalNameArray("vector_names", names, names.size());
          return new ArrayAndNames(valueArray, hasNames ? nameArray.pointer() : "NULL");
        }

        private Array emitOptionalNameArray(
            String baseName, List<OptionalNamedVariable> names, int size) {
          if (size == 0) {
            return new Array(0, "NULL");
          }

          var arrayName = mangler.unique("Rsh_Fir_array_%s", baseName);
          cCode.stmt("SEXP %s[%d];", arrayName, size);
          for (var i = 0; i < size; i++) {
            var name = i < names.size() ? names.get(i).orNull() : null;
            var expr = name == null ? "R_MissingArg" : nvSymbolRef(name);
            cCode.stmt("%s[%d] = %s;", arrayName, i, expr);
          }
          return new Array(size, arrayName);
        }

        private String emitSignature(Signature signature) {
          return "/* TODO emitSignature(%s) */ NULL".formatted(signature);
        }

        private String emitType(Type type) {
          var comment =
              options.contains(Option.EMIT_DEBUG_COMMENTS) ? "/* %s */ ".formatted(type) : "";
          return "%sRsh_Fir_type(%s, %s, %s)"
              .formatted(
                  comment,
                  emitKind(type.kind()),
                  emitOwnership(type.ownership()),
                  emitConcreteness(type.concreteness()));
        }

        private String emitKind(Kind kind) {
          return switch (kind) {
            case Kind.Any() -> "Rsh_Fir_kind_any";
            case Kind.AnyValue() -> "Rsh_Fir_kind_anyValue";
            case Kind.PrimitiveScalar(var primitiveKind) ->
                "Rsh_Fir_kind_primitiveScalar(%s)".formatted(emitPrimitiveKind(primitiveKind));
            case Kind.PrimitiveVector(var primitiveKind) ->
                "Rsh_Fir_kind_primitiveVector(%s)".formatted(emitPrimitiveKind(primitiveKind));
            case Kind.Closure() -> "Rsh_Fir_kind_closure";
            case Kind.Dots() -> "Rsh_Fir_kind_dots";
            case Kind.Promise(var valueType, var fx) ->
                "Rsh_Fir_kind_promise(%s, %s)".formatted(emitType(valueType), emitEffects(fx));
          };
        }

        private String emitPrimitiveKind(PrimitiveKind primitiveKind) {
          return Integer.toString(primitiveKind.ordinal());
        }

        private String emitOwnership(Ownership ownership) {
          return Integer.toString(ownership.ordinal());
        }

        private String emitConcreteness(Concreteness concreteness) {
          return Boolean.toString(concreteness == Concreteness.DEFINITE);
        }

        private String emitEffects(Effects fx) {
          return Boolean.toString(fx.reflect());
        }

        private String emitArgument(Argument argument) {
          return switch (argument) {
            case Constant(var constant) -> constantRef(constant);
            case Read(var variable) -> registerName(variable);
            case Use(var variable) -> registerName(variable);
          };
        }
      }

      // endregion emit

      // region interned
      private String labelName(BB bb) {
        if (bb.isEntry()) {
          throw new IllegalArgumentException("Can't refer to the entry BB");
        }
        var name = labelNames.get(bb);
        if (name == null) {
          throw new IllegalArgumentException("Unknown (not in CFG) BB: " + bb);
        }
        return name;
      }
      // endregion interned
    }
  }
}
