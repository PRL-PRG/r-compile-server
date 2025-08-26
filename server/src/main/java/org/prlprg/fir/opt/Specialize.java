package org.prlprg.fir.opt;

import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import java.util.TreeSet;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.specialize.SpecializeOptimization;
import org.prlprg.util.Streams;

/// Groups [SpecializeOptimization]s (see [org.prlprg.fir.opt.specialize]).
public class Specialize implements Optimization {
  private final List<SpecializeOptimization> subOptimizations;
  private final AnalysisTypes analysisTypes;

  public Specialize(SpecializeOptimization... subOptimizations) {
    this.subOptimizations = List.of(subOptimizations);
    this.analysisTypes =
        Arrays.stream(subOptimizations)
            .map(SpecializeOptimization::analyses)
            .reduce(new AnalysisTypes(DefUses.class, InferType.class), AnalysisTypes::union);
  }

  @Override
  public void run(Function function, Abstraction version) {
    version
        .streamScopes()
        .forEach(
            abstraction -> {
              var analyses = new Analyses(abstraction, analysisTypes);
              var subOptimizations =
                  this.subOptimizations.stream()
                      .filter(so -> so.shouldRun(abstraction, analyses))
                      .toList();
              if (subOptimizations.isEmpty()) {
                return;
              }

              new OnAbstraction(abstraction, analyses, subOptimizations).run();
            });
  }

  private record OnAbstraction(
      Abstraction scope, Analyses analyses, List<SpecializeOptimization> subOptimizations) {
    void run() {
      var changes = new TreeSet<CfgPosition>();

      // Initially, run on every expression.
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var next = new CfgPosition(bb, i, bb.statements().get(i));

                    // Remove from `changes` in case it was added by an earlier expression,
                    // since we change it here.
                    changes.remove(next);

                    run(next, changes);
                  }
                }
              });

      // Then, only run on expressions changed by other expressions, until there are no more.
      // This always reaches a fixpoint because types only get more specific.
      while (!changes.isEmpty()) {
        var next = changes.removeFirst();
        run(next, changes);
      }
    }

    void run(CfgPosition position, TreeSet<CfgPosition> changes) {
      var bb = position.bb();
      var statementIndex = position.instructionIndex();
      var oldStmt =
          (Statement)
              Objects.requireNonNull(position.instruction(), "only adds statements to changes");
      var assignee = oldStmt.assignee();
      var expr = oldStmt.expression();

      // Specialize `expr`.
      for (var subOptimization : subOptimizations) {
        expr = subOptimization.run(expr, scope, analyses);
      }

      // If actually specialized...
      if (expr != oldStmt.expression()) {
        // ...replace statement...
        var newStmt = new Statement(assignee, expr);
        bb.replaceStatementAt(statementIndex, newStmt);

        // ...and if the type changed, enqueue uses to be further specialized.
        var oldType = analyses.get(InferType.class).of(oldStmt.expression());
        var newType = analyses.get(InferType.class).of(expr);
        if (assignee != null && newType != null) {
          specializeType(assignee, oldType, newType, changes);
        }
      }
    }

    void specializeType(
        Register assignee, @Nullable Type oldType, Type newType, TreeSet<CfgPosition> changes) {
      if (oldType != null && oldType.equals(newType)) {
        // No specialization occurred.
        return;
      }

      if (oldType != null && !newType.isSubtypeOf(oldType)) {
        throw new IllegalStateException(
            "A specialized expression's type must always subtype the original's:"
                + "\nOriginal type: "
                + oldType
                + "\nCurrent type: "
                + newType
                + "\n"
                + analyses.get(DefUses.class).definitions(assignee).stream()
                    .findFirst()
                    .orElse(null));
      }

      scope.setLocalType(assignee, newType);

      for (var use : analyses.get(DefUses.class).uses(assignee)) {
        // The position in the innermost CFG is all we care about.
        var use1 = use.inInnermostCfg();

        switch (Objects.requireNonNull(use1.instruction(), "phis are never uses")) {
          case Statement _ -> changes.add(use1);
          case Jump jump -> {
            // If it's a phi argument, try to refine the phi type.
            for (var target : jump.targets()) {
              var successor = target.bb();
              for (var i = 0; i < target.phiArgs().size(); i++) {
                var argument = target.phiArgs().get(i);
                if (!argument.equals(new Read(assignee))) {
                  continue;
                }

                var phi = successor.phiParameters().get(i);

                // Recompute the phi's best type (union of its arguments' types), then specialize.
                // This always reaches a fixpoint because phi types only get more specific.
                var oldPhiType = scope.typeOf(phi);
                int i1 = i;
                successor.predecessors().stream()
                    .map(
                        pred ->
                            pred.jump().targets().stream()
                                .filter(t -> t.bb() == successor)
                                .collect(
                                    Streams.oneOrThrow(
                                        () ->
                                            new AssertionError(
                                                "BB isn't a successor of its predecessor: predecessor = "
                                                    + pred.label()
                                                    + ", successor = "
                                                    + successor.label()
                                                    + "\n"
                                                    + successor.owner()))))
                    .map(t -> t.phiArgs().get(i1))
                    .map(scope::typeOf)
                    .reduce(Type::union)
                    .ifPresent(newPhiType -> specializeType(phi, oldPhiType, newPhiType, changes));
              }
            }
          }
        }
      }
    }
  }
}
