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
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
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
/// A hoisted instruction is specifically hoisted immediately after the latest assignment of one
/// of its arguments. If the instruction is in a promise and every argument is in the enclosing
/// CFG, it's hoisted to the enclosing CFG.
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
    private final DominatorTree domTree;

    private final Map<Motion, Map<BB, TreeMap<Integer, Set<CfgPosition>>>> motions =
        new LinkedHashMap<>();

    Run(Abstraction scope) {
      // Setup
      this.scope = scope;
      analyses =
          new Analyses(
              scope,
              DefUses.class,
              CfgHierarchy.class,
              DominatorTree.class,
              CfgDominatorTree.class);
      defUses = analyses.get(DefUses.class);
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

                      var targets = deferTarget(origin);
                      for (var target : targets) {
                        defers
                            .computeIfAbsent(target.bb(), _ -> new TreeMap<>())
                            .computeIfAbsent(target.instructionIndex(), _ -> new LinkedHashSet<>())
                            .add(origin);
                      }
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

    private List<CfgPosition> deferTarget(CfgPosition origin) {
      var statement = (Statement) Objects.requireNonNull(origin.instruction());
      var assignee = statement.assignee();
      if (assignee == null) {
        return List.of();
      }

      var uses = defUses.uses(assignee);
      if (uses.isEmpty()) {
        return List.of();
      }

      var targetCfg =
          uses.stream()
              .map(pos -> pos.inInnermostCfg().cfg())
              .collect(hierarchy.commonAncestor())
              .orElse(null);
      if (targetCfg == null) {
        return List.of();
      }

      // Return all uses in `targetCfg` not dominated by other uses
      var domTree = domTree(targetCfg);
      var usesInCfg = new ArrayList<CfgPosition>();
      for (var nextUse : uses) {
        var nextUseInCfg = Objects.requireNonNull(nextUse.inCfg(targetCfg));

        // Don't add if dominated by a previously-added use
        if (usesInCfg.stream()
            .anyMatch(existingUse -> domTree.dominates(existingUse, nextUseInCfg))) {
          continue;
        }

        // Remove all previously-added uses dominated by it before adding
        usesInCfg.removeIf(existingUse -> domTree.dominates(nextUseInCfg, existingUse));

        usesInCfg.add(nextUseInCfg);
      }
      return usesInCfg;
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
            // Also ignore NOOPs, which may be previous hoists or defers.
            while (motionsToIndex.remove(new CfgPosition(bb, index + offset))
                || (index + offset >= 0
                    && index + offset < bb.statements().size()
                    && bb.statements().get(index + offset).equals(Statement.NOOP))) {
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

      var insertedAssignees = new HashSet<>();
      var substs = new DomineeSubstituter(domTree, scope);

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

              // We can defer the same instruction into multiple positions,
              // if none dominate each other.
              // This means we copy the instruction,
              // but since we use SSA,
              // we must rename the non-first assignees.
              var assignee = statement.assignee();
              if (assignee != null && !insertedAssignees.add(assignee)) {
                // Deferring a non-first time
                var assigneeType = scope.typeOf(assignee);
                // assigneeType is only `null` if the CFG is invalid
                if (assigneeType == null) {
                  continue;
                }

                var newAssignee = scope.addLocal(assignee.name(), assigneeType);
                substs.stage(assignee, new Read(newAssignee), new CfgPosition(bb, index));

                // Insert with substituted assignee
                var newStatement =
                    new Statement(statement.comments(), newAssignee, statement.expression());
                bb.insertStatement(index, newStatement);
              } else {
                // Regular insertion
                bb.insertStatement(index, statement);
              }

              changed = true;
            }
          }
        }
      }

      substs.commit();
    }
  }
}
