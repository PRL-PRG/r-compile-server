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
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.specialize.SpecializeOptimization;

/// Groups [SpecializeOptimization]s (see [org.prlprg.fir.opt.specialize]).
public class Specialize implements AbstractionOptimization {
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
  public boolean run(Abstraction abstraction) {
    var analyses = new Analyses(abstraction, analysisTypes);
    var subOptimizations =
        this.subOptimizations.stream().filter(so -> so.shouldRun(abstraction, analyses)).toList();
    if (subOptimizations.isEmpty()) {
      return false;
    }

    var opt = new OnAbstraction(abstraction, analyses, subOptimizations);
    opt.run();
    return opt.changed;
  }

  private static class OnAbstraction {
    final Abstraction scope;
    final Analyses analyses;
    final List<SpecializeOptimization> subOptimizations;
    boolean changed = false;

    public OnAbstraction(
        Abstraction scope, Analyses analyses, List<SpecializeOptimization> subOptimizations) {
      this.scope = scope;
      this.analyses = analyses;
      this.subOptimizations = subOptimizations;
    }

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

      for (var subOptimization : subOptimizations) {
        subOptimization.finish(scope, analyses);
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

      // If actually specialized, replace statement
      if (!expr.equals(oldStmt.expression())) {
        var newStmt = new Statement(assignee, expr);
        bb.replaceStatementAt(statementIndex, newStmt);
        changed = true;
      }

      // If the type changed (even if the expression didn't),
      // change the register's explicit type and enqueue uses to be further specialized.
      if (assignee != null) {
        var oldType = scope.typeOf(assignee);
        if (oldType != null) {
          var newType = analyses.get(InferType.class).of(expr);
          if (newType != null) {
            newType = newType.withOwnership(oldType.ownership());
            specializeType(assignee, oldType, newType, changes);
          }
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
      changed = true;

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
                var arguments = successor.phiArguments(i);

                // Recompute the phi's best type (union of its arguments' types), then specialize.
                // This always reaches a fixpoint because phi types only get more specific.
                var oldPhiType = scope.typeOf(phi);
                arguments.stream()
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
