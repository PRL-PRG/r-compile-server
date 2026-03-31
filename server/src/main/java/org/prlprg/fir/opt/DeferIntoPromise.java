package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableSet;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;

/// Defers pure instructions that only affect registers used inside a promise into that promise.
///
/// For example, if a `box` instruction produces a register used only within a promise, this
/// optimization moves the `box` into the promise body so it is only evaluated when the promise
/// is forced.
///
/// This handles:
/// - Multiple promises in the same scope
/// - Chains of dependent pure instructions (e.g. `a = box(n); b = f(a); p = prom{ use(b) }`)
/// - Deeply nested promises (applied recursively via [Abstraction#streamCfgs()])
/// - Instructions used in multiple promises or outside any promise (not moved)
/// - Impure instructions (not moved)
public record DeferIntoPromise() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Function function, AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var changed = false;

    // Process each CFG (main + nested promise CFGs) so we handle deeply nested promises.
    for (var cfg : scope.streamCfgs().toList()) {
      changed |= processOneCfg(scope, cfg);
    }

    return changed;
  }

  private boolean processOneCfg(Abstraction scope, CFG cfg) {
    var defUses = new DefUses(scope);
    var changed = false;

    for (var bb : List.copyOf(cfg.bbs())) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        if (stmt.assignee() == null || !(stmt.expression() instanceof Promise promise)) {
          continue;
        }

        var promiseCfg = promise.code();
        var toMove = findMovableStatements(bb, i, promiseCfg, cfg, defUses);

        if (toMove.isEmpty()) {
          continue;
        }

        // Move the statements: insert at the beginning of the promise's entry block.
        var promiseEntry = promiseCfg.entry();
        var statementsToInsert = new ArrayList<Statement>();
        for (var idx : toMove) {
          statementsToInsert.add(bb.statements().get(idx));
        }
        promiseEntry.insertStatements(0, statementsToInsert);

        // Remove from outer BB (highest index first to avoid shifting).
        var sortedDesc = toMove.stream().sorted((a, b) -> b - a).toList();
        for (var idx : sortedDesc) {
          bb.removeStatementAt(idx);
        }

        // Adjust i for removed statements (all were before the promise stmt).
        i -= toMove.size();

        // Recompute def-uses since we mutated the CFG.
        defUses = new DefUses(scope);

        changed = true;
      }
    }

    return changed;
  }

  /// Find all pure statements before the promise at `promiseIndex` in `bb` that can be
  /// deferred into `promiseCfg`.
  ///
  /// A statement is movable if:
  /// 1. It is pure and has an assignee
  /// 2. All uses of its assignee are either inside `promiseCfg` or at other movable statements
  ///
  /// Returns indices in ascending order.
  private List<Integer> findMovableStatements(
      BB bb, int promiseIndex, CFG promiseCfg, CFG outerCfg, DefUses defUses) {

    // Phase 1: Collect pure candidates with assignees, before the promise in same BB.
    // Map: statement index -> assignee register
    var candidates = new HashMap<Integer, Register>();
    for (int j = promiseIndex - 1; j >= 0; j--) {
      var stmt = bb.statements().get(j);
      if (stmt.assignee() != null && isTriviallyPure(stmt.expression())) {
        candidates.put(j, stmt.assignee());
      }
    }

    if (candidates.isEmpty()) {
      return List.of();
    }

    // Reverse map: register -> candidate index
    var regToCandidate = new HashMap<Register, Integer>();
    for (var entry : candidates.entrySet()) {
      regToCandidate.put(entry.getValue(), entry.getKey());
    }

    // Phase 2: For each candidate, classify its uses.
    // A use is either: (a) inside the promise, (b) at another candidate, (c) elsewhere.
    // A candidate is movable if it has NO "elsewhere" uses, and all its "at candidate" uses
    // are themselves movable. This is a fixpoint computation.

    // Precompute for each candidate: does it have any "elsewhere" uses?
    // And which other candidates use it?
    var hasElsewhereUse = new HashSet<Integer>();
    var candidateUsers =
        new HashMap<Integer, Set<Integer>>(); // candidate -> set of candidate indices that use it

    for (var entry : candidates.entrySet()) {
      var idx = entry.getKey();
      var reg = entry.getValue();
      candidateUsers.put(idx, new HashSet<>());

      for (var use : defUses.uses(reg)) {
        if (isUseInsidePromise(use, promiseCfg)) {
          // Good: inside the promise
          continue;
        }

        // Check if this use is at another candidate statement
        var useInOuter = use.inCfg(outerCfg);
        if (useInOuter != null && useInOuter.bb() == bb) {
          var userCandidate =
              candidates.containsKey(useInOuter.instructionIndex())
                  ? useInOuter.instructionIndex()
                  : -1;
          if (userCandidate >= 0) {
            candidateUsers.get(idx).add(userCandidate);
            continue;
          }
        }

        // This use is "elsewhere" (outside the promise and not at a candidate)
        hasElsewhereUse.add(idx);
        break;
      }
    }

    // Phase 3: Fixpoint to determine movable set.
    // Start with candidates that have no elsewhere uses and no candidate users
    // (all uses are inside the promise).
    var movable = new HashSet<Integer>();
    var changed = true;
    while (changed) {
      changed = false;
      for (var idx : candidates.keySet()) {
        if (movable.contains(idx) || hasElsewhereUse.contains(idx)) {
          continue;
        }

        // Check if all candidate-users of this register are already movable
        var users = candidateUsers.get(idx);
        if (movable.containsAll(users)) {
          movable.add(idx);
          changed = true;
        }
      }
    }

    if (movable.isEmpty()) {
      return List.of();
    }

    var result = new ArrayList<>(movable);
    result.sort(Integer::compareTo);
    return result;
  }

  /// Check if a use position is inside the given promise CFG (or nested within it).
  private boolean isUseInsidePromise(ScopePosition use, CFG promiseCfg) {
    return use.inCfg(promiseCfg) != null;
  }

  /// Same logic as [Cleanup]'s isTriviallyPure.
  static boolean isTriviallyPure(Expression expression) {
    return switch (expression) {
      case Aea _ -> true;
      case Assume _ -> false;
      case Call(var callee, _) ->
          callee instanceof StaticFnCallee c
              && c.exactVersion() != null
              && isTriviallyPureFunction(c.function());
      case Cast _ -> false;
      case Closure _, Dup _ -> true;
      case Force _ -> false;
      case Load(var loadType, _) -> loadType != LoadType.BASE_FUN;
      case MkVector _ -> true;
      case MkEnv _ -> false;
      case Noop _ -> true;
      case PopEnv _ -> false;
      case Promise _ -> true;
      case ReflectiveLoad _, ReflectiveStore _, Store _ -> false;
      case SubscriptRead _ -> false;
      case SubscriptWrite _ -> false;
    };
  }

  private static final ImmutableSet<String> TRIVIALLY_PURE_INTRINSICS =
      ImmutableSet.of("box", "unbox");

  private static boolean isTriviallyPureFunction(Function function) {
    return function.owner() == INTRINSICS
        && TRIVIALLY_PURE_INTRINSICS.contains(function.name().name());
  }
}
