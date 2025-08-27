package org.prlprg.fir.opt.abstraction;

import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.analyze.OriginAnalysis;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.Substituter;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;

/// Optimization that uses origin analysis to:
/// 1. Replace variable loads with registers
/// 2. Substitute registers whose origin is another register or constant
/// 3. Inline forces, maybe-forces, and static calls when possible
public final class OriginOptimization implements AbstractionOptimization {
  @Override
  public boolean run(Abstraction abstraction) {
    // Run origin analysis
    var defUses = new DefUses(abstraction);
    var inferType = new InferType(abstraction);
    var inferEffects = new InferEffects(abstraction);
    var originAnalysis = new OriginAnalysis(abstraction, defUses, inferType, inferEffects);

    var changed = false;
    var substituter = new Substituter(abstraction);

    // Process each CFG in the abstraction
    for (var cfg : abstraction.streamCfgs().toList()) {
      changed |= processCfg(cfg, originAnalysis, defUses, inferType, inferEffects, substituter);
    }

    // Commit all substitutions at once
    substituter.commit();

    return changed;
  }

  private boolean processCfg(
      CFG cfg,
      OriginAnalysis originAnalysis,
      DefUses defUses,
      InferType inferType,
      InferEffects inferEffects,
      Substituter substituter) {
    var changed = false;
    var toInline = new ArrayList<InlineInfo>();

    for (var bb : cfg.bbs()) {
      for (int i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        var expr = stmt.expression();
        var assignee = stmt.assignee();

        // Step 1: Replace variable loads with registers
        if (expr instanceof Load(var variable)) {
          var origin = originAnalysis.get(bb, i, variable);
          if (origin != null) {
            bb.replaceStatementAt(i, new Statement(assignee, new Aea(origin)));
            changed = true;
          }
        } else if (expr instanceof LoadFun(var variable, var env)) {
          // LoadFun "sees through" bindings that aren't closures
          // We need to check if the variable has a known origin that's a function
          var origin = originAnalysis.get(bb, i, variable);
          if (origin != null) {
            // Only replace if the origin is appropriate for a function load
            // For now, we'll be conservative and only replace if it's a register
            if (origin instanceof Read) {
              bb.replaceStatementAt(i, new Statement(assignee, new Aea(origin)));
              changed = true;
            }
          }
        }

        // Step 2: Queue register substitutions
        if (assignee != null) {
          var origin = originAnalysis.get(assignee);
          if (!origin.equals(new Read(assignee))) {
            // The register has a different origin, queue substitution
            substituter.stage(assignee, origin);
            changed = true;
          }
        }

        // Step 3: Check for inlining opportunities
        switch (expr) {
          case Force(var value) ->
              checkForceInlining(
                  bb, i, stmt, value, originAnalysis, defUses, inferEffects, toInline);
          case MaybeForce(var value) ->
              checkMaybeForceInlining(
                  bb, i, stmt, value, originAnalysis, defUses, inferType, inferEffects, toInline);
          case Call call -> checkCallInlining(bb, i, stmt, call, inferEffects, toInline);
          default -> {}
        }
      }
    }

    // Perform inlining (in reverse order to maintain indices)
    for (int i = toInline.size() - 1; i >= 0; i--) {
      var info = toInline.get(i);
      performInlining(info);
      changed = true;
    }

    return changed;
  }

  private void checkForceInlining(
      BB bb,
      int index,
      Statement stmt,
      Argument value,
      OriginAnalysis originAnalysis,
      DefUses defUses,
      InferEffects inferEffects,
      List<InlineInfo> toInline) {
    // Get the origin of the value being forced
    var origin = originAnalysis.resolve(value);

    // Check if the origin was assigned a Promise expression
    if (origin instanceof Read(var r)
        && defUses.definitionExpression(r) instanceof Promise(var _, var effects, var code)
        && !effects.reflect()) {
      toInline.add(new InlineInfo(new CfgPosition(bb, index, stmt), code, List.of()));
    }
  }

  private void checkMaybeForceInlining(
      BB bb,
      int index,
      Statement stmt,
      Argument value,
      OriginAnalysis originAnalysis,
      DefUses defUses,
      InferType inferType,
      InferEffects inferEffects,
      List<InlineInfo> toInline) {
    // First check if the value is statically of value type
    if (value instanceof Read(var reg)) {
      var type = inferType.of(reg);
      if (type != null && type.kind() instanceof Kind.AnyValue()) {
        // Replace with the value directly (no inlining needed)
        bb.replaceStatementAt(index, new Statement(stmt.assignee(), new Aea(value)));
        return;
      }
    } else if (value instanceof Constant) {
      // Constants are always values
      bb.replaceStatementAt(index, new Statement(stmt.assignee(), new Aea(value)));
      return;
    }

    // Otherwise, check for promise inlining like Force
    checkForceInlining(bb, index, stmt, value, originAnalysis, defUses, inferEffects, toInline);
  }

  private void checkCallInlining(
      BB bb,
      int index,
      Statement stmt,
      Call call,
      InferEffects inferEffects,
      List<InlineInfo> toInline) {
    // Check if the callee is static
    if (call.callee() instanceof StaticCallee(var function, var version)) {
      // Check if the version has no effects
      if (inferEffects.of(version.cfg()).equals(Effects.NONE)) {
        toInline.add(
            new InlineInfo(new CfgPosition(bb, index, stmt), version.cfg(), call.callArguments()));
      }
    }
  }

  private void performInlining(InlineInfo info) {
    inline(info.position, info.cfgToInline, info.arguments);
  }

  private record InlineInfo(
      CfgPosition position, CFG cfgToInline, List<? extends Argument> arguments) {}
}
