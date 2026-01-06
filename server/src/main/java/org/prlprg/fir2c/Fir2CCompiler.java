package org.prlprg.fir2c;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.gen2c.EscapeForC.escapeForC;

import com.google.common.collect.*;
import java.util.*;
import java.util.stream.*;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Parameter;
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
import org.prlprg.fir.ir.variable.*;
import org.prlprg.gen2c.*;
import org.prlprg.session.RSession;
import org.prlprg.sexp.*;
import org.prlprg.util.Lists;

/// Compiles FIŘ modules into C translation units.
public final class Fir2CCompiler {
  public static CompiledModule compile(Module module, RSession rSession, Option... options) {
    return new Fir2CCompiler(module, rSession, ImmutableSet.copyOf(options)).run();
  }

  static final String VAR_ENV = "RHO";
  static final String VAR_POOL = "CCP";
  static final String VAR_SIGNATURE = "SIGNATURE";

  // Input
  private final Module module;
  private final RSession rSession;
  private final ImmutableSet<Option> options;

  // Output
  private final CUnit cUnit = new CUnit();
  private final Map<Function, CompiledItem> compiledFunctions = new LinkedHashMap<>();
  private final Map<Abstraction, CompiledItem> compiledVersions = new LinkedHashMap<>();
  private final Map<Promise, CompiledItem> compiledPromises = new LinkedHashMap<>();

  // State
  private int tempTypeDisambiguator = 0;

  private Fir2CCompiler(Module module, RSession rSession, ImmutableSet<Option> options) {
    this.module = module;
    this.rSession = rSession;
    this.options = options;
  }

  private CompiledModule run() {
    cUnit.addInclude("runtime.h");

    compileDefinitions();

    return new CompiledModule(
        ImmutableMap.copyOf(compiledFunctions),
        ImmutableMap.copyOf(compiledVersions),
        ImmutableMap.copyOf(compiledPromises));
  }

  private void compileDefinitions() {
    var localFunctions = nestedDag(module);
    for (var function : localFunctions) {
      for (var version : function.versions()) {
        compileVersionFunction(function, version);
      }

      compileDispatchFunction(function);
    }
  }

  private void compileVersionFunction(Function function, Abstraction version) {
    if (version.isStub()) {
      VersionEmitter.forwardDeclareStub(cUnit, function, version);
    } else {
      var compiled = new VersionEmitter(function, version).run();
      compiledVersions.put(version, compiled);
    }
  }

  private void compileDispatchFunction(Function function) {
    var compiled = new DispatchEmitter(function).run();
    compiledFunctions.put(function, compiled);
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
    private final Abstraction version;

    // Output
    private final CFunction cFunction;

    // State
    private final Map<CFG, Set<Register>> locals = new LinkedHashMap<>();
    private final Map<CFG, Set<Register>> captures = new LinkedHashMap<>();

    static void forwardDeclareStub(CUnit cUnit, Function function, Abstraction version) {
      if (!version.isStub()) {
        throw new IllegalArgumentException(
            "Call new FirVersionEmitter(...).run() for non-stub:\n" + version);
      }

      var cName = versionCName(function, version);
      cUnit.addExternFunction(versionCReturn(version), cName, versionCParams(version));
    }

    VersionEmitter(
        Function function, Abstraction version) {
      if (version.isStub()) {
        throw new IllegalArgumentException(
            "Call FirVersionEmitter.stub(...) for stub:\n" + version);
      }

      this.function = function;
      this.version = version;

      var cName = versionCName(function, version);
      cFunction = cUnit.addFunction(versionCReturn(version), cName, versionCParams(version));

      prepare();
    }

    private void prepare() {
      // Compute local and captured registers
      version.streamCfgs().forEach(cfg -> locals.put(cfg, new LinkedHashSet<>()));
      version.streamCfgs().forEach(cfg -> captures.put(cfg, new LinkedHashSet<>()));
      var defUses = new DefUses(version);
      version
          .streamRegisterBindings()
          .forEach(
              binding -> {
                var register = (Register) binding.variable();

                CFG defCfg;
                if (binding instanceof Parameter) {
                  defCfg = version.cfg();
                } else {
                  var def = defUses.definition(register);
                  if (def == null) {
                    // Malformed CFG
                    return;
                  }

                  defCfg = def.inInnermostCfg().cfg();
                }

                locals.get(defCfg).add(register);

                for (var use : defUses.uses(register)) {
                  var useCfg = use.inInnermostCfg().cfg();

                  if (useCfg != defCfg) {
                    captures.get(useCfg).add(register);
                  }
                }
              });
    }

    private CompiledItem run() {
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cFunction
            .add()
            .comment(
                "FIR %s version %d (%s)",
                function.name().name(), function.indexOf(version), version.signature());
      }

      return new CfgEmitter(Objects.requireNonNull(version.cfg()), cFunction).run();
    }

    final class CfgEmitter {
      // Input
      private final CFG cfg;

      // Output
      private final CFunction cFunction;
      private final ConstantPool constantPool = new ConstantPool();
      private final List<CompiledItem> nested = new ArrayList<>();

      // State
      private final Map<String, Integer> tempArrayDisambiguators = new HashMap<>();

      CfgEmitter(CFG cfg, CFunction cFunction) {
        this.cfg = cfg;
        this.cFunction = cFunction;
      }

      CompiledItem run() {
        emitLocalDeclarations();

        for (var bb : cfg.bbs()) {
          new BBEmitter(bb, cFunction.add()).run();
        }

        return new CompiledItem(cFunction, constantPool.toSexp(), nested);
      }

      private void emitLocalDeclarations() {
        var localRegisters = Objects.requireNonNull(locals.get(cfg));
        if (localRegisters.isEmpty()) {
          return;
        }

        var sec = cFunction.add();

        if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
          sec.comment("Declare locals");
        }

        for (var register : localRegisters) {
          var cName = registerCName(register);
          sec.stmt("SEXP %s;", cName);
        }
      }

      final class BBEmitter {
        // Input
        private final BB bb;

        // Output
        private final CCode cCode;

        BBEmitter(BB bb, CCode cCode) {
          this.bb = bb;
          this.cCode = cCode;
        }

        private void run() {
          if (!bb.isEntry()) {
            // ';' is necessary,
            // otherwise if the next statement is a declaration (e.g. `SEXP x`),
            // the C syntax is invalid.
            cCode.label("%s:;", labelCName(bb));
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
            cCode.stmt("%s = %s;", registerPlace(statement.assignee()), expr);
          }
        }

        private String emitExpression(Expression expression) {
          return switch (expression) {
            case Aea(var arg) -> emitArgument(arg);
            case AssumeConstant(var _, var _), AssumeFunction _ -> "R_NilValue";
            case AssumeType(var target, var _) -> emitArgument(target);
            case Call call -> emitCall(call);
            case Cast(var target, var type) ->
                "Fir_cast(%s, %s)".formatted(emitArgument(target), emitType(cCode, type));
            case Closure closure -> {
              var compiled = compiledFunctions.get(closure.code());
              assert compiled != null : "should've been compiled first (or should've thrown if that wasn't possible) because we compile in the order of `nestedDag`";
              nested.add(compiled);

              assert compiled.cName().equals(functionCName(closure.code()));
              var cName = compiled.cName();
              var pool = constantRef(compiled.constantPool());
              yield "Fir_mkClosure(&%s, %s, %s)".formatted(cName, pool, VAR_ENV);
            }
            case Dup(var value) -> "Fir_dup(%s)".formatted(emitArgument(value));
            case Force(var value) -> "Fir_force(%s)".formatted(emitArgument(value));
            case Load(var variable) ->
                "Fir_load(%s, %s)".formatted(nvSymbolRef(variable), VAR_ENV);
            case LoadFun(var variable, var env) -> {
              var envSelector =
                  switch (env) {
                    case LoadFun.Env.LOCAL -> "Fir_LoadFun_Local";
                    case LoadFun.Env.GLOBAL -> "Fir_LoadFun_Global";
                    case LoadFun.Env.BASE -> "Fir_LoadFun_Base";
                  };
              yield "Fir_load_fun(%s, %s, %s)"
                  .formatted(envSelector, nvSymbolRef(variable), VAR_ENV);
            }
            case MaybeForce(var value) -> "Fir_maybe_force(%s)".formatted(emitArgument(value));
            case MkEnv() -> {
              cCode.stmt("Fir_push_env(&%s);", VAR_ENV);
              yield "R_NilValue";
            }
            case MkVector(var kind, var elements) -> {
              var namedArrays = emitNamedArgumentArrays(elements);
              yield "Fir_mk_vector(%s, %d, %s, %s)"
                  .formatted(
                      emitKind(cCode, kind),
                      namedArrays.values().size(),
                      namedArrays.values().pointer(),
                      namedArrays.names());
            }
            case Placeholder() -> {
              cCode.stmt("Rf_error(\"FIŘ placeholder reached\");");
              yield "R_NilValue";
            }
            case PopEnv() -> {
              cCode.stmt("Fir_pop_env(&%s);", VAR_ENV);
              yield "R_NilValue";
            }
            case Promise promise -> {
              var cName = promiseCName(promise);
              var cParams = promiseCParams(promise);
              var cReturn = promiseCReturn(promise);
              var promiseFunction = cUnit.addFunction(cReturn, cName, cParams);

              var compiled = new CfgEmitter(promise.code(), promiseFunction).run();
              compiledPromises.put(promise, compiled);
              nested.add(compiled);

              var pool = constantRef(compiled.constantPool());

              var captures = Objects.requireNonNull(VersionEmitter.this.captures.get(promise.code()));
              var capturesArray =
                  emitArray(
                      "captures",
                      "SEXP",
                      captures.stream().map(reg -> "&" + registerPlace(reg)).toList());

              yield "Fir_make_promise(&%s, %d, %s, %s, %s)"
                  .formatted(
                      cName, capturesArray.size(), capturesArray.pointer(), pool, VAR_ENV);
            }
            case ReflectiveLoad(var promArg, var variable) ->
                "Fir_reflective_load(%s, %s)"
                    .formatted(emitArgument(promArg), nvSymbolRef(variable));
            case ReflectiveStore(var promArg, var variable, var value) ->
                "Fir_reflective_store(%s, %s, %s)"
                    .formatted(emitArgument(promArg), nvSymbolRef(variable), emitArgument(value));
            case Store(var variable, var value) -> {
              var arg = emitArgument(value);
              cCode.stmt("Fir_store(%s, %s, %s);", nvSymbolRef(variable), arg, VAR_ENV);
              yield arg;
            }
            case SubscriptRead(var vector, var index) ->
                "Fir_subscript_read(%s, %s)"
                    .formatted(emitArgument(vector), emitArgument(index));
            case SubscriptWrite(var vector, var index, var value) ->
                "Fir_subscript_write(%s, %s, %s)"
                    .formatted(emitArgument(vector), emitArgument(index), emitArgument(value));
            case SuperLoad(var variable) ->
                "Fir_super_load(%s, %s)".formatted(nvSymbolRef(variable), VAR_ENV);
            case SuperStore(var variable, var value) -> {
              var arg = emitArgument(value);
              cCode.stmt("Fir_super_store(%s, %s, %s);", nvSymbolRef(variable), arg, VAR_ENV);
              yield arg;
            }
          };
        }

        private String emitCall(Call call) {
          var arguments = emitArgumentArray("args", call.callArguments());
          return switch (call.callee()) {
            case DispatchCallee(var calleeFun, var signature) -> {
              if (calleeFun.owner() == BUILTINS) {
                var builtinIndex = rSession.RFunTab().indexOf(calleeFun.name().name());
                yield "Fir_call_builtin(%d, %s, %d, %s)"
                    .formatted(builtinIndex, VAR_ENV, arguments.size(), arguments.pointer());
              }

              // The baseline's signature is the default
              if (signature == null) {
                signature = calleeFun.baseline().signature();
              }

              var cName = functionCName(calleeFun);
              var cSignature = emitSignature(signature);
              // TODO: pool?
              yield "%s(%s, %s%s)"
                  .formatted(
                      cName,
                      VAR_ENV,
                      cSignature,
                      arguments.splice());
            }
            case StaticCallee(var calleeFunction, var calleeVersion) -> {
              var cName = versionCName(calleeFunction, calleeVersion);
              yield "%s(%s, %s%s)"
                  .formatted(
                      cName,
                      VAR_POOL,
                      VAR_ENV,
                      arguments.splice());
            }
            case DynamicCallee(var actualCallee, var argumentNames) -> {
              var names = emitOptionalNameArray("arg_names", argumentNames, arguments.size());
              yield "Fir_call_dynamic(%s, %s, %d, %s, %s)"
                  .formatted(
                      emitArgument(actualCallee),
                      VAR_ENV,
                      arguments.size(),
                      arguments.pointer(),
                      names.pointer());
            }
          };
        }

        private void emitJump(Jump jump) {
          if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
            cCode.comment("%s", jump);
          }

          switch (jump) {
            case Return(var _, var value) -> cCode.stmt("return %s;", emitArgument(value));
            case Goto(var _, var target) -> emitJumpTo(1, target);
            case Unreachable(var _) -> {
              cCode.stmt("Rf_error(\"FIŘ unreachable reached\");");
              cCode.stmt("return R_NilValue;");
            }
            case If(var _, var condition, var ifTrue, var ifFalse) -> {
              cCode.stmt("if (Fir_is_true(%s)) {", emitArgument(condition));
              emitJumpTo(2, ifTrue);
              cCode.stmt("} else {");
              emitJumpTo(2, ifFalse);
              cCode.stmt("}");
            }
            case Checkpoint(var _, var success, var deopt) -> {
              for (var assume : assumptionsFor(success)) {
                var condition = emitAssumptionCondition(assume);
                cCode.stmt("if (!(%s)) {", condition);
                emitJumpTo(2, deopt);
                cCode.stmt("}");
              }
              emitJumpTo(1, success);
            }
            case Deopt(var _, var pc, var stack) -> {
              var stackArgs = emitArgumentArray("deopt_stack", stack);
              cCode.stmt(
                  "Fir_deopt(%d, %d, %s, %s, %s);",
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
                "Fir_assume_constant(%s, %s)"
                    .formatted(emitArgument(target), constantRef(constant.sexp()));
            case AssumeFunction a ->
                "Fir_assume_function(%s, &%s)"
                    .formatted(emitArgument(a.target()), functionCName(a.function()));
            case AssumeType(var target, var type) ->
                "Fir_assume_type(%s, %s)".formatted(emitArgument(target), emitType(cCode, type));
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

            var dest = registerPlace(phi);
            var value = emitArgument(arg);

            cCode.stmt(indentLevel, "%s = %s;", dest, value);
          }

          cCode.stmt(indentLevel, "goto %s;", labelCName(target.bb()));
        }

        private String emitSignature(Signature signature) {
          var returnType = emitType(cCode, signature.returnType());
          var paramTypes = emitArray("param_types", "Fir_Type", Lists.mapLazy(signature.parameterTypes(), t -> emitType(cCode, t)));
          return "Fir_signature(%s, %d, %s)"
              .formatted(
                  returnType,
                  paramTypes.size(),
                  paramTypes.pointer());
        }

        private Array emitArgumentArray(String baseName, List<Argument> arguments) {
          return emitArray(baseName, "SEXP", Lists.mapLazy(arguments, this::emitArgument));
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
          var arguments = IntStream.range(0, size).mapToObj(i -> {
            var name = i < names.size() ? names.get(i).orNull() : null;
            return name == null ? "R_MissingArg" : nvSymbolRef(name);
          }).toList();
          return emitArray(baseName, "SEXP", arguments);
        }

        private Array emitArray(String baseName, String elemCType, List<String> arguments) {
          if (arguments.isEmpty()) {
            return new Array(0, "NULL");
          }

          var disambiguator = tempArrayDisambiguators.getOrDefault(baseName, 0);
          var arrayName = "t_%s_%d".formatted(baseName, disambiguator);
          tempArrayDisambiguators.put(baseName, disambiguator + 1);

          cCode.stmt("%s %s[%d];", elemCType, arrayName, arguments.size());
          for (var i = 0; i < arguments.size(); i++) {
            cCode.stmt("%s[%d] = %s;", arrayName, i, arguments.get(i));
          }
          return new Array(arguments.size(), arrayName);
        }

        private String emitArgument(Argument argument) {
          return switch (argument) {
            case Constant(var constant) -> constantRef(constant);
            case Read(var variable) -> registerPlace(variable);
            case Use(var variable) -> registerPlace(variable);
          };
        }
      }

      // region misc
      private String registerPlace(Register register) {
        var name = registerCName(register);
        if (Objects.requireNonNull(captures.get(cfg)).contains(register)) {
          name = "*" + name;
        }
        return name;
      }

      private String nvSymbolRef(NamedVariable nv) {
        return constantRef(SEXPs.symbol(nv.name()));
      }

      private String constantRef(SEXP sexp) {
        var idx = constantPool.intern(sexp);
        return "Rsh_const(%s, %d)".formatted(VAR_POOL, idx);
      }
      // endregion misc
    }

    private List<String> promiseCParams(Promise promise) {
      var captures = Objects.requireNonNull(this.captures.get(promise.code()));
      return Fir2CCompiler.promiseCParams(captures);
    }
  }

  /// Emits C for a [Function]'s dynamic-dispatch function.
  private final class DispatchEmitter {
    // Input
    private final Function function;

    // Output
    private final CFunction cFunction;

    DispatchEmitter(Function function) {
      this.function = function;

      var cName = functionCName(function);
      var cParams = List.of(
          "SEXP %s".formatted(VAR_POOL),
          "SEXP %s".formatted(VAR_ENV),
          "Fir_Signature %s".formatted(VAR_SIGNATURE),
          "...");
      var cReturn = "SEXP";
      cFunction = cUnit.addFunction(cReturn, cName, cParams);
    }

    private CompiledItem run() {
      var versions = function.versionsSorted();
      int i;
      Iterator<Abstraction> versionIter;
      Abstraction version;

      CCode cCode;

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode = cFunction.add();
        cCode.comment(
            "FIR %s dynamic dispatch (%s)", function.name().name(), function.parameterNames());
        for (
            i = 0, versionIter = versions.iterator(), version = versionIter.next();
            i < versions.size();
            i++, version = versionIter.next()
        ) {
          cCode.comment("%d. %s", i, version.signature());
        }
      }

      cCode = cFunction.add();
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment("Setup");
      }
      cCode.stmt("bool incompatible[%d];", versions.size());
      cCode.stmt("va_list args;");
      cCode.stmt("va_start(args, %s);", VAR_SIGNATURE);

      cCode = cFunction.add();
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment("Filter by argument count");
      }
      for (
          i = 0, versionIter = versions.iterator(), version = versionIter.next();
          i < versions.size();
          i++, version = versionIter.next()
      ) {
        cCode.stmt("incompatible[%d] = %s.param_count == %d;", i, VAR_SIGNATURE, version.parameters().size());
      }

      cCode = cFunction.add();
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment("Filter by static return type");
      }
      for (
          i = 0, versionIter = versions.iterator(), version = versionIter.next();
          i < versions.size();
          i++, version = versionIter.next()
      ) {
        var typeEmit = emitType(cCode, version.returnType());
        cCode.stmt(2, "incompatible[%d] = incompatible[%d] || !Fir_is_subtype(%s, %s.return_type);", i, i, typeEmit, VAR_SIGNATURE);
      }
      cCode.stmt("}");


      // TODO: Don't check parts of the static type that are known at runtime,
      //  then filter by runtime type. Currently we ignore the runtime type.
      cCode = cFunction.add();
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment("Filter by arguments' static types");
      }
      cCode.stmt("for (int i = 0; i < %s.param_count; ++i) {", VAR_SIGNATURE);
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment(2, "Filter by argument %d's static type", i);
      }
      cCode.stmt(2, "Fir_Type arg_type = %s.param_types[i];", VAR_SIGNATURE);
      for (
          i = 0, versionIter = versions.iterator(), version = versionIter.next();
          i < versions.size();
          i++, version = versionIter.next()
      ) {
        var typeEmit = emitType(cCode, version.parameters().get(i).type());
        cCode.stmt(2, "incompatible[%d] = incompatible[%d] || !Fir_is_subtype(arg_type, %s);", i, i, typeEmit);
      }
      cCode.stmt("}");

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode = cFunction.add();
        cCode.comment("Filter by arguments' runtime type");
        cCode.comment("TODO. Currently we check the full static type, so it's sound, but not optimal");
      }

      cCode = cFunction.add();
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
        cCode.comment("Call first compatible version");
      }
      cCode.stmt("SEXP out;");
      for (
          i = 0, versionIter = versions.iterator(), version = versionIter.next();
          i < versions.size();
          i++, version = versionIter.next()
      ) {
        var ifHead = i == 0 ? "if" : "else if";
        var baselineName = versionCName(function, version);

        cCode.stmt("%s (!incompatible[%d])", ifHead, i);
        // Reuse the active `va_list`.
        // When we implement checking runtime types, we must move the `va_list` back after.
        cCode.stmt(2, "out = %s(%s, %s, args);", baselineName, VAR_POOL, VAR_ENV);
      }
      cCode.stmt("else");
      cCode.stmt(2, "Rf_error(\"No versions compatible with the given arguments for %s\");", sanitizeString(function.name().name()));
      cCode.stmt("va_end(args);");
      cCode.stmt("return out;");

      var nested = versions.stream().filter(v -> !v.isStub()).map(v -> Objects.requireNonNull(compiledVersions.get(v))).toList();
      return new CompiledItem(cFunction, SEXPs.vec(), nested);
    }
  }

  // region emit types
  private String emitType(CCode cCode, Type type) {
    var comment =
        options.contains(Option.EMIT_DEBUG_COMMENTS) ? "/* %s */ ".formatted(type) : "";
    return "%sFir_type(%s, %s, %s)"
        .formatted(
            comment,
            emitKind(cCode, type.kind()),
            emitOwnership(type.ownership()),
            emitConcreteness(type.concreteness()));
  }

  private String emitKind(CCode cCode, Kind kind) {
    return switch (kind) {
      case Kind.Any() -> "Fir_kind_any";
      case Kind.AnyValue() -> "Fir_kind_anyValue";
      case Kind.PrimitiveScalar(var primitiveKind) ->
          "Fir_kind_primitiveScalar(%s)".formatted(emitPrimitiveKind(primitiveKind));
      case Kind.PrimitiveVector(var primitiveKind) ->
          "Fir_kind_primitiveVector(%s)".formatted(emitPrimitiveKind(primitiveKind));
      case Kind.Closure() -> "Fir_kind_closure";
      case Kind.Dots() -> "Fir_kind_dots";
      case Kind.Promise(var valueType, var fx) -> {
        var tempTypeName = "t_type_%d".formatted(tempTypeDisambiguator++);

        cCode.stmt("Fir_Type %s = %s", tempTypeName, emitType(cCode, valueType));
        yield "Fir_kind_promise(&%s, %s)".formatted(tempTypeName, emitEffects(fx));
      }
    };
  }

  private static String emitPrimitiveKind(PrimitiveKind primitiveKind) {
    return Integer.toString(primitiveKind.ordinal());
  }

  private static String emitOwnership(Ownership ownership) {
    return Integer.toString(ownership.ordinal());
  }

  private static String emitConcreteness(Concreteness concreteness) {
    return Boolean.toString(concreteness == Concreteness.DEFINITE);
  }

  private static String emitEffects(Effects fx) {
    return Boolean.toString(fx.reflect());
  }
  // endregion emit types

  // region misc
  /// Reconstruct DAG of nested functions.
  /// This is hacky: it relies on an invariant that exists in R but not FIŘ:
  /// the closure provided to a `clos` instruction never references the closure containing it,
  /// either directly or transitively via other `clos` instructions.
  /// Thus it can return `UnsupportedOperationException` for custom FIŘ modules.
  private static Collection<Function> nestedDag(Module module) {
    // Compute direct dependencies (into `depTree`)
    var depTree = new LinkedHashMap<Function, Set<Function>>(module.localFunctions().size());
    for (var f : module.localFunctions()) {
      var intransitiveDeps = f
          .versions()
          .stream()
          .flatMap(Abstraction::streamCfgs)
          .flatMap(cfg -> cfg.bbs().stream())
          .flatMap(bb -> bb.statements().stream())
          .map(Statement::expression)
          .filter(e -> e instanceof Closure)
          .map(e -> (Closure) e)
          .map(Closure::code)
          .collect(Collectors.toCollection(LinkedHashSet::new));
      depTree.put(f, intransitiveDeps);
    }

    // Compute transitive dependencies (reuse `depTree`)
    var progress = true;
    while (progress) {
      progress = false;

      for (var e : depTree.entrySet()) {
        var fun = e.getKey();
        var deps = e.getValue();

        for (var dep : deps) {
          if (dep == fun) {
            throw new UnsupportedOperationException("Function " + fun.name() + " transitively references itself via `clos`\nWe don't support compiling these because they aren't generated from R");
          }

          var subDeps = depTree.get(dep);
          if (subDeps != null && deps.addAll(subDeps)) {
            progress = true;
          }
        }
      }
    }

    // Convert tree into DAG
    var dag = new LinkedHashSet<Function>(module.localFunctions().size());
    var remaining = new LinkedHashSet<>(module.localFunctions());
    while (!remaining.isEmpty()) {
      for (var entry : depTree.entrySet()) {
        var fun = entry.getKey();
        var deps = entry.getValue();

        if (dag.contains(fun)) {
          continue;
        }

        if (!Sets.intersection(remaining, deps).isEmpty()) {
          continue;
        }

        dag.add(fun);
        remaining.remove(fun);
      }
    }
    return dag;
  }

  private static String functionCName(Function function) {
    return "Fir_fun_" + escapeForC(function.name().name());
  }

  private static String versionCName(Function function, Abstraction version) {
    return "Fir_ver_" + escapeForC(function.name().name()) + "_v" + function.indexOf(version);
  }

  private static String promiseCName(Promise promise) {
    return "Fir_prom_" + Integer.toHexString(promise.hashCode());
  }

  private static List<String> versionCParams(Abstraction version) {
    return Stream.concat(
        Stream.of("SEXP %s".formatted(VAR_POOL), "SEXP %s".formatted(VAR_ENV)),
        version.parameters().stream().map(p -> "SEXP %s".formatted(registerCName(p.variable())))).toList();
  }

  private static List<String> promiseCParams(Collection<Register> captures) {
    return Stream.concat(
        Stream.of("SEXP %s".formatted(VAR_POOL), "SEXP %s".formatted(VAR_ENV)),
        captures.stream().map(capture -> "SEXP const*%s".formatted(registerCName(capture)))).toList();
  }

  private static String versionCReturn(Abstraction ignored) {
    return "SEXP";
  }

  private static String promiseCReturn(Promise ignored) {
    return "SEXP";
  }

  private static String registerCName(Register register) {
    return "r_" + register.name();
  }

  private static String labelCName(BB bb) {
    if (bb.isEntry()) {
      throw new IllegalArgumentException("Can't refer to the entry BB");
    }
    return "l_" + bb.label();
  }


  private static String sanitizeString(String value) {
    return value.replace("\"", "\\\"");
  }

  private record Array(int size, String pointer) {
    String splice() {
      var sb = new StringBuilder();
      for (var i = 0; i < size; i++) {
        sb.append(", ");
        sb.append("%s[%d]");
      }
      return sb.toString();
    }
  }

  private record ArrayAndNames(Array values, String names) {}
  // endregion misc
}
