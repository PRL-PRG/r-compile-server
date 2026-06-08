package org.prlprg.fir.opt.aegraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.aegraph.data.AEGraph;

/// Cranelift's e-graph optimization: GVN, LICM, rewrites, materialization
public record AEGraphOptimization() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    var run = new Run(abstraction);
    run.run();
    return run.changed;
  }

  private static class Run {
    final Abstraction scope;
    final Analyses analyses;
    final OriginAnalysis origins;
    final DominatorTree domTree;
    final InferEffects inferEffects;

    final AEGraph<Expression, Argument> aeGraph;

    boolean changed = false;

    Run(Abstraction scope) {
      this.scope = scope;
      aeGraph = new AEGraph<>(new FIRAEInterface(scope));

      analyses = new Analyses(scope, OriginAnalysis.class, DominatorTree.class, InferEffects.class);
      origins = analyses.get(OriginAnalysis.class);
      domTree = analyses.get(DominatorTree.class);
      inferEffects = analyses.get(InferEffects.class);
    }

    void run() {
      // Stage 1: remove pure instructions from CFGs, add to aeGraph
      for (var bb : domTree.iterable()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          var stmt = bb.statements().get(i);
          if (inferEffects.of(stmt) != Effects.NONE) {
            continue;
          }

          // Remove and add to aegraph
          bb.replaceStatementAt(i, Statement.NOOP);
          var reusedAssignee =
              stmt.assignee() == null ? null : origins.resolve(new Read(stmt.assignee()));
          aeGraph.add(reusedAssignee, stmt.expression());
        }
      }
    }
  }
}
