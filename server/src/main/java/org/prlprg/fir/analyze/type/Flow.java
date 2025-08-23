package org.prlprg.fir.analyze.type;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.Stack;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Pair;

/// Compute the enforced liveness of registers within a [CFG].
public final class Flow {
  private final Abstraction scope;
  private final Map<CFG, OnCfg> analyses = new HashMap<>();
  private final Reporter reporter;

  @FunctionalInterface
  public interface Reporter {
    void report(BB bb, int instructionIndex, Object... message);
  }

  public Flow(Abstraction scope, Reporter reporter) {
    this.scope = scope;
    this.reporter = reporter;
    run();
  }

  private void run() {
    var cfg = onCfg(scope.cfg());

    // Parameters are initially written to.
    var entryFlow = new ActionSet();
    scope.parameters().stream().map(Parameter::variable).forEachOrdered(entryFlow.write::add);

    // Doesn't `streamCfgs` because `run` includes promises.
    cfg.run(entryFlow);
  }

  public ActionSet at(BB bb, int instructionIndex) {
    var cfgAnalysis = analyses.get(bb.owner());
    if (cfgAnalysis == null) {
      throw new IllegalArgumentException("BB's CFG not in scope");
    }

    return cfgAnalysis.snapshot(bb, instructionIndex);
  }

  private OnCfg onCfg(CFG cfg) {
    return analyses.computeIfAbsent(cfg, OnCfg::new);
  }

  /// An abstract interpretation over a [CFG].
  private class OnCfg {
    final Map<BB, ActionSet> states = new HashMap<>();

    final Stack<Pair<BB, ActionSet>> worklist = new Stack<>();
    ActionSet returnState = new ActionSet();

    final CFGCursor cursor;
    ActionSet state;

    OnCfg(CFG cfg) {
      cursor = new CFGCursor(cfg);
      // `state` and `bb` are set before use, so whatever they're set to here doesn't matter.
      state = new ActionSet();
    }

    void run(ActionSet entryState) {
      assert states.isEmpty() && worklist.isEmpty() : "already run";

      // Can add `entryState` in-place, because it won't be mutated until after the call,
      // and we don't assign `worklist` entries to `state` or put into `states` without copying.
      worklist.add(Pair.of(cursor.bb(), entryState));

      while (!worklist.isEmpty()) {
        var next = worklist.pop();
        var bb = next.first();
        var state = next.second();

        if (Objects.equals(states.get(bb), state)) {
          // No update needed
          continue;
        }

        // Merge with previous state
        if (states.containsKey(bb)) {
          states.get(bb).merge(state);
        } else {
          states.put(bb, state.copy());
        }

        // Compute exit state
        state = run(bb);

        // Update return state if needed
        switch (bb.jump()) {
          case Return(var _) -> returnState.merge(state);
          case Unreachable(), Goto(var _), If(var _, var _, var _) -> {}
        }

        // Add successors to worklist (may need to update their entry states and recurse)
        for (var target : bb.jump().targets()) {
          // Can add `state` in-place, because it won't be mutated again by this point,
          // and we don't assign `worklist` entries to `state` or put into `states` without copying.
          worklist.add(Pair.of(target.bb(), state));
        }
      }
    }

    ActionSet run(BB bb) {
      state = states.get(bb).copy();
      cursor.iterateBb(bb, this::run, this::run);
      return state;
    }

    ActionSet snapshot(BB bb, int instructionIndex) {
      state = states.get(bb).copy();
      cursor.iterateBbUpTo(instructionIndex, this::run, this::run);
      return state;
    }

    void run(Statement statement) {
      var expr = statement.expression();
      var assignee = statement.assignee();

      run(expr);

      if (assignee != null) {
        // Check and update flow state
        if (state.use.contains(assignee)) {
          report("Write after use: ", assignee);
        }
        state.write.add(assignee);
      }
    }

    void run(Expression expression) {
      for (var argument : expression.arguments()) {
        run(argument);
      }

      if (expression instanceof Promise(var _, var _, var promiseCode)) {
        var promiseAnalysis = onCfg(promiseCode);
        promiseAnalysis.run(state);
        state.mergePromise(promiseAnalysis.returnState);
      }
    }

    void run(Argument argument) {
      switch (argument) {
        case Constant(var _) -> {}
          // Ensure register is written before read
        case Read(var variable) -> {
          if (!state.write.contains(variable)) {
            report("Read before write: ", variable);
          }
          if (state.use.contains(variable)) {
            report("Read after use: ", variable);
          }
          state.read.add(variable);
        }
          // Ensure register is written before use, and not used or captured.
        case Use(var register) -> {
          if (!state.write.contains(register)) {
            report("Use before write: ", register);
          }
          if (state.use.contains(register)) {
            report("Use after use: ", register);
          }
          if (state.capture.contains(register)) {
            report("Use after capture: ", register);
          }
          state.read.add(register);
          state.use.add(register);
        }
      }
      ;
    }

    void run(Jump jump) {
      for (var argument : jump.arguments()) {
        run(argument);
      }
    }

    void report(Object... message) {
      reporter.report(cursor.bb(), cursor.instructionIndex(), message);
    }
  }

  private static class ActionSet {
    final Set<Register> read = new HashSet<>();
    final Set<Register> write = new HashSet<>();
    final Set<Register> use = new HashSet<>();
    final Set<Register> capture = new HashSet<>();

    ActionSet copy() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.write.addAll(write);
      clone.use.addAll(use);
      clone.capture.addAll(capture);
      return clone;
    }

    /// Unifies requirements and intersects guarantees.
    ///
    /// [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
    void merge(ActionSet other) {
      read.addAll(other.read);
      write.retainAll(other.write);
      use.addAll(other.use);
      capture.addAll(other.capture);
    }

    /// Unifies requirements, and adds *all* registers touched by the promise to `capture`.
    ///
    /// This is the stateful analogue to the formalism's compose operator.
    ///
    /// [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
    void mergePromise(ActionSet promise) {
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
