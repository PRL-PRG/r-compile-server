package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfsNoDeopts;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Streams;

/// Inlines every promise before each non-dynamic call that can.
///
/// Specifically, inlines every promise that is:
/// - Non-effectful
/// - Singly-used
/// - Passed to a strict parameter
///
/// Affected calls are replaced with dispatch calls, since the argument types (and therefore
/// signature) changes.
public record StrictifyPromise() implements AbstractionOptimization {
  private record Inlineable(
      int argIndex, Register argReg, BB defBb, int defStmtIndex, CFG promiseCode, Type valueType) {}

  @Override
  public boolean run(Function function, AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;
    var inferType = new InferType(scope);
    var inferEffects = new InferEffects(scope);
    var defUses = new DefUses(scope);

    // Iterate in reverse so inlines don't affect iteration.
    for (var bb : bbReverseDfsNoDeopts(scope.cfg())) {
      for (int callIdx = bb.statements().size() - 1; callIdx >= 0; callIdx--) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call call
            && call.callee() instanceof StaticFnCallee callee)) {
          continue;
        }

        // Only apply to non-reflectful callees
        var calleeSig = callee.signature();
        var callType = inferType.of(call);
        var callEffects = inferEffects.of(call);

        // Find inlinable promise arguments
        var args = call.callArguments();
        var inlineables = new ArrayList<Inlineable>();

        for (int j = 0; j < args.size(); j++) {
          if (!(args.get(j) instanceof Read(var reg))) {
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
          if (j >= calleeSig.parameterStrictnesses().size()
              || !calleeSig.parameterStrictnesses().get(j)) {
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
            args.stream()
                .map(
                    arg -> {
                      var t = scope.typeOf(arg);
                      return t != null ? t : Type.ANY_VALUE_SEXP;
                    })
                .collect(ImmutableList.toImmutableList());
        var newStrictnesses =
            Streams.zip(
                    newArgTypes.stream(),
                    calleeSig.parameterStrictnesses().stream(),
                    (type, strict) -> strict && !type.isValue())
                .collect(ImmutableList.toImmutableList());
        var fn = callee.function();
        var newSig =
            new Signature(
                newArgTypes,
                newStrictnesses,
                callType == null ? Type.ANY_VALUE_SEXP : callType,
                callEffects);
        var newCallee = new StaticFnCallee(true, fn, newSig);

        // Replace statement with new call.
        // The promise registers themselves are replaced with the inlined return values,
        // so call arguments remain unchanged
        var newCall = new Call(newCallee, args);
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
