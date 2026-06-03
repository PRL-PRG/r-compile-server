package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Promotes local named variables into registers when every direct load is statically known.
///
/// This is effectively a conservative mem2reg pass:
/// - It only operates in the main CFG, never across promises.
/// - It requires every direct local load to have a known origin.
/// - It inserts phi parameters only at dominance-frontier merge points whose incoming origins
///   are statically known and different.
/// - It skips abstractions with reflective effects, since reflective operations may observe the
///   local environment and make dead-store elimination unsound.
public final class PromoteStaticallyKnownVariables implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    var cfg = abstraction.cfg();
    if (cfg == null) {
      return false;
    }

    var changed = false;
    while (true) {
      var pass = new OnAbstraction(abstraction, cfg);
      var promoted = pass.promoteNextVariable();
      changed |= promoted;
      if (!promoted) {
        return changed;
      }
    }
  }

  private static final class OnAbstraction {
    private final Abstraction scope;
    private final CFG cfg;
    private final InferEffects inferEffects;

    private OnAbstraction(Abstraction scope, CFG cfg) {
      this.scope = scope;
      this.cfg = cfg;
      inferEffects = new InferEffects(scope);
    }

    boolean promoteNextVariable() {
      if (hasReflectiveEffects()) {
        return false;
      }

      var analyses = new Analyses(scope, OriginAnalysis.class, CfgDominatorTree.class);
      var originAnalysis = analyses.get(OriginAnalysis.class);
      var dominatorTree = analyses.get(cfg, CfgDominatorTree.class);
      var dominanceFrontier = dominanceFrontier(dominatorTree);

      for (var candidate : collectCandidates(originAnalysis).values()) {
        promote(candidate, originAnalysis, dominatorTree, dominanceFrontier);
        return true;
      }

      return false;
    }

    private boolean hasReflectiveEffects() {
      for (var bb : cfg.bbs()) {
        for (var statement : bb.statements()) {
          if (inferEffects.of(statement.expression()).reflect()) {
            return true;
          }
        }
      }
      return false;
    }

    private Map<NamedVariable, Candidate> collectCandidates(OriginAnalysis originAnalysis) {
      var candidates = new LinkedHashMap<NamedVariable, Candidate>();
      var forbidden = new LinkedHashSet<NamedVariable>();

      for (var someCfg : scope.streamCfgs().toList()) {
        for (var bb : someCfg.bbs()) {
          for (var i = 0; i < bb.statements().size(); i++) {
            var expression = bb.statements().get(i).expression();

            switch (expression) {
              case Store(var storeType, var variable, var value)
                  when storeType == StoreType.LOCAL_VAR -> {
                if (someCfg != cfg) {
                  forbidden.add(variable);
                  continue;
                }

                var resolved = originAnalysis.resolve(value);
                if (!isPromotableOrigin(resolved)) {
                  forbidden.add(variable);
                  continue;
                }

                candidates.computeIfAbsent(variable, Candidate::new).addStore(bb);
              }
              case Load(var loadType, var variable)
                  when loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN -> {
                if (someCfg != cfg) {
                  forbidden.add(variable);
                  continue;
                }

                var origins = originAnalysis.getPossible(bb, i, variable);
                if (origins.isEmpty()
                    || origins.stream().anyMatch(origin -> !isPromotableOrigin(origin))
                    || (loadType == LoadType.LOCAL_FUN
                        && origins.stream().anyMatch(origin -> !isClosure(origin)))) {
                  forbidden.add(variable);
                  continue;
                }

                candidates.computeIfAbsent(variable, Candidate::new).addLoad();
              }
              case ReflectiveLoad(var _, var variable) -> forbidden.add(variable);
              case ReflectiveStore(var _, var variable, var _) -> forbidden.add(variable);
              case org.prlprg.fir.ir.expression.Assume(var assumption) -> {
                switch (assumption) {
                  case AssumeLoadFun(var variable, var _) -> forbidden.add(variable);
                  case AssumeLoadVar(var variable, var _) -> forbidden.add(variable);
                  case AssumeConstant _, AssumeFunction _, AssumeType _ -> {}
                }
              }
              default -> {}
            }
          }
        }
      }

      forbidden.forEach(candidates::remove);
      candidates
          .values()
          .removeIf(candidate -> !candidate.hasLoads() || candidate.storeBlocks().isEmpty());
      return candidates;
    }

    private boolean isPromotableOrigin(Argument origin) {
      return origin instanceof Read || origin instanceof Constant;
    }

    private boolean isClosure(Argument origin) {
      var type = scope.typeOf(origin);
      return type != null && type.isSubtypeOf(Type.CLOSURE);
    }

    private void promote(
        Candidate candidate,
        OriginAnalysis originAnalysis,
        CfgDominatorTree dominatorTree,
        Map<BB, Set<BB>> dominanceFrontier) {
      var variable = candidate.variable();
      var phiBlocks = phiBlocks(candidate, originAnalysis, dominanceFrontier);
      var phis = appendPhis(variable, phiBlocks, originAnalysis);
      rename(cfg.entry(), variable, null, phis, originAnalysis, dominatorTree);
      scope.setLocalType(variable, Type.ANY_SEXP);
    }

    private Set<BB> phiBlocks(
        Candidate candidate, OriginAnalysis originAnalysis, Map<BB, Set<BB>> dominanceFrontier) {
      var result = new LinkedHashSet<BB>();
      var worklist = new ArrayDeque<>(candidate.storeBlocks());
      var visited = new LinkedHashSet<>(candidate.storeBlocks());

      while (!worklist.isEmpty()) {
        var bb = worklist.removeFirst();
        for (var frontierBb : dominanceFrontier.getOrDefault(bb, Set.of())) {
          if (originAnalysis.getPossible(frontierBb, -1, candidate.variable()).size() <= 1
              || !result.add(frontierBb)) {
            continue;
          }
          if (visited.add(frontierBb)) {
            worklist.addLast(frontierBb);
          }
        }
      }

      return result;
    }

    private Map<BB, Register> appendPhis(
        NamedVariable variable, Set<BB> phiBlocks, OriginAnalysis originAnalysis) {
      var phis = new LinkedHashMap<BB, Register>();

      for (var bb : cfg.bbs()) {
        if (!phiBlocks.contains(bb)) {
          continue;
        }

        var phiType =
            originAnalysis.getPossible(bb, -1, variable).stream()
                .map(scope::typeOf)
                .reduce(
                    Type.ANY_SEXP,
                    (left, right) -> Type.union(left, right == null ? Type.ANY_SEXP : right));
        var phi = scope.addLocal(variable.name(), phiType);
        bb.appendPhiParameter(phi);
        phis.put(bb, phi);
      }

      return phis;
    }

    private void rename(
        BB bb,
        NamedVariable variable,
        @Nullable Argument current,
        Map<BB, Register> phis,
        OriginAnalysis originAnalysis,
        CfgDominatorTree dominatorTree) {
      if (phis.containsKey(bb)) {
        current = new Read(phis.get(bb));
      }

      for (var i = 0; i < bb.statements().size(); i++) {
        var statement = bb.statements().get(i);
        current = rewriteStatement(bb, i, statement, variable, current, originAnalysis);
      }

      if (!phis.isEmpty()) {
        var jump = appendPhiArguments(bb.jump(), current, phis);
        if (!jump.equals(bb.jump())) {
          bb.setJump(jump);
        }
      }

      for (var child :
          dominatorTree.immediateDominees(bb).stream()
              .sorted(Comparator.comparing(BB::label))
              .toList()) {
        rename(child, variable, current, phis, originAnalysis, dominatorTree);
      }
    }

    private @Nullable Argument rewriteStatement(
        BB bb,
        int index,
        Statement statement,
        NamedVariable variable,
        @Nullable Argument current,
        OriginAnalysis originAnalysis) {
      return switch (statement.expression()) {
        case Load(var loadType, var loaded)
            when loaded.equals(variable)
                && (loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN) -> {
          if (current == null) {
            throw new IllegalStateException(
                "Missing promoted value for " + variable + " in " + bb.label());
          }
          bb.replaceStatementAt(index, statement.withExpression(new Aea(current)));
          yield current;
        }
        case Store(var storeType, var stored, var value)
            when storeType == StoreType.LOCAL_VAR && stored.equals(variable) -> {
          var resolved = originAnalysis.resolve(value);
          if (!isPromotableOrigin(resolved)) {
            throw new IllegalStateException(
                "Unexpected non-promotable origin while promoting " + variable + ": " + resolved);
          }
          bb.replaceStatementAt(index, new Statement(statement.comments(), new Noop()));
          yield resolved;
        }
        default -> current;
      };
    }

    private Jump appendPhiArguments(Jump jump, @Nullable Argument current, Map<BB, Register> phis) {
      return jump.mapTargets(
          target -> {
            var phi = phis.get(target.bb());
            if (phi == null) {
              return target;
            }
            if (current == null) {
              throw new IllegalStateException(
                  "Missing promoted value for phi " + phi + " on edge to " + target.bb().label());
            }
            var phiArgs =
                ImmutableList.<Argument>builderWithExpectedSize(target.phiArgs().size() + 1);
            phiArgs.addAll(target.phiArgs());
            phiArgs.add(current);
            return new Target(target.bb(), phiArgs.build());
          });
    }

    private Map<BB, Set<BB>> dominanceFrontier(CfgDominatorTree dominatorTree) {
      var frontier = new LinkedHashMap<BB, Set<BB>>();
      for (var bb : cfg.bbs()) {
        frontier.put(bb, new LinkedHashSet<>());
      }

      for (var bb : cfg.bbs()) {
        if (bb.predecessors().size() < 2) {
          continue;
        }

        var immediateDominator = dominatorTree.immediateDominator(bb);
        for (var predecessor : bb.predecessors()) {
          for (var runner = predecessor;
              runner != null && runner != immediateDominator;
              runner = dominatorTree.immediateDominator(runner)) {
            frontier.get(runner).add(bb);
          }
        }
      }

      return frontier;
    }
  }

  private static final class Candidate {
    private final NamedVariable variable;
    private final LinkedHashSet<BB> storeBlocks = new LinkedHashSet<>();
    private int loads = 0;

    private Candidate(NamedVariable variable) {
      this.variable = variable;
    }

    NamedVariable variable() {
      return variable;
    }

    void addStore(BB bb) {
      storeBlocks.add(bb);
    }

    void addLoad() {
      loads++;
    }

    boolean hasLoads() {
      return loads > 0;
    }

    Set<BB> storeBlocks() {
      return storeBlocks;
    }
  }
}
