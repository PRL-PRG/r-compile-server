package org.prlprg.fir.opt.aegraph;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.module.Function;
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
    final DominatorTree domTree;
    final DefUses defUses;

    final AEGraph<Expression, Argument> aeGraph;

    boolean changed = false;

    Run(Abstraction scope) {
      this.scope = scope;
      aeGraph = new AEGraph<>(new FIRAEInterface(scope));

      analyses = new Analyses(scope, DominatorTree.class, DefUses.class);
      domTree = analyses.get(DominatorTree.class);
      defUses = analyses.get(DefUses.class);
    }

    void run() {
      // Stage 1: remove pure instructions from CFGs, add to aeGraph
      for (var bb : domTree.iterable()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          // TODO
        }
      }
    }
  }
}
