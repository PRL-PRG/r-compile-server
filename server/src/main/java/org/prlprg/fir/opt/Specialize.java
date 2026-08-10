package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.specialize.SpecializeOptimization;
import org.prlprg.fir.opt.specialize.SpecializeOptimization.DeferredInsertions;
import org.prlprg.fir.opt.specialize.SpecializeOptimization.NonLocalSpecializations;
import org.prlprg.fir.opt.specialize.SpecializeOptimization.Result;
import org.prlprg.util.Streams;

/// Groups [SpecializeOptimization]s (see [org.prlprg.fir.opt.specialize]).
public class Specialize implements AbstractionOptimization {
  private final String name;
  private final List<SpecializeOptimization> subOptimizations;
  private final AnalysisTypes analysisTypes;

  public Specialize(SpecializeOptimization subOptimization) {
    this(subOptimization.name(), subOptimization);
  }

  public Specialize(String name, SpecializeOptimization... subOptimizations) {
    this.name = name;
    this.subOptimizations = List.of(subOptimizations);
    this.analysisTypes =
        Arrays.stream(subOptimizations)
            .map(SpecializeOptimization::analyses)
            .reduce(new AnalysisTypes(InferType.class), AnalysisTypes::union);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public String toString() {
    return getClass().getSimpleName() + "[" + name + "]";
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    var analyses = new Analyses(abstraction, analysisTypes);
    var subOptimizations =
        this.subOptimizations.stream().filter(so -> so.shouldRun(abstraction, analyses)).toList();
    if (subOptimizations.isEmpty()) {
      return false;
    }

    var opt = new OnAbstraction(abstraction, feedback, analyses, subOptimizations);
    opt.run();
    return opt.changed;
  }

  /// A statement location `(bb, index)` in the specialization worklist. Stable during the fixpoint
  /// because sub-optimizations only replace statements in place (same index); insertions are
  /// deferred until after the fixpoint.
  private record Position(BB bb, int index) {}

  private static class OnAbstraction {
    final Abstraction scope;
    final AbstractionFeedback feedback;
    final Analyses analyses;
    final List<SpecializeOptimization> subOptimizations;
    boolean changed = false;

    public OnAbstraction(
        Abstraction scope,
        AbstractionFeedback feedback,
        Analyses analyses,
        List<SpecializeOptimization> subOptimizations) {
      this.scope = scope;
      this.feedback = feedback;
      this.analyses = analyses;
      this.subOptimizations = subOptimizations;
    }

    void run() {
      var orderedCfgs = scope.streamCfgs().toList();
      var cfgs =
          orderedCfgs.stream()
              .gather(Streams.mapWithIndex(Map::entry))
              .collect(
                  Collectors.toMap(
                      Map.Entry::getKey, Map.Entry::getValue, (a, _) -> a, LinkedHashMap::new));
      var changes =
          new TreeSet<>(
              Comparator.<Position>comparingInt(pos -> cfgs.get(pos.bb().owner()))
                  .thenComparing(Position::bb)
                  .thenComparingInt(Position::index));
      var deferredInsertions = new LinkedHashMap<BB, TreeMap<Integer, List<Runnable>>>();

      // Initially, run on every expression.
      //
      // Over the snapshot, not a fresh `scope.streamCfgs()`: a sub-optimization can add a CFG (a
      // new promise, say) while this loop runs, and a lazy re-stream would walk into it with
      // `analyses` -- and the `changes` comparator -- still only covering the CFGs that existed
      // when this pass started. The enclosing fixpoint sequence reruns with fresh analyses, so
      // whatever was added gets specialized on the next round.
      for (var cfg : orderedCfgs) {
        for (var bb : cfg.bbs()) {
          for (var i = 0; i < bb.statements().size(); i++) {
            var next = new Position(bb, i);

            // Remove from `changes` in case it was added by an earlier expression,
            // since we change it here.
            changes.remove(next);

            run(next, changes, deferredInsertions);
          }
        }
      }

      // Then, only run on expressions changed by other expressions, until there are no more.
      // This always reaches a fixpoint because types only get more specific.
      while (!changes.isEmpty()) {
        var next = changes.removeFirst();
        run(next, changes, deferredInsertions);
      }

      for (var subOptimization : subOptimizations) {
        changed |= subOptimization.finish(scope, analyses);
      }

      // Commit deferred insertions.
      // Must be after everything else, because it invalidates `analyses`.
      changed |= !deferredInsertions.isEmpty();
      // BB order doesn't matter
      for (var insertions : deferredInsertions.values()) {
        // Insert in reverse order so positions remain valid
        // (all changes must be local according to `DeferredInsertions#stage` javadoc).
        for (var indexOfSomeInsertions : insertions.descendingKeySet()) {
          // It may not matter, but
          // run insertions at the same position in the order they're staged.
          for (var insertion : insertions.get(indexOfSomeInsertions)) {
            insertion.run();
          }
        }
      }
    }

    void run(
        Position position,
        TreeSet<Position> changes,
        HashMap<BB, TreeMap<Integer, List<Runnable>>> deferredInsertions) {
      var bb = position.bb();
      var statementIndex = position.index();
      // Re-fetch the current statement at the position (a stored instruction reference may be
      // stale if an earlier specialization replaced it).
      var statement = bb.statements().get(statementIndex);

      var nonLocalAdapter =
          new NonLocalSpecializations() {
            @Override
            public void replace(Statement stmt, Expression newExpression) {
              if (stmt.expression().equals(newExpression)) {
                return;
              }

              // Swap the operation in place (keeping arguments).
              stmt.setExpression(newExpression);
              changed = true;

              // Update type if necessary
              trySpecializeType(stmt, changes);

              // Queue other analyses on `newExpression` (even if the type didn't change)
              var stmtBb = Objects.requireNonNull(stmt.parentBB());
              changes.add(new Position(stmtBb, stmt.indexInBB()));
            }
          };
      var deferredInsertionsAdapter =
          new DeferredInsertions() {
            @Override
            public void stage(Runnable insertion) {
              if (!deferredInsertions.containsKey(bb)) {
                deferredInsertions.put(bb, new TreeMap<>());
              }
              if (!deferredInsertions.get(bb).containsKey(statementIndex)) {
                deferredInsertions.get(bb).put(statementIndex, new ArrayList<>());
              }
              deferredInsertions.get(bb).get(statementIndex).add(insertion);
            }
          };

      // Specialize the statement, applying each sub-optimization's result in turn.
      for (var subOptimization : subOptimizations) {
        if (statement.isStandalone()) {
          // The statement was removed or forwarded by an earlier sub-optimization.
          break;
        }
        var result =
            subOptimization.run(
                bb,
                statementIndex,
                statement,
                scope,
                feedback,
                analyses,
                nonLocalAdapter,
                deferredInsertionsAdapter);
        switch (result) {
          case Result.Unchanged() -> {}
          case Result.SetExpression(var newExpression) -> {
            if (!newExpression.equals(statement.expression())) {
              statement.setExpression(newExpression);
              changed = true;
            }
          }
          case Result.Replace(var newExpression, var newArgs) -> {
            var oldAssignee = statement.assignee();
            var newStmt = new Statement(statement.comments(), newExpression, newArgs);
            if (oldAssignee != null) {
              var newAssignee = newStmt.setAssignee(oldAssignee.name(), oldAssignee.type());
              oldAssignee.substUsesWith(new Read(newAssignee));
            }
            statement.replaceWith(newStmt);
            statement = newStmt;
            changed = true;
          }
          case Result.ForwardResult(var argument) -> {
            var assignee = statement.assignee();
            if (assignee != null) {
              assignee.substUsesWith(argument);
            }
            statement.replaceWith(new Statement(new Noop()));
            changed = true;
          }
          case Result.Remove() -> {
            statement.replaceWith(new Statement(new Noop()));
            changed = true;
          }
        }
      }

      // If the type changed (even if the operation didn't), refine the register's declared type
      // and enqueue uses to be further specialized.
      if (!statement.isStandalone()) {
        trySpecializeType(statement, changes);
      }
    }

    private void trySpecializeType(Statement statement, TreeSet<Position> changes) {
      var assignee = statement.assignee();
      if (assignee == null) {
        return;
      }
      var oldType = scope.typeOf(assignee);
      var newType = analyses.get(InferType.class).of(statement);
      if (newType == null) {
        return;
      }
      newType = newType.withOwnership(oldType.ownership());
      specializeType(assignee, oldType, newType, changes);
    }

    void specializeType(
        Register assignee, @Nullable Type oldType, Type newType, TreeSet<Position> changes) {
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
                + assignee);
      }

      assignee.setType(newType);
      changed = true;

      for (var use : assignee.uses()) {
        var useInstr = use.instruction();

        switch (useInstr) {
          case Statement _ ->
              changes.add(
                  new Position(Objects.requireNonNull(useInstr.parentBB()), useInstr.indexInBB()));
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
                    .flatMap(Collection::stream)
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
