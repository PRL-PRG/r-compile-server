package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;
import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.cursor.NamedVariablesOf.namedVariablesOf;
import static org.prlprg.fir.ir.cfg.iterator.ReverseDfs.reverseDfs;

import com.google.common.collect.Sets;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.InlineSubstituter;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
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

    private final OriginAnalysis originAnalysis;
    private final Set<NamedVariable> namedVariables;

    boolean changed = false;

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
      originAnalysis = new OriginAnalysis(abstraction);
      namedVariables = namedVariablesOf(abstraction);
    }

    void run() {
      abstraction
          .streamCfgs()
          .forEach(
              cfg -> {
                // Do reverse-DFS because inlines affect later positions.
                for (var bb : reverseDfs(cfg)) {
                  for (int i = bb.statements().size() - 1; i >= 0; i--) {
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
      // Check if the origin is a non-reflective `Promise`
      if (!(originAnalysis.resolveExpression(forced)
              instanceof Promise(var _, var effects, var code))
          || effects.reflect()) {
        return;
      }

      // Replace statement with inline
      bb.removeStatementAt(statementIndex);
      inline(code, bb, statementIndex - 1, assignee);
      changed = true;
    }

    private void tryInlineCall(
        BB bb,
        int statementIndex,
        @Nullable Register assignee,
        Abstraction callee,
        List<Argument> arguments) {
      // Don't inline if:
      // - Callee is too big
      // - Callee has a placeholder expression
      // - Callee and caller load or store the same named variable
      // - Callee has effects
      // - Argument and parameter count mismatch (invalid CFG)
      var instructionCount =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .mapToInt(bb1 -> bb1.instructions().size())
              .sum();
      var hasPlaceholder =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .flatMap(bb1 -> bb1.statements().stream())
              .anyMatch(s -> s.expression() instanceof Placeholder);
      var calleeNamedVariables = namedVariablesOf(callee);
      if (instructionCount > maxInlineeSize
          || hasPlaceholder
          || !Sets.intersection(calleeNamedVariables, namedVariables).isEmpty()
          || callee.effects().reflect()
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
      var parameterSubstituter = new Substituter(body);
      for (int i = 0; i < callee.parameters().size(); i++) {
        var parameter = callee.parameters().get(i).variable();
        var argument = arguments.get(i);
        parameterSubstituter.stage(parameter, argument);
      }
      parameterSubstituter.commit();
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

      // Replace statement with inline
      bb.removeStatementAt(statementIndex);
      inline(body.cfg(), bb, statementIndex - 1, assignee);
      changed = true;
    }
  }
}
