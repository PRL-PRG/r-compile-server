package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.ImmutableBoolArray;
import org.prlprg.util.Streams;

/// Inlines every promise before each non-dynamic call that can.
///
/// Specifically, inlines every promise that is:
/// - Non-effectful
/// - Free of `deopt` branches, whose positions only mean something inside the promise's own code
///   object
/// - Singly-used
/// - Time-invariant ([#isTimeInvariant]), or passed to a strict parameter that the callee forces
///   before it can disturb what the promise reads ([#forcesFirst])
/// - If it can warn or raise an error, forced by the callee before anything else that can, and
///   not after something in the caller that can ([#isQuiet]): a warning or an error stays in order
///
/// Skips a callee that is `@needsContext` or `@needsPromises`: a version that takes a value wraps
/// it in a promise without the caller's expression, so e.g. `substitute` or `missing` there sees
/// the value.
///
/// Furthermore, only inlines if there's a compatible version with the new signature, or one can
/// be created from the old version (in which case creates it)
///
/// Before that, passes the caller's own promise parameter in place of a promise that would only
/// force it ([#forwardedParameter]).
public final class StrictifyPromise extends AbstractionOptimization {
  private record Inlineable(
      int argIndex, Register argReg, BB defBb, int defStmtIndex, CFG promiseCode, Type valueType) {}

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction scope) {
    if (scope.isStub()) {
      return false;
    }

    var changed = false;

    // Iterate in reverse so inlines don't affect iteration.
    for (var bb : bbReverseDfsNoDeopts(scope.body())) {
      for (int callIdx = bb.statements().size() - 1; callIdx >= 0; callIdx--) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call(StaticFnCallee callee))
            || callee.function().userProperties().needsContext()
            || callee.function().userProperties().needsPromises()
            || callee.function().userProperties().readsPromise()) {
          continue;
        }
        var calleeSig = callee.signature();

        // Pass our own parameter in place of a promise that would only force it. The promise is
        // then unused, and `Cleanup` removes it.
        for (int j = 0; j < Math.min(stmt.argCount() - 1, calleeSig.parameterTypes().size()); j++) {
          var forwarded =
              forwardedParameter(stmt.arg(j + 1), scope, calleeSig.parameterTypes().get(j));
          // The promise's expression and environment are observable there, and differ.
          if (forwarded != null
              && !isReflectedOn(callee.exactVersion(), j)
              && !exposesFrame(callee)) {
            stmt.setArg(j + 1, new Read(forwarded));
            changed = true;
          }
        }

        // Call arguments follow the callee's own argument (index 0).
        var callArguments = stmt.args().subList(1, stmt.argCount());

        var calleeFun = callee.function();
        var calleeIsDispatch = callee.isDispatch();
        var parameterStrictnesses = calleeSig.parameterStrictnesses();

        // Find inlinable promise arguments
        var inlineables = new ArrayList<Inlineable>();

        for (int j = 0; j < callArguments.size(); j++) {
          if (!(callArguments.get(j) instanceof Read(var reg))) {
            continue;
          }

          // The promise must be defined by a statement in this CFG.
          if (!(reg instanceof AssigneeOf assignee)) {
            continue;
          }
          var promiseDefStmt = assignee.statement();
          var defBb = promiseDefStmt.parentBB();
          if (defBb == null || defBb.owner() != scope.body()) {
            continue;
          }

          // Must be a non-effectful Promise
          if (!(promiseDefStmt.expression()
                  instanceof Promise(var valueType, var effects, var code, _, _))
              || effects.impure()) {
            continue;
          }

          // A `deopt`'s position is relative to the promise's own bytecode object, so its block
          // can't be moved into the enclosing version (`Inline` refuses for the same reason).
          if (hasDeopt(code)) {
            continue;
          }

          // The promise's value must not depend on when it's computed, or the callee must force
          // it -- so the work isn't wasted -- before it can change what the body reads. A body
          // that can warn or raise an error runs only if the callee forces it before it returns.
          if (j >= parameterStrictnesses.length()) {
            continue;
          }
          var isStrict = parameterStrictnesses.get(j);
          var signals = new InferEffects(scope).maySignal(code);
          var calleeIsQuiet = quietIn(callee.exactVersion(), signals);
          if (!((isTimeInvariant(code)
                      && (!signals || forcesFirst(callee.exactVersion(), j, calleeIsQuiet)))
                  || (isStrict
                      && forcesFirst(
                          callee.exactVersion(),
                          j,
                          i ->
                              (!(i instanceof Statement s) || cannotDisturb(s.expression()))
                                  && calleeIsQuiet.test(i))))
              || (signals && !isQuietBetween(promiseDefStmt, stmt, new InferEffects(scope)))) {
            continue;
          }

          // A reflected-on parameter must stay the promise it was: the version that takes it by
          // value rewraps it, and the wrapper's environment isn't the original's.
          if (isReflectedOn(callee.exactVersion(), j)) {
            continue;
          }

          // Only inline singly-used promises to avoid code duplication
          if (reg.uses().size() != 1) {
            continue;
          }

          inlineables.add(
              new Inlineable(j, reg, defBb, promiseDefStmt.indexInBB(), code, valueType));
        }

        if (inlineables.isEmpty()) {
          continue;
        }

        // The inlined return values take the promises' value types.
        for (var il : inlineables) {
          il.argReg().setType(il.valueType());
        }

        // Compute new callee
        var newArgTypes =
            callArguments.stream()
                .map(
                    arg -> {
                      var t = scope.typeOf(arg);
                      return t != null ? t : Type.ANY_VALUE_SEXP;
                    })
                .collect(ImmutableList.toImmutableList());
        var newStrictnesses =
            Streams.zip(
                    newArgTypes.stream(),
                    parameterStrictnesses.stream(),
                    (type, strict) -> strict && !type.isValue())
                .collect(ImmutableBoolArray.toImmutableBoolArray());
        var newSig =
            new Signature(
                newArgTypes, newStrictnesses, calleeSig.returnType(), calleeSig.effects());

        // Check if there's a compatible version
        if (!calleeIsDispatch && calleeFun.guess(newSig) == null) {
          // Check if we can create one
          var oldVersion = callee.exactVersion();
          if (oldVersion == null || oldVersion.isStub()) {
            // Nope, so we can't inline
            continue;
          }

          // Create a compatible version:
          // takes value parameters, rewraps them in promises, then runs the old version

          var oldParams = oldVersion.parameters();
          var newParams = new ArrayList<>(FunctionParameter.copyAll(oldParams));
          for (var inlineable : inlineables) {
            var oldParam = oldParams.get(inlineable.argIndex);
            newParams.set(
                inlineable.argIndex,
                new FunctionParameter(oldParam.name(), inlineable.valueType, false));
          }

          var valueTypes =
              inlineables.stream()
                  .collect(Collectors.toMap(Inlineable::argIndex, Inlineable::valueType));
          LazyCopy.create(
              topLevel,
              this,
              feedback.module(),
              calleeFun,
              oldVersion,
              newParams,
              new LazyCopy.Adapter() {
                /// Wrap the (now value-typed) parameter back into a promise, which is what the
                /// old version takes (and forces).
                @Override
                public @Nullable Statement adaptParameter(Abstraction copy, int index) {
                  var valueType = valueTypes.get(index);
                  if (valueType == null) {
                    return null;
                  }
                  var valueParam = copy.parameters().get(index);

                  // No source expression, so the backends create it evaluated (see
                  // `Promise#wrappedValue`).
                  var promWrapper = new Promise(valueType, Effects.NONE, new CFG(copy));
                  promWrapper
                      .code()
                      .entry()
                      .setJump(new Jump(new Return(), List.of(new Read(valueParam))));
                  var promStmt = new Statement(promWrapper);
                  promStmt.setAssignee(
                      copy.freshName(valueParam.name()), Type.promise(valueType, Effects.NONE));
                  return promStmt;
                }
              });
        }

        // Replace the call's operation (keeping its arguments) with the better-signature call.
        // The promise registers are forwarded to the inlined return values below.
        var newCallee = new StaticFnCallee(calleeFun, calleeIsDispatch, newSig);
        stmt.setExpression(new Call(newCallee));

        // Inline promise definitions
        var bbInlineables =
            inlineables.stream()
                // high to low index to avoid index shifting
                .sorted(Comparator.comparingInt(Inlineable::defStmtIndex).reversed())
                .collect(
                    Collectors.groupingBy(
                        Inlineable::defBb, LinkedHashMap::new, Collectors.toList()));
        for (var entry : bbInlineables.entrySet()) {
          var inlineableBb = entry.getKey();
          for (var il : entry.getValue()) {
            // A fresh phi parameter holds the inlined return value.
            var returnDest =
                new BlockParameter(scope.freshName(il.argReg().name()), il.valueType());
            // Add inlined code
            var succ = inline(il.promiseCode(), inlineableBb, il.defStmtIndex(), returnDest);
            // Forward the (eliminated) promise register's uses to the inlined return value.
            il.argReg().substUsesWith(new Read(returnDest));
            // Remove the now-unused promise constructor.
            inlineableBb.statements().get(il.defStmtIndex()).remove();
            // Fix call index if we inlined before `bb`
            if (inlineableBb == bb && il.defStmtIndex() < callIdx) {
              bb = succ;
              callIdx = 0;
            }
          }
        }

        changed = true;
      }
    }

    return changed;
  }

  /// The parameter `x` of `scope` to pass in place of `arg`, if `arg` is a singly-used promise
  /// that is either:
  /// - `{ v = force x; return v }` (or `force?`), or
  /// - a stub `[<sym X>]{ deopt }` where `X` is `x`'s name and stays bound to `x`
  ///   ([#bindingHoldsParameter]): forcing it would load `X`, i.e. force `x`.
  ///
  /// `x` must be a definite promise that matches `parameterType`. Forcing `x` gives the same value
  /// with the same effects, once, and a stub now gives it instead of deoptimizing.
  private static @Nullable Register forwardedParameter(
      Argument arg, Abstraction scope, Type parameterType) {
    if (!(arg instanceof Read(var reg))
        || !(reg instanceof AssigneeOf assignee)
        || reg.uses().size() != 1
        || !(assignee.statement().expression() instanceof Promise(_, _, var code, _, var expr))
        || code.bbs().size() != 1) {
      return null;
    }
    var entry = code.entry();
    var statements = entry.statements();
    Register parameter = null;
    if (statements.isEmpty()
        && entry.jump().expression() instanceof Deopt
        && expr instanceof RegSymSXP symbol) {
      parameter =
          scope.parameters().stream()
              .filter(p -> p.name().equals(symbol.name()) && bindingHoldsParameter(scope, p))
              .findFirst()
              .orElse(null);
    } else if (statements.size() == 1
        && statements.getFirst().expression() instanceof Force
        && statements.getFirst().arg(0) instanceof Read(var forced)
        && scope.isParameter(forced)
        && entry.jump().expression() instanceof Return
        && statements.getFirst().assignee() instanceof Register value
        && entry.jump().args().equals(List.of(new Read(value)))) {
      parameter = forced;
    }
    return parameter != null
            && parameter.type().isPromise()
            && parameter.type().matches(parameterType)
        ? parameter
        : null;
  }

  /// Whether the binding of `parameter`'s name in `scope`'s environment is always `parameter`:
  /// every `st` to it stores `parameter`, and nothing else can rebind it (a reflective store, a
  /// closure that isn't static, or a reflective environment). `scope` must make at most one
  /// environment, so a promise can't be in the frame of an inlined callee.
  private static boolean bindingHoldsParameter(Abstraction scope, Register parameter) {
    var name = Variable.named(parameter.name());
    var statements =
        scope
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .toList();
    return statements.stream().filter(s -> s.expression() instanceof MkEnv).count() <= 1
        && statements.stream()
            .allMatch(
                statement ->
                    switch (statement.expression()) {
                      case Store(_, var variable) ->
                          !variable.equals(name)
                              || (statement.arg(0) instanceof Read(var stored)
                                  && stored == parameter);
                      case ReflectiveStore(var variable) -> !variable.equals(name);
                      case Closure(var isStatic, _) -> isStatic;
                      case MkEnv(var type) -> type != MkEnvType.REGULAR;
                      default -> true;
                    });
  }

  /// Whether some block of `code` deopts.
  ///
  /// `deopt <pc>` names a position in the bytecode object of the abstraction it's in, so a block
  /// that deopts means whatever the *enclosing* version's bytecode has at that position once it's
  /// been moved there. Nested promises are fine: inlining `code` leaves them as promises, so their
  /// deopts stay in their own code objects.
  private static boolean hasDeopt(CFG code) {
    return code.bbs().stream().anyMatch(bb -> bb.jump().expression() instanceof Deopt);
  }

  /// Whether `code` computes the same value no matter when it runs, so evaluating it at the call
  /// site instead of wherever the callee would have forced it can't change the result.
  ///
  /// Effects don't answer this: `ld x` has none ([org.prlprg.fir.analyze.type.InferEffects]), and
  /// yet a `st x` anywhere in between changes what it reads. Only reaching a value through a
  /// binding makes a body time-variant; building one out of registers, which are SSA, doesn't.
  ///
  /// A body that fails this can still be inlined into a callee that forces it early enough; that's
  /// [#forcesFirst].
  ///
  /// This is only the body's own statements. A nested `prom` doesn't run until it's forced, and
  /// inlining doesn't move that force.
  private static boolean isTimeInvariant(CFG code) {
    var inferEffects = new InferEffects(code.scope());
    return code.bbs().stream()
        .flatMap(bb -> bb.statements().stream())
        .allMatch(statement -> isTimeInvariant(statement, inferEffects));
  }

  private static boolean isTimeInvariant(Statement statement, InferEffects inferEffects) {
    return switch (statement.expression()) {
      // Read registers and constants, or build a value out of them.
      case Assume _, Closure _, Dup _, MkVector _, Noop _, SubscriptRead _ -> true;
      // Doesn't run its own body here.
      case Promise _ -> true;
      // Read a binding, which anything that stores in between rebinds. This is the case declared
      // effects miss, and the reason this isn't just an effects check.
      case Load _, ReflectiveLoad _ -> false;
      // Run code we can't see into, so all we know about it is its effects, and one that has none
      // wrote nothing for the rest of the body to read differently. It could still read a binding
      // itself -- `ld` alone keeps a callee effect-free -- which is as precise as effects get.
      case Call _, Force _ -> !inferEffects.of(statement).impure();
      // Write something. All effectful, so a promise that got past the effects gate has none of
      // them; spelled out to keep this exhaustive as expressions are added.
      case Cast _, MkEnv _, PopEnv _, ReflectiveStore _, Store _, SubscriptWrite _ -> false;
    };
  }

  /// Whether `version` forces its `argIndex`-th parameter on every path from entry to a `return`,
  /// and only runs instructions that `before` accepts until then.
  ///
  /// With [#cannotDisturb], this is whether the version forces the promise before it can change
  /// what the promise reads. Strictness alone doesn't give that. A strict parameter is only
  /// guaranteed to be forced before the version's first *reflective* operation
  /// ([org.prlprg.fir.check.StrictnessChecker]), and a merely impure statement -- a `st-super`, a
  /// subscript write, a call to anything -- can still write somewhere the promise reads. Hoisting
  /// the body past one of those makes it read the old value.
  ///
  /// A path that ends in a `deopt` or an error that `before` accepts doesn't constrain this.
  private static boolean forcesFirst(
      @Nullable Abstraction version, int argIndex, Predicate<Instruction> before) {
    if (version == null || !version.isEvaluated() || argIndex >= version.parameters().size()) {
      // A dispatch call, a stub, or an unevaluated version: no body to look at (without
      // evaluating it, which only inlining is worth).
      return false;
    }
    var parameter = version.parameters().get(argIndex);

    // The blocks reachable from entry without passing a `force` of `parameter`, i.e. exactly the
    // code that can run before the promise is forced.
    var worklist = new ArrayDeque<BB>();
    var seen = new HashSet<BB>();
    worklist.add(version.body().entry());
    seen.add(version.body().entry());

    while (!worklist.isEmpty()) {
      var bb = worklist.poll();

      var isForced = false;
      for (var statement : bb.statements()) {
        if (statement.expression() instanceof Force _ && statement.arg(0).variable() == parameter) {
          isForced = true;
          break;
        }
        if (!before.test(statement)) {
          return false;
        }
      }
      // Everything past the force runs after the promise's value is fixed.
      if (isForced) {
        continue;
      }
      if (bb.jump().expression() instanceof Return || !before.test(bb.jump())) {
        return false;
      }

      for (var successor : bb.successors()) {
        if (seen.add(successor)) {
          worklist.add(successor);
        }
      }
    }

    return true;
  }

  /// If `signals`, whether an instruction of `version` can't warn, raise an error, or write
  /// output, so a promise that can may run before it: only frame bookkeeping and statements that
  /// [InferEffects#maySignal] clears. A `deopt` is accepted, since compiled code raises an error
  /// there anyway.
  private static Predicate<Instruction> quietIn(@Nullable Abstraction version, boolean signals) {
    if (!signals || version == null) {
      return _ -> true;
    }
    var inferEffects = new InferEffects(version);
    return instruction ->
        switch (instruction) {
          case Statement s -> isQuiet(s, inferEffects);
          case Jump j -> !(j.expression() instanceof Raise);
        };
  }

  private static boolean isQuiet(Statement statement, InferEffects inferEffects) {
    return switch (statement.expression()) {
      case MkEnv _, PopEnv _ -> true;
      case Store(var storeType, _) -> storeType == StoreType.LOCAL_VAR;
      default -> !inferEffects.maySignal(statement);
    };
  }

  /// Whether the statements of the caller between `promise` and `call` can't warn, raise an error,
  /// or write output. Inlining the promise runs its body where it's defined, before them.
  private static boolean isQuietBetween(
      Statement promise, Statement call, InferEffects inferEffects) {
    var bb = promise.parentBB();
    if (bb == null || bb != call.parentBB()) {
      return false;
    }
    return bb.statements().subList(promise.indexInBB() + 1, call.indexInBB()).stream()
        .allMatch(s -> isQuiet(s, inferEffects));
  }

  /// Whether `expression` leaves every binding and every vector that some other promise could read
  /// as it was.
  private static boolean cannotDisturb(Expression expression) {
    return switch (expression) {
      // Read registers, constants, or bindings, or build a value out of them.
      case Assume _, Closure _, Dup _, Load _, MkVector _, Noop _, SubscriptRead _ -> true;
      // Can error, but an error doesn't rebind anything, and a promise computed for nothing is
      // invisible.
      case Cast _ -> true;
      // Doesn't run its own body here.
      case Promise _ -> true;
      // Only ever touch an environment this version made itself: `EnvironmentChecker` requires one
      // to be live at every `st`, one is only live after this version's own `mkenv`, and `popenv`
      // destroys that same one. `st-super` writes past it, into a frame the promise can see.
      case MkEnv _, PopEnv _ -> true;
      case Store(var storeType, _) -> storeType == StoreType.LOCAL_VAR;
      // Write a vector in place, or -- through a callee or another promise -- anything at all.
      case Call _, Force _, ReflectiveLoad _, ReflectiveStore _, SubscriptWrite _ -> false;
    };
  }

  /// Whether R code other than `callee` can read the expression of a promise it gets: a method
  /// that a builtin dispatches to ([GlobalModules#runsNoRCode]), or code that gets the frame of a
  /// module function's version, which escapes through a closure it creates or to a function it
  /// calls that reads its caller's context or that we can't see into (a dynamic callee or a GNU-R
  /// base closure).
  ///
  /// This doesn't follow static calls further, so a callee of a callee that reads the context
  /// (`sys.frames()`) still can.
  private static boolean exposesFrame(StaticFnCallee callee) {
    var owner = callee.function().owner();
    if (owner == GlobalModules.BUILTINS || owner == GlobalModules.INTRINSICS) {
      return owner == GlobalModules.BUILTINS && !GlobalModules.runsNoRCode(callee.function());
    }
    var version = callee.exactVersion();
    return version == null
        || !version.isEvaluated()
        || version
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .anyMatch(
                statement ->
                    switch (statement.expression()) {
                      case Closure _ -> true;
                      case Call(DynamicCallee _) -> true;
                      case Call(StaticFnCallee c) ->
                          c.function().userProperties().needsContext()
                              || c.function().userProperties().readsContext()
                              || GlobalModules.isBaseClosure(c.function());
                      default -> false;
                    });
  }

  /// Whether `version`'s `argIndex`-th parameter is the target of a reflective load or store, so
  /// its identity as a promise (specifically, its environment) is observable.
  private static boolean isReflectedOn(@Nullable Abstraction version, int argIndex) {
    if (version == null || argIndex >= version.parameters().size()) {
      return false;
    }
    if (!version.isStub() && !version.isEvaluated()) {
      // Its parameters' uses aren't known until it's evaluated.
      return true;
    }
    return version.parameters().get(argIndex).uses().stream()
        .anyMatch(
            use ->
                use.instruction() instanceof Statement s
                    && (s.expression() instanceof ReflectiveLoad
                        || s.expression() instanceof ReflectiveStore));
  }
}
