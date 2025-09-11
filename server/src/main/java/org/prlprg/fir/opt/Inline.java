package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;
import static org.prlprg.fir.ir.cfg.cursor.NamedVariablesOf.namedVariablesOf;
import static org.prlprg.fir.ir.cfg.iterator.Dfs.dfs;

import com.google.common.collect.Sets;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.cfg.Reachability;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.InlineSubstituter;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGInliner;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Inline forces, maybe-forces, and static calls when possible.
public record Inline(int maxInlineeSize) implements AbstractionOptimization {
  @Override
  public boolean run(Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  private class OnAbstraction {
    private final Abstraction abstraction;

    private final Analyses analyses;
    private Set<NamedVariable> namedVariables;

    boolean changed = false;

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
      analyses =
          new Analyses(
              abstraction,
              new AnalysisTypes(
                  DominatorTree.class, Reachability.class, DefUses.class, OriginAnalysis.class));
      namedVariables = namedVariablesOf(abstraction);
    }

    private void recomputeAnalyses() {
      analyses.evict();
      namedVariables = namedVariablesOf(abstraction);
    }

    void run() {
      abstraction
          .streamCfgs()
          .forEach(
              cfg -> {
                // We run DFS to recursively try inlined code.
                // Then we don't need to repeat the analysis to reach a fixpoint.
                for (var bb : dfs(cfg)) {
                  for (int i = 0; i < bb.statements().size(); i++) {
                    tryInline(bb, i);
                  }
                }
              });
    }

    void tryInline(BB bb, int statementIndex) {
      var stmt = bb.statements().get(statementIndex);
      var expr = stmt.expression();
      var assignee = stmt.assignee();

      // Step 3: Check for inlining opportunities
      switch (expr) {
        case Force(var value) -> tryInlineForce(bb, statementIndex, assignee, value);
        case MaybeForce(var value) -> tryInlineForce(bb, statementIndex, assignee, value);
        case Call call when call.callee() instanceof StaticCallee(var _, var version) ->
            tryInlineCall(bb, statementIndex, assignee, version, call.callArguments());
        default -> {}
      }
    }

    private void tryInlineForce(
        BB bb, int statementIndex, @Nullable Register assignee, Argument forced) {
      var cfg = bb.owner();

      // Check if the origin is a non-reflective `Promise`
      var forcedExpr = analyses.get(OriginAnalysis.class).resolveExpression(forced);
      if (!(forcedExpr instanceof Promise(var valueType, var effects, var code))
          || effects.reflect()) {
        return;
      }
      var forcedReg = ((Read) analyses.get(OriginAnalysis.class).resolve(forced)).variable();

      // Check whether the promise has definitely, maybe, or definitely not been forced.
      // If it has definitely not been forced, also store the location of all other forces.
      Register dominator = null;
      var hasMaybeBeenForced = false;
      var otherForcePositions = new ArrayList<CfgPosition>();
      for (var use : analyses.get(DefUses.class).uses(forcedReg)) {
        var use1 = use.inCfg(cfg);
        var use2 = use.inInnermostCfg();
        if (use1 == null || (use1.bb() == bb && use1.instructionIndex() == statementIndex)) {
          continue;
        }

        if (!(use2.instruction() instanceof Statement(var useAssignee, var useExpr))
            || !(useExpr instanceof Force)) {
          continue;
        }

        // `use` is a force, and not this force.
        otherForcePositions.add(use2);

        if (cfg == use2.cfg()
            && analyses
                .get(cfg, DominatorTree.class)
                .dominates(use1.bb(), use1.instructionIndex(), bb, statementIndex)) {
          // `use` will definitely occur before this force.
          hasMaybeBeenForced = true;
          dominator = useAssignee;
        } else if (!analyses
                .get(cfg, DominatorTree.class)
                .dominates(bb, statementIndex, use1.bb(), use1.instructionIndex())
            && analyses
                .get(cfg, Reachability.class)
                .isReachable(use1.bb(), use1.instructionIndex(), bb, statementIndex)) {
          // this force may occur after `use` and may not occur before,
          // therefore `use` will maybe occur before this force.
          hasMaybeBeenForced = true;
        }
      }

      if (dominator != null) {
        // This will never evaluate, so replace with the dominator.
        bb.replaceStatementAt(
            statementIndex, new Statement(assignee, new Aea(new Read(dominator))));
      } else if (!hasMaybeBeenForced) {
        // This will always evaluate, so replace statement with inline,
        // and convert all other forces into reads.

        // First, if there are other forces, we need to assign this force's result to a register,
        // so they can read it.
        if (!otherForcePositions.isEmpty() && assignee == null) {
          assignee = abstraction.addLocal(valueType);
        }

        // Now, convert all other forces into reads before we inline,
        // because that will corrupt the CFG positions.
        for (var forcePos : otherForcePositions) {
          var forceStmt = (Statement) Objects.requireNonNull(forcePos.instruction());
          forcePos.replaceWith(new Statement(forceStmt.assignee(), new Aea(new Read(assignee))));
        }

        // Finally, replace the statement with inline.
        bb.removeStatementAt(statementIndex);
        inline(code, bb, statementIndex - 1, assignee);
      }
    }

    private void tryInlineCall(
        BB bb,
        int statementIndex,
        @Nullable Register assignee,
        Abstraction callee,
        List<Argument> arguments) {
      // Don't inline if:
      // - Callee is caller (recursive)
      // - Callee calls itself (another recursive case)
      // - Callee has effects
      // - Callee is a placeholder
      // - Callee is too big
      // - Callee and caller load or store the same named variable
      // - Argument and parameter count mismatch (invalid CFG)
      var isPlaceholder =
          callee.cfg().bbs().size() == 1
              && callee.cfg().entry().statements().isEmpty()
              && callee.cfg().entry().jump() instanceof Unreachable;
      var instructionCount =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .mapToInt(bb1 -> bb1.instructions().size())
              .sum();
      var callsItself =
          callee
              .streamScopes()
              .flatMap(Abstraction::streamCfgs)
              .flatMap(cfg -> cfg.bbs().stream())
              .flatMap(bb1 -> bb1.statements().stream())
              .anyMatch(
                  s ->
                      s.expression() instanceof Call call
                          && call.callee() instanceof StaticCallee(var _, var target)
                          && target == callee);
      var variablesClash = !Sets.intersection(namedVariablesOf(callee), namedVariables).isEmpty();
      if (callee == abstraction
          || callee.effects().reflect()
          || isPlaceholder
          || instructionCount > maxInlineeSize
          || callsItself
          || variablesClash
          || callee.parameters().size() != arguments.size()) {
        return;
      }

      // Add local types of named variables we're going to import from `callee`.
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof NamedVariable nv)) {
          continue;
        }
        abstraction.setLocalType(nv, local.type());
      }

      // Copy `callee` (since these are in-place mutations), then prepare it for inlining:
      // substitute parameters with arguments, and substitute locals with new locals.
      var body = new Abstraction(abstraction.module(), List.of());
      for (var parameter : callee.parameters()) {
        body.addLocal(new Local(parameter.variable(), parameter.type()));
      }
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof Register _)) {
          continue;
        }
        body.addLocal(local);
      }
      copyFrom(body.cfg(), callee.cfg());
      var localSubstituter = new InlineSubstituter(body);
      for (var local : callee.locals()) {
        if (!(local.variable() instanceof Register oldVariable)) {
          continue;
        }
        var type = local.type();
        var disambiguatedVariable = abstraction.addLocal(type);
        localSubstituter.stage(oldVariable, disambiguatedVariable);
      }
      localSubstituter.commit();
      var parameterSubstituter = new Substituter(body);
      for (int i = 0; i < callee.parameters().size(); i++) {
        var parameter = callee.parameters().get(i).variable();
        var argument = arguments.get(i);
        parameterSubstituter.stage(parameter, argument);
      }
      parameterSubstituter.commit();

      // Replace statement with inline
      bb.removeStatementAt(statementIndex);
      inline(body.cfg(), bb, statementIndex - 1, assignee);
    }

    private void inline(CFG cfg, BB bb, int statementIndex, @Nullable Register assignee) {
      CFGInliner.inline(cfg, bb, statementIndex, assignee);
      changed = true;
      recomputeAnalyses();
    }
  }
}
