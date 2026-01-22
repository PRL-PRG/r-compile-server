package org.prlprg.fir2c;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.gen2c.EscapeForC.escapeForC;

import com.google.common.collect.*;
import java.util.*;
import java.util.stream.*;
import org.intellij.lang.annotations.PrintFormat;
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
import org.prlprg.fir.ir.instruction.Instruction;
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
  private final Set<Function> referencedFunctions = new LinkedHashSet<>();
  private final Map<Abstraction, Function> referencedVersions = new LinkedHashMap<>();
  private final Set<Function> compiledFunctions = new HashSet<>();
  private final Set<Promise> compiledPromises = new HashSet<>();

  // State
  private int tempTypeDisambiguator = 0;

  private Fir2CCompiler(Module module, RSession rSession, ImmutableSet<Option> options) {
    this.module = module;
    this.rSession = rSession;
    this.options = options;
  }

  private CompiledModule run(Function mainFunction) {
    cUnit.addInclude("runtime.h");

    var cpSxp = new FunctionEmitter(mainFunction).run();

    emitReferencedExternalDeclarations();

    return new CompiledModule(cUnit, cpSxp);
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
      cUnit.addExternFunction(VERSION_CALL_C_RETURN, cName, cParams);
    }
  }

  /// Emits C for every version and the dispatch of a function.
  private final class FunctionEmitter {
    // Input
    private final Function function;

    // Output
    private final CFunction initCFunction;
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

      emitDispatchFromR();

      emitDispatch();

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
      var formalNames =
          constantRef(
              fnPool,
              function.parameterNames().stream()
                  .map(nv -> SEXPs.symbol(nv.name()))
                  .collect(SEXPs.toVec()));
      cCode.stmt("SEXP data_sexp = Rf_allocVector(RAWSXP, sizeof(Fir_FunctionData));");
      cCode.stmt("Fir_FunctionData *data = (Fir_FunctionData*) STDVEC_DATAPTR(data_sexp);");
      cCode.stmt(
          "*data = (Fir_FunctionData) {.dispatch = %s, .formal_names = %s};",
          functionDispatchCName(function), formalNames);
      cCode.stmt("Rsh_set_const(%s, %d, data_sexp);", VAR_POOL, idx);
    }

    private void endEmitInit() {
      initCFunction.add().stmt("return R_NilValue;");
    }

    private void emitDispatchFromR() {
      var cName = functionFromRCName(function);
      var cFunction = cUnit.addFunction(FROM_R_C_RETURN, cName, FROM_R_C_PARAMS);

      CCode cCode;
      if (options.contains(Option.EMIT_DEBUG_COMMENTS)
          || options.contains(Option.EMIT_DEBUG_PRINTS)) {
        cCode = cFunction.add();

        debugComment(cCode, "## Dispatch-from-R %s", function.name());
      }

      if (!function.parameterNames().isEmpty()) {
        emitConstantPoolAlias(cFunction);
      }

      // TODO: Dispatch optimized version when possible
      debugComment(cFunction.add(), "# TODO: Dispatch optimized version when possible");

      cCode = cFunction.add();
      debugComment(cCode, "# Dispatch baseline");

      var baseline = function.baseline();
      var baselineCName = versionCallCName(function, baseline);
      if (baseline.parameters().size() != function.parameterNames().size()) {
        throw new IllegalStateException(
            "Function's parameter count isn't equal its baseline's:\n" + function);
      }

      var argsSplice = new StringBuilder();
      var argsSpliceFmt = new Formatter(argsSplice);
      for (var paramName : function.parameterNames()) {
        if (paramName == NamedVariable.DOTS) {
          // R passes missing instead of an empty list, but FIR always expects a list.
          cCode.stmt("SEXP missing_in_frame = Rf_findVarInFrame(%s, R_DotsSymbol);", VAR_ENV);
          argsSpliceFmt.format(
              ", missing_in_frame == R_MissingArg ? R_NilValue : missing_in_frame");
        } else {
          var paramSym = nvSymbolRef(fnPool, paramName);
          argsSpliceFmt.format(", Rf_findVarInFrame(%s, %s)", VAR_ENV, paramSym);
        }
      }

      cCode.stmt("return %s(%s%s);", baselineCName, VAR_ENV, argsSplice);
    }

    private void emitDispatch() {
      var cName = functionDispatchCName(function);
      var cFunction = cUnit.addFunction(DISPATCH_C_RETURN, cName, DISPATCH_C_PARAMS);

      var versions = function.versionsSorted();
      int i;
      Iterator<Abstraction> versionIter;
      Abstraction version;

      CCode cCode;

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)
          || options.contains(Option.EMIT_DEBUG_PRINTS)) {
        cCode = cFunction.add();

        debugComment(cCode, "## Dispatch %s", function.name());

        for (i = 0, versionIter = versions.iterator(); i < versions.size(); i++) {
          version = versionIter.next();

          debugComment(cCode, "# %d. %s", i, version.signature());
        }

        debugSignature(cCode);
      }

      cCode = cFunction.add();
      cCode.stmt("bool incompatible[%d];", versions.size());
      cCode.stmt("va_list args;");
      cCode.stmt("va_start(args, %s);", VAR_SIGNATURE);

      cCode = cFunction.add();
      debugComment(cCode, "# Filter by argument count");
      for (i = 0, versionIter = versions.iterator(); i < versions.size(); i++) {
        version = versionIter.next();

        cCode.stmt(
            "incompatible[%d] = %s.param_count != %d;",
            i, VAR_SIGNATURE, version.parameters().size());
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Filter by static effects and return type");
      for (i = 0, versionIter = versions.iterator(); i < versions.size(); i++) {
        version = versionIter.next();

        var typeEmit = emitType(cCode, version.returnType());
        var effectsEmit = emitEffects(version.effects());
        cCode.stmt(
            2,
            "incompatible[%d] = incompatible[%d] || !Fir_is_subtype(%s, %s.return_type) || (!%s && %s.effects);",
            i,
            i,
            typeEmit,
            VAR_SIGNATURE,
            effectsEmit,
            VAR_SIGNATURE);
      }

      // TODO: Don't check parts of the static type that are known at runtime,
      //  then filter by runtime type. Currently we ignore the runtime type.
      cCode = cFunction.add();
      debugComment(cCode, "# Filter by arguments' static types");
      for (i = 0, versionIter = versions.iterator(); i < versions.size(); i++) {
        version = versionIter.next();

        for (var j = 0; j < version.parameters().size(); j++) {
          var type = version.parameters().get(j).type();
          var typeEmit = emitType(cCode, type);
          cCode.stmt(
              "incompatible[%d] = incompatible[%d] || %s.param_count <= %d || !Fir_is_subtype(%s.param_types[%d], %s);",
              i, i, VAR_SIGNATURE, j, VAR_SIGNATURE, j, typeEmit);
        }
      }

      if (options.contains(Option.EMIT_DEBUG_COMMENTS)
          || options.contains(Option.EMIT_DEBUG_PRINTS)) {
        cCode = cFunction.add();
        debugComment(cCode, "# Filter by arguments' runtime type");
        debugComment(
            cCode,
            "# TODO. Currently we check the full static type, so it's sound, but not optimal");
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Call first compatible version");
      cCode.stmt("SEXP out;");
      for (i = 0, versionIter = versions.iterator(); i < versions.size(); i++) {
        version = versionIter.next();

        var ifHead = i == 0 ? "if" : "} else if";
        var callCName = versionCallCName(function, version);

        cCode.stmt("%s (!incompatible[%d]) {", ifHead, i);

        // Reuse the active `va_list`.
        // When we implement checking runtime types,
        // we must save and restore the `va_list` after.
        var argsSplice = new StringBuilder();
        var argsSpliceFmt = new Formatter(argsSplice);
        for (i = 0; i < version.parameters().size(); i++) {
          // Passing `va_arg` expressions inline causes the arguments to be passed backwards.
          // Instead, we must assign them to variables and pass those.
          cCode.stmt(2, "SEXP args_%d = va_arg(args, SEXP);", i);
          argsSpliceFmt.format(", args_%d", i);
        }

        cCode.stmt(2, "out = %s(%s%s);", callCName, VAR_ENV, argsSplice);
      }
      cCode.stmt("} else");
      cCode.stmt(
          2,
          "Rf_error(\"No versions compatible with the given arguments for %s\");",
          sanitizeString(function.name().name()));
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

      static void forwardDeclareStub(CUnit cUnit, Function function, Abstraction version) {
        if (!version.isStub()) {
          throw new IllegalArgumentException(
              "Call new FirVersionEmitter(...).run() for non-stub:\n" + version);
        }

        var cName = versionCallCName(function, version);
        var cParams = versionCallCParams(version);
        cUnit.addExternFunction(VERSION_CALL_C_RETURN, cName, cParams);
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
        var cFunction = cUnit.addFunction(VERSION_CALL_C_RETURN, cName, cParams);

        if (options.contains(Option.EMIT_DEBUG_COMMENTS)
            || options.contains(Option.EMIT_DEBUG_PRINTS)) {
          debugComment(
              initCFunction.add(),
              "## Init %s version %d (%s)",
              function.name().name(),
              function.indexOf(version),
              version.signature());

          var cCode = cFunction.add();
          debugComment(
              cCode,
              "## Call %s version %d (%s)",
              function.name().name(),
              function.indexOf(version),
              version.signature());

          // Debug-print SEXP parameters
          if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
            for (var param : version.parameters()) {
              debugValue(cCode, param.variable().name(), registerCName(param.variable()));
            }
          }
        }

        return new CfgEmitter(
                Objects.requireNonNull(version.cfg()),
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

          return new CfgEmitter(promise.code(), constantsCName, initCFunction, evalCFunction, pool)
              .run();
        }

        private void beginEmitInit() {
          var cCode = initCFunction.add();
          debugComment(cCode, "# Add `Fir_PromiseData`");
          var idx = pool.internSpace();
          assert idx == 0;
          cCode.stmt("SEXP data_sexp = Rf_allocVector(RAWSXP, sizeof(Fir_PromiseGlobalData));");
          cCode.stmt("Rsh_set_const(%s, %d, data_sexp);", VAR_POOL, idx);

          cCode.stmt(
              "Fir_PromiseGlobalData *data = (Fir_PromiseGlobalData*) STDVEC_DATAPTR(data_sexp);");
          var evalCName = promiseEvalCName(promise);
          var valueType = emitType(cCode, promise.valueType());
          cCode.stmt(
              "*data = (Fir_PromiseGlobalData) {.eval = %s, .value_type = %s};",
              evalCName, valueType);
        }

        private void emitFromR() {
          var cCode = fromRCFunction.add();
          cCode.stmt(
              "SEXP const** captures = ((Fir_PromiseLocalData*) STDVEC_DATAPTR(CDR(%s)))->captures;",
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
            var captureName = registerCName(iter.next());
            cCode.stmt("SEXP *%s = %s[%d];", captureName, VAR_CAPTURES, i);
            debugValue(cCode, captureName, "*%s".formatted(captureName));
          }
        }
      }

      private final class CfgEmitter {
        // Input
        private final CFG cfg;

        // Output
        private final String constantsCName;
        private final CFunction initCFunction;
        private final CFunction cFunction;
        private final ConstantPool pool;

        // State
        private final Map<String, Integer> tempArrayDisambiguators = new HashMap<>();

        CfgEmitter(
            CFG cfg,
            String constantsCName,
            CFunction initCFunction,
            CFunction cFunction,
            ConstantPool pool) {
          this.cfg = cfg;
          this.constantsCName = constantsCName;
          this.initCFunction = initCFunction;
          this.cFunction = cFunction;
          this.pool = pool;
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
          var localRegisters = Objects.requireNonNull(locals.get(cfg));
          if (localRegisters.isEmpty()) {
            return;
          }

          var sec = cFunction.add();

          debugComment(sec, "# Declare locals");

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

          void run() {
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
            debugInstr(cCode, statement);

            var expr = emitExpression(statement.expression());

            if (statement.assignee() == null) {
              cCode.stmt("(void)(%s);", expr);
            } else {
              cCode.stmt("%s = %s;", registerPlace(statement.assignee()), expr);
              debugValue(cCode, statement.assignee().name(), registerPlace(statement.assignee()));
            }
          }

          private String emitExpression(Expression expression) {
            return switch (expression) {
              case Closure closure -> {
                var function = closure.code();

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
                                "Rsh_set_const(%s, %d, %s);", VAR_POOL, idx, constantsCName);
                          });

                  // Reference the protected constant pool
                  cp = "Rsh_const(%s, %d)".formatted(VAR_POOL, cpIdx);
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

                yield "Fir_mk_closure(%s, %s, %s, %s)".formatted(fromRCName, formals, cp, VAR_ENV);
              }
              case Promise promise -> {
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
                      function.indexOf(version),
                      bb.label());
                  debugComment(
                      promiseFromRCFunction.add(),
                      "## Eval-from-R %s version %s promise in BB %s",
                      function.name(),
                      function.indexOf(version),
                      bb.label());
                  debugComment(
                      promiseEvalCFunction.add(),
                      "## Eval %s version %s promise in BB %s",
                      function.name(),
                      function.indexOf(version),
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
                    function.indexOf(version),
                    bb.label());
                initCCode.stmt("%s(%s);", initCName, cp);

                var captureSet = Objects.requireNonNull(captures.get(promise.code()));
                var captureArray =
                    emitArray(
                        "captures",
                        "SEXP",
                        captureSet.stream().map(reg -> "&" + registerPlace(reg)).toList());
                var captures = captureArray.pointer();

                yield "Fir_mk_promise(%s, %s, %s, %s)".formatted(fromRCName, cp, captures, VAR_ENV);
              }
              case Aea(var arg) -> emitArgument(arg);
              case AssumeConstant(var _, var _), AssumeFunction _ -> "R_NilValue";
              case AssumeType(var target, var _) -> emitArgument(target);
              case Call call -> emitCall(call);
              case Cast(var target, var type) ->
                  "Fir_cast(%s, %s)".formatted(emitArgument(target), emitType(cCode, type));
              case Dup(var value) -> "Fir_dup(%s)".formatted(emitArgument(value));
              case Force(var value) -> "Fir_force(%s)".formatted(emitArgument(value));
              // This is an R special case.
              // There's no equivalent for `Store`, `LoadFun`, etc.
              // their behavior is inconsistent.
              case Load(var variable) when variable.isDdNum() ->
                  "Fir_load_dots(%d, %s)".formatted(variable.ddIndex(), VAR_ENV);
              case Load(var variable) ->
                  "Fir_load(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
              case LoadFun(var variable, var env) -> {
                var envSelector =
                    switch (env) {
                      case LoadFun.Env.LOCAL -> "Fir_LoadFun_Local";
                      case LoadFun.Env.GLOBAL -> "Fir_LoadFun_Global";
                      case LoadFun.Env.BASE -> "Fir_LoadFun_Base";
                    };
                yield "Fir_load_fun(%s, %s, %s)"
                    .formatted(envSelector, nvSymbolRef(pool, variable), VAR_ENV);
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
              case ReflectiveLoad(var promArg, var variable) ->
                  "Fir_reflective_load(%s, %s)"
                      .formatted(emitArgument(promArg), nvSymbolRef(pool, variable));
              case ReflectiveStore(var promArg, var variable, var value) ->
                  "Fir_reflective_store(%s, %s, %s)"
                      .formatted(
                          emitArgument(promArg), nvSymbolRef(pool, variable), emitArgument(value));
              case Store(var variable, var value) -> {
                var arg = emitArgument(value);
                cCode.stmt("Fir_store(%s, %s, %s);", nvSymbolRef(pool, variable), arg, VAR_ENV);
                yield arg;
              }
              case SubscriptRead(var vector, var index) ->
                  "Fir_subscript_read(%s, %s)".formatted(emitArgument(vector), emitArgument(index));
              case SubscriptWrite(var vector, var index, var value) ->
                  "Fir_subscript_write(%s, %s, %s)"
                      .formatted(emitArgument(vector), emitArgument(index), emitArgument(value));
              case SuperLoad(var variable) ->
                  "Fir_super_load(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
              case SuperStore(var variable, var value) -> {
                var arg = emitArgument(value);
                cCode.stmt(
                    "Fir_super_store(%s, %s, %s);", nvSymbolRef(pool, variable), arg, VAR_ENV);
                yield arg;
              }
            };
          }

          private String emitCall(Call call) {
            return switch (call.callee()) {
              case DispatchCallee(var calleeFun, var signature) -> {
                if (calleeFun.owner() == BUILTINS) {
                  var builtinIndex =
                      Objects.requireNonNull(rSession.RFunTab().get(calleeFun.name().name()))
                          .index();

                  var arguments = emitArgumentArray("args", call.callArguments());
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

                  yield "Fir_call_builtin(%d, %s, %d, %s, %s)"
                      .formatted(
                          builtinIndex,
                          VAR_ENV,
                          arguments.size(),
                          arguments.pointer(),
                          names.pointer());
                }

                // Protect constants (intrinsics have none)
                if (calleeFun.owner() != INTRINSICS) {
                  pool.internPatched(
                      calleeFun,
                      poolIdx -> {
                        var constantsCName = functionConstantsCName(calleeFun);

                        var initCCode = initCFunction.add();
                        debugComment(initCCode, "# Protect constants of %s", calleeFun.name());
                        initCCode.stmt(
                            "Rsh_set_const(%s, %d, %s);", VAR_POOL, poolIdx, constantsCName);
                      });
                }

                // Defer declare extern for referenced (previously-compiled) function
                // (without duplicates, builtins, or intrinsics).
                if (calleeFun.owner() != INTRINSICS) {
                  referencedFunctions.add(calleeFun);
                }

                // The baseline's signature is the default
                if (signature == null) {
                  signature = calleeFun.baseline().signature();
                }
                var cSignature = emitSignature(signature);

                var cName = functionDispatchCName(calleeFun);
                var arguments = emitArgumentSplice(call.callArguments());
                yield "%s(%s, %s%s)".formatted(cName, VAR_ENV, cSignature, arguments);
              }
              case StaticCallee(var calleeFunction, var calleeVersion) -> {
                // Protect constants (builtins and intrinsics have none)
                if (calleeFunction.owner() != BUILTINS && calleeFunction.owner() != INTRINSICS) {
                  pool.internPatched(
                      calleeVersion,
                      poolIdx -> {
                        var constantsCName = versionConstantsCName(calleeFunction, calleeVersion);

                        var initCCode = initCFunction.add();
                        debugComment(
                            initCCode,
                            "# Protect constants of %s version %s",
                            calleeFunction.name(),
                            calleeFunction.indexOf(calleeVersion));
                        initCCode.stmt(
                            "Rsh_set_const(%s, %d, %s);", VAR_POOL, poolIdx, constantsCName);
                      });
                }

                // Defer declare extern for referenced (previously-compiled) version
                // (without duplicates, builtins, or intrinsics).
                if (calleeFunction.owner() != BUILTINS && calleeFunction.owner() != INTRINSICS) {
                  referencedVersions.put(calleeVersion, calleeFunction);
                }

                var cName = versionCallCName(calleeFunction, calleeVersion);
                var arguments = emitArgumentSplice(call.callArguments());
                yield "%s(%s%s)".formatted(cName, VAR_ENV, arguments);
              }
              case DynamicCallee(var actualCallee, var argumentNames) -> {
                var arguments = emitArgumentArray("args", call.callArguments());
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
            debugInstr(cCode, jump);

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
                    "Fir_deopt(%d, %d, %s, %s);",
                    pc, stackArgs.size(), stackArgs.pointer(), VAR_ENV);
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
            debugComment(cCode, "? %s", assume);
            debugArgs(cCode, assume.arguments());

            return switch (assume) {
              case AssumeConstant(var target, var constant) ->
                  "Fir_assume_constant(%s, %s)"
                      .formatted(emitArgument(target), constantRef(pool, constant.sexp()));
              case AssumeFunction a ->
                  "Fir_assume_function(%s, &%s)"
                      .formatted(emitArgument(a.target()), functionDispatchCName(a.function()));
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

          private String emitSignature(Signature signature) {
            var returnType = emitType(cCode, signature.returnType());
            var paramTypes =
                emitArray(
                    "param_types",
                    "Fir_Type",
                    Lists.mapLazy(signature.parameterTypes(), t -> emitType(cCode, t)));
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
              case Use(var variable) -> registerPlace(variable);
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
                var argEmit = emitArgument(arg);
                debugValue(cCode, arg.toString(), argEmit);
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
    }
  }

  // region emit types
  private String emitType(CCode cCode, Type type) {
    var comment = options.contains(Option.EMIT_DEBUG_COMMENTS) ? "/* %s */ ".formatted(type) : "";
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

        cCode.stmt("Fir_Type %s = %s;", tempTypeName, emitType(cCode, valueType));
        yield "Fir_kind_promise(&%s, %s)".formatted(tempTypeName, emitEffects(fx));
      }
    };
  }

  private static String emitPrimitiveKind(PrimitiveKind primitiveKind) {
    return Integer.toString(primitiveKind.ordinal());
  }

  private static String emitOwnership(Ownership ownership) {
    return "FIR_" + ownership.name();
  }

  private static String emitConcreteness(Concreteness concreteness) {
    return Boolean.toString(concreteness == Concreteness.DEFINITE);
  }

  private static String emitEffects(Effects fx) {
    return Boolean.toString(fx.reflect());
  }

  // endregion emit types

  // region misc
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
        + "_v"
        + function.indexOf(version);
  }

  private static String versionInitCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no initializer";

    return "Fir_ver_init_" + escapeForC(function.name().name()) + "_v" + function.indexOf(version);
  }

  private static String versionCallCName(Function function, Abstraction version) {
    return "Fir_ver_call_" + escapeForC(function.name().name()) + "_v" + function.indexOf(version);
  }

  private static String promiseConstantsCName(Promise promise) {
    return "Fir_prom_constants_" + Integer.toHexString(promise.hashCode());
  }

  private static String promiseInitCName(Promise promise) {
    return "Fir_prom_init_" + Integer.toHexString(promise.hashCode());
  }

  private static String promiseFromRCName(Promise promise) {
    return "Fir_prom_from_r_" + Integer.toHexString(promise.hashCode());
  }

  private static String promiseEvalCName(Promise promise) {
    return "Fir_prom_eval_" + Integer.toHexString(promise.hashCode());
  }

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
                .map(p -> "SEXP %s".formatted(registerCName(p.variable()))))
        .toList();
  }

  private static final String VERSION_CALL_C_RETURN = "SEXP";

  private static final List<String> PROMISE_EVAL_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "SEXP const **%s".formatted(VAR_CAPTURES));

  private static final String PROMISE_EVAL_C_RETURN = "SEXP";

  private static String registerCName(Register register) {
    return "r_" + register.name();
  }

  private static String labelCName(BB bb) {
    if (bb.isEntry()) {
      throw new IllegalArgumentException("Can't refer to the entry BB");
    }
    return "l_" + bb.label();
  }

  private static String nvSymbolRef(ConstantPool pool, NamedVariable nv) {
    return nv == NamedVariable.DOTS ? "R_DotsSymbol" : constantRef(pool, SEXPs.symbol(nv.name()));
  }

  private static String constantRef(ConstantPool pool, SEXP sexp) {
    return "Rsh_const(%s, %d)".formatted(VAR_POOL, pool.intern(sexp));
  }

  private void debugComment(CCode cCode, @PrintFormat String fmt, Object... args) {
    if (options.contains(Option.EMIT_DEBUG_COMMENTS)) {
      cCode.comment(fmt, args);
    }
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_comment(\"%s\");", sanitizeString(fmt.formatted(args)));
    }
  }

  private void debugValue(CCode cCode, String name, String var) {
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_sexp(\"%s\", %s);", sanitizeString(name), var);
    }
  }

  private void debugSignature(CCode cCode) {
    if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
      cCode.stmt("Fir_dbg_signature(%s);", VAR_SIGNATURE);
    }
  }

  private static String sanitizeString(String value) {
    return value.replace("\n", "\\n").replace("\"", "\\\"");
  }

  private record Array(int size, String pointer) {}

  private record ArrayAndNames(Array values, String names) {}
  // endregion misc
}
