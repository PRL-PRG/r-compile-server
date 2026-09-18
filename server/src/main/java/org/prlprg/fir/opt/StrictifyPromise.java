package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;
import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
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
import org.prlprg.fir.ir.instruction.Jump;
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
///   before it can disturb what the promise reads ([#forcesUndisturbed])
///
/// Furthermore, only inlines if there's a compatible version with the new signature, or one can
/// be created from the old version (in which case creates it)
public record StrictifyPromise() implements AbstractionOptimization {
  private record Inlineable(
      int argIndex, Register argReg, BB defBb, int defStmtIndex, CFG promiseCode, Type valueType) {}

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;

    // Iterate in reverse so inlines don't affect iteration.
    for (var bb : bbReverseDfsNoDeopts(scope.cfg())) {
      for (int callIdx = bb.statements().size() - 1; callIdx >= 0; callIdx--) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call(StaticFnCallee callee))) {
          continue;
        }
        // Call arguments follow the callee's own argument (index 0).
        var callArguments = stmt.args().subList(1, stmt.argCount());

        var calleeFun = callee.function();
        var calleeIsDispatch = callee.isDispatch();
        var calleeSig = callee.signature();
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
          if (defBb == null || defBb.owner() != scope.cfg()) {
            continue;
          }

          // Must be a non-effectful Promise
          if (!(promiseDefStmt.expression()
                  instanceof Promise(var valueType, var effects, var code, _))
              || effects.impure()) {
            continue;
          }

          // A `deopt`'s position is relative to the promise's own bytecode object, so its block
          // can't be moved into the enclosing version (`Inline` refuses for the same reason).
          if (hasDeopt(code)) {
            continue;
          }

          // The promise's value must not depend on when it's computed, or the callee must force
          // it -- so the work isn't wasted -- before it can change what the body reads.
          if (j >= parameterStrictnesses.length()
              || !(isTimeInvariant(code)
                  || (parameterStrictnesses.get(j)
                      && forcesUndisturbed(callee.exactVersion(), j)))) {
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

          var newVersion = copy2(feedback.module(), calleeFun, oldVersion, newParams);

          var newEntry = Objects.requireNonNull(newVersion.cfg()).entry();
          for (var inlineable : inlineables) {
            var newValueParam = newVersion.parameters().get(inlineable.argIndex);

            // Wrap the (now value-typed) parameter back into a promise that the copied body forces.
            var promWrapper = new Promise(inlineable.valueType, Effects.NONE, new CFG(newVersion));
            var promStmt = new Statement(promWrapper);
            var promReg =
                promStmt.setAssignee(
                    newVersion.freshName(newValueParam.name()),
                    Type.promise(inlineable.valueType, Effects.NONE));
            newEntry.prependStatement(promStmt);

            // Redirect the body's uses of the value parameter to the wrapping promise, then make
            // the promise return the value parameter.
            newValueParam.substUsesWith(new Read(promReg));
            promWrapper
                .code()
                .entry()
                .setJump(new Jump(new Return(), List.of(new Read(newValueParam))));
          }
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
                .collect(Collectors.groupingBy(Inlineable::defBb));
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
  /// [#forcesUndisturbed].
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

  /// Whether `version` forces its `argIndex`-th parameter before it can change what the promise
  /// that parameter holds reads.
  ///
  /// Strictness alone doesn't give this. A strict parameter is only guaranteed to be forced before
  /// the version's first *reflective* operation
  /// ([org.prlprg.fir.check.StrictnessChecker]), and a merely impure statement -- a `st-super`, a
  /// subscript write, a call to anything -- can still write somewhere the promise reads. Hoisting
  /// the body past one of those makes it read the old value.
  ///
  /// Only paths that reach a force constrain this. On one that doesn't, nothing ever looks at the
  /// promise's value, so having computed it for nothing is invisible: it has no effects.
  private static boolean forcesUndisturbed(@Nullable Abstraction version, int argIndex) {
    if (version == null || version.cfg() == null || argIndex >= version.parameters().size()) {
      // A dispatch call, or a stub: no body to look at.
      return false;
    }
    var parameter = version.parameters().get(argIndex);

    // The blocks reachable from entry without passing a `force` of `parameter`, i.e. exactly the
    // code that can run before the promise is forced.
    var worklist = new ArrayDeque<BB>();
    var seen = new HashSet<BB>();
    worklist.add(version.cfg().entry());
    seen.add(version.cfg().entry());

    while (!worklist.isEmpty()) {
      var bb = worklist.poll();

      var isForced = false;
      for (var statement : bb.statements()) {
        if (statement.expression() instanceof Force _ && statement.arg(0).variable() == parameter) {
          isForced = true;
          break;
        }
        if (!cannotDisturb(statement.expression())) {
          return false;
        }
      }
      // Everything past the force runs after the promise's value is fixed.
      if (isForced) {
        continue;
      }

      for (var successor : bb.successors()) {
        if (seen.add(successor)) {
          worklist.add(successor);
        }
      }
    }

    return true;
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

  /// Whether `version`'s `argIndex`-th parameter is the target of a reflective load or store, so
  /// its identity as a promise (specifically, its environment) is observable.
  private static boolean isReflectedOn(@Nullable Abstraction version, int argIndex) {
    if (version == null || argIndex >= version.parameters().size()) {
      return false;
    }
    return version.parameters().get(argIndex).uses().stream()
        .anyMatch(
            use ->
                use.instruction() instanceof Statement s
                    && (s.expression() instanceof ReflectiveLoad
                        || s.expression() instanceof ReflectiveStore));
  }
}
