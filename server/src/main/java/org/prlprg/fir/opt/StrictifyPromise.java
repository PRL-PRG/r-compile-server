package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.iterator.ReverseDfs.reverseDfsNoDeopts;

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
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.UnreachableError;

/// For each call to a non-effectful function, inlines every non-effectful, singly-used promise
/// argument before the call, which doesn't contain calls itself (since they may recur). The
/// callee signature (if dispatch) or version (if static) changes to accommodate the new
/// (non-promise) parameter types.
public record StrictifyPromise() implements AbstractionOptimization {
  private record Inlineable(
      int argIndex, Register argReg, BB defBb, int defStmtIndex, CFG promiseCode, Type valueType) {}

  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;
    var inferType = new InferType(scope);
    var inferEffects = new InferEffects(scope);
    var defUses = new DefUses(scope);

    // Iterate in reverse so inlines don't affect iteration.
    for (var bb : reverseDfsNoDeopts(scope.cfg())) {
      for (int callIdx = bb.statements().size() - 1; callIdx >= 0; callIdx--) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call call)) {
          continue;
        }

        // Only apply to non-reflectful callees
        var callType = inferType.of(call);
        var callEffects = inferEffects.of(call);
        if (callEffects.reflect()) {
          continue;
        }

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

          var defInCfg = def.inCfg(scope.cfg());
          if (defInCfg == null) {
            continue;
          }

          // Must be a non-effectful Promise that doesn't contain calls (may recur)
          if (!(defInCfg.instruction() instanceof Statement(var _, var _, var expr))
              || !(expr instanceof Promise(var valueType, var effects, var code))
              || effects.impure()
              || code.bbs().stream()
                  .flatMap(b -> b.statements().stream())
                  .anyMatch(s -> s.expression() instanceof Call)) {
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
                      return t != null ? t : Type.ANY_VALUE;
                    })
                .collect(ImmutableList.toImmutableList());
        var fn =
            switch (call.callee()) {
              case StaticCallee(var f, var _) -> f;
              case DispatchCallee(var f, var _) -> f;
              case DynamicCallee _ ->
                  throw new UnreachableError("dynamic callees are always reflectful");
            };
        var newSig =
            new Signature(newArgTypes, callType == null ? Type.ANY_VALUE : callType, callEffects);
        var newCallee = new DispatchCallee(fn, newSig);

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
