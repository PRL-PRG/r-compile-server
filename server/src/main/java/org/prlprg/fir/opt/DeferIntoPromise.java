package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfs;
import static org.prlprg.fir.opt.Cleanup.cleanup;

import java.util.HashMap;
import java.util.LinkedHashMap;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Effects;

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
/// - Instructions used in multiple promises (not within a shared promise, which can still be
///   the move target) or outside any promise
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
    var inferEffects = new InferEffects(scope);
    var defUses = new DefUses(scope);

    // The algorithm:
    // 1. *Copy* the entire sub-graph reachable to the promise into its body
    // 2. Remove copied instructions that are impure, or have no assignee (effectively no-ops)
    // 3. Remove copied instructions that have uses in not-copied instructions, repeat
    // 4. Cleanup promise body (besides being cleaner, it prevents `Cleanup` from making a
    //    change if we don't, which would prevent fixpoint)
    // 5. Remaining copied instructions, replace their not-copied counterparts with `NOOP`
    //    (effectively removes, but doesn't mess up other runs)

    // Step 1
    var copied = new LinkedHashMap<CfgPosition, CfgPosition>();
    var copiedBbs = new HashMap<BB, BB>();

    // a. (Preparation) move instructions from the promise entry to a secondary BB,
    //    because we can't add predecessors to the entry.
    //    Create an unreachable BB, which will be the target of copied predecessors in place of
    //    non-copied successors (we reached the promise, and everything is pure, so we'll reach
    //    the same point within, which is unreachable from the non-copied BBs).
    // b. Copy instructions in the same BB before the promise, and phis
    // c. Copy transitive predecessor BBs

    // Step 1a
    var promiseEntry = promiseBody.addBB();
    promiseEntry.appendStatements(promiseBody.entry().statements());
    promiseEntry.setJump(promiseBody.entry().jump());
    promiseBody.entry().setJump(new Goto(new Target(promiseEntry)));
    promiseBody.entry().clearStatements();

    var unreachableBB = promiseBody.addBB();

    // Step 1b
    copiedBbs.put(promisePos.bb(), promiseEntry);
    promiseEntry.appendPhiParameters(promisePos.bb().phiParameters());
    promiseEntry.insertStatements(
        0, promisePos.bb().statements().subList(0, promisePos.instructionIndex()));
    for (int i = 0; i < promisePos.instructionIndex(); i++) {
      copied.put(new CfgPosition(promisePos.bb(), i), new CfgPosition(promiseEntry, i));
    }

    // Step 1c
    for (var pred : bbReverseDfs(promisePos.bb().predecessors())) {
      var predCopy = promiseBody.addBB();
      copiedBbs.put(pred, predCopy);
      predCopy.appendPhiParameters(pred.phiParameters());
      predCopy.appendStatements(pred.statements());
      for (var i = 0; i <= pred.statements().size(); i++) {
        copied.put(new CfgPosition(pred, i), new CfgPosition(predCopy, i));
      }
      // Special-case when the promise is in a deopt branch,
      // since the checkpoint should fail, but we won't copy the assumptions
      // (because they're in the unreachable-from-here success BB)
      predCopy.setJump(
          pred.jump() instanceof Checkpoint(_, _, var deopt)
              // Technically this should always be `new Goto(new Target(promisePos.bb())`
              ? new Goto(
                  new Target(copiedBbs.getOrDefault(deopt.bb(), unreachableBB), deopt.phiArgs()))
              : pred.jump()
                  .mapTargets(
                      t -> new Target(copiedBbs.getOrDefault(t.bb(), unreachableBB), t.phiArgs())));

      // Update predecessor's predecessors:
      // if they were added before it was, they'll have the unreachable BB in its place
      for (var predPred : pred.predecessors()) {
        var predPredCopy = copiedBbs.get(predPred);
        if (predPredCopy == null || !predPredCopy.successors().contains(unreachableBB)) {
          continue;
        }

        predPredCopy.setJump(
            predPredCopy
                .jump()
                .mapTargets(
                    t -> new Target(copiedBbs.getOrDefault(t.bb(), unreachableBB), t.phiArgs())));
      }
    }

    // Step 1d: Connect the promise body entry to the root of the copied predecessor chain.
    // A root is a copied predecessor whose original BB has no predecessors in the copied set.
    // TODO: Claude added this and I don't think it's correct
    BB singleRoot = null;
    var hasMultipleRoots = false;
    for (var entry : copiedBbs.entrySet()) {
      if (entry.getKey() == promisePos.bb()) continue;
      var originalBB = entry.getKey();
      if (originalBB.predecessors().stream().noneMatch(copiedBbs::containsKey)) {
        if (singleRoot == null) {
          singleRoot = entry.getValue();
        } else {
          hasMultipleRoots = true;
          break;
        }
      }
    }
    if (singleRoot != null && !hasMultipleRoots) {
      promiseBody.entry().setJump(new Goto(new Target(singleRoot)));
    }

    // Step 2
    var copiedIter = copied.entrySet().iterator();
    while (copiedIter.hasNext()) {
      var entry = copiedIter.next();
      if (!(entry.getKey().instruction() instanceof Statement(_, var assignee, var expr))) {
        continue;
      }

      if (assignee == null || inferEffects.of(expr) != Effects.NONE) {
        entry.getValue().replaceWith(Statement.NOOP);
        copiedIter.remove();
      }
    }

    // Step 3
    var removedAny = true;
    while (removedAny) {
      removedAny = false;

      copiedIter = copied.entrySet().iterator();
      while (copiedIter.hasNext()) {
        var entry = copiedIter.next();
        if (!(entry.getKey().instruction() instanceof Statement(_, var assignee, _))) {
          continue;
        }

        for (var use : defUses.uses(assignee)) {
          var useInOuterCfg = use.inCfg(promisePos.cfg());
          if (!useInOuterCfg.equals(promisePos) && !copied.containsKey(useInOuterCfg)) {
            entry.getValue().replaceWith(Statement.NOOP);
            copiedIter.remove();
            removedAny = true;
            break;
          }
        }
      }
    }

    // Step 4
    cleanup(promiseBody, false);

    // Step 5
    var changed = false;
    for (var entry : copied.entrySet()) {
      if (!(entry.getKey().instruction() instanceof Statement)) {
        continue;
      }

      entry.getKey().replaceWith(Statement.NOOP);
      changed = true;
    }
    return changed;
  }
}
