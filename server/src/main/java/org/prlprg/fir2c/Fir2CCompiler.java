package org.prlprg.fir2c;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.gen2c.EscapeForC.escapeForC;

import com.google.common.collect.*;
import java.util.*;
import java.util.stream.*;
import org.intellij.lang.annotations.PrintFormat;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.Liveness;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.AnySexp;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.*;
import org.prlprg.gen2c.*;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;
import org.prlprg.session.RSession;
import org.prlprg.sexp.*;
import org.prlprg.util.Lists;

/// Compiles FIŘ modules into C translation units.
public final class Fir2CCompiler {
  /// Return a C file and constant pools for `function` and its children.
  public static CompiledModule compile(Function function, RSession rSession, Option... options) {
    return new Fir2CCompiler(function.owner(), rSession, ImmutableSet.copyOf(options))
        .run(function);
  }

  private static final String VAR_ENV = "env";
  private static final String VAR_DATA = "data";
  private static final String VAR_CAPTURES = "captures";
  private static final String VAR_POOL = "pool";
  private static final String VAR_SIGNATURE = "signature";

  // Input
  private final Module module;
  private final RSession rSession;
  private final ImmutableSet<Option> options;

  // Output
  private final CUnit cUnit = new CUnit();
  private final LinkedHashSet<Function> referencedFunctions = new LinkedHashSet<>();
  private final LinkedHashMap<Abstraction, Function> referencedVersions = new LinkedHashMap<>();
  private final Set<Function> compiledFunctions = new HashSet<>();
  private final Set<Promise> compiledPromises = new HashSet<>();

  private Fir2CCompiler(Module module, RSession rSession, ImmutableSet<Option> options) {
    this.module = module;
    this.rSession = rSession;
    this.options = options;
  }

  private CompiledModule run(Function mainFunction) {
    cUnit.addInclude("runtime.h");

    var mainEmitter = new FunctionEmitter(mainFunction);
    mainEmitter.run();

    if (options.contains(Option.COMPILE_REFERENCED_FUNCTIONS)) {
      while (!referencedFunctions.isEmpty() || !referencedVersions.isEmpty()) {
        var next =
            referencedFunctions.isEmpty()
                ? referencedVersions.remove(referencedVersions.firstEntry().getKey())
                : referencedFunctions.removeFirst();
        if (compiledFunctions.contains(next)) {
          continue;
        }
        var nextCpSxp = new FunctionEmitter(next).run();

        // We must initialize `next`'s constant pools,
        // and we must do so *before* `main`'s initialization
        // (and before referenced functions encountered before).
        var initCode = mainEmitter.initCFunction.addFirst();
        var nextInitCName = functionInitCName(next);
        initCode.stmt("%s(%s);", nextInitCName, constantRef(mainEmitter.fnPool, nextCpSxp));
      }
    } else {
      emitReferencedExternalDeclarations();
    }

    return new CompiledModule(cUnit, mainEmitter.fnPool.toSexp());
  }

  private void emitReferencedExternalDeclarations() {
    for (var function : referencedFunctions) {
      if (compiledFunctions.contains(function)) {
        // Already declared non-extern
        continue;
      }

      var constantsCName = functionConstantsCName(function);
      cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

      var cName = functionDispatchCName(function);
      cUnit.addExternFunction(DISPATCH_C_RETURN, cName, DISPATCH_C_PARAMS);
    }
    for (var entry : referencedVersions.entrySet()) {
      var version = entry.getKey();
      var function = entry.getValue();

      if (compiledFunctions.contains(function)) {
        // Already declared non-extern
        continue;
      }

      var constantsCName = versionConstantsCName(function, version);
      cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

      var cName = versionCallCName(function, version);
      var cParams = versionCallCParams(version);
      var cReturn = versionCallCReturn(version);
      cUnit.addExternFunction(cReturn, cName, cParams);
    }
  }

  /// Emits C for every version and the dispatch of a function.
  private final class FunctionEmitter {
    // Input
    private final Function function;

    // Output
    final CFunction initCFunction;
    private final ConstantPool fnPool = new ConstantPool();

    FunctionEmitter(Function function) {
      this.function = function;

      var cName = functionInitCName(function);
      initCFunction = cUnit.addFunction(INIT_C_RETURN, cName, INIT_C_PARAMS);
    }

    VecSXP run() {
      if (!compiledFunctions.add(function)) {
        throw new UnsupportedOperationException(
            "Already compiled: " + function.name() + "\n" + module);
      }

      emitConstants();

      beginEmitInit();

      if (function.canDispatch()) {
        emitDispatchFromR();

        emitDispatch();
      }

      emitVersions();

      endEmitInit();

      return fnPool.toSexp();
    }

    private void emitConstants() {
      var constantsCName = functionConstantsCName(function);
      cUnit.addGlobalVariable(CONSTANTS_C_TYPE, constantsCName);
    }

    private void beginEmitInit() {
      debugComment(initCFunction.add(), "## Init %s", function.name());

      var cCode = initCFunction.add();
      debugComment(cCode, "# Assign constant pool global variable");
      var constantsCName = functionConstantsCName(function);
      cCode.stmt("%s = %s;", constantsCName, VAR_POOL);

      cCode = initCFunction.add();
      debugComment(cCode, "# Add `Fir_FunctionData`");
      var idx = fnPool.internSpace();
      assert idx == 0;
      var functionName = "\"%s\"".formatted(sanitizeString(function.name().toString()));
      var formalNames =
          constantRef(
              fnPool,
              function.parameterNames().stream()
                  .map(nv -> SEXPs.symbol(nv.name()))
                  .collect(SEXPs.toVec()));
      cCode.stmt("SEXP data_sexp = Rf_allocVector(RAWSXP, sizeof(Fir_FunctionData));");
      cCode.stmt("Fir_FunctionData *data = (Fir_FunctionData*) STDVEC_DATAPTR(data_sexp);");
      cCode.stmt(
          "*data = (Fir_FunctionData) {.name = %s, .dispatch = %s, .formal_names = %s};",
          functionName,
          function.canDispatch() ? functionDispatchCName(function) : "NULL",
          formalNames);
      cCode.stmt("Fir_set_const(%s, %d, data_sexp);", VAR_POOL, idx);
    }

    private void endEmitInit() {
      initCFunction.add().stmt("return R_NilValue;");
    }

    private void emitDispatchFromR() {
      var cName = functionFromRCName(function);
      var cFunction = cUnit.addFunction(FROM_R_C_RETURN, cName, FROM_R_C_PARAMS);

      int numParams = function.parameterNames().size();
      var versions =
          function.versionsSorted().stream()
              .filter(
                  v ->
                      v.parameters().size() == numParams
                          && v.parameters().stream()
                              .allMatch(
                                  p ->
                                      p.type().kind().repr() == Repr.SEXP
                                          && p.type().ownership() == Ownership.SHARED)
                          && v.signature().returnType().kind().repr() == Repr.SEXP)
              .toList();

      CCode cCode;

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)
          || options.contains(Option.EMIT_DEBUG_PRINTS)) {
        cCode = cFunction.add();

        debugComment(cCode, "## Dispatch-from-R %s", function.name());

        for (var i = 0; i < versions.size(); i++) {
          var version = versions.get(i);

          debugComment(cCode, "# %d. %s", i, version.signature());
        }
      }

      if (!function.parameterNames().isEmpty()) {
        emitConstantPoolAlias(cFunction);
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Read arguments");
      var argsSplice = new StringBuilder();
      for (int j = 0; j < numParams; j++) {
        var paramName = function.parameterNames().get(j);
        var argName = "arg" + j;

        if (paramName == NamedVariable.DOTS) {
          // R passes missing instead of an empty list, but FIR always expects a list.
          cCode.stmt("SEXP %s = Rf_findVarInFrame(%s, R_DotsSymbol);", argName, VAR_ENV);
          cCode.stmt("%s = %s == R_MissingArg ? R_NilValue : %s;", argName, argName, argName);
        } else {
          var paramSym = nvSymbolRef(fnPool, paramName);
          cCode.stmt(
              "SEXP %s = Fir_safe_force(Rf_findVarInFrame(%s, %s));", argName, VAR_ENV, paramSym);
        }

        argsSplice.append(", ").append(argName);
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Suppress inner mkenv (if present) because R makes it");
      cCode.stmt("SEXP outer_env;");
      cCode.stmt("bool push_suppressed;");
      cCode.stmt("Fir_set_env_pushed_from_r(%s, &outer_env, &push_suppressed);", VAR_ENV);

      var baseline = function.baseline();
      var baselineCName = versionCallCName(function, baseline);
      if (baseline.parameters().size() != function.parameterNames().size()) {
        throw new IllegalStateException(
            "Function's parameter count isn't equal its baseline's:\n" + function);
      }

      if (versions.size() > 1) {
        cCode = cFunction.add();
        debugComment(cCode, "# Filter possible optimized versions by runtime types");
        cCode.stmt("bool incompatible[%d] = {0};", versions.size());
        for (int j = 0; j < numParams; j++) {
          var argName = "arg" + j;

          for (var i = 0; i < versions.size(); i++) {
            var version = versions.get(i);

            var typeEmit = emitType(version.parameters().get(j).type());

            var chain = j == 0 ? "" : "incompatible[%d] || ".formatted(i);
            cCode.stmt(
                "incompatible[%d] = %s!Fir_value_matches(%s, %s);", i, chain, argName, typeEmit);
          }
        }

        cCode = cFunction.add();
        debugComment(cCode, "# Call first compatible optimized version, else baseline");
        cCode.stmt("SEXP out;");
        for (var i = 0; i < versions.size(); i++) {
          var version = versions.get(i);

          var ifHead = i == 0 ? "if" : "else if";
          var callCName = versionCallCName(function, version);

          cCode.stmt("%s (!incompatible[%d])", ifHead, i);
          cCode.stmt(2, "out = %s(%s%s);", callCName, VAR_ENV, argsSplice);
        }

        cCode.stmt("else");
        cCode.stmt(2, "out = %s(%s%s);", baselineCName, VAR_ENV, argsSplice);
      } else {
        cCode = cFunction.add();
        debugComment(cCode, "# Call baseline (no optimized versions are possible)");
        cCode.stmt("SEXP out = %s(%s%s);", baselineCName, VAR_ENV, argsSplice);
      }

      debugComment(cCode, "# Un-suppress inner mkenv");
      cCode.stmt("Fir_unset_env_pushed_from_r(outer_env, push_suppressed);");

      cCode = cFunction.add();
      cCode.stmt("return out;");
    }

    private void emitDispatch() {
      var cName = functionDispatchCName(function);
      var cFunction = cUnit.addFunction(DISPATCH_C_RETURN, cName, DISPATCH_C_PARAMS);

      var versions =
          function.versionsSorted().stream()
              .filter(
                  v ->
                      v.signature().parameterTypes().stream()
                              .allMatch(t -> t.kind().repr() == Repr.SEXP)
                          && v.signature().returnType().kind().repr() == Repr.SEXP)
              .toList();

      CCode cCode;

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)
          || options.contains(Option.EMIT_DEBUG_PRINTS)) {
        cCode = cFunction.add();

        debugComment(cCode, "## Dispatch %s", function.name());

        for (var i = 0; i < versions.size(); i++) {
          var version = versions.get(i);

          debugComment(cCode, "# %d. %s", i, version.signature());
        }

        debugSignature(cCode);
      }

      cCode = cFunction.add();
      cCode.stmt("bool incompatible[%d];", versions.size());
      cCode.stmt("va_list args;");
      cCode.stmt("va_start(args, %s);", VAR_SIGNATURE);
      cCode.stmt("va_list args2;");
      cCode.stmt("va_copy(args2, args);");

      cCode = cFunction.add();
      debugComment(cCode, "# Filter by argument count");
      for (var i = 0; i < versions.size(); i++) {
        var version = versions.get(i);

        cCode.stmt(
            "incompatible[%d] = %s.param_count != %d;",
            i, VAR_SIGNATURE, version.parameters().size());
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Filter by static effects and return type");
      for (var i = 0; i < versions.size(); i++) {
        var version = versions.get(i);

        var typeEmit = emitType(version.returnType());
        var effectsEmit = emitEffects(version.effects());
        cCode.stmt(
            "incompatible[%d] = incompatible[%d] || !Fir_is_subtype(%s, %s.return_type) || !Fir_is_subeffects(%s, %s.effects);",
            i, i, typeEmit, VAR_SIGNATURE, effectsEmit, VAR_SIGNATURE);
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Filter by arguments' un-improvable type info:");
      debugComment(
          cCode, "# parameter length, static ownership, and C type (but currently all are SEXP)");
      for (var i = 0; i < versions.size(); i++) {
        var version = versions.get(i);

        for (var j = 0; j < version.parameters().size(); j++) {
          var ownershipEmit = emitOwnership(version.parameters().get(j).type().ownership());
          cCode.stmt(
              "incompatible[%d] = incompatible[%d] || %s.param_types[%d].ownership != %s;",
              i, i, VAR_SIGNATURE, j, ownershipEmit);
        }
      }

      var cases = new ArrayList<ArrayList<String>>();
      for (var i = 0; i < versions.size(); i++) {
        var version = versions.get(i);

        for (var j = 0; j < version.parameters().size(); j++) {
          var typeEmit = emitType(version.parameters().get(j).type());

          if (cases.size() <= j) {
            cases.add(new ArrayList<>());
          }
          cases
              .get(j)
              .add(
                  "incompatible[%d] = incompatible[%d] || !Fir_value_matches(arg_sexp, %s);"
                      .formatted(i, i, typeEmit));
        }
      }
      if (!cases.isEmpty()) {
        cCode = cFunction.add();
        debugComment(cCode, "# Filter by arguments' runtime type");
        cCode.stmt("for (int i = 0; i < %s.param_count; ++i) {", VAR_SIGNATURE);
        cCode.stmt(2, "SEXP arg_sexp = va_arg(args2, SEXP);");
        cCode.stmt(2, "switch (i) {");
        for (var j = 0; j < cases.size(); j++) {
          cCode.stmt(2, "case %d:", j);
          for (var line : cases.get(j)) {
            cCode.stmt(3, "%s", line);
          }
        }
        cCode.stmt(2, "default:");
        cCode.stmt(3, "break;");
        cCode.stmt(2, "}");
        cCode.stmt("}");
      }
      cCode.stmt("va_end(args2);");

      cCode = cFunction.add();
      debugComment(cCode, "# Call first compatible version");
      cCode.stmt("SEXP out;");
      for (var i = 0; i < versions.size(); i++) {
        var version = versions.get(i);

        var ifHead = i == 0 ? "if" : "} else if";
        var callCName = versionCallCName(function, version);

        cCode.stmt("%s (!incompatible[%d]) {", ifHead, i);

        var argsSplice = new StringBuilder();
        var argsSpliceFmt = new Formatter(argsSplice);
        for (int j = 0; j < version.parameters().size(); j++) {
          // Passing `va_arg` expressions inline causes the arguments to be passed backwards.
          // Instead, we must assign them to variables and pass those.
          cCode.stmt(2, "SEXP arg%d = va_arg(args, SEXP);", j);
          argsSpliceFmt.format(", arg%d", j);
        }

        cCode.stmt(2, "out = %s(%s%s);", callCName, VAR_ENV, argsSplice);
      }
      cCode.stmt("} else");
      cCode.stmt(
          2,
          "Rf_error(\"No versions compatible with the given arguments for %s\");",
          sanitizeString(function.name().name()));

      cCode = cFunction.add();
      cCode.stmt("va_end(args);");
      cCode.stmt("return out;");
    }

    private void emitVersions() {
      var initCCode = initCFunction.add();
      debugComment(initCCode, "# Init versions");

      for (var version : function.versions()) {
        if (version.isStub()) {
          VersionEmitter.forwardDeclareStub(cUnit, function, version);
        } else {
          var cpSxp = new VersionEmitter(version).run();
          var cp = constantRef(fnPool, cpSxp);

          var versionInitCName = versionInitCName(function, version);
          initCCode.stmt("%s(%s);", versionInitCName, cp);
        }
      }
    }

    private void emitConstantPoolAlias(CFunction cFunction) {
      cFunction.add().stmt("SEXP %s = %s;", VAR_POOL, functionConstantsCName(function));
    }

    private final class VersionEmitter {
      // Input
      private final Abstraction version;

      // State
      private final Map<CFG, Set<Register>> locals = new LinkedHashMap<>();
      private final Map<CFG, Set<Register>> captures = new LinkedHashMap<>();
      private final Map<Register, Type> registerTypes = new LinkedHashMap<>();

      static void forwardDeclareStub(CUnit cUnit, Function function, Abstraction version) {
        if (!version.isStub()) {
          throw new IllegalArgumentException(
              "Call new FirVersionEmitter(...).run() for non-stub:\n" + version);
        }

        var constantsCName = versionConstantsCName(function, version);
        cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

        var cName = versionCallCName(function, version);
        var cParams = versionCallCParams(version);
        var cReturn = versionCallCReturn(version);
        cUnit.addExternFunction(cReturn, cName, cParams);
      }

      VersionEmitter(Abstraction version) {
        if (version.isStub()) {
          throw new IllegalArgumentException(
              "Call FirVersionEmitter.stub(...) for stub:\n" + version);
        }

        this.version = version;

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
                  registerTypes.put(register, binding.type());

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

                  if (!(binding instanceof Parameter)) {
                    locals.get(defCfg).add(register);
                  }

                  for (var use : defUses.uses(register)) {
                    var useCfg = use.inInnermostCfg().cfg();

                    if (useCfg != defCfg) {
                      captures.get(useCfg).add(register);
                    }
                  }
                });
      }

      VecSXP run() {
        var constantsCName = versionConstantsCName(function, version);

        var initCName = versionInitCName(function, version);
        var initCFunction = cUnit.addFunction(INIT_C_RETURN, initCName, INIT_C_PARAMS);

        var cName = versionCallCName(function, version);
        var cParams = versionCallCParams(version);
        var cReturn = versionCallCReturn(version);
        var cFunction = cUnit.addFunction(cReturn, cName, cParams);

        if (options.contains(Option.EMIT_DEBUG_COMMENTS)
            || options.contains(Option.EMIT_DEBUG_PRINTS)) {
          debugComment(
              initCFunction.add(),
              "## Init %s version %s",
              function.name().name(),
              version.signature());

          var cCode = cFunction.add();
          debugComment(cCode, "## Call %s version %s", function.name().name(), version.signature());

          // Debug-print SEXP parameters
          if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
            for (var param : version.parameters()) {
              debugValue(
                  cCode,
                  param.variable().name(),
                  registerCName(param.variable()),
                  param.type().kind().repr());
            }
          }
        }

        return new CfgEmitter(
                Objects.requireNonNull(version.cfg()),
                version.returnType(),
                constantsCName,
                initCFunction,
                cFunction,
                new ConstantPool())
            .run();
      }

      private final class PromiseEmitter {
        // Input
        private final Promise promise;

        // Output
        private final String constantsCName;
        private final CFunction initCFunction;
        private final CFunction fromRCFunction;
        private final CFunction evalCFunction;
        private final ConstantPool pool;

        PromiseEmitter(
            Promise promise,
            CFunction initCFunction,
            CFunction fromRCFunction,
            CFunction evalCFunction) {
          this.promise = promise;

          constantsCName = promiseConstantsCName(promise);
          this.initCFunction = initCFunction;
          this.fromRCFunction = fromRCFunction;
          this.evalCFunction = evalCFunction;
          pool = new ConstantPool();
        }

        VecSXP run() {
          if (!compiledPromises.add(promise)) {
            throw new IllegalStateException("Already compiled: " + promise);
          }

          beginEmitInit();

          emitFromR();

          beginEmitEval();

          return new CfgEmitter(
                  promise.code(),
                  promise.valueType(),
                  constantsCName,
                  initCFunction,
                  evalCFunction,
                  pool)
              .run();
        }

        private void beginEmitInit() {
          var cCode = initCFunction.add();
          debugComment(cCode, "# Add `Fir_PromiseData`");
          var idx = pool.internSpace();
          assert idx == 0;
          cCode.stmt("SEXP data_sexp = Rf_allocVector(RAWSXP, sizeof(Fir_PromiseGlobalData));");
          cCode.stmt("Fir_set_const(%s, %d, data_sexp);", VAR_POOL, idx);

          cCode.stmt(
              "Fir_PromiseGlobalData *data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(data_sexp);");
          var evalCName = promiseEvalCName(promise);
          var valueType = emitType(promise.valueType());
          var reflect = emitEffects(promise.effects());
          cCode.stmt(
              "*data = (Fir_PromiseGlobalData) {.eval = %s, .value_type = %s, .effects = %s};",
              evalCName, valueType, reflect);
        }

        private void emitFromR() {
          var cCode = fromRCFunction.add();
          cCode.stmt(
              "void **captures = ((Fir_PromiseLocalData*) STDVEC_DATAPTR(CDR(%s)))->captures;",
              VAR_DATA);
          var evalCName = promiseEvalCName(promise);
          cCode.stmt("return %s(%s, captures);", evalCName, VAR_ENV);
        }

        private void beginEmitEval() {
          var captureSet = Objects.requireNonNull(captures.get(promise.code()));

          var cCode = evalCFunction.add();
          debugComment(cCode, "# Bind captures");
          var iter = captureSet.iterator();
          for (var i = 0; i < captureSet.size(); i++) {
            var capture = iter.next();
            var captureRepr = registerRepr(capture);
            var captureCType = reprCType(captureRepr);
            var captureCName = registerCName(capture);
            cCode.stmt(
                "%s *%s = (%s *)%s[%d];",
                captureCType, captureCName, captureCType, VAR_CAPTURES, i);
            debugValue(cCode, captureCName, "*%s".formatted(captureCName), captureRepr);
          }
        }
      }

      private final class CfgEmitter {
        // Input
        private final CFG cfg;
        private final Type returnType;

        // Output
        private final String constantsCName;
        private final CFunction initCFunction;
        private final CFunction cFunction;
        private final ConstantPool pool;

        // State
        private final Liveness liveness;
        private final Set<Register> locals;
        private final Map<String, Integer> tempArrayDisambiguators = new HashMap<>();

        CfgEmitter(
            CFG cfg,
            Type returnType,
            String constantsCName,
            CFunction initCFunction,
            CFunction cFunction,
            ConstantPool pool) {
          this.cfg = cfg;
          this.returnType = returnType;
          this.constantsCName = constantsCName;
          this.initCFunction = initCFunction;
          this.cFunction = cFunction;
          this.pool = pool;

          liveness = new Liveness(cfg);
          locals = Objects.requireNonNull(VersionEmitter.this.locals.get(cfg));
        }

        VecSXP run() {
          emitConstants();

          beginEmitInit();

          emitConstantPoolAlias();

          emitLocalDeclarations();

          for (var bb : cfg.bbs()) {
            new BBEmitter(bb, cFunction.add()).run();
          }

          endEmitInit();

          return pool.toSexp();
        }

        private void emitConstants() {
          cUnit.addGlobalVariable(CONSTANTS_C_TYPE, constantsCName);
        }

        /// Code will be appended when nested closures and promises are visited.
        private void beginEmitInit() {
          var cCode = initCFunction.add();

          debugComment(cCode, "# Assign constant pool global variable");

          cCode.stmt("%s = %s;", constantsCName, VAR_POOL);
        }

        private void endEmitInit() {
          initCFunction.add().stmt("return R_NilValue;");
        }

        private void emitConstantPoolAlias() {
          cFunction.add().stmt("SEXP %s = %s;", VAR_POOL, constantsCName);
        }

        private void emitLocalDeclarations() {
          if (locals.isEmpty()) {
            return;
          }

          var sec = cFunction.add();

          debugComment(sec, "# Declare locals");

          for (var register : locals) {
            var cName = registerCName(register);
            sec.stmt("%s %s;", reprCType(registerRepr(register)), cName);
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

          void run() {
            if (!bb.isEntry()) {
              // ';' is necessary,
              // otherwise if the next statement is a declaration (e.g. `SEXP x`),
              // the C syntax is invalid.
              cCode.label("%s:;", labelCName(bb));
            }

            int numLiveIn = emitProtect();

            for (var statement : bb.statements()) {
              emitStatement(statement);
            }

            // Jump won't trigger GC,
            // and we can't emit a cleanup after because it changes control flow.
            emitUnprotect(numLiveIn);
            emitJump(bb.jump());
          }

          private void emitStatement(Statement statement) {
            debugInstr(cCode, statement);

            if (statement.equals(Statement.NOOP)) {
              return;
            }

            var expr = emitExpression(statement.assignee(), statement.expression());
            if (expr == null) {
              return;
            }

            if (statement.assignee() == null) {
              cCode.stmt("(void)(%s);", expr);
            } else {
              if (registerRepr(statement.assignee()) != Repr.SEXP) {
                cCode.stmt("%s = %s;", registerPlace(statement.assignee()), expr);
              } else {
                cCode.stmt("%s = PROTECT(%s);", registerPlace(statement.assignee()), expr);
              }
              debugValue(
                  cCode,
                  statement.assignee().name(),
                  registerPlace(statement.assignee()),
                  registerRepr(statement.assignee()));
            }
          }

          private @Nullable String emitExpression(
              @Nullable Register assignee, Expression expression) {
            return switch (expression) {
              case Closure(var isStatic, var codeRef) -> {
                // Compile the closure or protect its constant pool

                var function = codeRef.get();

                var fromRCName = functionFromRCName(function);

                var formalsSxp =
                    function.parameterNames().stream()
                        .map(nv -> new TaggedElem(nv.name(), SEXPs.MISSING_ARG))
                        .collect(SEXPs.toList());
                var formals = constantRef(pool, formalsSxp);

                String cp;
                if (compiledFunctions.contains(function)) {
                  var cpIdx =
                      pool.internPatched(
                          function,
                          idx -> {
                            // Reuse previously-compiled declaration
                            var constantsCName = functionConstantsCName(function);

                            // Protect function's already-initialized constant pool
                            var initCCode = initCFunction.add();
                            debugComment(
                                initCCode, "# Protect already-init nested %s", function.name());
                            initCCode.stmt(
                                "Fir_set_const(%s, %d, %s);", VAR_POOL, idx, constantsCName);
                          });

                  // Reference the protected constant pool
                  cp = "Fir_const(%s, %d)".formatted(VAR_POOL, cpIdx);
                } else {
                  // Compile function and add declarations
                  var cpSxp = new FunctionEmitter(function).run();
                  // Store the constant pool inline
                  cp = constantRef(pool, cpSxp);

                  // Call the function's initializer with the stored constant pool
                  var initCCode = initCFunction.add();
                  debugComment(initCCode, "# Init nested %s", function.name());
                  initCCode.stmt("%s(%s);", functionInitCName(function), cp);
                }

                // Emit the runtime constructor
                var env = isStatic ? "R_GlobalEnv" : VAR_ENV;
                yield "Fir_mk_closure(%s, %s, %s, %s)".formatted(fromRCName, formals, cp, env);
              }
              case Promise promise -> {
                // Compile the promise

                var initCName = promiseInitCName(promise);
                var fromRCName = promiseFromRCName(promise);
                var evalCName = promiseEvalCName(promise);

                var promiseInitCFunction =
                    cUnit.addFunction(INIT_C_RETURN, initCName, INIT_C_PARAMS);
                var promiseFromRCFunction =
                    cUnit.addFunction(FROM_R_C_RETURN, fromRCName, FROM_R_C_PARAMS);
                var promiseEvalCFunction =
                    cUnit.addFunction(PROMISE_EVAL_C_RETURN, evalCName, PROMISE_EVAL_C_PARAMS);
                if (options.contains(Option.EMIT_DEBUG_COMMENTS)
                    || options.contains(Option.EMIT_DEBUG_PRINTS)) {
                  debugComment(
                      promiseInitCFunction.add(),
                      "## Init %s version %s promise in BB %s",
                      function.name(),
                      version.signature(),
                      bb.label());
                  debugComment(
                      promiseFromRCFunction.add(),
                      "## Eval-from-R %s version %s promise in BB %s",
                      function.name(),
                      version.signature(),
                      bb.label());
                  debugComment(
                      promiseEvalCFunction.add(),
                      "## Eval %s version %s promise in BB %s",
                      function.name(),
                      version.signature(),
                      bb.label());
                }

                var cpSxp =
                    new PromiseEmitter(
                            promise,
                            promiseInitCFunction,
                            promiseFromRCFunction,
                            promiseEvalCFunction)
                        .run();
                var cp = constantRef(pool, cpSxp);

                var initCCode = initCFunction.add();
                debugComment(
                    initCCode,
                    "# Init %s version %s promise in BB %s",
                    function.name(),
                    version.signature(),
                    bb.label());
                initCCode.stmt("%s(%s);", initCName, cp);

                // Emit the runtime constructor

                var captureSet = Objects.requireNonNull(captures.get(promise.code()));
                if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
                  debugArgs(cCode, Collections2.transform(captureSet, Read::new));
                }
                var captureArray =
                    emitArray(
                        "captures",
                        "void *",
                        captureSet.stream().map(reg -> "(void *)&" + registerPlace(reg)).toList());
                var captures = captureArray.pointer();

                yield "Fir_mk_promise(%s, %s, %s, %s)".formatted(fromRCName, cp, captures, VAR_ENV);
              }
              case Aea(var arg) -> emitArgument(arg);
              case Assume(var assumption) -> emitAssumptionValue(assignee, assumption);
              case Call call -> emitCall(call);
              case Cast(var target, var type) ->
                  "Fir_cast(%s, %s)".formatted(emitArgument(target), emitType(type));
              case Dup(var value) -> "Fir_dup(%s)".formatted(emitArgument(value));
              case Force(var isMaybe, var value) ->
                  (isMaybe ? "Fir_maybe_force(%s)" : "Fir_force(%s)")
                      .formatted(emitArgument(value));
              // This is an R special case.
              // There's no equivalent for `Store`, `LoadFun`, etc.
              // their behavior is inconsistent.
              case Load(var loadType, var variable)
                  when loadType == LoadType.LOCAL_VAR && variable.isDdNum() ->
                  "Fir_load_dots(%d, %s)".formatted(variable.ddIndex(), VAR_ENV);
              case Load(var loadType, var variable) ->
                  switch (loadType) {
                    case LOCAL_VAR ->
                        "Fir_load(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
                    case SUPER_VAR ->
                        "Fir_super_load(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
                    case LOCAL_FUN ->
                        "Rf_findFun(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
                    case GLOBAL_FUN ->
                        "Rf_findFun(%s, R_GlobalEnv)".formatted(nvSymbolRef(pool, variable));
                    case BASE_FUN ->
                        "Rf_findFun(%s, R_BaseEnv)".formatted(nvSymbolRef(pool, variable));
                  };
              case MkEnv() -> {
                cCode.stmt("Fir_push_env(&%s);", VAR_ENV);
                yield null;
              }
              case MkVector(var kind, var elements) -> {
                var scalarRepr =
                    switch (kind) {
                      case Kind.PrimitiveVector(_, var primitive) -> primitive.repr();
                      case Kind.Dots _ -> Repr.SEXP;
                      default ->
                          throw new IllegalArgumentException(
                              "Vector kind must be primitive or dots: " + kind);
                    };
                var namedArrays = emitNamedArgumentArrays(scalarRepr, elements);
                yield "Fir_mk_vector(%s, %d, %s, %s)"
                    .formatted(
                        emitKind(kind),
                        namedArrays.values().size(),
                        namedArrays.values().pointer(),
                        namedArrays.names());
              }
              case Noop() -> null;
              case PopEnv() -> {
                cCode.stmt("Fir_pop_env(&%s);", VAR_ENV);
                yield null;
              }
              case ReflectiveLoad(var promArg, var variable) ->
                  "Fir_reflective_load(%s, %s)"
                      .formatted(emitArgument(promArg), nvSymbolRef(pool, variable));
              case ReflectiveStore(var promArg, var variable, var value) -> {
                cCode.stmt(
                    "Fir_reflective_store(%s, %s, %s);",
                    emitArgument(promArg), nvSymbolRef(pool, variable), emitArgument(value));
                yield null;
              }
              case Store(var storeType, var variable, var value) -> {
                var arg = emitArgument(value);
                switch (storeType) {
                  case LOCAL_VAR ->
                      cCode.stmt(
                          "Rf_defineVar(%s, %s, %s);", nvSymbolRef(pool, variable), arg, VAR_ENV);
                  case SUPER_VAR ->
                      cCode.stmt(
                          "Fir_super_store(%s, %s, %s);",
                          nvSymbolRef(pool, variable), arg, VAR_ENV);
                }
                yield null;
              }
              case SubscriptRead(var vector, var index) -> {
                if (!(argumentType(vector).kind()
                    instanceof Kind.PrimitiveVector(_, var primitiveKind))) {
                  throw new IllegalArgumentException(
                      "Can't subscript non-primitive vector: " + vector);
                }
                var suffix = primitiveKindCName(primitiveKind);

                yield "Fir_subscript_read_%s(%s, %s)"
                    .formatted(suffix, emitArgument(vector), emitArgument(index));
              }
              case SubscriptWrite(var vector, var index, var value) -> {
                if (!(argumentType(vector).kind()
                    instanceof Kind.PrimitiveVector(_, var primitiveKind))) {
                  throw new IllegalArgumentException(
                      "Can't subscript non-primitive vector: " + vector);
                }
                var suffix = primitiveKindCName(primitiveKind);

                cCode.stmt(
                    "Fir_subscript_write_%s(%s, %s, %s);",
                    suffix, emitArgument(vector), emitArgument(index), emitArgument(value));
                yield null;
              }
            };
          }

          private String emitCall(Call call) {
            return switch (call.callee()) {
              case StaticFnCallee(
                      var calleeFunRef,
                      var isDispatch,
                      var closureWithEnv,
                      var signature) -> {
                var calleeFun = calleeFunRef.get();
                var calleeModule = calleeFun.owner();
                var closureEnv =
                    closureWithEnv.equals(Constant.ELIDED_CLOSURE)
                        ? "R_EmptyEnv"
                        : "CLOENV(%s)".formatted(emitArgument(closureWithEnv));

                if (calleeModule == INTRINSICS && isDispatch) {
                  throw new IllegalArgumentException(
                      "Intrinsic should never be dispatched: " + call);
                } else if ((calleeModule == BUILTINS || calleeModule == INTRINSICS)
                    && !closureWithEnv.equals(Constant.ELIDED_CLOSURE)) {
                  throw new IllegalArgumentException(
                      "Builtin with closure environment is unimplemented");
                } else if (calleeModule == BUILTINS
                    && calleeFun.guessWorst(signature) == calleeFun.baseline()) {
                  yield emitBuiltinCall(call, calleeFun);
                }

                if (isDispatch) {
                  if (calleeModule == BUILTINS) {
                    throw new IllegalArgumentException(
                        "Builtin dispatch calls can only be compiled if the signature is compatible with the baseline (so we can, and do, call the GNU-R builtin): "
                            + call);
                  }
                  if (signature.returnType().kind().repr() != Repr.SEXP) {
                    throw new IllegalArgumentException(
                        "Dispatch calls must always return `SEXP`, because the C definition does.\nEncountered: "
                            + call);
                  }

                  // Protect constants
                  pool.internPatched(
                      calleeFun,
                      poolIdx -> {
                        var constantsCName = functionConstantsCName(calleeFun);

                        var initCCode = initCFunction.add();
                        debugComment(initCCode, "# Protect constants of %s", calleeFun.name());
                        initCCode.stmt(
                            "Fir_set_const(%s, %d, %s);", VAR_POOL, poolIdx, constantsCName);
                      });

                  // Defer declare extern for referenced (previously-compiled) function
                  referencedFunctions.add(calleeFun);

                  var cName = functionDispatchCName(calleeFun);
                  var cSignature = emitSignature(signature);
                  var arguments = emitArgumentSplice(call.callArguments());
                  yield "%s(%s, %s%s)".formatted(cName, closureEnv, cSignature, arguments);
                } else {
                  var calleeVersion =
                      calleeModule == BUILTINS
                          ? calleeFun.guessWorst(signature)
                          : calleeFun.guess(signature);
                  if (calleeVersion == null) {
                    throw new IllegalArgumentException(
                        "In " + call + ", no version matches signature:\n" + calleeFun);
                  }

                  // Builtins and intrinsics have no constants and are already declared
                  if (calleeFun.owner() != BUILTINS && calleeFun.owner() != INTRINSICS) {
                    // Protect constants
                    pool.internPatched(
                        calleeVersion,
                        poolIdx -> {
                          var constantsCName = versionConstantsCName(calleeFun, calleeVersion);

                          var initCCode = initCFunction.add();
                          debugComment(
                              initCCode,
                              "# Protect constants of %s version %s",
                              calleeFun.name(),
                              calleeFun.indexOf(calleeVersion));
                          initCCode.stmt(
                              "Fir_set_const(%s, %d, %s);", VAR_POOL, poolIdx, constantsCName);
                        });

                    // Defer declare extern for referenced (previously-compiled) version
                    referencedVersions.put(calleeVersion, calleeFun);
                  }

                  var cName = versionCallCName(calleeFun, calleeVersion);
                  var arguments = emitArgumentSplice(call.callArguments());
                  yield "%s(%s%s)".formatted(cName, closureEnv, arguments);
                }
              }
              case DynamicCallee(var actualCallee, var argumentNames) -> {
                var arguments = emitArgumentArray("args", Repr.SEXP, call.callArguments());
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

          private String emitBuiltinCall(Call call, Function calleeFun) {
            var builtinIndex =
                Objects.requireNonNull(rSession.RFunTab().get(calleeFun.name().name())).index();

            var arguments = emitArgumentArray("args", Repr.SEXP, call.callArguments());
            var names =
                emitArray(
                    "arg_names",
                    "SEXP",
                    Lists.mapLazy(calleeFun.parameterNames(), nv -> nvSymbolRef(pool, nv)));
            if (arguments.size() != names.size()) {
              throw new IllegalStateException(
                  "Dispatched builtin has different number of arguments than it's signature:\nCall = "
                      + call
                      + "\nFull definition = "
                      + calleeFun);
            }

            return "Fir_call_builtin(%d, %s, %d, %s, %s)"
                .formatted(
                    builtinIndex, VAR_ENV, arguments.size(), arguments.pointer(), names.pointer());
          }

          private void emitJump(Jump jump) {
            debugInstr(cCode, jump);

            switch (jump) {
              case Return(_, var value) -> cCode.stmt("return %s;", emitArgument(value));
              case Goto(_, var target) -> emitJumpTo(1, target);
              case Raise(_, var value) -> {
                cCode.stmt("Rf_error(\"%%s\", %s);", emitArgument(value));
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
              case Unreachable(_) -> {
                cCode.stmt("Rf_error(\"FIŘ unreachable reached\");");
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
              case If(_, var condition, var ifTrue, var ifFalse) -> {
                cCode.stmt("if (%s) {", emitArgument(condition));
                emitJumpTo(2, ifTrue);
                cCode.stmt("} else {");
                emitJumpTo(2, ifFalse);
                cCode.stmt("}");
              }
              case Checkpoint(_, var success, var deopt) -> {
                for (var statement : success.bb().statements()) {
                  if (!(statement.expression() instanceof Assume(var assumption))) {
                    break;
                  }

                  var condition = emitAssumptionCondition(statement.assignee(), assumption);
                  cCode.stmt("if (!(%s)) {", condition);
                  emitJumpTo(2, deopt);
                  cCode.stmt("}");
                }
                emitJumpTo(1, success);
              }
              case Deopt(_, var pc, var stack) -> {
                var stackArgs = emitArgumentArray("deopt_stack", Repr.SEXP, stack);
                cCode.stmt(
                    "Fir_deopt(%d, %d, %s, %s);",
                    pc, stackArgs.size(), stackArgs.pointer(), VAR_ENV);
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
            }
          }

          private List<Assumption> assumptionsFor(Target target) {
            var assumptions = new ArrayList<Assumption>();
            for (var statement : target.bb().statements()) {
              if (!(statement.expression() instanceof Assume(var assumption))) {
                break;
              }
              assumptions.add(assumption);
            }
            return assumptions;
          }

          private String emitAssumptionCondition(
              @Nullable Register assignee, Assumption assumption) {
            debugComment(cCode, "? %s", assumption);
            debugArgs(cCode, assumption.arguments());

            var refAssigneePlace =
                assignee == null ? "NULL" : "&%s".formatted(registerPlace(assignee));

            return switch (assumption) {
              case AssumeConstant(var target, var constant) ->
                  "%s == %s".formatted(emitArgument(target), constantRef(pool, constant));
              case AssumeFunction a when a.function().owner() == BUILTINS -> {
                var builtinIndex =
                    Objects.requireNonNull(rSession.RFunTab().get(a.function().name().name()))
                        .index();
                yield "Fir_assume_builtin_function(%s, %d)"
                    .formatted(emitArgument(a.target()), builtinIndex);
              }
              case AssumeFunction a when a.function().owner() == INTRINSICS ->
                  throw new IllegalArgumentException(
                      "We should never need to assume an intrinsic: " + a.function());
              case AssumeFunction a -> {
                // Defer declare extern for referenced (previously-compiled) version
                // (without duplicates, builtins, or intrinsics).
                referencedFunctions.add(a.function());

                yield "Fir_assume_function(%s, &%s)"
                    .formatted(emitArgument(a.target()), functionDispatchCName(a.function()));
              }
              case AssumeLoadFun a when a.function().owner() == BUILTINS -> {
                var builtinIndex =
                    Objects.requireNonNull(rSession.RFunTab().get(a.function().name().name()))
                        .index();
                yield "Fir_assume_load_builtin_fun(%s, %s, %d, %s)"
                    .formatted(
                        nvSymbolRef(pool, a.variable()), VAR_ENV, builtinIndex, refAssigneePlace);
              }
              case AssumeLoadFun a when a.function().owner() == INTRINSICS ->
                  throw new IllegalArgumentException(
                      "We should never need to assume an intrinsic: " + a.function());
              case AssumeLoadFun a -> {
                // Defer declare extern for referenced (previously-compiled) version
                // (without duplicates, builtins, or intrinsics).
                referencedFunctions.add(a.function());

                yield "Fir_assume_load_fun(%s, %s, &%s, %s)"
                    .formatted(
                        nvSymbolRef(pool, a.variable()),
                        VAR_ENV,
                        functionDispatchCName(a.function()),
                        refAssigneePlace);
              }
              case AssumeLoadVar(var variable, var constant) ->
                  "Fir_assume_load_var(%s, %s, %s)"
                      .formatted(
                          nvSymbolRef(pool, variable), VAR_ENV, constantRef(pool, constant.box()));
              case AssumeType(var target, var type) ->
                  "Fir_assume_type(%s, %s)".formatted(emitArgument(target), emitType(type));
            };
          }

          private @Nullable String emitAssumptionValue(
              @Nullable Register assignee, Assumption assumption) {
            return switch (assumption) {
              case AssumeType _, AssumeFunction _ -> emitArgument(assumption.target());
              // `assignee` is assigned by-reference in `emitAssumptionCondition`
              case AssumeLoadFun _ -> assignee == null ? null : registerPlace(assignee);
              case AssumeConstant _, AssumeLoadVar _ -> null;
            };
          }

          private void emitJumpTo(int indentLevel, Target target) {
            var parameters = target.bb().phiParameters();
            var phiArgs = target.phiArgs();
            if (parameters.size() != phiArgs.size()) {
              throw new IllegalStateException(
                  "Phi parameter/argument count mismatch for " + target.bb().label());
            }

            debugComment(cCode, "* - <%s>", target);

            for (var i = 0; i < parameters.size(); i++) {
              var phi = parameters.get(i);
              var arg = phiArgs.get(i);

              var dest = registerPlace(phi);
              var value = emitArgument(arg);

              cCode.stmt(indentLevel, "%s = %s;", dest, value);
            }

            cCode.stmt(indentLevel, "goto %s;", labelCName(target.bb()));
          }

          private int emitProtect() {
            int numLiveIn = 0;
            for (var register : liveness.liveIn(bb)) {
              if (version.isParameter(register) || !locals.contains(register)) {
                continue;
              }
              if (registerRepr(register) != Repr.SEXP) {
                continue;
              }

              cCode.stmt("PROTECT(%s);", registerPlace(register));
              numLiveIn++;
            }

            for (var phi : bb.phiParameters()) {
              if (registerRepr(phi) != Repr.SEXP) {
                continue;
              }

              cCode.stmt("PROTECT(%s);", registerPlace(phi));
            }

            return numLiveIn;
          }

          private void emitUnprotect(int numLiveIn) {
            long phiProtected =
                bb.phiParameters().stream().filter(phi -> registerRepr(phi) == Repr.SEXP).count();
            long stmtProtected =
                bb.statements().stream()
                    .filter(s -> s.assignee() != null && registerRepr(s.assignee()) == Repr.SEXP)
                    .count();
            cCode.stmt("UNPROTECT(%s);", numLiveIn + phiProtected + stmtProtected);
          }

          private String emitSignature(Signature signature) {
            var returnType = emitType(signature.returnType());
            var paramTypes =
                emitArray(
                    "param_types",
                    "Fir_Type",
                    Lists.mapLazy(signature.parameterTypes(), Fir2CCompiler.this::emitType));
            var comment =
                options.contains(Option.EMIT_DEBUG_COMMENTS)
                    ? "/* %s */ ".formatted(signature)
                    : "";
            return "%sFir_signature(%s, %d, %s, %s)"
                .formatted(
                    comment,
                    returnType,
                    paramTypes.size(),
                    paramTypes.pointer(),
                    emitEffects(signature.effects()));
          }

          private Array emitArgumentArray(String baseName, Repr repr, List<Argument> arguments) {
            for (var argument : arguments) {
              if (argumentRepr(argument) != repr) {
                throw new IllegalStateException(
                    "Argument array must only contain "
                        + repr
                        + "s, found non-"
                        + repr
                        + ": "
                        + argument
                        + "\n"
                        + cfg);
              }
            }
            return emitArray(
                baseName, reprCType(repr), Lists.mapLazy(arguments, this::emitArgument));
          }

          private ArrayAndNames emitNamedArgumentArrays(
              Repr repr, List<NamedArgument> namedArguments) {
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
            var valueArray = emitArgumentArray("vector_values", repr, values);
            var nameArray = emitOptionalNameArray("vector_names", names, names.size());
            return new ArrayAndNames(valueArray, hasNames ? nameArray.pointer() : "NULL");
          }

          private Array emitOptionalNameArray(
              String baseName, List<OptionalNamedVariable> names, int size) {
            var arguments =
                IntStream.range(0, size)
                    .mapToObj(
                        i -> {
                          var name = i < names.size() ? names.get(i).orNull() : null;
                          return name == null ? "R_MissingArg" : nvSymbolRef(pool, name);
                        })
                    .toList();
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

          private String emitArgumentSplice(List<Argument> arguments) {
            var sb = new StringBuilder();
            var fmt = new Formatter(sb);
            for (var argument : arguments) {
              fmt.format(", %s", emitArgument(argument));
            }
            return sb.toString();
          }

          private String emitArgument(Argument argument) {
            return switch (argument) {
              case Constant(var constant) -> constantRef(pool, constant);
              case Read(var variable) -> registerPlace(variable);
              case Consume(var variable) -> registerPlace(variable);
            };
          }

          // region misc
          private void debugInstr(CCode cCode, Instruction instr) {
            debugComment(cCode, "> %s", instr.toString().replace("\n", "\n+ "));
            if (!(instr instanceof Statement s && s.expression() instanceof Promise)) {
              debugArgs(cCode, instr.arguments());
            }
          }

          private void debugArgs(CCode cCode, Collection<Argument> arguments) {
            if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
              for (var arg : arguments) {
                if (arg.equals(Constant.ELIDED_CLOSURE)) {
                  continue;
                }

                var argEmit = emitArgument(arg);
                debugValue(cCode, arg.toString(), argEmit, argumentRepr(arg));
              }
            }
          }
          // endregion misc
        }

        // region misc
        private String registerPlace(Register register) {
          var name = registerCName(register);
          if (Objects.requireNonNull(captures.get(cfg)).contains(register)) {
            name = "*" + name;
          }
          return name;
        }
        // endregion misc
      }

      // region misc
      private Repr argumentRepr(Argument argument) {
        return switch (argument) {
          case Constant(var value) -> value.repr();
          case Read(var reg) -> registerRepr(reg);
          case Consume(var reg) -> registerRepr(reg);
        };
      }

      private Type argumentType(Argument argument) {
        return switch (argument) {
          case Constant(var value) ->
              throw new IllegalArgumentException("Cannot get Type of constant: " + value);
          case Read(var reg) -> registerTypes.get(reg);
          case Consume(var reg) -> registerTypes.get(reg);
        };
      }

      private Repr registerRepr(Register register) {
        var type = registerTypes.get(register);
        if (type == null) {
          throw new IllegalStateException("Undeclared register: " + register);
        }
        return type.kind().repr();
      }
      // endregion misc
    }
  }

  // region emit types
  private String emitType(Type type) {
    var comment = options.contains(Option.EMIT_DEBUG_COMMENTS) ? "/* %s */ ".formatted(type) : "";
    return "%sFir_type(%s, %s, %s, %s)"
        .formatted(
            comment,
            emitKind(type.kind()),
            emitPromisity(type.promisity()),
            emitOwnership(type.ownership()),
            emitConcreteness(type.concreteness()));
  }

  private String emitKind(Kind kind) {
    return switch (kind) {
      case AnySexp() -> "Fir_kind_any_value";
      case Kind.PrimitiveVector(var isScalar, var primitiveKind) ->
          (isScalar ? "Fir_kind_primitive_vector1(%s)" : "Fir_kind_primitive_vector(%s)")
              .formatted(emitPrimitiveKind(primitiveKind));
      case Kind.Closure() -> "Fir_kind_closure";
      case Kind.Dots() -> "Fir_kind_dots";
      case Kind.Missing() -> "Fir_kind_missing";
      case Kind.PrimitiveScalar(var primitiveKind) ->
          "Fir_kind_primitive_scalar(%s)".formatted(emitPrimitiveKind(primitiveKind));
      case Kind.Boolean() -> "Fir_kind_boolean";
    };
  }

  private static String emitPrimitiveKind(PrimitiveKind primitiveKind) {
    return Integer.toString(primitiveKind.ordinal());
  }

  private String emitPromisity(Promisity promisity) {
    return promisity.isValue()
        ? "Fir_promisity_value"
        : promisity.isPromise()
            ? "Fir_promisity_promise(%s)".formatted(emitEffects(promisity.effects()))
            : "Fir_promisity_maybe(%s)".formatted(emitEffects(promisity.effects()));
  }

  private static String emitOwnership(Ownership ownership) {
    return "FIR_" + ownership.name();
  }

  private static String emitConcreteness(Concreteness concreteness) {
    return Boolean.toString(concreteness == Concreteness.DEFINITE);
  }

  private static String emitEffects(Effects fx) {
    return switch (fx) {
      case NONE -> "FIR_EFFECTS_NONE";
      case IMPURE -> "FIR_EFFECTS_IMPURE";
      case REFLECT -> "FIR_EFFECTS_REFLECT";
    };
  }

  // endregion emit types

  // region C names
  private static String functionConstantsCName(Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no constants";

    return "Fir_fun_constants_" + escapeForC(function.name().name());
  }

  private static String functionInitCName(Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no initializer";

    return "Fir_fun_init_" + escapeForC(function.name().name());
  }

  private static String functionFromRCName(Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no from-R dispatch";

    return "Fir_fun_from_r_" + escapeForC(function.name().name());
  }

  private static String functionDispatchCName(Function function) {
    assert function.owner() != BUILTINS : "builtin dispatch is specially handled";

    return "Fir_fun_dispatch_" + escapeForC(function.name().name());
  }

  private static String versionConstantsCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no constants";
    return "Fir_ver_constants_"
        + escapeForC(function.name().name())
        + "_"
        + versionCNamePart(function, version);
  }

  private static String versionInitCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no initializer";

    return "Fir_ver_init_"
        + escapeForC(function.name().name())
        + "_"
        + versionCNamePart(function, version);
  }

  private static String versionCallCName(Function function, Abstraction version) {
    return "Fir_ver_call_"
        + escapeForC(function.name().name())
        + "_"
        + versionCNamePart(function, version);
  }

  private static String versionCNamePart(Function function, Abstraction version) {
    return version == function.baseline() && !version.isStub()
        ? "baseline"
        : signatureCName(version.signature());
  }

  private static String signatureCName(Signature signature) {
    var sb = new StringBuilder();
    for (var paramType : signature.parameterTypes()) {
      // Ignore strictness, because otherwise identical signatures don't exist
      emitTypeCName(sb, paramType);
      sb.append('_');
    }
    sb.append("fx_");
    emitEffectsCName(sb, signature.effects());
    sb.append("_ret_");
    emitTypeCName(sb, signature.returnType());
    return sb.toString();
  }

  private static void emitTypeCName(StringBuilder sb, Type type) {
    if (type.equals(Type.ANY_SEXP)) {
      sb.append("any");
      return;
    }

    emitConcretenessCName(sb, type.concreteness());
    emitPromisityCName(sb, type.promisity());
    emitKindCName(sb, type.kind());
    emitOwnershipCName(sb, type.ownership());
  }

  private static void emitPromisityCName(StringBuilder sb, Promisity promisity) {
    if (promisity.isPromise()) {
      sb.append("prom_");
      emitEffectsCName(sb, promisity.effects());
      sb.append('_');
    } else if (promisity.isMaybe()) {
      sb.append("mayprom_");
      emitEffectsCName(sb, promisity.effects());
      sb.append('_');
    }
  }

  private static void emitKindCName(StringBuilder sb, Kind kind) {
    switch (kind) {
      case AnySexp() -> sb.append("value");
      case Kind.PrimitiveVector(var isScalar, var primitiveKind) -> {
        sb.append(isScalar ? "vec1_" : "vec_");
        sb.append(primitiveKindCName(primitiveKind));
      }
      case Kind.Closure() -> sb.append("closure");
      case Kind.Dots() -> sb.append("dots");
      case Kind.Missing() -> sb.append("missing");
      case Kind.PrimitiveScalar(var primitiveKind) -> {
        sb.append("scalar_");
        sb.append(primitiveKindCName(primitiveKind));
      }
      case Kind.Boolean() -> sb.append("bool");
    }
  }

  private static String primitiveKindCName(PrimitiveKind primitiveKind) {
    return switch (primitiveKind) {
      case LOGICAL -> "logical";
      case INTEGER -> "int";
      case REAL -> "real";
      case STRING -> "string";
    };
  }

  private static void emitOwnershipCName(StringBuilder sb, Ownership ownership) {
    switch (ownership) {
      case FRESH -> sb.append("_fresh");
      case OWNED -> sb.append("_owned");
      case BORROWED -> sb.append("_borrowed");
      case SHARED -> {}
    }
  }

  private static void emitConcretenessCName(StringBuilder sb, Concreteness concreteness) {
    switch (concreteness) {
      case DEFINITE -> {}
      case MAYBE -> sb.append("_maybe");
    }
  }

  private static void emitEffectsCName(StringBuilder sb, Effects fx) {
    switch (fx) {
      case NONE -> sb.append("none");
      case IMPURE -> sb.append("impure");
      case REFLECT -> sb.append("reflect");
    }
  }

  private String promiseConstantsCName(Promise promise) {
    return "Fir_prom_constants_" + promiseIndex(promise);
  }

  private String promiseInitCName(Promise promise) {
    return "Fir_prom_init_" + promiseIndex(promise);
  }

  private String promiseFromRCName(Promise promise) {
    return "Fir_prom_from_r_" + promiseIndex(promise);
  }

  private String promiseEvalCName(Promise promise) {
    return "Fir_prom_eval_" + promiseIndex(promise);
  }

  private final HashMap<Promise, Integer> promiseIndices = new HashMap<>();

  private int promiseIndex(Promise promise) {
    return promiseIndices.computeIfAbsent(promise, _ -> promiseIndices.size());
  }

  // endregion C names

  // region params and return type
  private static final String CONSTANTS_C_TYPE = "SEXP";

  private static final List<String> INIT_C_PARAMS = List.of("SEXP %s".formatted(VAR_POOL));

  private static final String INIT_C_RETURN = "SEXP";

  private static final List<String> FROM_R_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "SEXP %s".formatted(VAR_DATA));

  private static final String FROM_R_C_RETURN = "SEXP";

  private static final List<String> DISPATCH_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "Fir_Signature %s".formatted(VAR_SIGNATURE), "...");

  private static final String DISPATCH_C_RETURN = "SEXP";

  private static List<String> versionCallCParams(Abstraction version) {
    return Stream.concat(
            Stream.of("SEXP %s".formatted(VAR_ENV)),
            version.parameters().stream()
                .map(
                    p ->
                        "%s %s"
                            .formatted(
                                reprCType(p.type().kind().repr()), registerCName(p.variable()))))
        .toList();
  }

  private static String reprCType(Repr repr) {
    return switch (repr) {
      case SEXP -> "SEXP";
      case INT -> "int";
      case FLOAT -> "double";
      case STRING -> "char*";
      case LOGICAL -> "Rboolean";
      case BOOLEAN -> "bool";
    };
  }

  private static String reprDefaultValue(Repr repr) {
    return switch (repr) {
      case SEXP -> "R_NilValue";
      case INT -> "0";
      case FLOAT -> "0.0";
      case STRING -> "NULL";
      case LOGICAL -> "FALSE";
      case BOOLEAN -> "false";
    };
  }

  private static String versionCallCReturn(Abstraction version) {
    return reprCType(version.returnType().kind().repr());
  }

  private static final List<String> PROMISE_EVAL_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "void **%s".formatted(VAR_CAPTURES));

  private static final String PROMISE_EVAL_C_RETURN = "SEXP";

  // endregion params and return type

  private static String registerCName(Register register) {
    return "r_" + register.name();
  }

  private static String labelCName(BB bb) {
    if (bb.isEntry()) {
      throw new IllegalArgumentException("Can't refer to the entry BB");
    }
    return "l_" + bb.label();
  }

  // region constants
  private static String nvSymbolRef(ConstantPool pool, NamedVariable nv) {
    return nv == NamedVariable.DOTS ? "R_DotsSymbol" : constantRef(pool, SEXPs.symbol(nv.name()));
  }

  private static String constantRef(ConstantPool pool, Value constant) {
    return switch (constant) {
      case Value.Sexp(var sexp) -> constantRef(pool, sexp);
      case Value.Int(var i) -> i == Constants.NA_INT ? "NA_INT" : Integer.toString(i);
      case Value.Real(var d) -> Double.isNaN(d) ? "NA_REAL" : Double.toString(d);
      case Value.Str(var s) -> Printer.use(p -> p.writer().writeQuoted('"', s));
      case Value.Lgl(var l) ->
          switch (l) {
            case TRUE -> "(Rboolean)true";
            case FALSE -> "(Rboolean)false";
            case NA -> "NA_LGL";
          };
      case Value.Bool(var b) -> Boolean.toString(b);
    };
  }

  private static String constantRef(ConstantPool pool, SEXP sexp) {
    return "Fir_const(%s, %d)".formatted(VAR_POOL, pool.intern(sexp));
  }

  // endregion constants

  // region debug
  private void debugComment(CCode cCode, @PrintFormat String fmt, Object... args) {
    debugCommentComptimeOnly(cCode, fmt, args);
    debugCommentRuntimeOnly(cCode, fmt, args);
  }

  private void debugCommentComptimeOnly(CCode cCode, @PrintFormat String fmt, Object... args) {
    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cCode.comment(fmt, args);
    }
  }

  private void debugCommentRuntimeOnly(CCode cCode, @PrintFormat String fmt, Object... args) {
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_comment(\"%s\");", sanitizeString(fmt.formatted(args)));
    }
  }

  private void debugValue(CCode cCode, String name, String var, Repr repr) {
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_%s(\"%s\", %s);", repr.name().toLowerCase(), sanitizeString(name), var);
    }
  }

  private void debugSignature(CCode cCode) {
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_signature(%s);", VAR_SIGNATURE);
    }
  }

  // endregion debug

  // region misc
  private static String sanitizeString(String value) {
    return value.replace("\\", "\\\\").replace("\n", "\\n").replace("\"", "\\\"");
  }

  private record Array(int size, String pointer) {}

  private record ArrayAndNames(Array values, String names) {}
  // endregion misc
}
