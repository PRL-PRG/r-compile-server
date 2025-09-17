package org.prlprg.fir.check;

import static org.prlprg.fir.ir.cfg.iterator.Dfs.dfs;

import java.util.Set;
import org.prlprg.fir.analyze.resolve.EnvironmentCount;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.util.Streams;

/// Verifies the following invariants:
/// - There's never a varying number of environments
/// - There's never a negative number of environments
/// - At every [Store] there's at least one environment
/// - At every [Return] there are 0 environments
/// - At every [Deopt] there's at least 1 environment
/// ([MkEnv](org.prlprg.fir.ir.expression.MkEnv) adds an environment, [PopEnv] removes one)
public class EnvironmentChecker extends Checker {
  @Override
  protected void doRun(Abstraction version) {
    new OnAbstraction(version).run();
  }

  private class OnAbstraction {
    final Abstraction scope;
    final EnvironmentCount environmentCount;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      environmentCount = new EnvironmentCount(scope);
    }

    void run() {
      scope.streamCfgs().forEach(this::run);
    }

    private void run(CFG cfg) {
      // Order doesn't matter, but we must only iterate reachable BBs
      for (var bb : dfs(cfg)) {
        run(bb);
      }
    }

    private void run(BB bb) {
      var predRanges =
          bb.predecessors().stream()
              .collect(
                  Streams.toImmutableMap(
                      BB::label, pred -> environmentCount.rangeAt(pred, pred.statements().size())));
      if (Set.copyOf(predRanges.values()).size() > 1) {
        report(bb, 0, "Predecessors have different numbers of environments: " + predRanges);
      }

      for (int i = 0; i < bb.statements().size(); i++) {
        run(bb, i, bb.statements().get(i));
      }
      run(bb, bb.statements().size(), bb.jump());
    }

    private void run(BB bb, int instructionIndex, Statement statement) {
      boolean hasEnv = environmentCount.hasEnvironmentAt(bb, instructionIndex - 1);

      switch (statement.expression()) {
        case PopEnv() when !hasEnv -> report(bb, instructionIndex, "No environment to pop");
        case Store(var _, var _) when !hasEnv ->
            report(bb, instructionIndex, "No environment to store into");
        default -> {}
      }
    }

    private void run(BB bb, int instructionIndex, Jump jump) {
      boolean hasEnv = environmentCount.hasEnvironmentAt(bb, instructionIndex - 1);

      switch (jump) {
        case Return(var _) when hasEnv && !bb.owner().isPromise() ->
            report(bb, instructionIndex, "Closure version return must exit with 0 environments");
        case Deopt(var _, var _) when !hasEnv ->
            report(bb, instructionIndex, "Deopt must exit with at least 1 environment");
        default -> {}
      }
    }
  }
}
