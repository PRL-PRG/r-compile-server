package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;
import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
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
/// - Singly-used
/// - Passed to a strict parameter, or pure
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

          // The callee must definitely force the parameter, or the promise must be one whose
          // value doesn't depend on when it's computed (i.e. pure).
          if (j >= parameterStrictnesses.length()
              || (!parameterStrictnesses.get(j) && effects.impure())) {
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
