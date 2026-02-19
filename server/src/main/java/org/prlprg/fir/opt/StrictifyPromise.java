package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.cursor.CFGCopier;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;

/// For each call to a non-effectful function, inlines every non-effectful, singly-used promise
/// argument before the call. The callee signature (if dispatch) or version (if static) changes to
/// accommodate the new (non-promise) parameter types.
public record StrictifyPromise() implements AbstractionOptimization {
  private record Inlineable(
      int argIndex,
      Register promiseReg,
      BB defBb,
      int defStmtIndex,
      List<Statement> promiseStmts,
      Argument retValue) {}

  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;
    var defUses = new DefUses(scope);

    for (var bb : List.copyOf(scope.cfg().bbs())) {
      for (int callIdx = 0; callIdx < bb.statements().size(); callIdx++) {
        var stmt = bb.statements().get(callIdx);
        if (!(stmt.expression() instanceof Call call)) {
          continue;
        }

        // Only apply to non-effectful callees
        if (!isNonEffectful(call.callee())) {
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

          // Must be in the outer (main) CFG, not inside a nested promise
          var cfgPos = def.inCfg(scope.cfg());
          if (cfgPos == null) {
            continue;
          }

          // Must be a non-reflective Promise with a single-BB CFG
          if (!(cfgPos.instruction() instanceof Statement(var _, var _, var expr))) {
            continue;
          }
          if (!(expr instanceof Promise(var _, var effects, var code))) {
            continue;
          }
          if (effects.reflect()) {
            continue;
          }
          if (code.bbs().size() != 1) {
            continue;
          }
          if (!(code.entry().jump() instanceof Return(var _, var retValue))) {
            continue;
          }

          // Only inline singly-used promises to avoid code duplication
          if (defUses.uses(reg).size() != 1) {
            continue;
          }

          inlineables.add(
              new Inlineable(
                  j,
                  reg,
                  cfgPos.bb(),
                  cfgPos.instructionIndex(),
                  List.copyOf(code.entry().statements()),
                  retValue));
        }

        if (inlineables.isEmpty()) {
          continue;
        }

        // Build new argument list: replace each inlinable promise arg with its inlined return value
        var newArgs = new ArrayList<>(args);
        for (var il : inlineables) {
          newArgs.set(il.argIndex(), il.retValue());
        }

        // Compute new callee before applying mutations, so we can bail out if needed
        var newArgTypes =
            ImmutableList.copyOf(
                newArgs.stream()
                    .map(
                        arg -> {
                          var t = scope.typeOf(arg);
                          return t != null ? t : Type.ANY_VALUE;
                        })
                    .toList());
        Callee newCallee;
        if (call.callee() instanceof StaticCallee(var fn, var _)) {
          // Find best version whose parameters accept the new (non-promise) argument types
          var bestVersion = fn.guess(new Signature(newArgTypes, Type.ANY_VALUE, Effects.NONE));
          if (bestVersion == null) {
            // No compatible version found; cannot apply this optimization
            continue;
          }
          newCallee = new StaticCallee(fn, bestVersion);
        } else if (call.callee() instanceof DispatchCallee(var fn, var sig)) {
          // sig != null is guaranteed by isNonEffectful
          // TODO: This is already an issue, the baseline can be non-effectful,
          //  although perhaps `InferEffects` doesn't know that...
          var newSig = new Signature(newArgTypes, sig.returnType(), sig.effects());
          newCallee = new DispatchCallee(fn, newSig);
        } else {
          continue;
        }

        // Remove promise definitions in this BB (high to low index to avoid index shifting)
        var sameBbInlineables =
            inlineables.stream()
                .filter(il -> il.defBb() == bb)
                .sorted(Comparator.comparingInt(Inlineable::defStmtIndex).reversed())
                .toList();
        var otherBbInlineables = inlineables.stream().filter(il -> il.defBb() != bb).toList();

        for (var il : sameBbInlineables) {
          bb.removeStatementAt(il.defStmtIndex());
          scope.removeLocal(il.promiseReg());
          if (il.defStmtIndex() < callIdx) {
            callIdx--;
          }
        }
        for (var il : otherBbInlineables) {
          il.defBb().removeStatementAt(il.defStmtIndex());
          scope.removeLocal(il.promiseReg());
        }

        // Collect the promise body statements to insert before the call (in argument order)
        var stmtsToInsert = new ArrayList<Statement>();
        for (var il : inlineables) {
          for (var s : il.promiseStmts()) {
            stmtsToInsert.add(CFGCopier.copy(s, scope));
          }
        }

        // Insert the promise body statements before the call
        bb.insertStatements(callIdx, stmtsToInsert);
        callIdx += stmtsToInsert.size();

        // Replace the call with the updated callee and arguments
        var newCall = new Call(newCallee, ImmutableList.copyOf(newArgs));
        bb.replaceStatementAt(callIdx, new Statement(stmt.comments(), stmt.assignee(), newCall));

        changed = true;
      }
    }

    return changed;
  }

  private static boolean isNonEffectful(Callee callee) {
    return switch (callee) {
      case StaticCallee(var _, var version) -> !version.effects().reflect();
      case DispatchCallee(var _, var sig) -> sig != null && !sig.effects().reflect();
      default -> false;
    };
  }
}
