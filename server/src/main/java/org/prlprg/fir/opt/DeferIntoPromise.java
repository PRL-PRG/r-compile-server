package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfs;

import com.google.common.collect.Iterables;
import java.util.LinkedHashMap;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.util.UnreachableError;

/// Defers pure instructions that only affect registers used inside a promise into that promise.
///
/// For example, if a `box` instruction produces a register used only within a promise, this
/// optimization moves the `box` into the promise body so it is only evaluated when the promise
/// is forced.
///
/// Also handles chains of dependent pure instructions (e.g. `a = box(n); b = f(a);
/// p = prom{ use(b) }`), even across basic blocks (e.g. `a1 = box(n); goto BB(a1);
/// ... a2 = box(m); goto BB(a2); ... BB(a): p = prom{ use(a) }`), and nested promises
///
/// Not moved:
/// - Instructions used outside the promise in other not-moved instructions
/// - Impure instructions
public record DeferIntoPromise() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Function function, AbstractionFeedback feedback, Abstraction scope) {
    return scope.cfg() != null && run(scope, scope.cfg());
  }

  private boolean run(Abstraction scope, CFG cfg) {
    var changed = false;
    for (var bb : cfg.bbs()) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        if (!(stmt.expression() instanceof Promise(_, _, var promiseBody))) {
          continue;
        }
        changed |= run(scope, new CfgPosition(bb, i), promiseBody);
        changed |= run(scope, promiseBody);
      }
    }
    return changed;
  }

  private boolean run(Abstraction scope, CfgPosition promisePos, CFG promiseBody) {
    if (Iterables.contains(bbReverseDfs(promisePos.bb().predecessors()), promisePos.bb())) {
      // The promise is in a loop.
      // Too complicated. If necessary, we can figure out how to optimize this later
      return false;
    }

    var inferEffects = new InferEffects(scope);
    var defUses = new DefUses(scope);

    // The algorithm:
    // 1. *Copy* the entire sub-graph reachable to the promise into its body
    // 2. Remove copied instructions that are impure, or have no assignee (effectively no-ops)
    // 3. Remove copied instructions that have uses in not-copied instructions, repeat
    // 4. Remaining copied instructions, replace their not-copied counterparts with `NOOP`
    //    (effectively removes, but doesn't mess up other runs)

    // Step 1
    var copiedStmts = new LinkedHashMap<CfgPosition, CfgPosition>();
    var copiedBbs = new LinkedHashMap<BB, BB>();

    // a. Move instructions from the promise entry to a secondary BB,
    //    because we can't add predecessors to the entry.
    //    When we copy predecessors, we'll copy the outer entry into the promise's entry.
    // b. Copy instructions in the same BB before the promise, no phi parameters nor arguments
    // c. Copy transitive predecessor BBs

    // Step 1a
    var oldPromiseEntry = promiseBody.addBB();
    oldPromiseEntry.appendStatements(promiseBody.entry().statements());
    oldPromiseEntry.setJump(promiseBody.entry().jump());
    promiseBody.entry().setJump(new Goto(new Target(oldPromiseEntry)));
    promiseBody.entry().clearStatements();

    // Step 1b
    copiedBbs.put(promisePos.bb(), oldPromiseEntry);
    oldPromiseEntry.insertStatements(
        0, promisePos.bb().statements().subList(0, promisePos.instructionIndex()));
    for (int i = 0; i < promisePos.instructionIndex(); i++) {
      copiedStmts.put(new CfgPosition(promisePos.bb(), i), new CfgPosition(oldPromiseEntry, i));
    }

    // Step 1c
    // First copy everything except jumps
    for (var pred : bbReverseDfs(promisePos.bb().predecessors())) {
      if (pred == promisePos.bb()) {
        throw new UnreachableError("we checked that the promise wasn't in a loop");
      }

      var predCopy = pred.isEntry() ? promiseBody.entry() : promiseBody.addBB();
      copiedBbs.put(pred, predCopy);

      predCopy.appendStatements(pred.statements());
      for (var i = 0; i < pred.statements().size(); i++) {
        copiedStmts.put(new CfgPosition(pred, i), new CfgPosition(predCopy, i));
      }
    }
    // Then copy jumps, because earlier-copied BBs may need to reference later-copied ones.
    // If a BB has a jump to an uncopied BB, it's a branch, and the uncopied BB is unreachable
    // from here, so replace it with a goto
    for (var entry : copiedBbs.entrySet()) {
      var pred = entry.getKey();
      var predCopy = entry.getValue();
      if (predCopy == oldPromiseEntry) {
        continue;
      }

      @Nullable Target[] reachableTarget = {null};
      boolean[] hasUnreachableTarget = {false};
      var jumpIfAllTargetsAreReachable =
          pred.jump()
              .mapTargets(
                  t -> {
                    var copiedBb = copiedBbs.get(t.bb());
                    if (copiedBb == null) {
                      hasUnreachableTarget[0] = true;
                      // Return something to keep iterating, it won't be used
                      return t;
                    }

                    // Remember, no phi arguments
                    reachableTarget[0] = new Target(copiedBb);
                    return reachableTarget[0];
                  });
      if (hasUnreachableTarget[0] && reachableTarget[0] == null) {
        throw new UnreachableError(
            "impossible, BB's transitive predecessor's only successor isn't a predecessor or the BB");
      }

      predCopy.setJump(
          hasUnreachableTarget[0] ? new Goto(reachableTarget[0]) : jumpIfAllTargetsAreReachable);
    }

    // Step 2
    var copiedIter = copiedStmts.entrySet().iterator();
    while (copiedIter.hasNext()) {
      var entry = copiedIter.next();
      var stmt = (Statement) Objects.requireNonNull(entry.getKey().instruction());

      if (stmt.assignee() == null || inferEffects.of(stmt.expression()) != Effects.NONE) {
        entry.getValue().replaceWith(Statement.NOOP);
        copiedIter.remove();
      }
    }

    // Step 3
    var removedAny = true;
    while (removedAny) {
      removedAny = false;

      copiedIter = copiedStmts.entrySet().iterator();
      while (copiedIter.hasNext()) {
        var entry = copiedIter.next();
        var stmt = (Statement) Objects.requireNonNull(entry.getKey().instruction());
        assert stmt.assignee() != null : "removed assignee";

        for (var use : defUses.uses(stmt.assignee())) {
          var useInOuterCfg = use.inCfg(promisePos.cfg());
          assert useInOuterCfg != null : "I don't think we can copy if so";
          // Note that if the use is in a copied jump it will remain
          // (jumps are actually copied but not in `copiedStmts`).
          // This is intentional,
          // because the jump may divert into a BB that is unreachable to the promise;
          // if it cannot,
          // it will be simplified in a cleanup phase,
          // and the instruction will be deferred the next time this runs
          if (!useInOuterCfg.equals(promisePos) && !copiedStmts.containsKey(useInOuterCfg)) {
            entry.getValue().replaceWith(Statement.NOOP);
            copiedIter.remove();
            removedAny = true;
            break;
          }
        }
      }
    }

    // Step 4
    for (var entry : copiedStmts.entrySet()) {
      entry.getKey().replaceWith(Statement.NOOP);
    }
    return !copiedStmts.isEmpty();
  }
}
