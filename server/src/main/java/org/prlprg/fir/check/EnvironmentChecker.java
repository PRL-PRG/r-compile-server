package org.prlprg.fir.check;

import static org.prlprg.fir.ir.cfg.iterator.BbDfs.bbDfs;

import java.util.Set;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.resolve.EnvironmentLiveness;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.parseprint.Printer;
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
  public String name() {
    return "env";
  }

  @Override
  protected void doRun(Abstraction version) {
    new OnAbstraction(version).run();
  }

  private class OnAbstraction {
    final Abstraction scope;
    final EnvironmentLiveness environmentLiveness;
    final Set<BB> reachableBbs;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      environmentLiveness = new EnvironmentLiveness(scope);
      reachableBbs =
          scope
              .streamCfgs()
              .<BB>mapMulti(
                  (cfg, acc) -> {
                    for (var bb : bbDfs(cfg)) {
                      acc.accept(bb);
                    }
                  })
              .collect(Collectors.toSet());
    }

    void run() {
      scope
          .streamCfgs()
          .flatMap(cfg -> cfg.bbs().stream())
          .filter(reachableBbs::contains)
          .forEach(this::run);
    }

    private void run(BB bb) {
      var predEnvs =
          bb.predecessors().stream()
              .filter(reachableBbs::contains)
              .collect(
                  Streams.toImmutableMap(
                      BB::label,
                      pred -> environmentLiveness.envsAt(pred, pred.statements().size())));
      if (Set.copyOf(predEnvs.values()).size() > 1) {
        var msg =
            Printer.use(
                p -> {
                  var w = p.writer();

                  w.write("Predecessors have different environments:\n");
                  for (var entry : predEnvs.entrySet()) {
                    w.write(entry.getKey());
                    w.write(':');
                    w.runIndented(
                        () -> {
                          for (var env : entry.getValue()) {
                            w.write("\n- ");
                            w.runIndented(() -> p.print(env));
                          }
                        });
                  }
                });

        report(bb, -1, msg);
      }

      for (int i = 0; i < bb.statements().size(); i++) {
        run(bb, i, bb.statements().get(i));
      }
      run(bb, bb.statements().size(), bb.jump());
    }

    private void run(BB bb, int instructionIndex, Statement statement) {
      boolean hasEnv = environmentLiveness.hasEnvironmentAt(bb, instructionIndex - 1);

      switch (statement.expression()) {
        case PopEnv _ when !hasEnv -> report(bb, instructionIndex, "No environment to pop");
        case Store _ when !hasEnv -> report(bb, instructionIndex, "No environment to store into");
        default -> {}
      }
    }

    private void run(BB bb, int instructionIndex, Jump jump) {
      boolean hasEnv = environmentLiveness.hasEnvironmentAt(bb, instructionIndex - 1);

      switch (jump) {
        case Return _ when hasEnv && !bb.owner().isPromise() ->
            report(bb, instructionIndex, "Closure version return must exit with 0 environments");
        case Deopt _ when !hasEnv ->
            report(bb, instructionIndex, "Deopt must exit with at least 1 environment");
        default -> {}
      }
    }
  }
}
