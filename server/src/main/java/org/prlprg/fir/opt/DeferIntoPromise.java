package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfs;
import static org.prlprg.fir.opt.SchedulePure.HOIST_RULES;

import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.variable.Register;

/// Defers pure instructions that only affect registers used inside a promise into that promise.
///
/// For example, if a `box` instruction produces a register used only within a promise, this
/// optimization moves the `box` into the promise body so it is only evaluated when the promise
/// is forced.
///
/// Also handles chains of dependent pure instructions (e.g. `a = box(n); b = f(a);
/// p = prom{ use(b) }`), even across basic blocks, and nested promises.
///
/// Not moved:
/// - Instructions used outside the promise (in other not-moved instructions)
/// - Impure or hoisted instructions
///
/// Because the deferred instructions are pure, *moving* them into the promise body (rather than
/// copying the control-flow subgraph) computes the same values, only lazily.
public record DeferIntoPromise() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    return scope.cfg() != null && run(scope, scope.cfg());
  }

  private boolean run(Abstraction scope, CFG cfg) {
    var changed = false;
    for (var bb : cfg.bbs()) {
      // Snapshot, since deferring mutates the block.
      for (var stmt : List.copyOf(bb.statements())) {
        if (!(stmt.expression() instanceof Promise(_, _, var promiseBody, _))) {
          continue;
        }
        changed |= deferInto(scope, stmt, promiseBody);
        changed |= run(scope, promiseBody);
      }
    }
    return changed;
  }

  private boolean deferInto(Abstraction scope, Statement promiseStmt, CFG promiseBody) {
    var promiseBb = promiseStmt.parentBB();
    if (promiseBb == null) {
      return false;
    }
    var outerCfg = promiseBb.owner();

    // The promise is in a loop: too complicated, skip (we could optimize this later).
    if (Iterables.contains(bbReverseDfs(promiseBb.predecessors()), promiseBb)) {
      return false;
    }

    var inferEffects = new InferEffects(scope);
    var hierarchy = new CfgHierarchy(scope);

    // Candidate deferrable instructions: pure, non-hoisted, with an assignee.
    var candidates = new LinkedHashSet<Statement>();
    var defOf = new HashMap<Register, Statement>();
    for (var bb : outerCfg.bbs()) {
      for (var stmt : bb.statements()) {
        // Never defer the promise into its own body
        if (stmt == promiseStmt) {
          continue;
        }

        if (stmt.assignee() != null
            && inferEffects.of(stmt) == Effects.NONE
            && HOIST_RULES.stream().noneMatch(rule -> rule.test(stmt))) {
          candidates.add(stmt);
          defOf.put(stmt.assignee(), stmt);
        }
      }
    }

    // Prune to a fixpoint: keep only instructions whose assignee is used solely inside the promise
    // or by other kept instructions.
    var changedSet = true;
    while (changedSet) {
      changedSet = false;
      var it = candidates.iterator();
      while (it.hasNext()) {
        var stmt = it.next();
        assert stmt.assignee() != null;
        for (var use : stmt.assignee().uses()) {
          // Project the use into the promise's enclosing CFG: it lands on `promiseStmt` itself if
          // the use is (transitively) inside the promise, or on the using statement if it's a
          // sibling in the outer CFG.
          var projected = hierarchy.projectInto(outerCfg, use.instruction());
          var inPromise = projected == promiseStmt;
          var inKept = projected instanceof Statement using && candidates.contains(using);
          if (!inPromise && !inKept) {
            it.remove();
            changedSet = true;
            break;
          }
        }
      }
    }

    if (candidates.isEmpty()) {
      return false;
    }

    // Order the kept instructions so each definition precedes its (kept) uses.
    var ordered = new ArrayList<Statement>();
    var remaining = new LinkedHashSet<>(candidates);
    while (!remaining.isEmpty()) {
      var progressed = false;
      var it = remaining.iterator();
      while (it.hasNext()) {
        var stmt = it.next();
        var ready =
            stmt.args().stream()
                .noneMatch(
                    a -> a.variable() != null && remaining.contains(defOf.get(a.variable())));
        if (ready) {
          ordered.add(stmt);
          it.remove();
          progressed = true;
        }
      }
      if (!progressed) {
        // Shouldn't happen for valid SSA (no cycles among pure definitions).
        break;
      }
    }

    // Move them to the start of the promise body, preserving the dependency order.
    var first = promiseBody.entry().firstStatement();
    var point = first != null ? first : promiseBody.entry().jump();
    for (var stmt : ordered) {
      stmt.moveBefore(point);
    }

    return true;
  }
}
