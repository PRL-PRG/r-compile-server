package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Objects;
import java.util.Set;
import java.util.TreeMap;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
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
/// A deferred instruction is specifically deferred to the latest position(s) that dominate
/// every use of its assignee and aren't themselves dominated by other possible positions. It's
/// copied if there are uses in branches that don't dominate each other. Iff every use is inside
/// a promise within the instruction's current CFG, the instruction is deferred into that
/// promise.
///
/// A hoisted instruction is specifically hoisted immediately after the latest assignment to one
/// of its arguments. If the instruction is in a promise and every argument is in the enclosing
/// CFG, it's hoisted to the enclosing CFG.
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

  private enum Motion {
    DEFER,
    HOIST,
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    return new Run(scope).changed;
  }

  /// A statement position `(bb, index)` within the abstraction. The captured [#statement] (if any)
  /// is a stable reference that survives code motion (the position's index may go stale, but the
  /// statement object doesn't). `index == -1` (with a `null` statement) is the "before all
  /// statements" boundary of a block.
  ///
  /// All [Pos] comparisons happen before any code motion is applied, where the statement at a
  /// position is fully determined by `(bb, index)` — so the record's structural equality on all
  /// three components matches identity on `(bb, index)`.
  private record Pos(BB bb, int index, @Nullable Statement statement) {
    Pos(BB bb, int index) {
      this(
          bb,
          index,
          index >= 0 && index < bb.statements().size() ? bb.statements().get(index) : null);
    }

    static Pos of(Instruction instruction) {
      var bb = Objects.requireNonNull(instruction.parentBB());
      return new Pos(bb, instruction.indexInBB(), instruction instanceof Statement s ? s : null);
    }

    CFG cfg() {
      return bb.owner();
    }
  }

  private static final class MotionsTo {
    final Map<Pos, Motion> motions = new LinkedHashMap<>();
    int hoistIndex;
    int deferIndex;
    // Instruction objects resolved from the indices before any move (so moves don't invalidate
    // them): hoisted statements go *after* `hoistAnchor`, deferred statements *before*
    // `deferAnchor`.
    @Nullable Instruction hoistAnchor;
    @Nullable Instruction deferAnchor;

    MotionsTo(int index) {
      hoistIndex = index;
      deferIndex = index;
    }
  }

  private static final class Run {
    boolean changed = false;

    private final Abstraction scope;
    private final Analyses analyses;
    private final CfgHierarchy hierarchy;
    private final DominatorTree domTree;

    private final Map<BB, TreeMap<Integer, MotionsTo>> targetToOrigin = new LinkedHashMap<>();
    private final Map<Pos, Set<Pos>> originToTarget = new LinkedHashMap<>();

    Run(Abstraction scope) {
      // Setup
      this.scope = scope;
      analyses =
          new Analyses(scope, CfgHierarchy.class, DominatorTree.class, CfgDominatorTree.class);
      hierarchy = analyses.get(CfgHierarchy.class);
      domTree = analyses.get(DominatorTree.class);

      // Run
      collectMotions();
      removeRedundantMotions();
      applyMotions();
    }

    private CfgDominatorTree domTree(CFG cfg) {
      return analyses.get(cfg, CfgDominatorTree.class);
    }

    private void collectMotions() {
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    var origin = new Pos(bb, i, statement);

                    for (var rule : HOIST_RULES) {
                      if (!rule.test(statement)) {
                        continue;
                      }

                      var target = hoistTarget(origin);
                      if (target == null) {
                        continue;
                      }

                      addMotion(Motion.HOIST, origin, target);
                    }

                    for (var rule : DEFER_RULES) {
                      if (!rule.test(statement)) {
                        continue;
                      }

                      var targets = deferTarget(origin);
                      for (var target : targets) {
                        addMotion(Motion.DEFER, origin, target);
                      }
                    }
                  }
                }
              });
    }

    private void addMotion(Motion motion, Pos origin, Pos target) {
      if (origin.equals(target)) {
        return;
      }

      if (originToTarget.containsKey(target)) {
        // If we have target → C, add origin → C instead
        for (var nextTarget : originToTarget.get(target)) {
          addMotion(motion, origin, nextTarget);
        }
      } else {
        // Do add (origin → target)
        var thisTargetToOrigin =
            targetToOrigin
                .computeIfAbsent(target.bb(), _ -> new TreeMap<>())
                .computeIfAbsent(target.index(), MotionsTo::new);
        thisTargetToOrigin.motions.put(origin, motion);
        originToTarget.computeIfAbsent(origin, _ -> new LinkedHashSet<>()).add(target);

        // Convert A → origin to A → target
        if (targetToOrigin.containsKey(origin.bb())
            && targetToOrigin.get(origin.bb()).containsKey(origin.index())) {
          var nextOrigins = targetToOrigin.get(origin.bb()).remove(origin.index());
          thisTargetToOrigin.motions.putAll(nextOrigins.motions);
          for (var nextOrigin : nextOrigins.motions.keySet()) {
            var nextOriginTo = Objects.requireNonNull(originToTarget.get(nextOrigin));
            nextOriginTo.remove(origin);
            nextOriginTo.add(target);
          }
        }
      }
    }

    private @Nullable Pos hoistTarget(Pos origin) {
      var statement = Objects.requireNonNull(origin.statement());
      var argRegs =
          statement.args().stream().map(Argument::variable).filter(Objects::nonNull).toList();

      var boundary = origin;
      var targetCfg = origin.cfg();
      var innermostCfgs =
          argRegs.stream()
              .map(Register::definingCfg)
              .filter(Objects::nonNull)
              .collect(Collectors.toSet());
      while (!innermostCfgs.contains(targetCfg)) {
        var parent = hierarchy.parentPromise(targetCfg);
        if (parent == null) {
          return null;
        }

        boundary = Pos.of(parent);
        targetCfg = Objects.requireNonNull(parent.parentBB()).owner();
      }

      return latestDefinitionInCfg(argRegs, targetCfg, boundary);
    }

    private @Nullable Pos latestDefinitionInCfg(List<Register> argRegs, CFG cfg, Pos boundary) {
      Pos latest = null;

      for (var argReg : argRegs) {
        var defBb = argReg.definingBB();
        if (defBb == null) {
          return null;
        }
        if (defBb.owner() != cfg) {
          continue;
        }

        var defPos = definitionPos(argReg, defBb);
        if (!domTree(cfg).dominates(defPos.bb(), defPos.index(), boundary.bb(), boundary.index())) {
          return null;
        }

        latest = laterOf(latest, defPos, domTree(cfg));
        if (latest == null) {
          return null;
        }
      }

      return latest != null ? latest : new Pos(cfg.entry(), -1, null);
    }

    /// The position of `reg`'s definition (whose block is known to be `defBb`): an [AssigneeOf]'s
    /// statement, or the block entry (`-1`) for a phi/parameter.
    private static Pos definitionPos(Register reg, BB defBb) {
      return reg instanceof AssigneeOf a
          ? new Pos(defBb, a.statement().indexInBB(), a.statement())
          : new Pos(defBb, -1, null);
    }

    private @Nullable Pos laterOf(@Nullable Pos left, Pos right, CfgDominatorTree domTree) {
      return left == null || domTree.dominates(left.bb(), right.bb())
          ? right
          : domTree.dominates(right.bb(), left.bb()) ? left : null;
    }

    private List<Pos> deferTarget(Pos origin) {
      var statement = Objects.requireNonNull(origin.statement());
      var assignee = statement.assignee();
      if (assignee == null) {
        return List.of();
      }

      var uses = assignee.uses();
      if (uses.isEmpty()) {
        return List.of();
      }

      var targetCfg =
          uses.stream()
              .map(use -> Objects.requireNonNull(use.instruction().parentBB()).owner())
              .collect(hierarchy.commonAncestor())
              .orElse(null);
      if (targetCfg == null) {
        return List.of();
      }

      // Return all uses in `targetCfg` not dominated by other uses
      var domTree = domTree(targetCfg);
      var usesInCfg = new ArrayList<Pos>();
      for (var use : uses) {
        var nextUseInCfg =
            Pos.of(Objects.requireNonNull(hierarchy.projectInto(targetCfg, use.instruction())));

        // Don't add if dominated by a previously-added use
        if (usesInCfg.stream()
            .anyMatch(
                existingUse ->
                    domTree.dominates(
                        existingUse.bb(), existingUse.index(),
                        nextUseInCfg.bb(), nextUseInCfg.index()))) {
          continue;
        }

        // Remove all previously-added uses dominated by it before adding
        usesInCfg.removeIf(
            existingUse ->
                domTree.dominates(
                    nextUseInCfg.bb(), nextUseInCfg.index(),
                    existingUse.bb(), existingUse.index()));

        usesInCfg.add(nextUseInCfg);
      }
      return usesInCfg;
    }

    private void removeRedundantMotions() {
      for (var bbEntry : targetToOrigin.entrySet()) {
        var bb = bbEntry.getKey();

        for (var motionsToIndex : bbEntry.getValue().values()) {
          // If a hoisted instruction is immediately after where it will be hoisted,
          // or a deferred instruction immediately before where it will be deferred,
          // the hoist or defer is redundant, so don't apply it.
          // Also ignore NOOPs, which may be previous hoists or defers.
          // Lastly, hoist after assumptions.
          // Store in [MotionsTo] to keep nicer order by still hoisting after and deferring
          // before the redundant motions.
          while (motionsToIndex.hoistIndex + 1 < bb.statements().size()
              && (motionsToIndex.motions.remove(
                      new Pos(bb, motionsToIndex.hoistIndex + 1), Motion.HOIST)
                  || bb.statements().get(motionsToIndex.hoistIndex + 1).expression() instanceof Noop
                  || bb.statements().get(motionsToIndex.hoistIndex + 1).expression()
                      instanceof Assume)) {
            motionsToIndex.hoistIndex++;
          }
          while (motionsToIndex.deferIndex - 1 >= 0
              && (motionsToIndex.motions.remove(
                      new Pos(bb, motionsToIndex.deferIndex - 1), Motion.DEFER)
                  || bb.statements().get(motionsToIndex.deferIndex - 1).expression()
                      instanceof Noop)) {
            motionsToIndex.deferIndex--;
          }
        }
      }
    }

    private void applyMotions() {
      var insertedAssignees = new HashSet<Register>();
      var substs = new DomineeSubstituter(domTree, scope);

      // Resolve target anchor instructions to objects before any move, since moves are by
      // instruction reference (not index) and so don't invalidate these.
      for (var bbEntry : targetToOrigin.entrySet()) {
        var bb = bbEntry.getKey();
        for (var motionsToIndex : bbEntry.getValue().values()) {
          motionsToIndex.hoistAnchor = instrAt(bb, motionsToIndex.hoistIndex);
          motionsToIndex.deferAnchor = instrAt(bb, motionsToIndex.deferIndex);
        }
      }

      for (var bbEntry : targetToOrigin.entrySet()) {
        var bb = bbEntry.getKey();
        for (var motionsToIndex : bbEntry.getValue().values()) {
          // Hoisted statements move to just after `hoistAnchor` (i.e. before its successor).
          var hoistPoint = Objects.requireNonNull(motionsToIndex.hoistAnchor).next();
          motionsToIndex.motions.entrySet().stream()
              .filter(e -> e.getValue() == Motion.HOIST)
              .map(Entry::getKey)
              .forEach(
                  hoist -> {
                    var statement = Objects.requireNonNull(hoist.statement());
                    statement.moveBefore(hoistPoint);
                    changed = true;
                  });

          var deferPoint = Objects.requireNonNull(motionsToIndex.deferAnchor);
          motionsToIndex.motions.entrySet().stream()
              .filter(e -> e.getValue() == Motion.DEFER)
              .map(Entry::getKey)
              .forEach(
                  defer -> {
                    var statement = Objects.requireNonNull(defer.statement());

                    // We can defer the same instruction into multiple positions if none dominate
                    // each other. This means we copy the instruction; since we use SSA, the copy
                    // gets a fresh assignee, and we substitute it in at the defer position.
                    var assignee = statement.assignee();
                    if (assignee != null && !insertedAssignees.add(assignee)) {
                      var copy = statement.copy((idx, a) -> a);
                      var newAssignee = Objects.requireNonNull(copy.assignee());
                      substs.stage(assignee, new Read(newAssignee), bb, motionsToIndex.deferIndex);
                      copy.insertBefore(deferPoint);
                    } else {
                      statement.moveBefore(deferPoint);
                    }

                    changed = true;
                  });
        }
      }

      substs.commit();
    }

    private static Instruction instrAt(BB bb, int index) {
      var statements = bb.statements();
      return index < statements.size() ? statements.get(index) : bb.jump();
    }
  }
}
