package org.prlprg.fir.opt.abstraction;

import static org.prlprg.fir.ir.cfg.cursor.CFGInliner.inline;

import java.util.ArrayList;
import org.prlprg.fir.analyze.generic.ScopeAnalysis;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticCallee;
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
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;

/// Optimization that uses scope analysis to:
/// 1. Replace variable loads with registers when the source is known
/// 2. Substitute registers whose source is another register or constant
/// 3. Inline forces, maybe-forces, and static calls under certain conditions
public final class ScopeOptimization implements AbstractionOptimization {

  @Override
  public boolean run(Abstraction abstraction) {
    var analysis = new ScopeAnalysis(abstraction);
    var substituter = new Substituter(abstraction);
    var madeProgress = false;

    // Collect positions to inline (we'll do this after substitutions to avoid invalidating
    // positions)
    var inlinePositions = new ArrayList<CfgPosition>();

    // Process each CFG in the abstraction
    for (var cfg : abstraction.streamCfgs().toList()) {
      for (var bb : cfg.bbs()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          var statement = bb.statements().get(i);
          var assignee = statement.assignee();
          var expression = statement.expression();
          var state = analysis.at(bb, i);

          // Step 1: Replace variable loads with registers
          switch (expression) {
            case Load(var variable) -> {
              var source = state.getVariableSource(variable);
              if (source != null) {
                bb.replaceStatementAt(i, new Statement(assignee, new Aea(source)));
                madeProgress = true;
              }
            }
            case LoadFun(var variable, var env) -> {
              // Function loads see through bindings that aren't closures
              var source = state.getVariableSource(variable);
              if (source != null) {
                // Check if the source is not a closure binding
                bb.replaceStatementAt(i, new Statement(assignee, new Aea(source)));
                madeProgress = true;
              }
            }
            default -> {}
          }

          // Step 2: Queue register substitutions
          switch (expression) {
            case Aea(var value) when value instanceof Read(var register) -> {
              var source = state.getRegisterSource(register);
              if (source != null && !source.equals(value)) {
                substituter.stage(assignee, source);
                madeProgress = true;
              }
            }
            default -> {}
          }

          // Step 3: Collect inlining opportunities
          switch (expression) {
            case Force(var value) when value instanceof Read(var register) -> {
              var source = state.getRegisterSource(register);
              if (source instanceof Read(var sourceReg)) {
                // Check if the source register was assigned a Promise with no effects
                var sourceStatement = findStatementAssigningRegister(abstraction, sourceReg);
                if (sourceStatement != null
                    && sourceStatement.expression()
                        instanceof Promise(var valueType, var effects, var code)
                    && effects.equals(Effects.NONE)) {
                  inlinePositions.add(new CfgPosition(bb, i, statement));
                }
              }
            }
            case MaybeForce(var value) when value instanceof Read(var register) -> {
              var source = state.getRegisterSource(register);
              if (source instanceof Read(var sourceReg)) {
                // Check if the source register was assigned a Promise with no effects
                var sourceStatement = findStatementAssigningRegister(abstraction, sourceReg);
                if (sourceStatement != null
                    && sourceStatement.expression()
                        instanceof Promise(var valueType, var effects, var code)
                    && effects.equals(Effects.NONE)) {
                  inlinePositions.add(new CfgPosition(bb, i, statement));
                } else {
                  // Check if the origin is statically of value type
                  var sourceType = getRegisterType(abstraction, sourceReg);
                  if (sourceType != null && isValueType(sourceType)) {
                    // Replace with just the origin
                    bb.replaceStatementAt(i, new Statement(assignee, new Aea(value)));
                    madeProgress = true;
                  }
                }
              }
            }
            case Call call when call.callee()
                instanceof StaticCallee(var function, var version) -> {
              // Check if the version has no effects
              if (version.signature().effects().equals(Effects.NONE)) {
                inlinePositions.add(new CfgPosition(bb, i, statement));
              }
            }
            default -> {}
          }
        }
      }
    }

    // Step 2: Commit substitutions
    if (!substituter.isEmpty()) {
      substituter.commit();
    }

    // Step 3: Perform inlining (after substitutions to avoid position invalidation)
    for (var position : inlinePositions) {
      var statement = (Statement) position.instruction();
      switch (statement.expression()) {
        case Force(var value) when value instanceof Read(var register) -> {
          var sourceStatement = findStatementAssigningRegister(abstraction, register);
          if (sourceStatement != null
              && sourceStatement.expression()
                  instanceof Promise(var valueType, var effects, var code)) {
            inline(code, position);
            madeProgress = true;
          }
        }
        case MaybeForce(var value) when value instanceof Read(var register) -> {
          var sourceStatement = findStatementAssigningRegister(abstraction, register);
          if (sourceStatement != null
              && sourceStatement.expression()
                  instanceof Promise(var valueType, var effects, var code)) {
            inline(code, position);
            madeProgress = true;
          }
        }
        case Call call when call.callee() instanceof StaticCallee(var function, var version) -> {
          inline(version.cfg(), position);
          madeProgress = true;
        }
        default -> {}
      }
    }

    return madeProgress;
  }

  private Statement findStatementAssigningRegister(
      Abstraction abstraction, org.prlprg.fir.ir.variable.Register register) {
    for (var cfg : abstraction.streamCfgs().toList()) {
      for (var bb : cfg.bbs()) {
        for (var statement : bb.statements()) {
          if (statement.assignee().equals(register)) {
            return statement;
          }
        }
      }
    }
    return null;
  }

  private Type getRegisterType(
      Abstraction abstraction, org.prlprg.fir.ir.variable.Register register) {
    // This would require type analysis - for now, return null
    return null;
  }

  private boolean isValueType(Type type) {
    return !(type.kind() instanceof Kind.Promise) && type.concreteness() == Concreteness.DEFINITE;
  }
}
