package org.prlprg.fir2c;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;
import static org.prlprg.gen2c.EscapeForC.escapeForC;

import com.google.common.collect.*;
import com.google.common.hash.HashCode;
import java.util.*;
import java.util.stream.*;
import org.intellij.lang.annotations.PrintFormat;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc2fir.FunctionBcOrigin;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.analyze.cfg.Liveness;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.FallbackCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
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
import org.prlprg.fir.ir.instruction.Use;
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
///
/// A module is compiled in pieces, tracked by a [Fir2CSession]: [#compile(Fir2CSession, Function)]
/// gives the first, and [#compileStub(Fir2CSession, int)] a patch for each version the client
/// asks for (see `server/doc/lazy-versions.md`). A [Fir2CSession] with no [id][Fir2CSession#id()]
/// compiles a module in one piece whose stubs are never compiled (they run their fallbacks).
public final class Fir2CCompiler {
  /// Return a C file and constant pools for `function` and its children.
  public static CompiledModule compile(Function function, RSession rSession, Option... options) {
    return compile(function, rSession, null, options);
  }

  /// Return a C file and constant pools for `function` and its children.
  ///
  /// If `bytecodes` is non-`null`, each function whose original GNU-R bytecode it records gets a
  /// baseline version that runs the bytecode (copy-and-patch JIT-compiled by the client runtime
  /// when possible, interpreted otherwise) instead of C compiled from the baseline's FIŘ.
  public static CompiledModule compile(
      Function function,
      RSession rSession,
      @Nullable ModuleBcOriginMap bytecodes,
      Option... options) {
    return compile(
        new Fir2CSession("", function.owner(), rSession, bytecodes, ImmutableSet.copyOf(options)),
        function);
  }

  /// Return a C file and constant pools for `function` and its children: the first piece of the
  /// module `session`'s client gets.
  ///
  /// An unevaluated version is compiled into a stub that runs its fallback, unless it's a baseline
  /// with bytecode (which runs the bytecode) or without a fallback (which is evaluated).
  public static CompiledModule compile(Fir2CSession session, Function function) {
    if (function.owner() != session.module()) {
      throw new IllegalArgumentException("Function isn't in the session's module");
    }
    return new Fir2CCompiler(session).run(function);
  }

  /// What the server answers the stub `stubId` in `session`'s client: a patch (a C file, constant
  /// pool, and the name of the function to call with it) that replaces the stub with its version,
  /// compiled (evaluating it first if necessary).
  ///
  /// The patch also defines whatever the version calls that the client doesn't have: new versions
  /// (as stubs, if they're unevaluated), new functions, and the compiled versions of stubs whose
  /// versions have been evaluated since. It doesn't redefine what the client has. It reverts the
  /// versions the client has compiled that are [redundant][#isRedundant(Abstraction)] now.
  ///
  /// If the version is redundant, the patch doesn't define it, and the answer tells the stub to
  /// keep running its fallback. There's no patch if there's nothing else to do, nor if the client
  /// already got the version, with an earlier patch.
  public static StubAnswer compileStub(Fir2CSession session, int stubId) {
    var answer = answerStub(session, stubId);
    session.recordRequest(stubId, answer.patch() != null);
    return answer;
  }

  private static StubAnswer answerStub(Fir2CSession session, int stubId) {
    var version = session.stub(stubId);
    var state = Objects.requireNonNull(session.version(version));
    if (!state.isStub()) {
      return new StubAnswer(null, false);
    }
    // Evaluated explicitly (instead of by emitting it) so that the patch is planned around the
    // evaluated version, whose signature may be narrower than the stub's.
    version.body();
    evaluateStaticCallees(session.functionOf(version), version);
    var compiler = new Fir2CCompiler(session);
    var fallback = compiler.isRedundant(version);
    return new StubAnswer(compiler.runPatch(version), fallback);
  }

  /// Evaluate the versions of `function` that `version` calls statically (not by dispatch), the
  /// versions of `function` that those call, and so on.
  ///
  /// Compiling a version compiles the versions it calls statically that the client lacks, as
  /// stubs if they're unevaluated. Such a stub would soon request its version, whose evaluation
  /// would retarget the caller, so that the caller is compiled again. Evaluating them first
  /// compiles them all in one patch. Only versions of the same function, because that's where
  /// the chains of specialized versions are (a recursive function calls its own versions).
  private static void evaluateStaticCallees(Function function, Abstraction version) {
    var closure = new LinkedHashSet<>(List.of(version));
    var changed = true;
    // Evaluating a version optimizes the module, which may retarget the calls already looked at.
    while (changed) {
      changed = false;
      for (var caller : List.copyOf(closure)) {
        if (!caller.isEvaluated() || !function.versions().contains(caller)) {
          continue;
        }
        var callees =
            caller
                .streamCfgs()
                .flatMap(cfg -> cfg.bbs().stream())
                .flatMap(bb -> bb.statements().stream())
                .<Abstraction>mapMulti(
                    (statement, downstream) -> {
                      if (statement.expression()
                              instanceof
                              Call(StaticFnCallee(var ref, var isDispatch, var signature))
                          && !isDispatch
                          && ref.get() == function) {
                        var callee = function.guess(signature);
                        if (callee != null && !callee.isStub()) {
                          downstream.accept(callee);
                        }
                      }
                    })
                .toList();
        for (var callee : callees) {
          if (closure.add(callee)) {
            callee.body();
            changed = true;
          }
        }
      }
    }
  }

  /// See [#compileStub(Fir2CSession, int)].
  ///
  /// @param patch What the client loads, or `null` if there's nothing.
  /// @param fallback Whether the stub keeps running its fallback, because its version is
  ///     [redundant][#isRedundant(Abstraction)].
  public record StubAnswer(@Nullable CompiledPatch patch, boolean fallback) {}

  private static final String VAR_ENV = "env";
  private static final String VAR_DATA = "data";
  /// The slot of a promise's constant pool that holds its source expression.
  private static final int PROMISE_EXPR_INDEX = 1;
  private static final String VAR_CAPTURES = "captures";
  private static final String VAR_POOL = "pool";
  private static final String VAR_SIGNATURE = "signature";
  private static final String VAR_LOCAL_PROMISES = "local_promises";
  private static final String VAR_LOCAL_PROMISES_IDX = "local_promises_idx";
  private static final String VAR_ENV_PUSHED = "env_pushed";
  private static final String VAR_ENV_SAVED = "env_saved";
  private static final String VAR_ENV_DEPTH = "env_depth";
  /// The environment a version's C function receives, before its `MkEnv` replaces [#VAR_ENV].
  private static final String VAR_ENV_CLOSURE = "env_closure";

  /// Constant pool slot of what identifies a bytecode baseline's pool (see
  /// [FunctionEmitter#bcBaselineId()]).
  ///
  /// Mirrored by `FIR_BC_BASELINE_ID` in `runtime.h`.
  static final int FIR_BC_BASELINE_ID = 3;

  /// Constant pool slot of a bytecode baseline's call counter (a scalar integer the baseline
  /// increments, which becomes the version's number of recorded calls).
  ///
  /// Mirrored by `FIR_BC_BASELINE_CALLS` in `runtime.h`.
  static final int FIR_BC_BASELINE_CALLS = 4;

  /// First element of [#FIR_BC_BASELINE_ID], which is how `Fir_serialized_feedback`
  /// in `runtime.c` recognizes bytecode baseline pools while walking the module's constant pool.
  static final String FIR_BC_BASELINE_MAGIC = "Fir_bc_baseline_feedback";

  // Input
  private final Fir2CSession session;
  private final Module module;
  private final RSession rSession;
  private final @Nullable ModuleBcOriginMap bytecodes;
  private final ImmutableSet<Option> options;

  // Output
  private final CUnit cUnit = new CUnit();
  /// Every function and version referred to (for what's `extern`, see
  /// [#emitReferencedExternalDeclarations()]) ...
  private final LinkedHashSet<Function> referencedFunctions = new LinkedHashSet<>();
  private final LinkedHashMap<Abstraction, Function> referencedVersions = new LinkedHashMap<>();
  /// ...and the ones not yet looked at, to be defined in this unit if the client doesn't have
  /// them.
  private final LinkedHashSet<Function> functionWorklist = new LinkedHashSet<>();
  private final LinkedHashMap<Abstraction, Function> versionWorklist = new LinkedHashMap<>();
  /// Functions defined in this unit (the others the client has are `extern`).
  private final Set<Function> unitFunctions = new HashSet<>();
  /// Versions whose current implementation is defined in this unit (the others the client has
  /// are `extern`).
  private final Set<Abstraction> unitVersions = new HashSet<>();
  /// Entries (see [Fir2CSession.Entry]) defined in this unit (the others are `extern`)...
  private final Set<String> unitEntries = new HashSet<>();
  /// ...and the ones declared `extern` so far.
  private final Set<String> externEntries = new HashSet<>();
  /// Versions the client has stubs for, that were evaluated since, and that this unit (a patch)
  /// will define compiled: their compiled versions' names are assigned (so that calls emitted in
  /// this unit are to those) but not yet defined.
  private final Set<Abstraction> pendingReplacements = new HashSet<>();
  private final Map<Abstraction, HashCode> fingerprints = new HashMap<>();
  private final Set<Promise> compiledPromises = new HashSet<>();
  /// Whether this unit is a patch (see [#runPatch(Abstraction)]).
  private boolean isPatch = false;

  private Fir2CCompiler(Fir2CSession session) {
    this.session = session;
    module = session.module();
    rSession = session.rSession();
    bytecodes = session.bytecodes();
    options = session.options();
  }

  private CompiledModule run(Function mainFunction) {
    cUnit.addInclude("runtime.h");

    var mainEmitter = new FunctionEmitter(mainFunction);
    mainEmitter.run();

    if (options.contains(Option.COMPILE_REFERENCED_FUNCTIONS)) {
      while (!functionWorklist.isEmpty() || !versionWorklist.isEmpty()) {
        var next =
            functionWorklist.isEmpty()
                ? versionWorklist.remove(versionWorklist.firstEntry().getKey())
                : functionWorklist.removeFirst();
        if (session.hasFunction(next)) {
          continue;
        }
        var nextCpSxp = new FunctionEmitter(next).run();

        // We must initialize `next`'s constant pools,
        // and we must do so *before* `main`'s initialization
        // (and before referenced functions encountered before).
        var initCode = mainEmitter.initCFunction().addFirst();
        var nextInitCName = functionInitCName(next);
        initCode.stmt("%s(%s);", nextInitCName, nestedPoolRef(mainEmitter.fnPool, nextCpSxp));
      }
    }
    emitReferencedExternalDeclarations();

    return new CompiledModule(cUnit, mainEmitter.fnPool.toSexp());
  }

  /// See [#compileStub(Fir2CSession, int)]. `null` if the patch would do nothing.
  private @Nullable CompiledPatch runPatch(Abstraction version) {
    isPatch = true;
    cUnit.addInclude("runtime.h");

    var patch = new PatchEmitter();
    if (!isRedundant(version)) {
      referenceVersion(version, session.functionOf(version));
    }

    // The compiled version calls things the client may not have. Like `run`, but the client has
    // most of the module. Every other version the client has that's out of date (a stub whose
    // version is evaluated by now, or a compiled version that changed since) gets a new
    // implementation too, and every function whose versions changed gets new entries.
    while (true) {
      while (!functionWorklist.isEmpty() || !versionWorklist.isEmpty()) {
        if (!functionWorklist.isEmpty()) {
          var next = functionWorklist.removeFirst();
          if (!session.hasFunction(next)) {
            patch.addFunction(next);
          }
          continue;
        }

        var next = versionWorklist.firstEntry();
        versionWorklist.remove(next.getKey());
        var nextVersion = next.getKey();
        var nextFunction = next.getValue();
        if (!session.hasFunction(nextFunction)) {
          patch.addFunction(nextFunction);
          continue;
        }
        if (session.version(nextVersion) == null) {
          patch.addVersion(nextFunction, nextVersion);
        } else if (pendingReplacements.contains(nextVersion)) {
          patch.reimplement(nextVersion);
        }
      }
      assert pendingReplacements.isEmpty() : "every referenced replacement is defined";

      // Out-of-date implementations, in a fixed order (the session's versions aren't ordered).
      var outOfDate =
          session.versions().stream()
              .filter(this::needsReimplementation)
              .sorted(Comparator.comparing(v -> versionCallCName(session.functionOf(v), v)))
              .toList();
      for (var v : outOfDate) {
        referenceVersion(v, session.functionOf(v));
      }
      session.versions().stream()
          .filter(this::needsRevert)
          .sorted(Comparator.comparing(v -> versionCallCName(session.functionOf(v), v)))
          .forEach(patch::revert);

      // Every function whose versions changed (in the module, or in what the client has of
      // them) gets its entries regenerated, so that what it dispatches among is up to date. That
      // refers to versions the client may not have (new ones, as stubs), so go around again.
      var stale =
          session.functions().stream()
              .filter(f -> f.canDispatch() && !unitFunctions.contains(f))
              .filter(f -> !currentEntryCallees(f).equals(session.entryCallees(f)))
              .toList();
      if (outOfDate.isEmpty() && stale.isEmpty()) {
        break;
      }
      for (var function : stale) {
        patch.regenerateEntries(function);
      }
    }
    emitReferencedExternalDeclarations();

    return patch.finish();
  }

  private void referenceFunction(Function function) {
    referencedFunctions.add(function);
    functionWorklist.add(function);
  }

  /// What `function`'s entries would dispatch among if they were regenerated now: its versions
  /// in dispatch order, by the names its entries would call them by, with their signatures
  /// (which the entries filter by). Compared to what they were generated from.
  private List<String> currentEntryCallees(Function function) {
    var callees = new ArrayList<String>();
    for (var version : function.versions()) {
      var state = session.version(version);
      var name =
          state != null && needsReimplementation(version)
              ? null // Reimplemented by this patch once referred to, so its entry may change
              : versionCallCName(function, version);
      callees.add(name + " " + version.signature());
    }
    return callees;
  }

  /// After the client's current implementation of `version` is initialized: assign it to the
  /// version's entries (see [#emitEntryAssignments(CCode, Function, Abstraction, String, Repr)]).
  private void emitEntryAssignments(CCode code, Function function, Abstraction version) {
    emitEntryAssignments(
        code,
        function,
        version,
        versionImplCName(function, version),
        version.returnType().kind().repr());
  }

  /// Define the version's entries this unit introduces, and assign every entry `implCName`, an
  /// implementation of the version that returns `implReturnRepr`, or an adapter of it for an
  /// entry with a different return representation (see [Fir2CSession.Entry]).
  private void emitEntryAssignments(
      CCode code, Function function, Abstraction version, String implCName, Repr implReturnRepr) {
    var state = Objects.requireNonNull(session.version(version));
    var cParams = versionCallCParams(version);
    for (var entry : session.takeUndefinedEntries(version)) {
      var entryCName = versionEntryCName(function, entry.part());
      cUnit.addGlobalFunctionPointer(reprCType(entry.returnRepr()), entryCName, cParams);
      unitEntries.add(entryCName);
    }

    debugComment(code, "# Assign what calls of %s %s call", function.name(), version.signature());
    var adapters = new HashSet<String>();
    for (var entry : state.entries()) {
      var entryCName = versionEntryCName(function, entry.part());
      if (!unitEntries.contains(entryCName) && externEntries.add(entryCName)) {
        // An older entry, from a piece the client has
        cUnit.addExternGlobalFunctionPointer(reprCType(entry.returnRepr()), entryCName, cParams);
      }
      var target = implCName;
      if (entry.returnRepr() != implReturnRepr) {
        target = adapterCName(implCName, entry.returnRepr());
        if (adapters.add(target)) {
          emitReturnAdapter(
              function, version, target, entry.returnRepr(), implCName, implReturnRepr);
        }
      }
      code.stmt("%s = %s;", entryCName, target);
    }
  }

  /// The adapter of the version implementation `implCName` that returns `returnRepr` (see
  /// [#emitReturnAdapter(Function, Abstraction, String, Repr, String, Repr)]).
  private static String adapterCName(String implCName, Repr returnRepr) {
    return implCName + (returnRepr == Repr.SEXP ? "_boxed" : "_as_" + reprCType(returnRepr));
  }

  /// Define `adapterCName`, which calls `implCName` (an implementation of `version`) and converts
  /// what it returns from `implReturnRepr` to `returnRepr`: boxes an unboxed scalar, or unboxes a
  /// boxed one. It's `static`, since only this unit refers to it, and an implementation can be
  /// adapted by more than one unit (a stub, each time the client goes back to it).
  private void emitReturnAdapter(
      Function function,
      Abstraction version,
      String adapterCName,
      Repr returnRepr,
      String implCName,
      Repr implReturnRepr) {
    var adapter =
        cUnit.addFunction(
            "static " + reprCType(returnRepr), adapterCName, versionCallCParams(version));
    var adapterCode = adapter.add();
    debugComment(
        adapterCode,
        "## Call %s version %s and convert the result (for an entry that returns %s)",
        function.name().name(),
        version.signature(),
        reprCType(returnRepr));
    var convert =
        implReturnRepr == Repr.SEXP
            ? unboxCName(scalarOf(returnRepr), Repr.SEXP)
            : boxCName(scalarOf(implReturnRepr), returnRepr);
    var arguments =
        version.parameters().stream()
            .map(p -> ", " + registerCName(p))
            .collect(Collectors.joining());
    adapterCode.stmt("return %s(R_EmptyEnv, %s(%s%s));", convert, implCName, VAR_ENV, arguments);
  }

  /// The unboxed scalar type whose representation is `repr`.
  private static Type scalarOf(Repr repr) {
    return Arrays.stream(PrimitiveKind.values())
        .filter(k -> k.repr() == repr)
        .findFirst()
        .map(Type::primitiveScalar)
        .orElseThrow(
            () ->
                new UnsupportedOperationException(
                    "No unboxed scalar type whose C type is " + reprCType(repr)));
  }

  /// A call to `version` of `function`, which returns what the client's code for the version
  /// returns, converted to what the version now returns if that's since narrowed (see
  /// [Fir2CSession.VersionState#returnRepr()]).
  private String emitVersionCall(
      Function function, Abstraction version, String cEnv, String arguments) {
    var call = "%s(%s%s)".formatted(versionCallCName(function, version), cEnv, arguments);
    var state = session.version(version);
    if (state == null || state.returnRepr() == version.returnType().kind().repr()) {
      return call;
    }
    return "%s(R_EmptyEnv, %s)"
        .formatted(unboxCName(version.returnType(), state.returnRepr()), call);
  }

  /// The `box` intrinsic from `unboxed` (a version's return type) to `boxedRepr` (what the
  /// client's code for it returns).
  private String boxCName(Type unboxed, Repr boxedRepr) {
    var boxSignature =
        new Signature(ImmutableList.of(unboxed), boxedOf(unboxed, boxedRepr), Effects.NONE);
    var boxVersion = Objects.requireNonNull(BOX_FUN.guess(boxSignature), "no `box` intrinsic");
    return versionCallCName(BOX_FUN, boxVersion);
  }

  /// The `unbox` intrinsic to `unboxed` (a version's return type) from `boxedRepr` (what the
  /// client's code for it returns).
  private String unboxCName(Type unboxed, Repr boxedRepr) {
    var unboxSignature =
        new Signature(ImmutableList.of(boxedOf(unboxed, boxedRepr)), unboxed, Effects.NONE);
    var unboxVersion =
        Objects.requireNonNull(UNBOX_FUN.guess(unboxSignature), "no `unbox` intrinsic");
    return versionCallCName(UNBOX_FUN, unboxVersion);
  }

  private static Type boxedOf(Type unboxed, Repr boxedRepr) {
    if (!(unboxed.kind() instanceof Kind.PrimitiveScalar(var primitive))
        || boxedRepr != Repr.SEXP) {
      throw new UnsupportedOperationException(
          "Can't convert the version's return type "
              + unboxed
              + " to and from what its code returns, "
              + reprCType(boxedRepr)
              + " (only an unboxed scalar to and from a boxed one)");
    }
    return Type.primitiveVector1(primitive, Ownership.SHARED);
  }

  /// Whether a call to `version` must keep its constants alive from the caller's pool.
  ///
  /// Not when it's a version of the caller's function: they're in the function's pool, like the
  /// caller's. Nor when this unit is a patch that defines it (the client doesn't have it, or has
  /// its stub and it's been evaluated): its pool is nested in the patch's, which the client keeps.
  /// In both cases it also can't be protected at init, because the callee's constants may not be
  /// initialized yet (a version is initialized after the one that referred to it).
  private boolean mustProtectConstants(
      Function function, Function calleeFun, Abstraction calleeVersion) {
    if (calleeFun.owner() == BUILTINS || calleeFun.owner() == INTRINSICS) {
      // Builtins and intrinsics have no constants.
      return false;
    }
    if (calleeFun == function) {
      return false;
    }
    return !isPatch
        || !(session.version(calleeVersion) == null
            || pendingReplacements.contains(calleeVersion)
            || unitVersions.contains(calleeVersion));
  }

  private void referenceVersion(Abstraction version, Function function) {
    referencedVersions.put(version, function);
    versionWorklist.put(version, function);

    // If the client's implementation of the version is out of date (its stub, and the version's
    // been evaluated since; or compiled, and the version's changed since), this unit defines a
    // new one. Record that now, so that the reference (a call) is to the entry the new
    // implementation will have: the version's return type may have narrowed, which gives it a
    // new entry, with the new calling convention.
    if (needsReimplementation(version) && !pendingReplacements.contains(version)) {
      session.addCompiled(function, version, () -> defaultCNamePart(function, version));
      pendingReplacements.add(version);
    }
  }

  /// Whether the client's implementation of `version` is out of date (see
  /// [#referenceVersion(Abstraction, Function)]), and this unit hasn't defined a new one.
  private boolean needsReimplementation(Abstraction version) {
    var state = session.version(version);
    if (state == null || unitVersions.contains(version) || pendingReplacements.contains(version)) {
      return false;
    }
    if (state.stubId() != null && isRedundant(version)) {
      // Its stub is the implementation (see `needsRevert`).
      return false;
    }
    if (state.isStub()) {
      return version.isEvaluated();
    }
    if (version.isStub()
        || (version == session.functionOf(version).baseline() && bytecodes != null)) {
      // Runtime-provided, or the bytecode baseline: never changes.
      return false;
    }
    return !fingerprint(version).equals(state.ir());
  }

  /// Whether the client has `version` compiled, and has a stub for it, which it should go back
  /// to because the version is [redundant][#isRedundant(Abstraction)].
  private boolean needsRevert(Abstraction version) {
    var state = session.version(version);
    return state != null
        && state.compiled()
        && state.stubId() != null
        && !unitVersions.contains(version)
        && !pendingReplacements.contains(version)
        && isRedundant(version);
  }

  /// Whether `version` is the same as its fallback: it isn't a baseline, and the optimizations
  /// didn't change it since it was evaluated (it's the version it was copied from, adapted, which
  /// is what the fallback calls and how). Compiling it would only inline the fallback's call.
  private boolean isRedundant(Abstraction version) {
    var lazyBody = version.lazyBody();
    var evaluated = lazyBody == null ? null : lazyBody.evaluatedFingerprint();
    return evaluated != null
        && version != session.functionOf(version).baseline()
        && evaluated.equals(fingerprint(version));
  }

  /// [Abstraction#fingerprint()], computed once per unit (the IR doesn't change while a unit is
  /// compiled).
  private HashCode fingerprint(Abstraction version) {
    return fingerprints.computeIfAbsent(version, Abstraction::fingerprint);
  }

  /// Declare everything referenced but not defined in this unit `extern`.
  private void emitReferencedExternalDeclarations() {
    for (var function : referencedFunctions) {
      if (unitFunctions.contains(function)) {
        // Already declared non-extern
        continue;
      }

      var constantsCName = functionConstantsCName(function);
      cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

      var cName = functionDispatchCName(function);
      cUnit.addExternFunction(DISPATCH_C_RETURN, cName, DISPATCH_C_PARAMS);

      if (function.canDispatch()) {
        cUnit.addExternFunction(FROM_R_C_RETURN, functionFromRCName(function), FROM_R_C_PARAMS);
      }
    }
    for (var entry : referencedVersions.entrySet()) {
      var version = entry.getKey();
      var function = entry.getValue();

      var cName = versionCallCName(function, version);
      var cParams = versionCallCParams(version);
      var cReturn = versionCallCReturn(version);
      if (version.isStub()) {
        // A function the runtime provides (see `VersionEmitter.forwardDeclareStub`)
        continue;
      }
      if (!unitVersions.contains(version)) {
        var constantsCName = versionConstantsCName(function, version);
        cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);
      }
      if (!unitEntries.contains(cName) && externEntries.add(cName)) {
        cUnit.addExternGlobalFunctionPointer(cReturn, cName, cParams);
      }
    }
  }

  /// Emits a patch: an initializer that, once the client calls it, replaces stubs with their
  /// compiled versions (see [#compileStub(Fir2CSession, int)]).
  private final class PatchEmitter {
    private final int index = session.nextPatch();
    private final CFunction initCFunction;
    private final ConstantPool pool = new ConstantPool();
    /// Run at the end of the initializer, once everything is initialized.
    private final CCode replacements;
    /// Whether the patch does anything.
    private boolean changed = false;

    PatchEmitter() {
      initCFunction = cUnit.addFunction(INIT_C_RETURN, patchInitCName(index), INIT_C_PARAMS);
      debugComment(initCFunction.add(), "## Init patch %d", index);
      replacements = new CCode();
    }

    /// Define `function`, which the client doesn't have, and initialize it before anything else
    /// (what's already in the initializer may refer to its constants).
    void addFunction(Function function) {
      changed = true;
      var cpSxp = new FunctionEmitter(function).run();
      var initCode = initCFunction.addFirst();
      initCode.stmt("%s(%s);", functionInitCName(function), nestedPoolRef(pool, cpSxp));
    }

    /// Define `version` of `function`, which the client has but not this version of it.
    void addVersion(Function function, Abstraction version) {
      var cpSxp = new FunctionEmitter(function).emitVersion(version);
      if (cpSxp == null) {
        // A stub that's provided elsewhere (declared `extern`).
        return;
      }
      changed = true;
      var initCode = initCFunction.add();
      initCode.stmt("%s(%s);", versionInitCName(function, version), nestedPoolRef(pool, cpSxp));
      emitEntryAssignments(initCode, function, version);
    }

    /// Define a new implementation of `version` (recorded by
    /// [#referenceVersion(Abstraction, Function)]), compiled from its IR now, and make the
    /// version's entries call it: it replaces the stub the client has, or updates the compiled
    /// implementation the client has, since the version changed.
    void reimplement(Abstraction version) {
      var function = session.functionOf(version);
      var state = Objects.requireNonNull(session.version(version));
      changed = true;

      var cpSxp = new FunctionEmitter(function).emitCompiledVersion(version);
      var initCode = initCFunction.add();
      initCode.stmt("%s(%s);", versionInitCName(function, version), nestedPoolRef(pool, cpSxp));
      emitEntryAssignments(initCode, function, version);

      if (state.stubId() != null) {
        // Tell the stub (and through it the client) the version arrived. Its entry is what its
        // callers call, so the implementation itself is only for whoever still gets there through
        // `Fir_stub_enter` (with the stub's convention).
        var stubCName = versionStubCName(function, state);
        cUnit.addExternGlobalVariable(STUB_C_TYPE, stubCName);
        var compiledCName = versionImplCName(function, version);
        var stubReturnRepr = state.entries().getFirst().returnRepr();
        if (version.returnType().kind().repr() != stubReturnRepr) {
          compiledCName = adapterCName(compiledCName, stubReturnRepr);
        }
        debugComment(
            replacements, "# Replace stub of %s version %s", function.name(), version.signature());
        replacements.stmt("Fir_stub_compiled(&%s, (void *)%s);", stubCName, compiledCName);
      }
    }

    /// Make `version`'s entries call its stub again, and the stub run its fallback from then on,
    /// since the version is [redundant][#isRedundant(Abstraction)].
    void revert(Abstraction version) {
      changed = true;
      var function = session.functionOf(version);
      var state = Objects.requireNonNull(session.version(version));
      var stubEntry = state.entries().getFirst();
      var stubImplCName = versionImplCName(function, stubEntry.part(), 0);
      cUnit.addExternFunction(
          reprCType(stubEntry.returnRepr()), stubImplCName, versionCallCParams(version));
      var stubCName = versionStubCName(function, state);
      cUnit.addExternGlobalVariable(STUB_C_TYPE, stubCName);

      var initCode = initCFunction.add();
      debugComment(
          initCode, "# Revert %s version %s to its stub", function.name(), version.signature());
      emitEntryAssignments(initCode, function, version, stubImplCName, stubEntry.returnRepr());
      replacements.stmt("Fir_stub_fallback(&%s);", stubCName);
      session.revert(version);
    }

    /// Regenerate `function`'s dispatch and from-R entries, since the versions they dispatch
    /// among (or their names) changed: the client has more or fewer versions of it now, or a
    /// stub was replaced by the compiled version.
    void regenerateEntries(Function function) {
      changed = true;
      var entries = session.nextEntries(function);
      var entriesPool = new ConstantPool();
      var poolCName = entriesConstantsCName(function, entries);
      cUnit.addGlobalVariable(CONSTANTS_C_TYPE, poolCName);
      referenceFunction(function);

      new FunctionEmitter(function).emitEntries(entries, entriesPool, poolCName);

      var initCode = initCFunction.add();
      debugComment(initCode, "# Regenerated entries (%d) of %s", entries, function.name().name());
      initCode.stmt("%s = %s;", poolCName, nestedPoolRef(pool, entriesPool.toSexp()));
      replacements.stmt(
          "Fir_fun_set_entries(%s, %s, %s);",
          functionConstantsCName(function),
          dispatchImplCName(function, entries),
          fromRImplCName(function, entries));
    }

    @Nullable CompiledPatch finish() {
      if (!changed) {
        return null;
      }
      var initCode = initCFunction.add();
      debugComment(initCode, "# Replace stubs and entries");
      initCode.stmt("%s", replacements.toString().stripTrailing());
      initCFunction.add().stmt("return R_NilValue;");
      return new CompiledPatch(cUnit, pool.toSexp(), initCFunction.name());
    }
  }

  /// Emits C for every version and the dispatch of a function.
  private final class FunctionEmitter {
    // Input
    private final Function function;

    // Output
    /// Only exists once [#run()] is called, which is what defines the function. Emitting a
    /// version of a function the client already has ([#emitVersion(Abstraction)]) doesn't.
    private @Nullable CFunction initCFunction;
    private final ConstantPool fnPool = new ConstantPool();

    FunctionEmitter(Function function) {
      this.function = function;
    }

    CFunction initCFunction() {
      return Objects.requireNonNull(initCFunction, "function isn't being defined");
    }

    VecSXP run() {
      if (!session.addFunction(function)) {
        throw new UnsupportedOperationException(
            "Already compiled: " + function.name() + "\n" + module);
      }
      unitFunctions.add(function);

      var cName = functionInitCName(function);
      initCFunction = cUnit.addFunction(INIT_C_RETURN, cName, INIT_C_PARAMS);

      emitConstants();

      var entries = function.canDispatch() ? session.nextEntries(function) : -1;
      beginEmitInit(entries);

      if (function.canDispatch()) {
        emitFromRTrampoline();
        emitDispatchTrampoline();
        emitEntries(entries, fnPool, functionConstantsCName(function));
      }

      emitVersions();

      endEmitInit();

      return fnPool.toSexp();
    }

    private void emitConstants() {
      var constantsCName = functionConstantsCName(function);
      cUnit.addGlobalVariable(CONSTANTS_C_TYPE, constantsCName);
    }

    /// @param entries The generation of the function's dispatch and from-R entries (see
    ///     [#emitEntries(int, ConstantPool, String)]), or -1 if it can't dispatch.
    private void beginEmitInit(int entries) {
      debugComment(initCFunction().add(), "## Init %s", function.name());

      var cCode = initCFunction().add();
      debugComment(cCode, "# Assign constant pool global variable");
      var constantsCName = functionConstantsCName(function);
      cCode.stmt("%s = %s;", constantsCName, VAR_POOL);

      cCode = initCFunction().add();
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
          "*data = (Fir_FunctionData) {.name = %s, .dispatch = %s, .dispatch_impl = %s, .from_r = %s, .formal_names = %s, .needs_context = %s};",
          functionName,
          function.canDispatch() ? functionDispatchCName(function) : "NULL",
          function.canDispatch() ? dispatchImplCName(function, entries) : "NULL",
          function.canDispatch() ? fromRImplCName(function, entries) : "NULL",
          formalNames,
          function.userProperties().needsContext());
      cCode.stmt("Fir_set_const(%s, %d, data_sexp);", VAR_POOL, idx);
    }

    /// The function's from-R entry: what its closures' bodies call. It forwards to the current
    /// from-R implementation, since that's regenerated as the function gets versions (see
    /// [#emitEntries(int, ConstantPool, String)]), while closures keep pointing here.
    private void emitFromRTrampoline() {
      var cFunction =
          cUnit.addFunction(FROM_R_C_RETURN, functionFromRCName(function), FROM_R_C_PARAMS);
      var cCode = cFunction.add();
      debugComment(cCode, "## From-R %s", function.name());
      cCode.stmt(
          "return Fir_fun_data(%s)->from_r(%s, %s);",
          functionConstantsCName(function), VAR_ENV, VAR_DATA);
    }

    /// The function's dispatch entry: what dispatch calls and `Fir_call_dynamic` call, and what
    /// identifies the function to `Fir_assume_function`. Like the from-R entry, it forwards to
    /// the current implementation.
    private void emitDispatchTrampoline() {
      var cFunction =
          cUnit.addFunction(DISPATCH_C_RETURN, functionDispatchCName(function), DISPATCH_C_PARAMS);
      var cCode = cFunction.add();
      debugComment(cCode, "## Dispatch %s", function.name());
      cCode.stmt("va_list args;");
      cCode.stmt("va_start(args, %s);", VAR_SIGNATURE);
      cCode.stmt(
          "SEXP out = Fir_fun_data(%s)->dispatch_impl(%s, %s, args);",
          functionConstantsCName(function), VAR_ENV, VAR_SIGNATURE);
      cCode.stmt("va_end(args);");
      cCode.stmt("return out;");
    }

    /// Emits generation `entries` of the function's from-R and dispatch implementations, which
    /// dispatch among the versions the function has now (referring to each, so a patch defines
    /// the ones the client doesn't have). The function's entries forward to them once
    /// `Fir_fun_set_entries` is called (which a function's init does through its
    /// `Fir_FunctionData`, and a patch does explicitly).
    ///
    /// @param pool Where the implementations' constants go, aliased as `pool` by `poolCName`
    ///     (the function's own pool when the function is being defined, else a pool of the patch).
    void emitEntries(int entries, ConstantPool pool, String poolCName) {
      var callees = new ArrayList<String>();
      for (var version : function.versions()) {
        if (!version.isStub()) {
          referenceVersion(version, function);
        }
        callees.add(versionCallCName(function, version) + " " + version.signature());
      }
      session.setEntryCallees(function, callees);

      emitDispatchFromR(fromRImplCName(function, entries), pool, poolCName);
      emitDispatch(dispatchImplCName(function, entries));
    }

    private void endEmitInit() {
      initCFunction().add().stmt("return R_NilValue;");
    }

    private void emitDispatchFromR(String cName, ConstantPool pool, String poolCName) {
      var cFunction = cUnit.addFunction(FROM_R_C_RETURN, cName, FROM_R_C_PARAMS);

      int numParams = function.parameterNames().size();
      var versions =
          function.versions().stream()
              .filter(v -> v.parameters().size() == numParams && isFromRSignature(v.signature()))
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
        cFunction.add().stmt("SEXP %s = %s;", VAR_POOL, poolCName);
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
          var paramSym = nvSymbolRef(pool, paramName);
          cCode.stmt("SEXP %s = Fir_from_r_arg(%s, %s);", argName, VAR_ENV, paramSym);
        }

        argsSplice.append(", ").append(argName);
      }

      cCode = cFunction.add();
      debugComment(cCode, "# Suppress inner mkenv (if present) because R makes it");
      cCode.stmt("SEXP outer_env;");
      cCode.stmt("bool push_suppressed;");
      cCode.stmt("SEXP outer_parent;");
      cCode.stmt(
          "Fir_set_env_pushed_from_r(%s, &outer_env, &push_suppressed, &outer_parent);", VAR_ENV);
      cCode.stmt("PROTECT(outer_parent);");

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
      cCode.stmt("Fir_unset_env_pushed_from_r(outer_env, push_suppressed, outer_parent);");
      cCode.stmt("UNPROTECT(1);");

      cCode = cFunction.add();
      cCode.stmt("return out;");
    }

    private void emitDispatch(String cName) {
      var cFunction = cUnit.addFunction(DISPATCH_C_RETURN, cName, DISPATCH_IMPL_C_PARAMS);

      var versions =
          function.versions().stream()
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
          cCode.stmt(3, "break;");
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
      cCode.stmt("return out;");
    }

    private void emitVersions() {
      var initCCode = initCFunction().add();
      debugComment(initCCode, "# Init versions");

      for (var version : function.versions()) {
        var cpSxp = emitVersion(version);
        if (cpSxp == null) {
          continue;
        }
        var cp = nestedPoolRef(fnPool, cpSxp);

        var versionInitCName = versionInitCName(function, version);
        initCCode.stmt("%s(%s);", versionInitCName, cp);
        emitEntryAssignments(initCCode, function, version);
      }
    }

    /// Emits `version`, and returns its constant pool (to pass to its initializer), or `null`
    /// if it's a stub (which is only declared).
    ///
    /// An unevaluated version is compiled into a stub that runs its fallback, unless it's the
    /// baseline: with bytecode it runs the bytecode (what a baseline runs instead of its FIŘ, as
    /// does the fallback of every other version, ultimately), and without it's evaluated.
    @Nullable VecSXP emitVersion(Abstraction version) {
      if (version.isStub()) {
        VersionEmitter.forwardDeclareStub(Fir2CCompiler.this, function, version);
        return null;
      }

      var bytecode =
          version == function.baseline() && bytecodes != null
              ? bytecodes.get(function.name().name())
              : null;
      if (bytecode != null) {
        session.addCompiled(function, version, () -> defaultCNamePart(function, version));
        unitVersions.add(version);
        return emitBytecodeBaseline(version, bytecode);
      }

      if (version.isEvaluated() || version.fallback() == null) {
        return emitCompiledVersion(version);
      }

      var state = session.addStub(function, version, () -> defaultCNamePart(function, version));
      unitVersions.add(version);
      return new VersionEmitter(version, state).run();
    }

    /// Emits `version` compiled from its FIŘ (evaluating it if it isn't), and returns its
    /// constant pool (to pass to its initializer).
    VecSXP emitCompiledVersion(Abstraction version) {
      if (!pendingReplacements.remove(version)) {
        session.addCompiled(function, version, () -> defaultCNamePart(function, version));
      }
      unitVersions.add(version);
      return new VersionEmitter(version, null).run();
    }

    /// Emits the baseline version as a shim that runs the function's original GNU-R bytecode
    /// (`Fir_bc_baseline_call` in `runtime.c` copy-and-patch JIT-compiles it when possible,
    /// interprets it otherwise) instead of C compiled from the baseline's FIŘ.
    ///
    /// Same C names and calling convention as [VersionEmitter], so call sites are unaffected.
    private VecSXP emitBytecodeBaseline(Abstraction baseline, FunctionBcOrigin bytecode) {
      var pool = new ConstantPool();

      var constantsCName = versionConstantsCName(function, baseline);
      cUnit.addGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

      var initCName = versionInitCName(function, baseline);
      var initCFunction = cUnit.addFunction(INIT_C_RETURN, initCName, INIT_C_PARAMS);
      debugComment(
          initCFunction.add(), "## Init %s baseline (GNU-R bytecode)", function.name().name());
      var initCCode = initCFunction.add();
      debugComment(initCCode, "# Assign constant pool global variable");
      initCCode.stmt("%s = %s;", constantsCName, VAR_POOL);
      var initCallCounterCode = initCFunction.add();
      debugComment(initCallCounterCode, "# Allocate the call counter (recorded feedback)");
      initCallCounterCode.stmt(
          "Fir_set_const(%s, %d, Rf_ScalarInteger(0));", VAR_POOL, FIR_BC_BASELINE_CALLS);
      initCFunction.add().stmt("return R_NilValue;");

      var cName = versionImplCName(function, baseline);
      var cParams = versionCallCParams(baseline);
      var cReturn = versionCallCReturn(baseline);
      var cFunction = cUnit.addFunction(cReturn, cName, cParams);
      var cCode = cFunction.add();
      debugComment(
          cCode, "## Call %s baseline (JIT-compiled GNU-R bytecode)", function.name().name());
      emitCallCounter(cFunction, baseline, false);

      // Fixed pool layout, mirrored by `Fir_bc_baseline_call` in `runtime.c`:
      // 0 = the GNU-R bytecode, 1 = the formals (with default-argument expressions),
      // 2 = space for the lazily JIT-compiled code, 3 = what identifies the pool and its
      // function's recording, 4 = space for the call counter.
      var bcIdx = pool.internUnique(SEXPs.bcode(bytecode.bc()));
      var formalsIdx = pool.internUnique(bytecode.formals());
      var jitIdx = pool.internSpace();
      // The translation of the baseline's recording refers to its registers and its inner
      // closures' functions, which only exist once it's evaluated.
      baseline.body();
      var idIdx = pool.internUnique(bcBaselineId());
      var callsIdx = pool.internSpace();
      assert bcIdx == 0
          && formalsIdx == 1
          && jitIdx == 2
          && idIdx == FIR_BC_BASELINE_ID
          && callsIdx == FIR_BC_BASELINE_CALLS;

      cCode.stmt("SEXP %s = %s;", VAR_POOL, constantsCName);
      var parameters = baseline.parameters();
      if (parameters.isEmpty()) {
        cCode.stmt("return Fir_bc_baseline_call(%s, %s, 0, NULL);", VAR_POOL, VAR_ENV);
      } else {
        cCode.stmt(
            "SEXP args[%d] = {%s};",
            parameters.size(),
            parameters.stream()
                .map(Fir2CCompiler::registerCName)
                .collect(Collectors.joining(", ")));
        cCode.stmt(
            "return Fir_bc_baseline_call(%s, %s, %d, args);", VAR_POOL, VAR_ENV, parameters.size());
      }

      return pool.toSexp();
    }

    /// What identifies a bytecode baseline's pool to `Fir_serialized_feedback` in `runtime.c`:
    /// [#FIR_BC_BASELINE_MAGIC] and the name of the baseline's function, which names its
    /// recording. The server translates the recording ([org.prlprg.bc2fir.BcRecordingFeedback]).
    private StrSXP bcBaselineId() {
      return SEXPs.string(FIR_BC_BASELINE_MAGIC, function.name().name());
    }

    private final class VersionEmitter {
      // Input
      private final Abstraction version;
      /// The stub this emits `version` as, or `null` to emit it compiled.
      private final Fir2CSession.@Nullable VersionState stub;
      /// The body, or the fallback if this emits a stub.
      private final CFG root;

      // State
      private final Map<CFG, Set<Register>> locals = new LinkedHashMap<>();
      private final Map<CFG, Set<Register>> captures = new LinkedHashMap<>();
      private final Map<Register, Type> registerTypes = new LinkedHashMap<>();
      /// Each promise CFG to the CFG whose frame creates it. The version's own body CFG isn't a
      /// key, so a lookup chain from any CFG terminates there.
      private final Map<CFG, CFG> enclosingCfgs = new LinkedHashMap<>();

      /// Declares a stub version (a declaration without code, e.g. a builtin) as `extern`: it's
      /// defined elsewhere (the runtime).
      static void forwardDeclareStub(
          Fir2CCompiler compiler, Function function, Abstraction version) {
        if (!version.isStub()) {
          throw new IllegalArgumentException(
              "Call new VersionEmitter(...).run() for a version that isn't a stub:\n" + version);
        }

        var constantsCName = compiler.versionConstantsCName(function, version);
        compiler.cUnit.addExternGlobalVariable(CONSTANTS_C_TYPE, constantsCName);

        var cName = compiler.versionCallCName(function, version);
        var cParams = versionCallCParams(version);
        var cReturn = compiler.versionCallCReturn(version);
        compiler.cUnit.addExternFunction(cReturn, cName, cParams);
      }

      VersionEmitter(Abstraction version, Fir2CSession.@Nullable VersionState stub) {
        if (version.isStub()) {
          throw new IllegalArgumentException(
              "Call VersionEmitter.forwardDeclareStub(...) for a stub:\n" + version);
        }

        this.version = version;
        this.stub = stub;
        if (stub == null) {
          root = version.body();
        } else {
          root =
              Objects.requireNonNull(
                  version.fallback(),
                  "a stub is emitted for an unevaluated version with a fallback");
        }

        prepare();
      }

      private Stream<CFG> streamCfgs() {
        return Abstraction.streamCfgs(root);
      }

      private Stream<Register> streamRegisters() {
        return version.streamRegisters(root);
      }

      private void prepare() {
        // Compute local and captured registers
        streamCfgs().forEach(cfg -> locals.put(cfg, new LinkedHashSet<>()));
        streamCfgs().forEach(cfg -> captures.put(cfg, new LinkedHashSet<>()));
        streamCfgs()
            .forEach(
                cfg -> {
                  for (var bb : cfg.bbs()) {
                    for (var statement : bb.statements()) {
                      if (statement.expression() instanceof Promise promise) {
                        enclosingCfgs.put(promise.code(), cfg);
                      }
                    }
                  }
                });
        streamRegisters()
            .forEach(
                register -> {
                  registerTypes.put(register, register.type());

                  CFG defCfg;
                  switch (register) {
                    case FunctionParameter _ -> defCfg = root;
                    case AssigneeOf ao -> {
                      var defBb = ao.statement().parentBB();
                      if (defBb == null) {
                        // Malformed CFG
                        return;
                      }
                      defCfg = defBb.owner();
                    }
                    case BlockParameter bp -> {
                      if (bp.owner() == null) {
                        // Malformed CFG
                        return;
                      }
                      defCfg = bp.owner().owner();
                    }
                  }

                  if (!(register instanceof FunctionParameter)) {
                    locals.get(defCfg).add(register);
                  }

                  for (var use : register.uses()) {
                    var useBb = use.instruction().parentBB();
                    if (useBb == null) {
                      continue;
                    }
                    // The register only has a slot in `defCfg`'s frame, and a promise's capture
                    // array holds pointers into the frame that *creates* it. So a use nested more
                    // than one promise deep has to be threaded through every frame in between,
                    // each of which captures it from its own enclosing frame.
                    for (var useCfg = useBb.owner();
                        useCfg != null && useCfg != defCfg;
                        useCfg = enclosingCfgs.get(useCfg)) {
                      captures.get(useCfg).add(register);
                    }
                  }
                });
      }

      VecSXP run() {
        var constantsCName = versionConstantsCName(function, version);

        var initCName = versionInitCName(function, version);
        var initCFunction = cUnit.addFunction(INIT_C_RETURN, initCName, INIT_C_PARAMS);

        var cName = versionImplCName(function, version);
        var cParams = versionCallCParams(version);
        var cReturn = versionCallCReturn(version);
        var cFunction = cUnit.addFunction(cReturn, cName, cParams);

        var what = stub == null ? "version" : "stub of version";
        if (options.contains(Option.EMIT_DEBUG_COMMENTS)
            || options.contains(Option.EMIT_DEBUG_PRINTS)) {
          debugComment(
              initCFunction.add(),
              "## Init %s %s %s",
              function.name().name(),
              what,
              version.signature());

          var cCode = cFunction.add();
          debugComment(
              cCode, "## Call %s %s %s", function.name().name(), what, version.signature());

          // Debug-print SEXP parameters
          if (options.contains(Option.EMIT_DEBUG_PRINTS)) {
            for (var param : version.parameters()) {
              debugValue(cCode, param.name(), registerCName(param), param.type().kind().repr());
            }
          }
        }

        if (stub != null) {
          emitStubEntry(cFunction, cReturn, cParams);
        }
        emitCallCounter(cFunction, version, stub != null);

        return new CfgEmitter(
                root,
                version.returnType(),
                constantsCName,
                initCFunction,
                cFunction,
                new ConstantPool())
            .run();
      }

      /// The `Fir_Stub` and, at the start of the call function, the call of the compiled version
      /// once the stub has it. What follows is the fallback.
      private void emitStubEntry(CFunction cFunction, String cReturn, List<String> cParams) {
        assert stub != null;
        var stubCName = versionStubCName(function, stub);
        cUnit.addGlobalVariable(
            STUB_C_TYPE,
            stubCName,
            "{.module = \"%s\", .id = %d, .compiled = NULL, .state = FIR_STUB_UNREQUESTED, .calls = 0}"
                .formatted(sanitizeString(session.id()), stub.stubId()));

        var cCode = cFunction.add();
        debugComment(cCode, "# Call the compiled version if the server sent it, else the fallback");
        var paramCTypes =
            cParams.stream()
                // Just the types: `SEXP env` -> `SEXP`.
                .map(p -> p.substring(0, p.lastIndexOf(' ')))
                .collect(Collectors.joining(", "));
        cCode.stmt(
            "%s (*compiled)(%s) = (%s (*)(%s))Fir_stub_enter(&%s);",
            cReturn, paramCTypes, cReturn, paramCTypes, stubCName);
        cCode.stmt("if (compiled != NULL) {");
        cCode.stmt(
            2,
            "return compiled(%s%s);",
            VAR_ENV,
            version.parameters().stream()
                .map(p -> ", " + registerCName(p))
                .collect(Collectors.joining()));
        cCode.stmt("}");
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
          var escaped =
              promise.local() ? "FIR_GLOBALLY_ESCAPED_LOCAL" : "FIR_GLOBALLY_ESCAPED_DEFAULT";
          cCode.stmt(
              "*data = (Fir_PromiseGlobalData) {.eval = %s, .value_type = %s, .effects = %s, .escaped = %s};",
              evalCName, valueType, reflect, escaped);
          var mayReflect = new InferEffects(promise.code().scope()).of(promise.code()).reflect();
          cCode.stmt("FIR_STATS_ONLY(data->may_reflect = %s;)", mayReflect);

          // The source expression, which `Fir_mk_promise` puts in the promise.
          var exprIdx =
              pool.internUnique(promise.expr() != null ? promise.expr() : SEXPs.UNBOUND_VALUE);
          assert exprIdx == PROMISE_EXPR_INDEX;
        }

        private void emitFromR() {
          var cCode = fromRCFunction.add();
          // If the promise escaped its creating frame, record the escape or crash (if local).
          cCode.stmt("Fir_check_promise_escaped(%s);", VAR_DATA);
          cCode.stmt("void **captures = Fir_prom_local(%s)->captures;", VAR_DATA);
          var evalCName = promiseEvalCName(promise);
          cCode.stmt(
              "FIR_STATS_ONLY(return Fir_stats_eval_promise(%s, %s, %s);)",
              evalCName, VAR_ENV, VAR_DATA);
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

        /// Whether this CFG (frame) directly creates any promises, so we must track them and mark
        /// them escaped when the frame exits.
        private final boolean createsPromises;

        /// Whether this CFG has any `MkEnv` or `PopEnv`, so it needs [#VAR_ENV_PUSHED],
        /// [#VAR_ENV_SAVED], and [#VAR_ENV_DEPTH].
        private final boolean hasEnvOps;

        /// The number of `MkEnv`s in this CFG, which bounds how many are active at once. (Like
        /// [#VAR_ENV_PUSHED], [#VAR_ENV_DEPTH] assumes each `PopEnv` follows its `MkEnv` in the
        /// CFG.)
        private final long numMkEnvs;

        /// Whether this CFG's deopt branches materialize its environment (see
        /// [BBEmitter#emitMaterializeEnv()]), so it needs [#VAR_ENV_CLOSURE].
        private final boolean materializesEnv;

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
          createsPromises =
              cfg.bbs().stream()
                  .flatMap(bb -> bb.statements().stream())
                  .anyMatch(s -> s.expression() instanceof Promise);
          hasEnvOps =
              cfg.bbs().stream()
                  .flatMap(bb -> bb.statements().stream())
                  .anyMatch(
                      s -> s.expression() instanceof MkEnv || s.expression() instanceof PopEnv);
          numMkEnvs =
              cfg.bbs().stream()
                  .flatMap(bb -> bb.statements().stream())
                  .filter(s -> s.expression() instanceof MkEnv)
                  .count();
          materializesEnv =
              hasEnvOps
                  && cfg.bbs().stream().anyMatch(bb -> bb.jump().expression() instanceof Deopt);
        }

        VecSXP run() {
          emitConstants();

          beginEmitInit();

          emitConstantPoolAlias();

          emitLocalDeclarations();

          emitPromiseTrackingSetup();

          emitEnvPushedDeclaration();

          for (var bb : cfg.bbs()) {
            new BBEmitter(bb, cFunction.add()).run();
          }

          endEmitInit();

          return pool.toSexp();
        }

        /// Declares and protects the per-frame list of created promises (see [#createsPromises]).
        /// The list is prepended to as promises are created and iterated to mark them escaped when
        /// the frame returns.
        private void emitPromiseTrackingSetup() {
          if (!createsPromises) {
            return;
          }

          var sec = cFunction.add();
          debugComment(sec, "# Track promises created in this frame (to mark escaped on exit)");
          sec.stmt("SEXP %s = R_NilValue;", VAR_LOCAL_PROMISES);
          sec.stmt("PROTECT_INDEX %s;", VAR_LOCAL_PROMISES_IDX);
          sec.stmt("PROTECT_WITH_INDEX(%s, &%s);", VAR_LOCAL_PROMISES, VAR_LOCAL_PROMISES_IDX);
        }

        /// Declares the bit stack of what each active `MkEnv` returned (the top is bit 0), which
        /// its `PopEnv` passes to `Fir_pop_env`, and the stack of slots where `Fir_push_env`
        /// saves what `Fir_pop_env` restores. `MkEnv`s nest within a frame after inlining.
        private void emitEnvPushedDeclaration() {
          if (hasEnvOps) {
            var sec = cFunction.add();
            sec.stmt("uint64_t %s = 0;", VAR_ENV_PUSHED);
            sec.stmt("SEXP %s[%d];", VAR_ENV_SAVED, Math.max(numMkEnvs, 1));
            sec.stmt("int %s = 0;", VAR_ENV_DEPTH);
          }
          if (materializesEnv) {
            cFunction.add().stmt("SEXP %s = %s;", VAR_ENV_CLOSURE, VAR_ENV);
          }
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

            // After the protect: it allocates.
            emitMaterializeEnv();

            for (var statement : bb.statements()) {
              emitStatement(statement);
            }

            // Jump won't trigger GC,
            // and we can't emit a cleanup after because it changes control flow.
            emitUnprotect(numLiveIn);
            emitJump(bb.jump());
          }

          /// A deopt branch stores into an elided environment, and the bytecode it continues in
          /// needs a real one, so make it real at the branch's entry. Only a CFG with a `MkEnv`
          /// can have an elided environment: a promise's has none.
          private void emitMaterializeEnv() {
            if (materializesEnv && bb.jump().expression() instanceof Deopt) {
              cCode.stmt("Fir_materialize_env(&%s, %s);", VAR_ENV, VAR_ENV_CLOSURE);
            }
          }

          private void emitStatement(Statement statement) {
            debugInstr(cCode, statement);

            if (statement.expression() instanceof Noop) {
              return;
            }

            var expr = emitExpression(statement);
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

          private @Nullable String emitExpression(Statement statement) {
            var assignee = statement.assignee();
            var args = statement.args();
            return switch (statement.expression()) {
              case Closure(var isStatic, var codeRef) -> {
                // Compile the closure or protect its constant pool

                var function = codeRef.get();

                var fromRCName = functionFromRCName(function);

                var formals = constantRef(pool, function.formals());

                String cp;
                if (session.hasFunction(function)) {
                  // Compiled in this unit or an earlier piece (then it's declared `extern`).
                  referenceFunction(function);
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
                  cp = nestedPoolRef(pool, cpSxp);

                  // Call the function's initializer with the stored constant pool
                  var initCCode = initCFunction.add();
                  debugComment(initCCode, "# Init nested %s", function.name());
                  initCCode.stmt("%s(%s);", functionInitCName(function), cp);
                }

                // Emit the runtime constructor
                var env = isStatic ? "R_GlobalEnv" : VAR_ENV;
                yield "Fir_mk_closure(%s, %s, %s, %s)".formatted(fromRCName, formals, cp, env);
              }
              case Promise promise when promise.wrappedValue() != null ->
                  "Fir_mk_value_promise(%s)"
                      .formatted(registerPlace(Objects.requireNonNull(promise.wrappedValue())));
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
                var cp = nestedPoolRef(pool, cpSxp);

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

                // Track the created promise so it's marked escaped when this frame exits.
                yield "Fir_track_promise(Fir_mk_promise(%s, %s, %s, %s, Fir_const(%s, %d)), &%s, %s)"
                    .formatted(
                        fromRCName,
                        cp,
                        captures,
                        VAR_ENV,
                        cp,
                        PROMISE_EXPR_INDEX,
                        VAR_LOCAL_PROMISES,
                        VAR_LOCAL_PROMISES_IDX);
              }
              case Assume(var assumption) -> {
                // Only a checkpoint emits the guard (see `emitJump`).
                if (!isCheckedAssumption(statement)) {
                  throw new IllegalStateException(
                      "Assumption isn't among the leading assumptions of a checkpoint's success"
                          + " block, so it's never checked: "
                          + statement
                          + " in "
                          + bb.label());
                }
                yield emitAssumptionValue(
                    assignee, assumption, args.isEmpty() ? null : args.getFirst());
              }
              case Call _ -> emitCall(statement);
              case Cast(var type) ->
                  "Fir_cast(%s, %s)".formatted(emitArgument(args.getFirst()), emitType(type));
              // A `consume` argument guarantees the vector isn't read again, so this can move it
              // instead of copying (see `org.prlprg.fir.opt.ConsumeDeadDup`).
              case Dup _ when args.getFirst() instanceof Consume -> emitArgument(args.getFirst());
              case Dup _ when matchAssignDup(statement) instanceof SetterPattern dup ->
                  emitAssignDup(statement, dup);
              case Dup _ -> "Fir_dup(%s)".formatted(emitArgument(args.getFirst()));
              case Force(var isMaybe) ->
                  (isMaybe ? "Fir_maybe_force(%s)" : "Fir_force(%s)")
                      .formatted(emitArgument(args.getFirst()));
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
                        "Fir_load_fun(%s, %s)".formatted(nvSymbolRef(pool, variable), VAR_ENV);
                    case GLOBAL_FUN ->
                        "Rf_findFun(%s, R_GlobalEnv)".formatted(nvSymbolRef(pool, variable));
                    case BASE_FUN ->
                        "Rf_findFun(%s, R_BaseEnv)".formatted(nvSymbolRef(pool, variable));
                  };
              case MkEnv(var type) -> {
                cCode.stmt(
                    "%s = (%s << 1) | Fir_push_env(&%s, %s, &%s[%s++]);",
                    VAR_ENV_PUSHED,
                    VAR_ENV_PUSHED,
                    VAR_ENV,
                    emitMkEnvType(type),
                    VAR_ENV_SAVED,
                    VAR_ENV_DEPTH);
                debugValue(cCode, "(env)", VAR_ENV, Repr.SEXP);
                yield null;
              }
              case MkVector(var kind, var elementNames) -> {
                var scalarRepr =
                    switch (kind) {
                      case Kind.PrimitiveVector(_, var primitive) -> primitive.repr();
                      case Kind.Dots _ -> Repr.SEXP;
                      default ->
                          throw new IllegalArgumentException(
                              "Vector kind must be primitive or dots: " + kind);
                    };
                var namedArrays = emitNamedArgumentArrays(scalarRepr, args, elementNames);
                var values = kind instanceof Kind.Dots ? expressionValues(args) : 0;
                if (values != 0) {
                  yield "Fir_mk_dots_values(%d, %s, %s, 0x%xULL)"
                      .formatted(
                          namedArrays.values().size(),
                          namedArrays.values().pointer(),
                          namedArrays.names(),
                          values);
                }
                yield "Fir_mk_vector(%s, %d, %s, %s)"
                    .formatted(
                        emitKind(kind),
                        namedArrays.values().size(),
                        namedArrays.values().pointer(),
                        namedArrays.names());
              }
              case Noop() -> null;
              case PopEnv() -> {
                cCode.stmt(
                    "Fir_pop_env(&%s, %s & 1, %s[--%s]);",
                    VAR_ENV, VAR_ENV_PUSHED, VAR_ENV_SAVED, VAR_ENV_DEPTH);
                cCode.stmt("%s >>= 1;", VAR_ENV_PUSHED);
                yield null;
              }
              case ReflectiveLoad(var variable) ->
                  "Fir_reflective_load(%s, %s)"
                      .formatted(emitArgument(args.getFirst()), nvSymbolRef(pool, variable));
              case ReflectiveStore(var variable) -> {
                cCode.stmt(
                    "Fir_reflective_store(%s, %s, %s);",
                    emitArgument(args.getFirst()),
                    nvSymbolRef(pool, variable),
                    emitArgument(args.get(1)));
                yield null;
              }
              case Store(var storeType, var variable) -> {
                var arg = emitArgument(args.getFirst());
                var parameter = defaultedParameter(variable, args.getFirst());
                switch (storeType) {
                  case LOCAL_VAR -> {
                    if (parameter == null) {
                      cCode.stmt(
                          "Rf_defineVar(%s, %s, %s);", nvSymbolRef(pool, variable), arg, VAR_ENV);
                    } else {
                      cCode.stmt(
                          "Fir_store_parameter(%s, %s, %s, %s);",
                          nvSymbolRef(pool, variable),
                          arg,
                          VAR_ENV,
                          emitArgument(new Read(parameter)));
                    }
                  }
                  case SUPER_VAR ->
                      cCode.stmt(
                          "Fir_super_store(%s, %s, %s);",
                          nvSymbolRef(pool, variable), arg, VAR_ENV);
                }
                yield null;
              }
              case SubscriptRead(var outOfRangeIsNa) -> {
                var vector = args.getFirst();
                var index = args.get(1);
                if (!(argumentType(vector).kind()
                    instanceof Kind.PrimitiveVector(_, var primitiveKind))) {
                  throw new IllegalArgumentException(
                      "Can't subscript non-primitive vector: " + vector);
                }
                var suffix = primitiveKindCName(primitiveKind);

                yield "Fir_subscript_read_%s%s(%s, %s)"
                    .formatted(
                        outOfRangeIsNa ? "na_" : "",
                        suffix,
                        emitArgument(vector),
                        emitArgument(index));
              }
              case SubscriptWrite _ -> {
                var vector = args.getFirst();
                var index = args.get(1);
                var value = args.get(2);
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

          private String emitCall(Statement statement) {
            var call = (Call) statement.expression();
            var closureOrCalleeArg = statement.arg(0);
            var callArgs = statement.args().subList(1, statement.args().size());
            var sourceCall = statement.source();
            var source = sourceCall == null ? "NULL" : constantRef(pool, sourceCall);
            var setter = matchSetter(statement);
            return switch (call.callee()) {
              case StaticFnCallee(var calleeFunRef, var isDispatch, var signature) -> {
                var calleeFun = calleeFunRef.get();
                var calleeModule = calleeFun.owner();
                var closureEnv =
                    closureOrCalleeArg.equals(Constant.ELIDED_CLOSURE)
                        ? "R_EmptyEnv"
                        : "CLOENV(%s)".formatted(emitArgument(closureOrCalleeArg));

                if (calleeModule == INTRINSICS && isDispatch) {
                  throw new IllegalArgumentException(
                      "Intrinsic should never be dispatched: " + call);
                } else if ((calleeModule == BUILTINS || calleeModule == INTRINSICS)
                    && !closureOrCalleeArg.equals(Constant.ELIDED_CLOSURE)) {
                  throw new IllegalArgumentException(
                      "Builtin with closure environment is unimplemented");
                } else if (calleeModule == BUILTINS
                    && calleeFun.guessWorst(signature) == calleeFun.baseline()) {
                  yield emitBuiltinCall(source, callArgs, calleeFun, statement, setter);
                } else if (calleeFun.userProperties().needsContext()) {
                  yield emitInContextCall(source, call, closureOrCalleeArg, callArgs, calleeFun);
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
                  referenceFunction(calleeFun);

                  var cName = functionDispatchCName(calleeFun);
                  var cSignature = emitSignature(signature);
                  var arguments = emitArgumentSplice(callArgs);
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

                  if (calleeFun.owner() != BUILTINS && calleeFun.owner() != INTRINSICS) {
                    // Defer declare extern for referenced (previously-compiled) version
                    referenceVersion(calleeVersion, calleeFun);
                  }
                  if (mustProtectConstants(function, calleeFun, calleeVersion)) {
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
                              calleeVersion.signature());
                          initCCode.stmt(
                              "Fir_set_const(%s, %d, %s);", VAR_POOL, poolIdx, constantsCName);
                        });
                  }

                  var arguments = emitArgumentSplice(callArgs);
                  var versionCall =
                      emitVersionCall(calleeFun, calleeVersion, closureEnv, arguments);
                  var ownedVersion =
                      setter == null || calleeModule != BUILTINS
                          ? null
                          : ownedTwin(calleeFun, calleeVersion);
                  if (ownedVersion == null) {
                    yield versionCall;
                  }
                  // Nothing else references the protocol's value, so the owned version can
                  // modify it.
                  var state = emitSetterBegin(statement, Objects.requireNonNull(setter));
                  var ownedArguments =
                      ", %s.value%s"
                          .formatted(
                              state, emitArgumentSplice(callArgs.subList(1, callArgs.size())));
                  yield "Fir_setter_end(&%s, %s.active ? %s : %s)"
                      .formatted(
                          state,
                          state,
                          emitVersionCall(calleeFun, ownedVersion, closureEnv, ownedArguments),
                          versionCall);
                }
              }
              case FallbackCallee(var signature) -> {
                var calleeVersion = function.guess(signature, version);
                if (calleeVersion == null) {
                  throw new IllegalArgumentException(
                      "In " + call + ", no other version matches signature:\n" + function);
                }

                // No need to protect the callee's constants: they're a version of this function,
                // so they're in its pool, like this version's.
                referenceVersion(calleeVersion, function);

                // A fallback has no `mkenv`, so `env` is still the closure's environment.
                var arguments = emitArgumentSplice(callArgs);
                yield emitVersionCall(function, calleeVersion, VAR_ENV, arguments);
              }
              case DynamicCallee(var argumentNames) -> {
                var arguments = emitArgumentArray("args", Repr.SEXP, callArgs);
                var names = emitOptionalNameArray("arg_names", argumentNames, arguments.size());
                var values = expressionValues(callArgs);
                if (setter != null) {
                  var state = emitSetterBegin(statement, setter);
                  yield "Fir_setter_end(&%s, Fir_call_setter(&%s, %s, %s, %s, %d, %s, %s, 0x%xULL))"
                      .formatted(
                          state,
                          state,
                          emitArgument(closureOrCalleeArg),
                          setterSourceRef(statement),
                          VAR_ENV,
                          arguments.size(),
                          arguments.pointer(),
                          names.pointer(),
                          values);
                }
                if (values != 0) {
                  yield "Fir_call_dynamic_values(%s, %s, %s, %d, %s, %s, 0x%xULL)"
                      .formatted(
                          emitArgument(closureOrCalleeArg),
                          source,
                          VAR_ENV,
                          arguments.size(),
                          arguments.pointer(),
                          names.pointer(),
                          values);
                }
                yield "Fir_call_dynamic(%s, %s, %s, %d, %s, %s)"
                    .formatted(
                        emitArgument(closureOrCalleeArg),
                        source,
                        VAR_ENV,
                        arguments.size(),
                        arguments.pointer(),
                        names.pointer());
              }
            };
          }

          /// A call of a `@needsContext` function goes through `Rf_applyClosure` (which
          /// `Fir_call_dynamic` does for such a callee), so it runs in a closure context. Its
          /// from-R entry then selects the version, so the call must be one a call from R can
          /// make.
          private String emitInContextCall(
              String source,
              Call call,
              Argument closure,
              List<Argument> callArgs,
              Function calleeFun) {
            if (!(call.callee() instanceof StaticFnCallee(var _, var isDispatch, var signature))
                || closure.equals(Constant.ELIDED_CLOSURE)
                || (!isDispatch && !isFromRSignature(signature))) {
              throw new IllegalArgumentException(
                  "A call of a function that needs a closure context must have the closure and be a dispatch or a call of a version that GNU-R can call: "
                      + call);
            }

            var arguments = emitArgumentArray("args", Repr.SEXP, callArgs);
            var names =
                emitArray(
                    "arg_names",
                    "SEXP",
                    Lists.mapLazy(calleeFun.parameterNames(), nv -> nvSymbolRef(pool, nv)));
            return "Fir_call_dynamic(%s, %s, %s, %d, %s, %s)"
                .formatted(
                    emitArgument(closure),
                    source,
                    VAR_ENV,
                    arguments.size(),
                    arguments.pointer(),
                    names.pointer());
          }

          /// The tags of a static builtin call's first `present` arguments, in parameter order:
          /// those of the source call, which GNU-R passes (an S3 method of `x[i]` sees `i`
          /// untagged), or the parameter names if the source isn't a call of the builtin.
          private List<String> builtinArgumentTags(
              Function calleeFun, Statement statement, int present) {
            var parameters = calleeFun.parameterNames().subList(0, present);
            var source = statement.source();
            ArgumentMatcher.MatchResults matches = null;
            if (source != null
                && source.funNameIs(calleeFun.name().name())
                && source.args().stream().noneMatch(a -> a.value().equals(SEXPs.DOTS_SYMBOL))) {
              try {
                matches =
                    ArgumentMatcher.matchArgumentNames(
                        Lists.mapLazy(calleeFun.parameterNames(), NamedVariable::name),
                        source.args().names());
              } catch (IllegalArgumentException _) {
                // The source doesn't match the parameters.
              }
            }
            if (matches == null) {
              return Lists.mapLazy(parameters, nv -> nvSymbolRef(pool, nv));
            }
            var tags = source.args().names();
            var arguments = matches.arguments();
            return Lists.mapLazy(
                parameters,
                nv -> {
                  var index = arguments.get(nv.name());
                  return nv == NamedVariable.DOTS
                      ? "R_DotsSymbol"
                      : index == null || tags.get(index).isEmpty()
                          ? "R_MissingArg"
                          : constantRef(pool, SEXPs.symbol(tags.get(index)));
                });
          }

          /// `source` is the C expression of the call's source (`NULL` if it has none).
          private String emitBuiltinCall(
              String source,
              List<Argument> callArgs,
              Function calleeFun,
              Statement statement,
              @Nullable SetterPattern setter) {
            var builtinIndex = builtinIndex(calleeFun);
            if (callArgs.size() != calleeFun.parameterNames().size()) {
              throw new IllegalStateException(
                  "Dispatched builtin has different number of arguments than its signature:\nFull definition = "
                      + calleeFun);
            }

            // A static call passes every parameter, so bc2fir pads the trailing parameters R code
            // left out with `<missing>` constants. Drop them: the callee then gets the arguments
            // of the R call. A missing-argument *value* (a forced promise can yield the empty
            // symbol) is passed through, as GNU-R's `CALLBUILTIN` does.
            var present = callArgs.size();
            while (present > 0
                && callArgs.get(present - 1) instanceof Constant(var c)
                && c.equals(new Value.Sexp(SEXPs.MISSING_ARG))) {
              present--;
            }
            var arguments = emitArgumentArray("args", Repr.SEXP, callArgs.subList(0, present));
            var names =
                emitArray("arg_names", "SEXP", builtinArgumentTags(calleeFun, statement, present));

            // A `@readsContext` builtin's `.Internal` must run in the base closure's frame. An
            // `.Internal` whose arity differs from the signature (`stop`, `warning`) needs its
            // base closure to build the arguments. Decide this on the untrimmed count.
            var entry = rSession.RFunTab().get(calleeFun.name().name());
            // A lite special's constant symbols and calls are expressions, its registers values.
            var values =
                calleeFun.userProperties().liteSpecial() && present <= 64
                    ? IntStream.range(0, present)
                        .filter(i -> !(callArgs.get(i) instanceof Constant))
                        .mapToLong(i -> 1L << i)
                        .sum()
                    : 0;
            var viaBase =
                builtinIndex == null
                    || calleeFun.userProperties().readsContext()
                    || (entry.isInternal()
                        && entry.arity() != -1
                        && entry.arity() != callArgs.size());
            if (setter != null && !viaBase) {
              var state = emitSetterBegin(statement, setter);
              return "Fir_setter_end(&%s, Fir_call_setter_builtin(&%s, %d, %s, %s, %d, %s, %s, 0x%xULL))"
                  .formatted(
                      state,
                      state,
                      builtinIndex,
                      setterSourceRef(statement),
                      VAR_ENV,
                      arguments.size(),
                      arguments.pointer(),
                      names.pointer(),
                      values);
            }
            if (builtinIndex != null && values != 0) {
              return "Fir_call_builtin_values(%d, %s, %s, %d, %s, %s, 0x%xULL)"
                  .formatted(
                      builtinIndex,
                      source,
                      VAR_ENV,
                      arguments.size(),
                      arguments.pointer(),
                      names.pointer(),
                      values);
            }
            return viaBase
                ? "Fir_call_base(%s, %s, %s, %d, %s, %s)"
                    .formatted(
                        baseSymbolRef(pool, calleeFun),
                        source,
                        VAR_ENV,
                        arguments.size(),
                        arguments.pointer(),
                        names.pointer())
                : "Fir_call_builtin(%d, %s, %s, %d, %s, %s)"
                    .formatted(
                        builtinIndex,
                        source,
                        VAR_ENV,
                        arguments.size(),
                        arguments.pointer(),
                        names.pointer());
          }

          /// Whether `statement` is `r = f(l', ...) in <f(*tmp*, ...)>`, a call that GNU-R's
          /// bytecode runs in its assignment protocol (see `Fir_Setter` in `runtime.h`). `l'` is a
          /// register or an assumption, cast or force of one, `l`. If `l = ld x`, `st x = r` (or of
          /// an assumption or cast of `r`) must follow the call, after a checkpoint or goto at
          /// most. Otherwise FIŘ keeps `x` in registers.
          private @Nullable SetterPattern matchSetter(Statement statement) {
            var source = statement.source();
            var result = statement.assignee();
            if (cfg != root
                || source == null
                || result == null
                || source.args().isEmpty()
                || !source.arg(0).equals(SEXPs.ASSIGN_TMP)
                || statement.args().size() < 2
                || !(statement.arg(1) instanceof Read(var arg))
                || result.uses().stream()
                    .anyMatch(
                        use -> use.instruction().args().get(use.index()) instanceof Consume)) {
              return null;
            }
            var pattern = assignedValue(arg);
            return pattern == null
                    || pattern.variable() == null
                    || storesNext(statement, result, pattern.variable())
                ? pattern
                : null;
          }

          /// The `l` and chain of an `l'` (see `#matchSetter`), or `null` if `l` is a load the
          /// protocol doesn't handle (`<<-`, `...`).
          private static @Nullable SetterPattern assignedValue(Register arg) {
            var chain = new LinkedHashSet<Register>();
            var lhs = arg;
            chain.add(lhs);
            while (lhs instanceof AssigneeOf ao
                && (ao.statement().expression() instanceof Assume
                    || ao.statement().expression() instanceof Cast
                    || ao.statement().expression() instanceof Force)
                && !ao.statement().args().isEmpty()
                && ao.statement().arg(0) instanceof Read(var from)) {
              lhs = from;
              chain.add(lhs);
            }
            if (!(lhs instanceof AssigneeOf ao
                && ao.statement().expression() instanceof Load load)) {
              return new SetterPattern(null, arg, Collections.unmodifiableSet(chain));
            }
            return load.type() == LoadType.LOCAL_VAR
                    && !load.variable().equals(NamedVariable.DOTS)
                    && !load.variable().isDdNum()
                ? new SetterPattern(load.variable(), lhs, Collections.unmodifiableSet(chain))
                : null;
          }

          /// Whether `statement` is `d = dup l'` of a value GNU-R's assignment protocol wouldn't
          /// copy (see `Fir_assign_dup` in `runtime.h`). `l'` is as in `#matchSetter`. If `l = ld
          /// x`, `st x = d` must follow in the same block, and the statements between must
          /// neither run R code, nor read `x`, nor use a register of the chain from `l'` to `l`.
          private @Nullable SetterPattern matchAssignDup(Statement statement) {
            if (cfg != root
                || statement.assignee() == null
                || !(statement.arg(0) instanceof Read(var arg))) {
              return null;
            }
            var pattern = assignedValue(arg);
            if (pattern == null || pattern.variable() == null) {
              return pattern;
            }
            var statements = bb.statements();
            for (var stmt :
                statements.subList(statements.indexOf(statement) + 1, statements.size())) {
              if (stmt.expression() instanceof Store(var storeType, var stored)
                  && storeType == Store.StoreType.LOCAL_VAR
                  && stored.equals(pattern.variable())) {
                return stmt.arg(0) instanceof Read(var storedValue)
                        && storedValue == statement.assignee()
                    ? pattern
                    : null;
              }
              var pure =
                  switch (stmt.expression()) {
                    case Assume _, Cast _, SubscriptRead _, SubscriptWrite _ -> true;
                    case Load(var loadType, var loaded) ->
                        loadType == LoadType.LOCAL_VAR && !loaded.equals(pattern.variable());
                    case Call(StaticFnCallee(var _, var _, var signature)) ->
                        signature.effects() == Effects.NONE;
                    default -> false;
                  };
              if (!pure
                  || stmt.args().stream()
                      .map(Argument::variable)
                      .anyMatch(pattern.chain()::contains)) {
                return null;
              }
            }
            return null;
          }

          private String emitAssignDup(Statement statement, SetterPattern dup) {
            var linked = emitLinkedArray(linkedRegisters(statement));
            var value = emitArgument(statement.arg(0));
            return dup.variable() == null
                ? "Fir_value_dup(%s, %d, %s)".formatted(value, linked.size(), linked.pointer())
                : "Fir_assign_dup(%s, %s, %s, %s, %d, %s)"
                    .formatted(
                        nvSymbolRef(pool, dup.variable()),
                        VAR_ENV,
                        registerPlace(dup.lhs()),
                        value,
                        linked.size(),
                        linked.pointer());
          }

          /// The registers GNU-R would have on its stack after `statement`: the ones live after
          /// it, the ones the promises live after it capture, and the version's parameters (a
          /// caller may hold an argument in a register, which nothing counts).
          private LinkedHashSet<Register> linkedRegisters(Statement statement) {
            var linked = new LinkedHashSet<>(liveness.liveAfter(statement));
            linked.remove(statement.assignee());
            for (var register : List.copyOf(linked)) {
              if (register instanceof AssigneeOf ao
                  && ao.statement().expression() instanceof Promise p) {
                linked.addAll(Objects.requireNonNull(captures.get(p.code())));
              }
            }
            linked.addAll(version.parameters());
            return linked;
          }

          private Array emitLinkedArray(Set<Register> linked) {
            return emitArray(
                "linked",
                "SEXP",
                linked.stream()
                    .filter(
                        r ->
                            registerRepr(r) == Repr.SEXP
                                && (locals.contains(r) || version.isParameter(r)))
                    .map(CfgEmitter.this::registerPlace)
                    .toList());
          }

          /// Whether `st variable = r`, where `r` is `result` or an assumption or cast of it,
          /// follows `statement`, after a checkpoint or goto at most.
          private boolean storesNext(Statement statement, Register result, NamedVariable variable) {
            var next = new ArrayList<>(bb.statements());
            next.subList(0, next.indexOf(statement) + 1).clear();
            var nextBb =
                switch (bb.jump().expression()) {
                  case Checkpoint(var success, var _, var _) -> success.get();
                  case Goto(var target) -> target.get();
                  default -> null;
                };
            if (nextBb != null) {
              next.addAll(nextBb.statements());
            }
            Register value = result;
            for (var stmt : next) {
              if ((stmt.expression() instanceof Assume || stmt.expression() instanceof Cast)
                  && !stmt.args().isEmpty()
                  && stmt.arg(0) instanceof Read(var from)
                  && from == value
                  && stmt.assignee() != null) {
                value = stmt.assignee();
                continue;
              }
              return stmt.expression() instanceof Store(var storeType, var stored)
                  && storeType == Store.StoreType.LOCAL_VAR
                  && stored.equals(variable)
                  && stmt.arg(0) instanceof Read(var storedValue)
                  && storedValue == value;
            }
            return false;
          }

          /// Emit the `Fir_setter_begin` for the call `statement` that matches `setter`, and return
          /// the name of its `Fir_Setter`.
          ///
          /// The linked registers are `#linkedRegisters` and the call's other arguments. Except a
          /// register of `l'` that only deopt branches use after the call: the bytecode they
          /// continue in has the value the call modified.
          private String emitSetterBegin(Statement statement, SetterPattern setter) {
            var linked = linkedRegisters(statement);
            linked.removeIf(
                register ->
                    setter.chain().contains(register)
                        && register.uses().stream()
                            .allMatch(use -> isChainOrDeoptUse(use, statement, setter)));
            statement.args().stream()
                .skip(2)
                .map(Argument::variable)
                .filter(Objects::nonNull)
                .forEach(linked::add);
            var linkedArray = emitLinkedArray(linked);

            var disambiguator = tempArrayDisambiguators.getOrDefault("setter", 0);
            tempArrayDisambiguators.put("setter", disambiguator + 1);
            var state = "t_setter_%d".formatted(disambiguator);
            cCode.stmt("Fir_Setter %s;", state);
            if (setter.variable() == null) {
              cCode.stmt(
                  "Fir_setter_begin_value(&%s, %s, %d, %s);",
                  state, registerPlace(setter.lhs()), linkedArray.size(), linkedArray.pointer());
            } else {
              cCode.stmt(
                  "Fir_setter_begin(&%s, %s, %s, %s, %d, %s);",
                  state,
                  nvSymbolRef(pool, setter.variable()),
                  VAR_ENV,
                  registerPlace(setter.lhs()),
                  linkedArray.size(),
                  linkedArray.pointer());
            }
            return state;
          }

          /// Whether `use` is the setter call `statement`, the definition of a register of its
          /// first argument's chain, or in a deopt branch.
          private static boolean isChainOrDeoptUse(
              Use use, Statement statement, SetterPattern setter) {
            var instruction = use.instruction();
            var useBb = instruction.parentBB();
            return instruction == statement
                || (instruction instanceof Statement s
                    && s.assignee() != null
                    && setter.chain().contains(s.assignee()))
                || (useBb != null && useBb.jump().expression() instanceof Deopt);
          }

          /// The source of a setter call, in a pool slot of its own: the protocol marks it as an
          /// assignment call, which must not affect a call outside the protocol.
          private String setterSourceRef(Statement statement) {
            return "Fir_const(%s, %d)"
                .formatted(VAR_POOL, pool.internUnique(Objects.requireNonNull(statement.source())));
          }

          private void emitJump(Jump jump) {
            debugInstr(cCode, jump);

            switch (jump.expression()) {
              case Return _ -> {
                var returnValue = emitArgument(jump.arg(0));
                // The frame is exiting: mark all promises it created as escaped, and release the
                // tracking list (its `PROTECT_WITH_INDEX` from `emitPromiseTrackingSetup`).
                if (createsPromises) {
                  cCode.stmt("Fir_mark_promises_escaped(%s);", VAR_LOCAL_PROMISES);
                  cCode.stmt("UNPROTECT(1);");
                }
                cCode.stmt("return %s;", returnValue);
              }
              case Goto _ -> emitJumpTo(1, jump.targets().getFirst());
              case Raise _ -> {
                cCode.stmt("Rf_error(\"%%s\", %s);", emitArgument(jump.arg(0)));
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
              case Unreachable _ -> {
                cCode.stmt("Rf_error(\"FIŘ unreachable reached\");");
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
              case If _ -> {
                var targets = jump.targets();
                cCode.stmt("if (%s) {", emitArgument(jump.arg(0)));
                emitJumpTo(2, targets.getFirst());
                cCode.stmt("} else {");
                emitJumpTo(2, targets.get(1));
                cCode.stmt("}");
              }
              case Checkpoint _ -> {
                var targets = jump.targets();
                var success = targets.getFirst();
                var deopt = targets.get(1);
                for (var statement : success.bb().statements()) {
                  if (!(statement.expression() instanceof Assume(var assumption))) {
                    break;
                  }

                  var target = statement.args().isEmpty() ? null : statement.arg(0);
                  var condition = emitAssumptionCondition(statement, assumption, target);
                  cCode.stmt("if (!(%s)) {", condition);
                  emitJumpTo(2, deopt);
                  cCode.stmt("}");
                }
                emitJumpTo(1, success);
              }
              case Deopt(var pc) -> {
                var stackArgs = emitArgumentArray("deopt_stack", Repr.SEXP, jump.args());
                cCode.stmt(
                    "Fir_deopt(%d, %d, %s, %s);",
                    pc, stackArgs.size(), stackArgs.pointer(), VAR_ENV);
                cCode.stmt("return %s;", reprDefaultValue(returnType.kind().repr()));
              }
            }
          }

          private String emitAssumptionCondition(
              Statement statement, Assumption assumption, @Nullable Argument target) {
            assert statement.expression() instanceof Assume(var a) && a == assumption;
            var assignee = statement.assignee();

            debugComment(cCode, "? %s", statement.expression());
            debugArgs(cCode, target == null ? List.of() : List.of(target));

            var refAssigneePlace =
                assignee == null ? "NULL" : "&%s".formatted(registerPlace(assignee));

            return switch (assumption) {
              case AssumeConstant(var constant) ->
                  "%s == %s"
                      .formatted(
                          emitArgument(Objects.requireNonNull(target)),
                          constantRef(pool, constant));
              case AssumeFunction a when a.function().owner() == BUILTINS -> {
                var builtinIndex = builtinIndex(a.function());
                yield builtinIndex == null
                    ? "Fir_assume_base_function(%s, %s)"
                        .formatted(
                            emitArgument(Objects.requireNonNull(target)),
                            baseSymbolRef(pool, a.function()))
                    : "Fir_assume_builtin_function(%s, %d)"
                        .formatted(emitArgument(Objects.requireNonNull(target)), builtinIndex);
              }
              case AssumeFunction a when a.function().owner() == INTRINSICS ->
                  throw new IllegalArgumentException(
                      "We should never need to assume an intrinsic: " + a.function());
              case AssumeFunction a -> {
                // Defer declare extern for referenced (previously-compiled) version
                // (without duplicates, builtins, or intrinsics).
                referenceFunction(a.function());

                yield "Fir_assume_function(%s, &%s)"
                    .formatted(
                        emitArgument(Objects.requireNonNull(target)),
                        functionDispatchCName(a.function()));
              }
              case AssumeLoadFun a when a.function().owner() == BUILTINS -> {
                var builtinIndex = builtinIndex(a.function());
                yield builtinIndex == null
                    ? "Fir_assume_load_base_fun(%s, %s, %s, %s)"
                        .formatted(
                            nvSymbolRef(pool, a.variable()),
                            VAR_ENV,
                            baseSymbolRef(pool, a.function()),
                            refAssigneePlace)
                    : "Fir_assume_load_builtin_fun(%s, %s, %d, %s)"
                        .formatted(
                            nvSymbolRef(pool, a.variable()),
                            VAR_ENV,
                            builtinIndex,
                            refAssigneePlace);
              }
              case AssumeLoadFun a when a.function().owner() == INTRINSICS ->
                  throw new IllegalArgumentException(
                      "We should never need to assume an intrinsic: " + a.function());
              case AssumeLoadFun a -> {
                // Defer declare extern for referenced (previously-compiled) version
                // (without duplicates, builtins, or intrinsics).
                referenceFunction(a.function());

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
              case AssumeType(var type) ->
                  "Fir_assume_type(%s, %s)"
                      .formatted(emitArgument(Objects.requireNonNull(target)), emitType(type));
            };
          }

          /// Whether every predecessor of `statement`'s block checks it: the block is the success
          /// target of each one's checkpoint, and only assumptions precede `statement`.
          private boolean isCheckedAssumption(Statement statement) {
            return !bb.predecessors().isEmpty()
                && bb.predecessors().stream()
                    .allMatch(
                        pred ->
                            pred.jump().expression() instanceof Checkpoint
                                && pred.jump().targets().getFirst().bb() == bb)
                && bb.statements().subList(0, statement.indexInBB()).stream()
                    .allMatch(s -> s.expression() instanceof Assume);
          }

          private @Nullable String emitAssumptionValue(
              @Nullable Register assignee, Assumption assumption, @Nullable Argument target) {
            return switch (assumption) {
              case AssumeType _, AssumeFunction _ -> emitArgument(Objects.requireNonNull(target));
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
              Repr repr, List<Argument> values, List<OptionalNamedVariable> elementNames) {
            var names = new ArrayList<OptionalNamedVariable>(elementNames.size());
            var hasNames = false;
            for (var name : elementNames) {
              names.add(name);
              if (name.isPresent()) {
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
              debugArgs(cCode, instr.args());
            }
          }

          /// [Function#defaultedParameter] at the closure's entry, if the C code keeps it a SEXP.
          private @Nullable Register defaultedParameter(NamedVariable variable, Argument value) {
            var parameter =
                cfg == root ? function.defaultedParameter(version, cfg, variable, value) : null;
            return parameter != null && registerRepr(parameter) == Repr.SEXP ? parameter : null;
          }

          /// Bit `i` is set if `args[i]` is a register whose value may be a symbol or a call,
          /// which a special would evaluate again (see `Fir_call_builtin_values` in `runtime.h`).
          /// Constants are the expressions a special evaluates.
          private long expressionValues(List<Argument> args) {
            return IntStream.range(0, Math.min(args.size(), 64))
                .filter(
                    i ->
                        !(args.get(i) instanceof Constant)
                            && argumentType(args.get(i)).kind() instanceof AnySexp
                            && !argumentType(args.get(i)).isPromise())
                .mapToLong(i -> 1L << i)
                .sum();
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
          case Constant(var value) -> value.type();
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

  private static String emitMkEnvType(MkEnvType type) {
    return "FIR_MKENV_" + type.name();
  }

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
  /// What every C name of this module's code starts with.
  private String cNamePrefix() {
    return "Fir_" + session.prefix();
  }

  private String functionConstantsCName(Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no constants";

    return cNamePrefix() + "fun_constants_" + escapeForC(function.name().name());
  }

  private String functionInitCName(Function function) {
    return functionInitCName(session, function);
  }

  /// The C name of the initializer of `function`'s constants in `session`'s code: `(SEXP
  /// constants) -> SEXP`, called once with the constant pool of the piece that defines it.
  public static String functionInitCName(Fir2CSession session, Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no initializer";

    return "Fir_" + session.prefix() + "fun_init_" + escapeForC(function.name().name());
  }

  private String functionFromRCName(Function function) {
    return functionFromRCName(session, function);
  }

  /// The C name of what `function`'s closures' bodies call in `session`'s code: `(SEXP env, SEXP
  /// constants) -> SEXP`.
  public static String functionFromRCName(Fir2CSession session, Function function) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no from-R dispatch";

    return "Fir_" + session.prefix() + "fun_from_r_" + escapeForC(function.name().name());
  }

  private String functionDispatchCName(Function function) {
    assert function.owner() != BUILTINS : "builtin dispatch is specially handled";

    return cNamePrefix() + "fun_dispatch_" + escapeForC(function.name().name());
  }

  /// Generation `entries` of the function's from-R implementation (see
  /// [FunctionEmitter#emitEntries(int, ConstantPool, String)]).
  private String fromRImplCName(Function function, int entries) {
    return functionFromRCName(function) + "_" + entries;
  }

  /// Generation `entries` of the function's dispatch implementation.
  private String dispatchImplCName(Function function, int entries) {
    return functionDispatchCName(function) + "_" + entries;
  }

  /// The constant pool of generation `entries` of the function's entries, when a patch
  /// regenerates them (the function's own pool is already full).
  private String entriesConstantsCName(Function function, int entries) {
    return cNamePrefix()
        + "fun_entries_constants_"
        + escapeForC(function.name().name())
        + "_"
        + entries;
  }

  /// The constants of the client's current implementation of `version` (each has its own).
  private String versionConstantsCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no constants";
    return cNamePrefix()
        + "ver_constants_"
        + escapeForC(function.name().name())
        + "_"
        + versionImplCNamePart(function, version);
  }

  /// The initializer of the client's current implementation of `version`.
  private String versionInitCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no initializer";

    return cNamePrefix()
        + "ver_init_"
        + escapeForC(function.name().name())
        + "_"
        + versionImplCNamePart(function, version);
  }

  /// The client's current implementation of `version`: the function its entry
  /// ([#versionCallCName(Function, Abstraction)]) is assigned.
  private String versionImplCName(Function function, Abstraction version) {
    assert function.owner() != BUILTINS && function.owner() != INTRINSICS
        : "builtins and intrinsics have no implementations of their own";
    return cNamePrefix()
        + "ver_impl_"
        + escapeForC(function.name().name())
        + "_"
        + versionImplCNamePart(function, version);
  }

  /// Implementation `index` of a version of `function` whose entry's part was `part` when it was
  /// defined (a stub is implementation 0, with its version's first entry).
  private String versionImplCName(Function function, String part, int index) {
    return cNamePrefix()
        + "ver_impl_"
        + escapeForC(function.name().name())
        + "_"
        + part
        + "_"
        + index;
  }

  /// The version's part of its current implementation's C names: its current entry's part and
  /// the implementation's index.
  private String versionImplCNamePart(Function function, Abstraction version) {
    var state = session.version(version);
    var index = state == null ? 0 : state.implementation();
    return versionCNamePart(function, version) + "_" + index;
  }

  /// What calls of `version` call: for a builtin or intrinsic, a function the runtime provides;
  /// otherwise the version's current *entry*, a function pointer that the client's current
  /// implementation of the version is assigned to (so a patch can replace the implementation).
  private String versionCallCName(Function function, Abstraction version) {
    if (function.owner() == BUILTINS || function.owner() == INTRINSICS) {
      // Provided by the runtime, so never prefixed.
      return "Fir_ver_call_"
          + escapeForC(function.name().name())
          + "_"
          + signatureCName(version.signature());
    }
    return versionEntryCName(function, versionCNamePart(function, version));
  }

  /// The entry of a version of `function` whose part is `part` (see
  /// [Fir2CSession.Entry#part()]).
  private String versionEntryCName(Function function, String part) {
    return cNamePrefix() + "ver_call_" + escapeForC(function.name().name()) + "_" + part;
  }

  /// The `Fir_Stub` of `stub`, which is a stub of a version of `function`.
  private String versionStubCName(Function function, Fir2CSession.VersionState stub) {
    Objects.requireNonNull(stub.stubId(), "not a stub");
    return cNamePrefix()
        + "ver_stub_"
        + escapeForC(function.name().name())
        + "_"
        + stub.entries().getFirst().part();
  }

  /// In a statistics build (`FIR_VERSION_STATS_ONLY`), count the call in `version`'s counter, or
  /// in its fallback's if `fallback`.
  private void emitCallCounter(CFunction cFunction, Abstraction version, boolean fallback) {
    var name = versionCounterName(session, version) + (fallback ? FALLBACK_COUNTER_SUFFIX : "");
    cFunction
        .add()
        .stmt(
            "FIR_VERSION_STATS_ONLY(static double *fir_calls = NULL; if (fir_calls == NULL)"
                + " fir_calls = Fir_stats_version_counter(\"%s\"); (*fir_calls)++;)",
            sanitizeString(name));
  }

  /// What a statistics build names the call counter of `version`, which `session`'s client has
  /// (see `Fir_stats_version_counter` in `runtime.h`): the same for all its implementations.
  public static String versionCounterName(Fir2CSession session, Abstraction version) {
    var state = Objects.requireNonNull(session.version(version), "client doesn't have version");
    return session.prefix()
        + session.functionOf(version).name().name()
        + "/"
        + state.entries().getFirst().part();
  }

  /// Appended to [#versionCounterName(Fir2CSession, Abstraction)] for the counter of a stub's
  /// fallback.
  public static final String FALLBACK_COUNTER_SUFFIX = "/fallback";

  private String patchInitCName(int index) {
    return cNamePrefix() + "patch_init_" + index;
  }

  /// The version's part of its C names: assigned by the session when the version is first
  /// referred to, so that it doesn't change with the version's signature (which it's made from)
  /// once the client has it.
  private String versionCNamePart(Function function, Abstraction version) {
    return session.part(function, version, () -> defaultCNamePart(function, version));
  }

  private String defaultCNamePart(Function function, Abstraction version) {
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
    return cNamePrefix() + "prom_constants_" + promiseIndex(promise);
  }

  private String promiseInitCName(Promise promise) {
    return cNamePrefix() + "prom_init_" + promiseIndex(promise);
  }

  private String promiseFromRCName(Promise promise) {
    return cNamePrefix() + "prom_from_r_" + promiseIndex(promise);
  }

  private String promiseEvalCName(Promise promise) {
    return cNamePrefix() + "prom_eval_" + promiseIndex(promise);
  }

  private final HashMap<Promise, Integer> promiseIndices = new HashMap<>();

  private int promiseIndex(Promise promise) {
    return promiseIndices.computeIfAbsent(promise, _ -> session.nextPromise());
  }

  // endregion C names

  // region params and return type
  private static final String CONSTANTS_C_TYPE = "SEXP";
  private static final String STUB_C_TYPE = "Fir_Stub";

  private static final List<String> INIT_C_PARAMS = List.of("SEXP %s".formatted(VAR_POOL));

  private static final String INIT_C_RETURN = "SEXP";

  private static final List<String> FROM_R_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "SEXP %s".formatted(VAR_DATA));

  private static final String FROM_R_C_RETURN = "SEXP";

  private static final List<String> DISPATCH_IMPL_C_PARAMS =
      List.of(
          "SEXP %s".formatted(VAR_ENV),
          "Fir_Signature %s".formatted(VAR_SIGNATURE),
          "va_list args");

  private static final List<String> DISPATCH_C_PARAMS =
      List.of("SEXP %s".formatted(VAR_ENV), "Fir_Signature %s".formatted(VAR_SIGNATURE), "...");

  private static final String DISPATCH_C_RETURN = "SEXP";

  private static List<String> versionCallCParams(Abstraction version) {
    return Stream.concat(
            Stream.of("SEXP %s".formatted(VAR_ENV)),
            version.parameters().stream()
                .map(p -> "%s %s".formatted(reprCType(p.type().kind().repr()), registerCName(p))))
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

  /// What the client's code for `version` returns (`Fir_ver_call_...`): the version's return
  /// type's representation when it was compiled, if it was (see
  /// [Fir2CSession.VersionState#returnRepr()]), else now.
  private String versionCallCReturn(Abstraction version) {
    var state = session.version(version);
    return reprCType(state != null ? state.returnRepr() : version.returnType().kind().repr());
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

  /// `builtin`'s index in GNU-R's `R_FunTab`, or `null` if it has no entry there.
  ///
  /// Not every function in `builtins.fir` is a primitive: `bitwShiftL` and its siblings wrap an
  /// `.Internal` whose `R_FunTab` name differs from theirs (`bitwiseShiftL`), and `print`,
  /// `stopifnot` and `xor` are plain R. Those are base closures with no builtin index, so the
  /// generated code refers to them by symbol ([#baseSymbolRef(ConstantPool, Function)]) and
  /// resolves the base binding at runtime instead.
  /// Whether a version with `signature` can be called from R (by the from-R entry): it takes and
  /// returns shared `SEXP`s.
  private static boolean isFromRSignature(Signature signature) {
    return signature.parameterTypes().stream()
            .allMatch(t -> t.kind().repr() == Repr.SEXP && t.ownership() == Ownership.SHARED)
        && signature.returnType().kind().repr() == Repr.SEXP;
  }

  private @Nullable Integer builtinIndex(Function builtin) {
    var entry = rSession.RFunTab().get(builtin.name().name());
    return entry == null ? null : entry.index();
  }

  // region constants
  /// The symbol naming `builtin`, for the `Fir_*_base*` runtime functions.
  private static String baseSymbolRef(ConstantPool pool, Function builtin) {
    return constantRef(pool, SEXPs.symbol(builtin.name().name()));
  }

  private static String nvSymbolRef(ConstantPool pool, NamedVariable nv) {
    return nv == NamedVariable.DOTS ? "R_DotsSymbol" : constantRef(pool, SEXPs.symbol(nv.name()));
  }

  private static String constantRef(ConstantPool pool, Value constant) {
    return switch (constant) {
      case Value.Sexp(var sexp) -> constantRef(pool, sexp);
      case Value.Int(var i) -> i == Constants.NA_INT ? "NA_INTEGER" : Integer.toString(i);
      case Value.Real(var d) -> realRef(d);
      case Value.Str(var s) when Constants.isNaString(s) -> "NULL";
      case Value.Str(var s) -> Printer.use(p -> p.writer().writeQuoted('"', s));
      case Value.Lgl(var l) ->
          switch (l) {
            case TRUE -> "(Rboolean)true";
            case FALSE -> "(Rboolean)false";
            case NA -> "(Rboolean)NA_LOGICAL";
          };
      case Value.Bool(var b) -> Boolean.toString(b);
    };
  }

  /// A C expression with the exact bits of `d`.
  private static String realRef(double d) {
    var bits = Double.doubleToRawLongBits(d);
    if (bits == Double.doubleToRawLongBits(Constants.NA_REAL)) {
      return "NA_REAL";
    } else if (Double.isNaN(d)) {
      return bits == 0x7FF8000000000000L
          ? "R_NaN"
          : "((union { unsigned long long u; double d; }){.u = 0x%sULL}).d"
              .formatted(Long.toHexString(bits));
    } else if (Double.isInfinite(d)) {
      return d > 0 ? "R_PosInf" : "R_NegInf";
    }
    return Double.toString(d);
  }

  private static String constantRef(ConstantPool pool, SEXP sexp) {
    return "Fir_const(%s, %d)".formatted(VAR_POOL, pool.intern(sexp));
  }

  /// Like [#constantRef(ConstantPool, SEXP)] but in an always-unique slot; required for nested
  /// constant pools, which are mutated at runtime (see [ConstantPool#internUnique(SEXP)]).
  private static String nestedPoolRef(ConstantPool pool, SEXP sexp) {
    return "Fir_const(%s, %d)".formatted(VAR_POOL, pool.internUnique(sexp));
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

  /// A setter call (see `BBEmitter#matchSetter`): its variable `x` and the register `l` of its
  /// `l = ld x`, or `null` and its first argument if FIŘ keeps `x` in registers; and the registers
  /// from its first argument to `l`.
  private record SetterPattern(
      @Nullable NamedVariable variable, Register lhs, @Unmodifiable Set<Register> chain) {}

  /// The version of `function` that is `version` except that it owns its first argument (which
  /// `version` borrows), or `null` if there's none.
  private static @Nullable Abstraction ownedTwin(Function function, Abstraction version) {
    var parameterTypes = version.signature().parameterTypes();
    if (parameterTypes.isEmpty() || parameterTypes.getFirst().ownership() != Ownership.BORROWED) {
      return null;
    }
    var ownedTypes = new ArrayList<>(parameterTypes);
    ownedTypes.set(0, parameterTypes.getFirst().withOwnership(Ownership.OWNED));
    return function.versions().stream()
        .filter(v -> v.signature().parameterTypes().equals(ownedTypes))
        .findFirst()
        .orElse(null);
  }

  private record ArrayAndNames(Array values, String names) {}
  // endregion misc
}
