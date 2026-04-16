package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.TreeMap;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// Hoists and defers specific pure instructions.
///
/// TODO use documentation from unpushed
public final class SchedulePure implements AbstractionOptimization {
  private static final ImmutableList<Rule> HOIST_RULES = ImmutableList.of(matchRule(UNBOX_FUN));
  private static final ImmutableList<Rule> DEFER_RULES = ImmutableList.of(matchRule(BOX_FUN));

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;
    while (new Run(scope).changed) {
      changed = true;
    }
    return changed;
  }

  private static Rule matchRule(Function function) {
    return new Rule(
        function.name().toString(),
        statement ->
            statement.expression() instanceof Call(StaticFnCallee callee, _)
                && callee.function() == function);
  }

  private enum Motion {
    DEFER,
    HOIST,
  }

  private record Rule(String name, Predicate<Statement> matcher) {}

  private static final class Run {
    boolean changed = false;

    private final Abstraction scope;
    private final Analyses analyses;
    private final DefUses defUses;
    private final CfgHierarchy hierarchy;

    private final Map<Motion, Map<BB, TreeMap<Integer, Set<CfgPosition>>>> motions =
        new LinkedHashMap<>();

    Run(Abstraction scope) {
      // Setup
      this.scope = scope;
      analyses = new Analyses(scope, DefUses.class, CfgHierarchy.class, CfgDominatorTree.class);
      defUses = analyses.get(DefUses.class);
      hierarchy = analyses.get(CfgHierarchy.class);

      // Run
      collectMotions();
      removeRedundantMotions();
      applyMotions();
    }

    private CfgDominatorTree domTree(CFG cfg) {
      return analyses.get(cfg, CfgDominatorTree.class);
    }

    private void collectMotions() {
      var hoists = new LinkedHashMap<BB, TreeMap<Integer, Set<CfgPosition>>>();
      var defers = new LinkedHashMap<BB, TreeMap<Integer, Set<CfgPosition>>>();
      motions.put(Motion.HOIST, hoists);
      motions.put(Motion.DEFER, defers);

      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    var origin = new CfgPosition(bb, i, statement);

                    for (var rule : HOIST_RULES) {
                      if (!rule.matcher().test(statement)) {
                        continue;
                      }

                      var target = hoistTarget(origin);
                      if (target == null) {
                        continue;
                      }

                      hoists
                          .computeIfAbsent(target.bb(), _ -> new TreeMap<>())
                          .computeIfAbsent(target.instructionIndex(), _ -> new LinkedHashSet<>())
                          .add(origin);
                    }

                    for (var rule : DEFER_RULES) {
                      if (!rule.matcher().test(statement)) {
                        continue;
                      }

                      var target = deferTarget(origin);
                      if (target == null) {
                        continue;
                      }

                      defers
                          .computeIfAbsent(target.bb(), _ -> new TreeMap<>())
                          .computeIfAbsent(target.instructionIndex(), _ -> new LinkedHashSet<>())
                          .add(origin);
                    }
                  }
                }
              });
    }

    private @Nullable CfgPosition hoistTarget(CfgPosition origin) {
      var statement = (Statement) Objects.requireNonNull(origin.instruction());
      var argRegs =
          statement.arguments().stream().map(Argument::variable).filter(Objects::nonNull).toList();

      var boundary = origin;
      var targetCfg = origin.cfg();
      var innermostCfgs =
          argRegs.stream()
              .map(defUses::definition)
              .filter(Objects::nonNull)
              .map(pos -> pos.inInnermostCfg().cfg())
              .collect(Collectors.toSet());
      while (!innermostCfgs.contains(targetCfg)) {
        var parent = hierarchy.parent(targetCfg);
        if (parent == null) {
          return null;
        }

        boundary = parent;
        targetCfg = parent.cfg();
      }

      return latestDefinitionInCfg(argRegs, targetCfg, boundary);
    }

    private @Nullable CfgPosition latestDefinitionInCfg(
        List<Register> argRegs, CFG cfg, CfgPosition boundary) {
      CfgPosition latest = null;

      for (var argReg : argRegs) {
        var definition = defUses.definition(argReg);
        if (definition == null) {
          return null;
        }

        var innermostDefinition = definition.inInnermostCfg();
        if (innermostDefinition.cfg() != cfg) {
          continue;
        }
        if (!domTree(cfg).dominates(innermostDefinition, boundary)) {
          return null;
        }

        latest = laterOf(latest, innermostDefinition, domTree(cfg));
        if (latest == null) {
          return null;
        }
      }

      return latest != null ? latest : new CfgPosition(cfg.entry(), -1, null);
    }

    private @Nullable CfgPosition laterOf(
        @Nullable CfgPosition left, CfgPosition right, CfgDominatorTree domTree) {
      return left == null || domTree.dominates(left.bb(), right.bb())
          ? right
          : domTree.dominates(right.bb(), left.bb()) ? left : null;
    }

    private @Nullable CfgPosition deferTarget(CfgPosition origin) {
      var statement = (Statement) Objects.requireNonNull(origin.instruction());
      var assignee = statement.assignee();
      if (assignee == null) {
        return null;
      }

      var uses = defUses.uses(assignee);
      if (uses.isEmpty()) {
        return null;
      }

      var targetCfg =
          uses.stream()
              .map(pos -> pos.inInnermostCfg().cfg())
              .collect(hierarchy.commonAncestor())
              .orElse(null);
      if (targetCfg == null) {
        return null;
      }

      var usesInCfg = uses.stream().map(use -> use.inCfg(targetCfg)).toList();
      return latestPlacementBeforeUses(targetCfg, usesInCfg);
    }

    private @Nullable CfgPosition latestPlacementBeforeUses(CFG cfg, List<CfgPosition> uses) {
      if (uses.isEmpty()) {
        return null;
      }

      var domTree = domTree(cfg);
      var commonDominators = new LinkedHashSet<>(domTree.dominators(uses.getFirst().bb()));
      for (var use : uses.subList(1, uses.size())) {
        commonDominators.retainAll(domTree.dominators(use.bb()));
      }
      var targetBb = commonDominators.stream().max(domTree.comparator()).orElse(null);
      if (targetBb == null) {
        return null;
      }

      var firstUseIndex = targetBb.statements().size();
      for (var use : uses) {
        if (use.bb() == targetBb) {
          firstUseIndex = Math.min(firstUseIndex, use.instructionIndex());
        }
      }

      return new CfgPosition(targetBb, firstUseIndex);
    }

    private void removeRedundantMotions() {
      for (var motionEntry : motions.entrySet()) {
        var motionType = motionEntry.getKey();
        var offset =
            switch (motionType) {
              case HOIST -> 1;
              case DEFER -> -1;
            };

        for (var bbEntry : motionEntry.getValue().entrySet()) {
          var bb = bbEntry.getKey();

          // Keep nicer order by hoisting after and deferring before removed redundant motions
          var motionsToNewIndex = new TreeMap<Integer, Set<CfgPosition>>();

          for (var indexEntry : bbEntry.getValue().entrySet()) {
            int index = indexEntry.getKey();
            var motionsToIndex = indexEntry.getValue();

            // If a hoisted instruction is immediately after where it will be hoisted,
            // or a deferred instruction immediately before where it will be deferred,
            // the hoist or defer is redundant, so don't apply it.
            while (motionsToIndex.remove(new CfgPosition(bb, index + offset))) {
              index += offset;
            }

            if (motionsToNewIndex.containsKey(index)) {
              motionsToNewIndex.get(index).addAll(motionsToIndex);
            } else {
              motionsToNewIndex.put(index, motionsToIndex);
            }
          }

          bbEntry.setValue(motionsToNewIndex);
        }
      }
    }

    private void applyMotions() {
      // To avoid insertion offsets, replace with NOOP instead of delete,
      // then insert in reverse order
      for (var motionsOfType : motions.values()) {
        for (var motionsToBb : motionsOfType.values()) {
          for (var motionsToIndex : motionsToBb.values()) {
            for (var motion : motionsToIndex) {
              // Takes advantage of the fact that [CfgPosition]'s statement remains unchanged:
              // inserts it later
              motion.replaceWith(Statement.NOOP);
            }
          }
        }
      }

      for (var motionEntry : motions.entrySet()) {
        var motionType = motionEntry.getKey();
        for (var bbEntry : motionEntry.getValue().entrySet()) {
          var bb = bbEntry.getKey();
          // Iterate backwards because earlier insertions offset later ones
          for (var indexEntry : bbEntry.getValue().sequencedEntrySet().reversed()) {
            int index = indexEntry.getKey();
            var motionsToIndex = indexEntry.getValue();

            for (var motion : motionsToIndex) {
              var statement = (Statement) Objects.requireNonNull(motion.instruction());

              // Insert after the target for hoist, before for defer
              if (motionType == Motion.HOIST) {
                index++;
              }
              bb.insertStatement(index, statement);

              changed = true;
            }
          }
        }
      }
    }
  }
}
