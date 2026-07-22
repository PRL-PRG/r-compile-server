package org.prlprg.fir.opt.specialize;

import java.util.List;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.util.Strings;

/// An optimization that replaces individual statements with those that are faster and/or have
/// better types (see [org.prlprg.fir.opt.specialize]).
public interface SpecializeOptimization {
  default String name() {
    return Strings.pascalCaseToCamelCase(getClass().getSimpleName());
  }

  /// Analyses this optimization may use.
  AnalysisTypes analyses();

  /// If `false`, skips running the optimization on the abstraction.
  default boolean shouldRun(Abstraction scope, Analyses analyses) {
    return true;
  }

  /// Inspect `statement` (its operation via [Statement#expression()] and operands via
  /// [Statement#arg(int)]) and return how to transform it (see [Result]).
  ///
  /// This is not allowed to insert or remove instructions directly. Instead, insert instructions
  /// via `defer` (which runs after all other specializations), and remove/forward this statement
  /// by returning the appropriate [Result].
  Result run(
      BB bb,
      int index,
      Statement statement,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer);

  default boolean finish(Abstraction scope, Analyses analyses) {
    return false;
  }

  /// How a [#run] call transforms its statement.
  sealed interface Result {
    /// Leave the statement unchanged.
    Result UNCHANGED = new Unchanged();

    /// Remove the statement (its result, if any, must already be unused).
    Result REMOVE = new Remove();

    record Unchanged() implements Result {}

    /// Swap the statement's operation, keeping its arguments and assignee. The new expression must
    /// use the same argument layout.
    record SetExpression(Expression expression) implements Result {}

    /// Replace the statement's operation *and* arguments (a different argument layout), keeping its
    /// assignee.
    record Replace(Expression expression, List<Argument> args) implements Result {}

    /// Forward the statement's result to `argument` (substitute every use of its assignee) and
    /// remove it. Only valid for an assigning statement.
    record ForwardResult(Argument argument) implements Result {}

    record Remove() implements Result {}
  }

  interface NonLocalSpecializations {
    /// Replace `statement`'s operation, keeping its arguments.
    void replace(Statement statement, Expression newExpression);
  }

  interface DeferredInsertions {
    /// `insertion` must be local or it may conflict with other modifications.
    ///
    /// Specifically, `insertion` must not insert any instruction in an existing BB outside `bb`
    /// (it can create new BBs) or before `index` (it can insert at `index` i.e. prepend).
    void stage(Runnable insertion);
  }
}
