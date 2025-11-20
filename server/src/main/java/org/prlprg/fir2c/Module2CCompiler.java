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
import javax.annotation.Nullable;
import org.prlprg.fir.GlobalModules;
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
import org.prlprg.fir2c.CModule.CFunction;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledDispatchIndex;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledPromiseIndex;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledVersionIndex;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Lists;
import org.prlprg.util.NotImplementedError;

/// Compiles FIŘ modules into C translation units.
public final class Module2CCompiler {
  public static FirCompiledModule compile(Module module, Option... options) {
    return new Module2CCompiler(module, ImmutableSet.copyOf(options)).run();
  }

  static final String VAR_ENV = "RHO";
  static final String VAR_POOL = "CCP";
  static final String VAR_SEXP_PARAMS = "PARAMS";
  static final String VAR_SEXP_PARAM_TYPES = "PARAM_TYPES";

  // Input
  private final Module module;
  private final ImmutableSet<Option> options;

  // Output
  private final CModule cModule = new CModule();
  private final Map<Function, FirCompiledDispatchIndex> compiledFunctionDispatches =
      new LinkedHashMap<>();
  private final Map<Abstraction, FirCompiledVersionIndex> compiledVersions = new LinkedHashMap<>();
  private final Map<Promise, FirCompiledPromiseIndex> compiledPromises = new LinkedHashMap<>();
  private final ConstantPool constantPool = new ConstantPool();

  // State
  private final IdentifierMangler mangler = new IdentifierMangler();

  private Module2CCompiler(Module module, ImmutableSet<Option> options) {
    this.module = module;
    this.options = options;
  }

  private FirCompiledModule run() {
    cModule.addInclude("runtime.h");

    // Add mangled names first, because some may be forward-referenced
    compileNames();

    // Now compile C parameters, bodies, etc.
    compileDefinitions();

    return new FirCompiledModule(
        cModule,
        ImmutableMap.copyOf(compiledFunctionDispatches),
        ImmutableMap.copyOf(compiledVersions),
        ImmutableMap.copyOf(compiledPromises),
        constantPool.asVecSxp());
  }

  // region compile names
  private void compileNames() {
    for (var function : module.localFunctions()) {
      var dispatchCName = dispatchCFunctionName(function);
      compiledFunctionDispatches.put(function, new FirCompiledDispatchIndex(dispatchCName));

      for (var versionIndex : function.versionIndices()) {
        var version = function.version(versionIndex);

        var versionCName = versionCFunctionName(function, versionIndex);
        compiledVersions.put(version, new FirCompiledVersionIndex(versionCName));
      }
    }
  }

  private String dispatchCFunctionName(Function function) {
    return mangler.unique(function.name().name());
  }

  private String versionCFunctionName(Function function, int versionIndex) {
    return mangler.unique("%s_v%d".formatted(function.name().name(), versionIndex));
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
      cModule.addStubFunction("SEXP", cName, versionCFunctionParameters);
    } else {
      var cFunction = cModule.addFunction("SEXP", cName, versionCFunctionParameters);
      new VersionEmitter(function, versionIndex, version, cFunction);
    }
  }

  private void compileDispatchFunction(Function function) {
    var cName = compiledFunctionDispatches.get(function).cFunctionName();

    var cFunction = cModule.addFunction("SEXP", cName, dispatchCFunctionParameters);
    new DispatchEmitter(function, cFunction);
  }

  private static final List<String> dispatchCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "SEXP const *%s".formatted(VAR_SEXP_PARAMS),
          "Rsh_Fir_ParamTypes %s".formatted(VAR_SEXP_PARAM_TYPES));

  // TODO: Elide env if possible, and store each parameter as a C parameter instead of putting
  //  them in `VAR_SEXP_PARAMS`
  private static final List<String> versionCFunctionParameters =
      List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
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

  private String dispatchName(Function function) {
    return compiledFunctionDispatch(function).cFunctionName();
  }

  // endregion interned

  // region lookup
  private FirCompiledDispatchIndex compiledFunctionDispatch(Function function) {
    if (compiledFunctionDispatches.containsKey(function)) {
      return compiledFunctionDispatches.get(function);
    }
    if (function.owner() == BUILTINS) {
      throw new NotImplementedError();
    }
    if (function.owner() == INTRINSICS) {
      throw new NotImplementedError();
    }
    throw new IllegalStateException("Missing compiled dispatch for " + function.name());
  }

  private FirCompiledVersionIndex compiledVersion(Function function, Abstraction version) {
    if (compiledVersions.containsKey(version)) {
      return compiledVersions.get(version);
    }
    if (version.module() == BUILTINS) {
      throw new NotImplementedError();
    }
    if (version.module() == INTRINSICS) {
      throw new NotImplementedError();
    }
    throw new IllegalStateException(
        "Missing compiled version for "
            + function.name()
            + '/'
            + function.indexOf(version));
  }
  // endregion lookup

  // region misc utils
  private static String sanitizeString(String value) {
    return value.replace("\"", "\\\"");
  }

  private record Array(int size, String pointer) {}

  private record ArrayAndNames(Array values, Array names) {}

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
        cFunction.comment(
            "FIR %s dynamic dispatch (%s)", function.name().name(), function.parameterNames());
      }

      // TODO: Actually dispatch based on argument types.
      var baselineIndex = compiledVersion(function, function.baseline());
      cFunction.stmt(
          "return %s(%s, %s, %s);",
          baselineIndex.cFunctionName(), VAR_POOL, VAR_ENV, VAR_SEXP_PARAMS);
    }

    // endregion emit
  }

  /// Emits C for a single [Abstraction].
  ///
  /// The implementation keeps the translation extremely simple for now:
  /// - Registers are represented as local `SEXP` variables initialised to `R_NilValue`.
  /// - Arguments arrive as `SEXP const *ARGS` with accompanying `int NARGS`.
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
                registerNames.put(register, mangler.unique(register.name()));
              });
    }

    // endregion prepare

    // region emit
    private void emit() {
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction.comment(
            "FIR %s version %d (%s)",
            function.name().name(), versionIndex, abstraction.signature());
      }

      emitArityCheck();
      emitParameterBinding();
      emitRegisterDeclarations();
      new CfgEmitter(Objects.requireNonNull(abstraction.cfg()), cFunction);
    }

    private void emitArityCheck() {
      if (!options.contains(Option.CHECK_ARITY)) {
        return;
      }

      var expected = abstraction.parameters().size();
      cFunction.stmt("if (Rf_length(%s) != %d) {", VAR_SEXP_PARAMS, expected);
      cFunction.stmt(
          2,
          "Rf_error(\"FIŘ arity mismatch for %s/%d: expected %d, got %%d\", Rf_length(%s));",
          sanitizeString(function.name().name()),
          versionIndex,
          expected,
          VAR_SEXP_PARAMS);
      cFunction.stmt("}");

      cFunction.blank();
    }

    private void emitParameterBinding() {
      var parameters = abstraction.parameters();
      if (parameters.isEmpty()) {
        return;
      }

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction.comment("Bind parameters");
      }

      for (var i = 0; i < parameters.size(); i++) {
        var param = parameters.get(i);
        var name = registerName(param.variable());
        cFunction.stmt("%s = %s[%d];", name, VAR_SEXP_PARAMS, i);
      }

      cFunction.blank();
    }

    private void emitRegisterDeclarations() {
      if (registerNames.isEmpty()) {
        return;
      }

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction.comment("Registers");
      }

      for (var entry : registerNames.entrySet()) {
        cFunction.stmt("SEXP %s = R_NilValue;", entry.getValue());
      }

      cFunction.blank();
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
            var cName = mangler.unique("%s_prom".formatted(function.name().name()));
            var promiseFunction = cModule.addFunction("SEXP", cName, promiseCFunctionParameters);
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

      CfgEmitter(CFG cfg, CFunction cFunction) {
        this.cfg = cfg;
        this.cFunction = cFunction;

        prepare();
        emit();
      }

      // region prepare
      private void prepare() {
        for (var bb : cfg.bbs()) {
          labelNames.put(bb, mangler.unique("BB_%s".formatted(bb.label())));
        }
      }

      // endregion prepare

      // region emit
      private void emit() {
        for (var bb : cfg.bbs()) {
          cFunction.label("%s:", labelName(bb));
          for (var statement : bb.statements()) {
            emitStatement(statement);
          }
          emitJump(bb.jump());

          cFunction.blank();
        }
      }

      private void emitStatement(Statement statement) {
        if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
          cFunction.comment("%s", statement);
        }

        var expr = emitExpression(statement.expression());

        if (statement.assignee() == null) {
          cFunction.stmt("(void)(%s);", expr);
        } else {
          cFunction.stmt("%s = %s;", registerName(statement.assignee()), expr);
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
                  .formatted(dispatchName(closure.code()), VAR_ENV, VAR_POOL);
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
            cFunction.stmt("Rsh_Fir_push_env(&%s);", VAR_ENV);
            yield "R_NilValue";
          }
          case MkVector(var kind, var elements) -> {
            var namedArrays = emitNamedArgumentArrays(elements);
            yield "Rsh_Fir_mk_vector(%s, %d, %s, %s)"
                .formatted(
                    emitKind(kind),
                    namedArrays.values().size(),
                    namedArrays.values().pointer(),
                    namedArrays.names().pointer());
          }
          case Placeholder() -> {
            cFunction.stmt("Rf_error(\"FIŘ placeholder reached\");");
            yield "R_NilValue";
          }
          case PopEnv() -> {
            cFunction.stmt("Rsh_Fir_pop_env(&%s);", VAR_ENV);
            yield "R_NilValue";
          }
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
            cFunction.stmt(
                "Rsh_Fir_store(%s, %s, %s);", nvSymbolRef(variable), emitArgument(value), VAR_ENV);
            yield emitArgument(value);
          }
          case SubscriptRead(var vector, var index) ->
              "Rsh_Fir_subscript_read(%s, %s)".formatted(emitArgument(vector), emitArgument(index));
          case SubscriptWrite(var vector, var index, var value) ->
              "Rsh_Fir_subscript_write(%s, %s, %s)"
                  .formatted(emitArgument(vector), emitArgument(index), emitArgument(value));
          case SuperLoad(var variable) ->
              "Rsh_Fir_super_load(%s, %s)".formatted(nvSymbolRef(variable), VAR_ENV);
          case SuperStore(var variable, var value) -> {
            cFunction.stmt(
                "Rsh_Fir_super_store(%s, %s, %s);",
                nvSymbolRef(variable), emitArgument(value), VAR_ENV);
            yield emitArgument(value);
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
            yield "Rsh_Fir_call_dispatch(&%s, %s, %s, %d, %s, %s)"
                .formatted(
                    dispatch.cFunctionName(),
                    VAR_POOL,
                    VAR_ENV,
                    arguments.size(),
                    arguments.pointer(),
                    paramTypes);
          }
          case StaticCallee(var calleeFunction, var calleeVersion) -> {
            var compiled = compiledVersion(calleeFunction, calleeVersion);
            yield "Rsh_Fir_call_version(&%s, %s, %s, %d, %s)"
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
          cFunction.comment("%s", jump);
        }

        switch (jump) {
          case Return(var value) -> cFunction.stmt("return %s;", emitArgument(value));
          case Goto(var target) -> {
            emitPhiTransfers(1, target);
            cFunction.stmt("goto %s;", labelName(target.bb()));
          }
          case Unreachable() -> {
            cFunction.stmt("Rf_error(\"FIŘ unreachable reached\");");
            cFunction.stmt("return R_NilValue;");
          }
          case If(var condition, var ifTrue, var ifFalse) -> {
            cFunction.stmt("if (Rsh_Fir_is_true(%s)) {", condition);
            emitPhiTransfers(2, ifTrue);
            cFunction.stmt(2, "goto %s;", labelName(ifTrue.bb()));
            cFunction.stmt("} else {");
            emitPhiTransfers(2, ifFalse);
            cFunction.stmt(2, "goto %s;", labelName(ifFalse.bb()));
            cFunction.stmt("}");
          }
          case Checkpoint(var success, var deopt) -> {
            for (var assume : assumptionsFor(success)) {
              var condition = emitAssumptionCondition(assume);
              cFunction.stmt("if (!(%s)) {", condition);
              emitPhiTransfers(2, deopt);
              cFunction.stmt(2, "goto %s;", labelName(deopt.bb()));
              cFunction.stmt("}");
            }
            emitPhiTransfers(1, success);
            cFunction.stmt("goto %s;", labelName(success.bb()));
          }
          case Deopt(var pc, var stack) -> {
            var stackArgs = emitArgumentArray("deopt_stack", stack);
            cFunction.stmt(
                "Rsh_Fir_deopt(%d, %d, %s, %s, %s);",
                pc, stackArgs.size(), stackArgs.pointer(), VAR_POOL, VAR_ENV);
            cFunction.stmt("return R_NilValue;");
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
          cFunction.comment("Assume: %s", assume);
        }

        return switch (assume) {
          case AssumeConstant(var target, var constant) ->
              "Rsh_Fir_assume_constant(%s, %s)"
                  .formatted(emitArgument(target), constantRef(constant.sexp()));
          case AssumeFunction a ->
              "Rsh_Fir_assume_function(%s, &%s)"
                  .formatted(emitArgument(a.target()), dispatchName(a.function()));
          case AssumeType(var target, var type) ->
              "Rsh_Fir_assume_type(%s, %s)".formatted(emitArgument(target), emitType(type));
        };
      }

      private void emitPhiTransfers(int indentLevel, Target target) {
        if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
          cFunction.comment("%s.phis", target);
        }

        var parameters = target.bb().phiParameters();
        if (parameters.isEmpty()) {
          return;
        }

        var phiArgs = target.phiArgs();
        if (parameters.size() != phiArgs.size()) {
          throw new IllegalStateException(
              "Phi parameter/argument count mismatch for " + target.bb().label());
        }

        for (var i = 0; i < parameters.size(); i++) {
          var phi = parameters.get(i);
          var arg = phiArgs.get(i);

          var dest = registerName(phi);
          var value = emitArgument(arg);

          cFunction.stmt(indentLevel, "%s = %s;", dest, value);
        }
      }

      private Array emitArgumentArray(String baseName, List<Argument> arguments) {
        if (arguments.isEmpty()) {
          return new Array(0, "NULL");
        }

        var arrayName = mangler.unique(baseName);
        cFunction.stmt("SEXP %s[%d];", arrayName, arguments.size());
        for (var i = 0; i < arguments.size(); i++) {
          cFunction.stmt("%s[%d] = %s;", arrayName, i, emitArgument(arguments.get(i)));
        }
        return new Array(arguments.size(), arrayName);
      }

      private ArrayAndNames emitNamedArgumentArrays(List<NamedArgument> namedArguments) {
        var values = new ArrayList<Argument>(namedArguments.size());
        var names = new ArrayList<NamedVariable>(namedArguments.size());
        for (var element : namedArguments) {
          values.add(element.argument());
          names.add(element.name());
        }
        var valueArray = emitArgumentArray("vector_values", values);
        var nameArray = emitNameArray("vector_names", names);
        return new ArrayAndNames(valueArray, nameArray);
      }

      private Array emitNameArray(String baseName, List<NamedVariable> names) {
        return emitOptionalNameArray(
            baseName, Lists.mapLazy(names, OptionalNamedVariable::of), names.size());
      }

      private Array emitOptionalNameArray(
          String baseName, List<OptionalNamedVariable> names, int size) {
        if (size == 0) {
          return new Array(0, "NULL");
        }

        var arrayName = mangler.unique(baseName);
        cFunction.stmt("SEXP %s[%d];", arrayName, size);
        for (var i = 0; i < size; i++) {
          var name = i < names.size() ? names.get(i).orNull() : null;
          var expr = name == null ? "R_MissingArg" : nvSymbolRef(name);
          cFunction.stmt("%s[%d] = %s;", arrayName, i, expr);
        }
        return new Array(size, arrayName);
      }

      private String emitSignature(Signature signature) {
        return "Rsh_Fir_param_types_from_string(%s)"
            .formatted(constantRef(SEXPs.string(signature.toString())));
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

      // endregion emit

      // region interned
      private String labelName(BB bb) {
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
