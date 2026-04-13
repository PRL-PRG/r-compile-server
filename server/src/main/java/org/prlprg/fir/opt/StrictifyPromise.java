package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.abstraction.AbstractionCopier.copy2;
import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Objects;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.ImmutableBoolArray;
import org.prlprg.util.Streams;

/// Inlines every promise before each non-dynamic call that can.
///
/// Specifically, inlines every promise that is:
/// - Non-effectful
/// - Singly-used
/// - Passed to a strict parameter
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
    var defUses = new DefUses(scope);

    // Iterate in reverse so inlines don't affect iteration.
    for (var bb : bbReverseDfsNoDeopts(scope.cfg())) {
      for (int callIdx = bb.statements().size() - 1; callIdx >= 0; callIdx--) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call(StaticFnCallee callee, var callArguments))) {
          continue;
        }

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

          var def = defUses.definition(reg);
          if (def == null) {
            continue;
          }

          var defInCfg = def.inInnermostCfg();
          if (defInCfg.cfg() != scope.cfg()) {
            continue;
          }

          // The callee's corresponding parameter must be strict
          if (j >= parameterStrictnesses.length() || !parameterStrictnesses.get(j)) {
            continue;
          }

          // Must be a non-effectful Promise
          if (!(defInCfg.instruction() instanceof Statement(var _, var _, var expr))
              || !(expr instanceof Promise(var valueType, var effects, var code))
              || effects.impure()) {
            continue;
          }

          // Only inline singly-used promises to avoid code duplication
          if (defUses.uses(reg).size() != 1) {
            continue;
          }

          inlineables.add(
              new Inlineable(j, reg, defInCfg.bb(), defInCfg.instructionIndex(), code, valueType));
        }

        if (inlineables.isEmpty()) {
          continue;
        }

        // Replace inlined promise register types with their value types.
        // We're reusing the promise register for the inlined return value.
        for (var il : inlineables) {
          scope.setLocalType(il.argReg(), il.valueType());
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
          var newParams = new ArrayList<>(oldParams);
          for (var inlineable : inlineables) {
            var oldParamReg = oldParams.get(inlineable.argIndex).variable();
            var newParamReg = oldVersion.resemblance(oldParamReg.name());

            newParams.set(
                inlineable.argIndex, new Parameter(newParamReg, inlineable.valueType, false));
          }

          var newVersion = copy2(feedback.module(), calleeFun, oldVersion, newParams);

          var newEntry = Objects.requireNonNull(newVersion.cfg()).entry();
          for (var i = 0; i < inlineables.size(); i++) {
            var inlineable = inlineables.get(i);
            var oldParamReg = oldParams.get(inlineable.argIndex).variable();
            var newParamReg = newParams.get(inlineable.argIndex).variable();

            var promWrapper = new Promise(inlineable.valueType, Effects.NONE, new CFG(newVersion));
            promWrapper.code().entry().setJump(new Return(new Read(newParamReg)));

            newVersion.addLocal(
                new Local(oldParamReg, Type.promise(inlineable.valueType, Effects.NONE)));
            newEntry.insertStatement(i, new Statement(oldParamReg, promWrapper));
          }
        }

        // Replace statement with new call.
        // The promise registers themselves are replaced with the inlined return values,
        // so call arguments remain unchanged
        var newCallee = new StaticFnCallee(calleeIsDispatch, calleeFun, newSig);
        var newCall = new Call(newCallee, callArguments);
        var newStmt = stmt.withExpression(newCall);
        bb.replaceStatementAt(callIdx, newStmt);

        // Inline promise definitions
        var bbInlineables =
            inlineables.stream()
                // high to low index to avoid index shifting
                .sorted(Comparator.comparingInt(Inlineable::defStmtIndex).reversed())
                .collect(Collectors.groupingBy(Inlineable::defBb));
        for (var entry : bbInlineables.entrySet()) {
          var inlineableBb = entry.getKey();
          for (var il : entry.getValue()) {
            // Add inlined code
            var succ = inline(il.promiseCode(), inlineableBb, il.defStmtIndex(), il.argReg());
            // Remove promise constructor
            inlineableBb.removeStatementAt(il.defStmtIndex());
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
}
