package org.prlprg.fir.analyze.type;

import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.generic.AbstractInterpretation;
import org.prlprg.fir.analyze.type.Provenance.ActionSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

/// Compute which registers are read, written, `use`d, or captured at any point in a [CFG].
///
/// Effectively a general liveness analysis with extra information to enforce provenance
/// invariants (registers that are `use`d can't be read afterward or captured anywhere).
///
/// Unlike [InferType] and [InferEffects], this analysis isn't on-demand: constructing runs the
/// full analysis, then [Provenance#at(BB, int)] and [Provenance#returnState()] queries the results.
public final class Provenance extends AbstractInterpretation<ActionSet> implements Analysis {
  private final HashSet<List<Object>> reported = new HashSet<>();
  private final @Nullable Reporter reporter;

  @AnalysisConstructor
  public Provenance(Abstraction scope) {
    this(scope, null);
  }

  /// Creates and runs the analysis, reporting issues to `reporter`.
  public Provenance(Abstraction scope, @Nullable Reporter reporter) {
    super(scope);
    this.reporter = reporter;

    // Parameters are initially written to.
    var entryFlow = new ActionSet();
    entryFlow.write.addAll(Lists.mapLazy(scope.parameters(), Parameter::variable));

    run(entryFlow);
  }

  @Override
  protected AbstractInterpretation<ActionSet>.OnCfg mkOnCfg(CFG cfg) {
    return new OnCfg(cfg);
  }

  /// An abstract interpretation over a [CFG].
  private class OnCfg extends AbstractInterpretation<ActionSet>.OnCfg {
    OnCfg(CFG cfg) {
      super(cfg);
    }

    @Override
    protected void runEntry(BB bb) {
      for (var phi : bb.phiParameters()) {
        if (state().use.contains(phi)) {
          report("Write after use: ", phi);
        }
      }
      state().write.addAll(bb.phiParameters());
    }

    @Override
    protected void run(Statement statement) {
      var expr = statement.expression();
      var assignee = statement.assignee();

      run(expr);

      if (assignee != null) {
        // Check and update flow state
        if (state().use.contains(assignee)) {
          report("Write after use: ", assignee);
        }
        state().write.add(assignee);
      }
    }

    void run(Expression expression) {
      if (expression instanceof Promise(var _, var _, var promiseCode)) {
        var promiseAnalysis = onCfg(promiseCode);

        promiseAnalysis.run(state());

        var returnState = promiseAnalysis.returnState();
        if (returnState != null) {
          state().mergePromise(returnState);
        }
      } else {
        for (var argument : expression.arguments()) {
          run(argument);
        }
      }
    }

    void run(Argument argument) {
      switch (argument) {
        case Constant(var _) -> {}
        // Ensure register is written before read
        case Read(var variable) -> {
          if (!state().write.contains(variable)) {
            report("Read before write: ", variable);
          }
          if (state().use.contains(variable)) {
            report("Read after use: ", variable);
          }
          state().read.add(variable);
        }
        // Ensure register is written before use, and not used or captured.
        case Use(var register) -> {
          if (!state().write.contains(register)) {
            report("Use before write: ", register);
          }
          if (state().use.contains(register)) {
            report("Use after use: ", register);
          }
          if (state().capture.contains(register)) {
            report("Use after capture: ", register);
          }
          state().read.add(register);
          state().use.add(register);
        }
      }
    }

    @Override
    protected void run(Jump jump) {
      for (var argument : jump.arguments()) {
        run(argument);
      }
    }

    void report(Object... message) {
      if (reporter == null) {
        return;
      }

      // Prevent the same message from being reported multiple times.
      // Use `Arrays#asList` for structural equality and hashing.
      if (reported.add(Arrays.asList(message))) {
        reporter.report(bb(), instructionIndex(), message);
      }
    }
  }

  @FunctionalInterface
  public interface Reporter {
    void report(BB bb, int instructionIndex, Object... message);
  }

  public static class ActionSet implements AbstractInterpretation.State<ActionSet> {
    final Set<Register> read = new HashSet<>();
    final Set<Register> write = new HashSet<>();
    final Set<Register> use = new HashSet<>();
    final Set<Register> capture = new HashSet<>();

    @Override
    public ActionSet copy() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.write.addAll(write);
      clone.use.addAll(use);
      clone.capture.addAll(capture);
      return clone;
    }

    /// Unifies requirements and intersects guarantees.
    ///
    /// `read`, `use`, and `defer` are requirements, `write` is a guarantee.
    @Override
    public void merge(ActionSet other) {
      read.addAll(other.read);
      write.retainAll(other.write);
      use.addAll(other.use);
      capture.addAll(other.capture);
    }

    /// Unifies requirements, and adds *all* registers touched by the promise to `capture`.
    ///
    /// This is the stateful analogue to the formalism's compose operator.
    ///
    /// `read`, `use`, and `defer` are requirements, `write` is a guarantee.
    public void mergePromise(ActionSet promise) {
      read.addAll(promise.read);
      use.addAll(promise.use);
      capture.addAll(promise.read);
      capture.addAll(promise.write);
      capture.addAll(promise.use);
      capture.addAll(promise.capture);
    }

    @Override
    public boolean equals(Object o) {
      if (!(o instanceof ActionSet actionSet)) {
        return false;
      }
      return Objects.equals(read, actionSet.read)
          && Objects.equals(write, actionSet.write)
          && Objects.equals(use, actionSet.use)
          && Objects.equals(capture, actionSet.capture);
    }

    @Override
    public int hashCode() {
      return Objects.hash(read, write, use, capture);
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("( read =");
      p.print(read);
      w.write("\n, write =");
      p.print(write);
      w.write("\n, use =");
      p.print(use);
      w.write("\n, capture =");
      p.print(capture);
      w.write("\n)");
    }
  }
}
