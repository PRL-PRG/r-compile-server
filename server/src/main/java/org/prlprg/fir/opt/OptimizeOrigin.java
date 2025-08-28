package org.prlprg.fir.opt;

import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;
import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;
import static org.prlprg.fir.ir.cfg.cursor.NamedVariablesOf.namedVariablesOf;
import static org.prlprg.fir.ir.cfg.cursor.ReverseDfs.reverseDfs;

import com.google.common.collect.Sets;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.InlineSubstituter;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Optimization that uses origin analysis to:
/// 1. Substitute registers whose origin is another register or constant
/// 2. Replace variable loads with registers
/// 3. Inline forces, maybe-forces, and static calls when possible
public record OptimizeOrigin(int maxInlineeSize) implements AbstractionOptimization {
  @Override
  public boolean run(Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  private class OnAbstraction {

    private final Abstraction abstraction;

    private final OriginAnalysis originAnalysis;
    private final DefUses defUses;
    private final InferType inferType;
    private Set<NamedVariable> namedVariables = Set.of();

    boolean changed = false;

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
      defUses = new DefUses(abstraction);
      inferType = new InferType(abstraction);
      var inferEffects = new InferEffects(abstraction);
      originAnalysis = new OriginAnalysis(abstraction, defUses, inferType, inferEffects);
    }

    void run() {
      // Substitute registers with their origins, and remove substituted assignees.
      var substituter = new Substituter(abstraction);
      substituter.stageAll(originAnalysis.registerOrigins());
      substituter.commit();

      // Replace instructions: simplify loads, maybe-forces, and calls where possible
      abstraction
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (int i = 0; i < bb.statements().size(); i++) {
                    tryReplace(bb, i);
                  }
                }
              });

      // Compute `namedVariables` here so we don't include ones we replaced.
      // We need it specifically for inlining.
      namedVariables = namedVariablesOf(abstraction);
      // Inline
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

    void tryReplace(BB bb, int statementIndex) {
      var stmt = bb.statements().get(statementIndex);
      var oldExpr = stmt.expression();
      var assignee = stmt.assignee();

      var newExpr =
          switch (oldExpr) {
              // Replace load with register if in-scope
            case Load(var variable) -> {
              var origin = originAnalysis.get(bb, statementIndex, variable);
              if (origin == null) {
                yield null;
              }
              yield new Aea(origin);
            }
              // Replace load with register if in-scope and definitely a closure
            case LoadFun(var variable, var env) -> {
              if (env != Env.LOCAL) {
                yield null;
              }
              var origin = originAnalysis.get(bb, statementIndex, variable);
              if (origin == null) {
                yield null;
              }
              // LoadFun "sees through" bindings that aren't closures, so we must check the type
              var type = inferType.of(origin);
              if (type == null || !type.isDefinitely(Kind.Closure.class)) {
                yield null;
              }
              yield new Aea(origin);
            }
              // Replace with value if definitely non-promise
            case MaybeForce(var value) -> {
              var type = inferType.of(value);
              if (type == null || !type.isDefinitely(Kind.AnyValue.class)) {
                yield null;
              }
              yield new Aea(value);
            }
              // Replace dynamic call to resolved expression with dispatch call
            case Call call -> {
              if (!(call.callee() instanceof DynamicCallee(var callee, var names))
                  || !names.isEmpty()) {
                yield null;
              }
              if (!(callee instanceof Read(var r))
                  || !(defUses.definitionExpression(r) instanceof Closure closure)) {
                yield null;
              }
              var newCallee = new DispatchCallee(closure.code(), null);
              yield new Call(newCallee, call.callArguments());
            }
            default -> null;
          };

      if (newExpr != null) {
        bb.replaceStatementAt(statementIndex, new Statement(assignee, newExpr));
        changed = true;
      }
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
      // Get the origin of the value being forced
      var origin = originAnalysis.resolve(forced);

      // Check if the origin is a non-reflective `Promise`
      if (!(origin instanceof Read(var r))
          || !(defUses.definitionExpression(r) instanceof Promise(var _, var effects, var code))
          || effects.reflect()) {
        return;
      }

      // Replace statement with inline
      bb.removeStatementAt(statementIndex);
      inline(code, bb, statementIndex - 1, assignee);
    }

    private void tryInlineCall(
        BB bb,
        int statementIndex,
        @Nullable Register assignee,
        Abstraction callee,
        List<Argument> arguments) {
      // Don't inline if:
      // - Callee is too big
      // - Callee and caller load or store the same named variable
      // - Callee has effects
      // - Argument and parameter count mismatch (invalid CFG)
      var instructionCount =
          callee
              .streamCfgs()
              .flatMap(cfg -> cfg.bbs().stream())
              .mapToInt(bb1 -> bb1.instructions().size())
              .sum();
      var calleeNamedVariables = namedVariablesOf(callee);
      if (instructionCount > maxInlineeSize
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
    }
  }
}
