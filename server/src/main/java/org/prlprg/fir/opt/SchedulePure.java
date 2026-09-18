package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Objects;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;

/// Hoists and defers specific pure instructions.
///
/// Current rules:
/// - `r = box< X --> v1(X) >(r1)` is deferred
/// - `r = unbox< v1(X) --> X >(r1)` is hoisted
///
/// Can be easily extended with more defer/hoist rules.
///
/// A deferred instruction moves to just before the earliest use(s) of its assignee that no other
/// use dominates. It's *copied* when those uses are in branches that don't dominate each other,
/// and each use is then rewritten to the copy that covers it. Iff every use is inside a promise
/// within the instruction's current CFG, the instruction is deferred into that promise.
///
/// A hoisted instruction moves to immediately after the latest definition of one of its arguments.
/// If the instruction is in a promise and every argument is in the enclosing CFG, it's hoisted to
/// the enclosing CFG.
///
/// The two run as separate passes -- every defer is applied before any hoist target is computed --
/// so a hoist never has to reason about where a statement it depends on is *going* to end up. An
/// earlier version instead built a graph of pending moves and rewrote a move whose target was
/// itself moving; when that target was being copied to several branches, the rewrite followed it
/// into all of them, which is how an `unbox` ended up in a deopt branch ahead of the `box` it
/// reads.
public final class SchedulePure implements AbstractionOptimization {
  static final ImmutableList<Predicate<Statement>> HOIST_RULES =
      ImmutableList.of(matchRule(UNBOX_FUN));
  private static final ImmutableList<Predicate<Statement>> DEFER_RULES =
      ImmutableList.of(matchRule(BOX_FUN));

  private static Predicate<Statement> matchRule(Function function) {
    return statement ->
        statement.expression() instanceof Call(StaticFnCallee callee)
            && callee.function() == function;
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    if (scope.cfg() == null) {
      return false;
    }

    var run = new Run(scope);
    var changed = run.deferAll();
    changed |= run.hoistAll();
    return changed;
  }

  /// Where a hoisted statement goes: immediately after [#after], or at the start of [#bb] when
  /// [#after] is `null` (the argument it follows is a phi or parameter, which has no statement).
  private record Anchor(BB bb, @Nullable Statement after) {
    int index() {
      return after == null ? -1 : after.indexInBB();
    }
  }

  /// Where a deferred statement's assignee is used: the uses at each position in the target CFG
  /// ([#usesAt]), and the positions among those that no other dominates ([#targets]).
  private record Deferral(
      LinkedHashMap<Instruction, List<Use>> usesAt,
      List<Instruction> targets,
      CfgDominatorTree cfgDom) {}

  private static final class Run {
    private final Abstraction scope;
    private final Analyses analyses;
    private final CfgHierarchy hierarchy;
    private final DominatorTree domTree;

    Run(Abstraction scope) {
      this.scope = scope;
      // Moving statements never adds, removes, or re-links a block, so the block-level dominator
      // trees and the CFG hierarchy stay valid for the whole run. Everything position-sensitive is
      // read from the IR when it's needed rather than cached.
      analyses =
          new Analyses(scope, CfgHierarchy.class, DominatorTree.class, CfgDominatorTree.class);
      hierarchy = analyses.get(CfgHierarchy.class);
      domTree = analyses.get(DominatorTree.class);
    }

    // --- Defer ----------------------------------------------------------------------------

    boolean deferAll() {
      var changed = false;

      // Targets are collected first and applied together. Several statements can want the same
      // target -- a `deopt` jump routinely reads more than one boxed register -- and moving them
      // one at a time puts each in front of the last, so they leapfrog forever and the enclosing
      // fixpoint sequence never settles.
      var placements = new LinkedHashMap<Instruction, List<Statement>>();
      for (var statement : matching(DEFER_RULES)) {
        var deferral = deferral(statement);
        if (deferral == null) {
          continue;
        }

        if (deferral.targets().size() > 1) {
          changed |= split(statement, deferral);
        }
        placements
            .computeIfAbsent(deferral.targets().getFirst(), _ -> new ArrayList<>())
            .add(statement);
      }

      for (var entry : placements.entrySet()) {
        changed |= placeBefore(entry.getKey(), new ArrayList<>(entry.getValue()));
      }
      return changed;
    }

    /// Where `statement` should sink to, or `null` if it can't be placed.
    private @Nullable Deferral deferral(Statement statement) {
      var assignee = statement.assignee();
      if (assignee == null || !assignee.isUsed()) {
        return null;
      }

      // The innermost CFG containing every use. A use nested in a promise is represented there by
      // the promise statement that (transitively) contains it.
      var targetCfg =
          assignee.uses().stream()
              .map(use -> Objects.requireNonNull(use.instruction().parentBB()).owner())
              .collect(hierarchy.commonAncestor())
              .orElse(null);
      if (targetCfg == null) {
        return null;
      }

      var usesAt = new LinkedHashMap<Instruction, List<Use>>();
      for (var use : List.copyOf(assignee.uses())) {
        var projected = hierarchy.projectInto(targetCfg, use.instruction());
        if (projected == null) {
          return null;
        }
        usesAt.computeIfAbsent(projected, _ -> new ArrayList<>()).add(use);
      }

      var cfgDom = analyses.get(targetCfg, CfgDominatorTree.class);

      // The use positions no other use position dominates. One target means a plain move; several
      // mean the uses are in branches that don't dominate each other, so the statement is copied
      // to each.
      var targets = new ArrayList<Instruction>();
      for (var position : usesAt.keySet()) {
        if (targets.stream().anyMatch(target -> cfgDom.dominates(target, position))) {
          continue;
        }
        targets.removeIf(target -> cfgDom.dominates(position, target));
        targets.add(position);
      }

      // Nothing may move to a position its own arguments don't reach. A use of the assignee is
      // always dominated by the statement, hence by its arguments, so this only bites on malformed
      // input -- but check every target before anything mutates, so a rejected one can't leave the
      // rest half-applied.
      for (var target : targets) {
        if (!argumentsDominate(statement, target)) {
          return null;
        }
      }

      return new Deferral(usesAt, targets, cfgDom);
    }

    /// Copy `statement` to each of its targets past the first, and point every use at the copy
    /// that reaches it.
    private boolean split(Statement statement, Deferral deferral) {
      var assignee = Objects.requireNonNull(statement.assignee());
      var targets = deferral.targets();

      // The first target keeps the original statement, so its register name survives; the rest get
      // copies with fresh names, inserted where they're needed.
      var registerAt = new LinkedHashMap<Instruction, Register>();
      registerAt.put(targets.getFirst(), assignee);
      for (var target : targets.subList(1, targets.size())) {
        var copy = statement.copy((_, argument) -> argument);
        var copyAssignee = Objects.requireNonNull(copy.assignee());
        // `copy` reuses the original's name, but register names must be unique within the version:
        // they name the register in the textual IR and in the generated C, so a duplicate makes
        // both ambiguous (C won't even compile).
        copyAssignee.rename(scope.freshName(assignee.name()));
        copy.insertBefore(target);
        registerAt.put(target, copyAssignee);
      }

      // Rewrite each use to the copy covering it, one use at a time. Rewriting by dominance over
      // the whole abstraction instead would have to re-derive which copy reaches which use, and
      // missing one -- a jump's phi arguments are easy to miss -- leaves a register referenced
      // where nothing defines it.
      for (var entry : deferral.usesAt().entrySet()) {
        var covering =
            targets.stream()
                .filter(target -> deferral.cfgDom().dominates(target, entry.getKey()))
                .findFirst()
                .orElseThrow();
        var register = registerAt.get(covering);
        if (register == assignee) {
          continue;
        }

        for (var use : entry.getValue()) {
          use.replaceWith(
              use.argument() instanceof Consume ? new Consume(register) : new Read(register));
        }
      }

      return true;
    }

    /// Move `statements` to just before `target`, keeping the ones already sitting there put.
    private boolean placeBefore(Instruction target, List<Statement> statements) {
      // Skip the run of statements already immediately before the target.
      var point = target;
      while (point.prev() instanceof Statement placed && statements.remove(placed)) {
        point = placed;
      }

      var changed = false;
      for (var statement : statements) {
        changed |= moveBefore(statement, point);
      }
      return changed;
    }

    // --- Hoist ----------------------------------------------------------------------------

    boolean hoistAll() {
      // Group by anchor: when several statements hoist to the same place, they have to keep their
      // relative order. Moved one at a time, each would land in front of the last, so they'd
      // reverse on every run and the enclosing fixpoint sequence would never settle.
      var byAnchor = new LinkedHashMap<Anchor, List<Statement>>();
      for (var statement : matching(HOIST_RULES)) {
        var anchor = hoistAnchor(statement);
        if (anchor != null) {
          byAnchor.computeIfAbsent(anchor, _ -> new ArrayList<>()).add(statement);
        }
      }

      var changed = false;
      for (var entry : byAnchor.entrySet()) {
        changed |= hoist(entry.getKey(), new ArrayList<>(entry.getValue()));
      }
      return changed;
    }

    private boolean hoist(Anchor anchor, List<Statement> statements) {
      var point = anchor.after() == null ? firstInstruction(anchor.bb()) : anchor.after().next();

      // Skip the run of statements already sitting where they'd be hoisted to.
      while (point instanceof Statement placed && statements.remove(placed)) {
        point = point.next();
      }

      var changed = false;
      for (var statement : statements) {
        changed |= moveBefore(statement, point);
      }
      return changed;
    }

    private @Nullable Anchor hoistAnchor(Statement statement) {
      var argumentRegisters =
          statement.args().stream().map(Argument::variable).filter(Objects::nonNull).toList();

      // Climb out of promises while no argument is defined in the current CFG.
      Instruction boundary = statement;
      var targetCfg = Objects.requireNonNull(statement.parentBB()).owner();
      var definingCfgs =
          argumentRegisters.stream()
              .map(Register::definingCfg)
              .filter(Objects::nonNull)
              .collect(Collectors.toSet());
      while (!definingCfgs.contains(targetCfg)) {
        var parent = hierarchy.parentPromise(targetCfg);
        if (parent == null) {
          return null;
        }
        boundary = parent;
        targetCfg = Objects.requireNonNull(parent.parentBB()).owner();
      }

      var cfgDom = analyses.get(targetCfg, CfgDominatorTree.class);
      var boundaryBb = Objects.requireNonNull(boundary.parentBB());
      var boundaryIndex = boundary.indexInBB();

      Anchor latest = null;
      for (var register : argumentRegisters) {
        var definingBb = register.definingBB();
        if (definingBb == null) {
          return null;
        }
        if (definingBb.owner() != targetCfg) {
          continue;
        }

        // A phi or parameter is "defined" at the start of its block, which no statement in that
        // block precedes.
        var candidate =
            register instanceof AssigneeOf a
                ? new Anchor(definingBb, a.statement())
                : new Anchor(definingBb, null);
        if (!cfgDom.dominates(candidate.bb(), candidate.index(), boundaryBb, boundaryIndex)) {
          return null;
        }

        if (latest == null || dominates(cfgDom, latest, candidate)) {
          latest = candidate;
        } else if (!dominates(cfgDom, candidate, latest)) {
          // Neither argument's definition reaches the other, so there's no single point after both.
          return null;
        }
      }

      return latest != null ? latest : new Anchor(targetCfg.entry(), null);
    }

    private static boolean dominates(CfgDominatorTree cfgDom, Anchor left, Anchor right) {
      return cfgDom.dominates(left.bb(), left.index(), right.bb(), right.index());
    }

    // --- Shared ---------------------------------------------------------------------------

    /// Every statement in the abstraction matching one of `rules`, in program order.
    ///
    /// Only statements with an assignee: one without is dead pure code for [Cleanup] to drop, and
    /// moving it is pure churn. It also can't be moved into a deopt branch, where the interpreter
    /// reverse-evaluates each `box`/`unbox` through its assignee and fails outright without one.
    private List<Statement> matching(List<Predicate<Statement>> rules) {
      return scope
          .streamCfgs()
          .flatMap(cfg -> cfg.bbs().stream())
          .flatMap(bb -> bb.statements().stream())
          .filter(statement -> statement.assignee() != null)
          .filter(statement -> rules.stream().anyMatch(rule -> rule.test(statement)))
          .toList();
    }

    /// Whether every register `statement` reads is defined somewhere that reaches `target`.
    private boolean argumentsDominate(Statement statement, Instruction target) {
      for (var argument : statement.args()) {
        var register = argument.variable();
        if (register == null) {
          continue;
        }
        if (register.definingBB() == null || !domTree.dominates(register, target)) {
          return false;
        }
      }
      return true;
    }

    /// Move `statement` to just before `point`, reporting whether that changed anything.
    ///
    /// [Instruction#moveBefore] is already a no-op when the statement is already there, but the
    /// caller still has to know: reporting "changed" for a move that didn't happen keeps the
    /// enclosing fixpoint sequence iterating until it hits its hard limit.
    private static boolean moveBefore(Statement statement, Instruction point) {
      if (statement == point || statement.next() == point) {
        return false;
      }
      statement.moveBefore(point);
      return true;
    }

    private static Instruction firstInstruction(BB bb) {
      return bb.statements().isEmpty() ? bb.jump() : bb.statements().getFirst();
    }
  }
}
