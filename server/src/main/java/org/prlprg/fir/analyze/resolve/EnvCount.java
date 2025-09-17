package org.prlprg.fir.analyze.resolve;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.generic.AbstractInterpretation;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Tracks the number of environments that may exist at each instruction.
public final class EnvCount extends AbstractInterpretation<EnvCount.State> implements Analysis {
  private final Map<Return, Range> returnRanges = new HashMap<>();

  @AnalysisConstructor
  public EnvCount(Abstraction scope) {
    super(scope);
    run(new State());
  }

  @Override
  protected AbstractInterpretation<State>.OnCfg mkOnCfg(CFG cfg) {
    return new OnCfg(cfg);
  }

  /// Returns the range of environments that may exist at `(bb, instructionIndex)`.
  public Range rangeAt(BB bb, int instructionIndex) {
    var state = at(bb, instructionIndex);
    return state.asRange();
  }

  /// Returns whether every execution reaching `(bb, instructionIndex)` has at least one
  /// environment available.
  public boolean hasEnvironment(BB bb, int instructionIndex) {
    return at(bb, instructionIndex).min() > 0;
  }

  /// Returns the environment ranges observed at each return instruction.
  public @UnmodifiableView Map<Return, Range> returnRanges() {
    return Collections.unmodifiableMap(returnRanges);
  }

  private final class OnCfg extends AbstractInterpretation<State>.OnCfg {
    OnCfg(CFG cfg) {
      super(cfg);
    }

    @Override
    protected void run(Statement statement) {
      var expression = statement.expression();

      if (expression instanceof Promise(var _, var _, var code)) {
        onCfg(code).run(state());
      }

      if (expression instanceof MkEnv) {
        state().increment();
      } else if (expression instanceof PopEnv) {
        state().decrement();
      }
    }

    @Override
    protected void run(Jump jump) {
      if (jump instanceof Return ret) {
        recordReturn(ret);
      }
    }

    private void recordReturn(Return ret) {
      var range = state().asRange();
      returnRanges.merge(ret, range, Range::merge);
    }
  }

  /// Abstract state tracking how many environments may exist. Effectively a mutable [Range].
  public static final class State implements AbstractInterpretation.State<State> {
    private int min;
    private int max;

    public State() {
      this(0, 0);
    }

    private State(int min, int max) {
      this.min = min;
      this.max = max;
    }

    public int min() {
      return min;
    }

    public int max() {
      return max;
    }

    public Range asRange() {
      return new Range(min, max);
    }

    public void increment() {
      min = Math.addExact(min, 1);
      max = Math.addExact(max, 1);
    }

    public void decrement() {
      min = Math.addExact(min, -1);
      max = Math.addExact(max, -1);
    }

    @Override
    public State copy() {
      return new State(min, max);
    }

    @Override
    public void merge(State other) {
      min = Math.min(min, other.min);
      max = Math.max(max, other.max);
    }

    @Override
    public boolean equals(@Nullable Object o) {
      if (this == o) {
        return true;
      }
      if (!(o instanceof State other)) {
        return false;
      }
      return min == other.min && max == other.max;
    }

    @Override
    public int hashCode() {
      return 31 * min + max;
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      p.print(asRange());
    }
  }

  /// Immutable representation of a min/max range.
  public record Range(int min, int max) {
    public Range {
      if (min > max) {
        throw new IllegalArgumentException("min cannot exceed max");
      }
    }

    private Range merge(Range other) {
      return new Range(Math.min(min, other.min), Math.max(max, other.max));
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write('[');
      p.print(min);
      w.write(", ");
      p.print(max);
      w.write(']');
    }
  }
}
