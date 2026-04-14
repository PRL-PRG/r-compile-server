package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;

/// Schedules selected pure instructions by def/use placement rules.
///
/// Current rules:
/// - `r = box< X --> v1(X) >(r1)` is deferred to the latest position that still dominates every
///   use of `r`. If every use is inside the same child promise, the instruction is deferred into
///   that promise and the search repeats.
/// - `r = unbox< v1(X) --> X >(r1)` is hoisted to immediately after the latest direct definition
///   of one of its arguments. If none of its arguments are defined in the current promise, it is
///   hoisted out to the enclosing CFG before that promise and the search repeats.
///
/// The rule table is intentionally explicit so additional def/use-driven motion rules can be
/// added without changing the scheduling algorithm.
public final class DefUseScheduling implements AbstractionOptimization {
  private static final ImmutableList<Rule> RULES =
      ImmutableList.of(
          new Rule("defer-box", Motion.DEFER_TO_FIRST_USE, DefUseScheduling::matchBox),
          new Rule(
              "hoist-unbox",
              Motion.HOIST_AFTER_LATEST_ARGUMENT_DEFINITION,
              DefUseScheduling::matchUnbox));

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    return new OnAbstraction(scope).run();
  }

  private static @Nullable Match matchBox(Statement statement) {
    return matchConversion(statement, BOX_FUN);
  }

  private static @Nullable Match matchUnbox(Statement statement) {
    return matchConversion(statement, UNBOX_FUN);
  }

  private static @Nullable Match matchConversion(Statement statement, Function function) {
    return statement.expression() instanceof Call(StaticFnCallee callee, var arguments)
            && callee.function() == function
            && arguments.size() == 1
            && statement.assignee() != null
            && arguments.getFirst().variable() != null
        ? new Match(statement.assignee(), ImmutableList.of(arguments.getFirst().variable()))
        : null;
  }

  private enum Motion {
    DEFER_TO_FIRST_USE,
    HOIST_AFTER_LATEST_ARGUMENT_DEFINITION,
  }

  @FunctionalInterface
  private interface Matcher {
    @Nullable Match match(Statement statement);
  }

  private record Rule(String name, Motion motion, Matcher matcher) {}

  private record Match(Register assignee, ImmutableList<Register> argumentRegisters) {}

  private record InsertionPoint(BB bb, int instructionIndex) {}

  private record Analyses(CfgHierarchy hierarchy, DefUses defUses) {}

  private static final class OnAbstraction {
    private final Abstraction scope;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
    }

    boolean run() {
      var changed = false;
      while (moveOne()) {
        changed = true;
      }
      return changed;
    }

    private boolean moveOne() {
      var analyses = new Analyses(new CfgHierarchy(scope), new DefUses(scope));

      for (var motion :
          List.of(Motion.HOIST_AFTER_LATEST_ARGUMENT_DEFINITION, Motion.DEFER_TO_FIRST_USE)) {
        for (var cfg : scope.streamCfgs().toList()) {
          for (var bb : List.copyOf(cfg.bbs())) {
            for (var i = 0; i < bb.statements().size(); i++) {
              var statement = bb.statements().get(i);
              var origin = new CfgPosition(bb, i, statement);

              for (var rule : RULES) {
                if (rule.motion() != motion) {
                  continue;
                }

                var match = rule.matcher().match(statement);
                if (match == null) {
                  continue;
                }

                var target =
                    switch (rule.motion()) {
                      case DEFER_TO_FIRST_USE -> deferTarget(origin, match, analyses);
                      case HOIST_AFTER_LATEST_ARGUMENT_DEFINITION ->
                          hoistTarget(origin, match, analyses);
                    };
                if (target == null || isNoopMove(origin, target)) {
                  continue;
                }

                move(origin, target);
                return true;
              }
            }
          }
        }
      }

      return false;
    }

    private @Nullable InsertionPoint deferTarget(
        CfgPosition origin, Match match, Analyses analyses) {
      var uses = analyses.defUses().uses(match.assignee());
      if (uses.isEmpty()) {
        return null;
      }

      var targetCfg = deepestPromiseContainingAllUses(origin.cfg(), uses, analyses.hierarchy());
      if (targetCfg == null) {
        return null;
      }

      var effectiveUses = new ArrayList<CfgPosition>(uses.size());
      for (var use : uses) {
        var effectiveUse = use.inCfg(targetCfg);
        if (effectiveUse == null) {
          return null;
        }
        effectiveUses.add(effectiveUse);
      }

      return latestPlacementBeforeUses(targetCfg, effectiveUses);
    }

    private @Nullable CFG deepestPromiseContainingAllUses(
        CFG startCfg, Iterable<ScopePosition> uses, CfgHierarchy hierarchy) {
      var cfg = startCfg;
      while (true) {
        CfgPosition childContainingAllUses = null;
        for (var child : hierarchy.children(cfg)) {
          var childCfg = promiseBody(child);
          var containsAllUses = allUsesAreInside(uses, childCfg);
          if (containsAllUses) {
            childContainingAllUses = child;
            break;
          }
        }
        if (childContainingAllUses == null) {
          return cfg;
        }
        cfg = promiseBody(childContainingAllUses);
      }
    }

    private boolean allUsesAreInside(Iterable<ScopePosition> uses, CFG cfg) {
      for (var use : uses) {
        if (use.inCfg(cfg) == null) {
          return false;
        }
      }
      return true;
    }

    private @Nullable InsertionPoint latestPlacementBeforeUses(
        CFG cfg, List<CfgPosition> effectiveUses) {
      if (effectiveUses.isEmpty()) {
        return null;
      }

      var domTree = new CfgDominatorTree(cfg);
      var commonDominators = new LinkedHashSet<>(domTree.dominators(effectiveUses.getFirst().bb()));
      for (var use : effectiveUses.subList(1, effectiveUses.size())) {
        commonDominators.retainAll(domTree.dominators(use.bb()));
      }
      var targetBb = commonDominators.stream().max(domTree.comparator()).orElse(null);
      if (targetBb == null) {
        return null;
      }

      var firstUseIndex = targetBb.statements().size();
      for (var use : effectiveUses) {
        if (use.bb() == targetBb) {
          firstUseIndex = Math.min(firstUseIndex, use.instructionIndex());
        }
      }
      return new InsertionPoint(targetBb, firstUseIndex);
    }

    private @Nullable InsertionPoint hoistTarget(
        CfgPosition origin, Match match, Analyses analyses) {
      var boundary = origin;
      var targetCfg = origin.cfg();

      while (targetCfg.isPromise()
          && !hasAnyArgumentDefinitionInCfg(
              match.argumentRegisters(), targetCfg, analyses.defUses())) {
        var parent = analyses.hierarchy().parent(targetCfg);
        if (parent == null) {
          return null;
        }

        boundary = parent;
        targetCfg = parent.cfg();
      }

      var latestDefinition =
          latestDefinitionInCfg(match.argumentRegisters(), targetCfg, boundary, analyses.defUses());
      if (latestDefinition == null) {
        return null;
      }

      var insertIndex =
          latestDefinition.instructionIndex() < 0 ? 0 : latestDefinition.instructionIndex() + 1;
      if (latestDefinition.bb() == boundary.bb() && insertIndex > boundary.instructionIndex()) {
        return null;
      }

      return new InsertionPoint(latestDefinition.bb(), insertIndex);
    }

    private boolean hasAnyArgumentDefinitionInCfg(
        List<Register> argumentRegisters, CFG cfg, DefUses defUses) {
      for (var argument : argumentRegisters) {
        var definition = defUses.definition(argument);
        if (definition != null && definition.inInnermostCfg().cfg() == cfg) {
          return true;
        }
      }
      return false;
    }

    private @Nullable CfgPosition latestDefinitionInCfg(
        List<Register> argumentRegisters, CFG cfg, CfgPosition boundary, DefUses defUses) {
      var domTree = new CfgDominatorTree(cfg);
      CfgPosition latest = null;

      for (var argument : argumentRegisters) {
        var definition = defUses.definition(argument);
        if (definition == null) {
          return null;
        }

        var innermostDefinition = definition.inInnermostCfg();
        if (innermostDefinition.cfg() != cfg) {
          continue;
        }
        if (!domTree.dominates(innermostDefinition, boundary)) {
          return null;
        }

        latest = laterOf(latest, innermostDefinition, domTree);
        if (latest == null) {
          return null;
        }
      }

      return latest != null ? latest : new CfgPosition(cfg.entry(), -1, null);
    }

    private @Nullable CfgPosition laterOf(
        @Nullable CfgPosition left, CfgPosition right, CfgDominatorTree domTree) {
      if (left == null) {
        return right;
      }

      if (left.bb() == right.bb()) {
        return left.instructionIndex() >= right.instructionIndex() ? left : right;
      }
      if (domTree.dominates(left.bb(), right.bb())) {
        return right;
      }
      if (domTree.dominates(right.bb(), left.bb())) {
        return left;
      }

      return null;
    }

    private boolean isNoopMove(CfgPosition origin, InsertionPoint target) {
      return target.bb() == origin.bb()
          && adjustedInsertIndex(origin, target) == origin.instructionIndex();
    }

    private void move(CfgPosition origin, InsertionPoint target) {
      var statement = origin.bb().removeStatementAt(origin.instructionIndex());
      var insertIndex = adjustedInsertIndex(origin, target);
      target.bb().insertStatement(insertIndex, statement);
    }

    private int adjustedInsertIndex(CfgPosition origin, InsertionPoint target) {
      return target.bb() == origin.bb() && target.instructionIndex() > origin.instructionIndex()
          ? target.instructionIndex() - 1
          : target.instructionIndex();
    }

    private CFG promiseBody(CfgPosition promisePosition) {
      return ((Promise) ((Statement) promisePosition.instruction()).expression()).code();
    }
  }
}
