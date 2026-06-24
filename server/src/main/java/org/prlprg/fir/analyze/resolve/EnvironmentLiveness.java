package org.prlprg.fir.analyze.resolve;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.generic.AbstractInterpretation;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Tracks the environments that exist at each instruction
public final class EnvironmentLiveness extends AbstractInterpretation<EnvironmentLiveness.State>
    implements Analysis {
  private final Map<CfgPosition, EnvRange> allEnvs = new LinkedHashMap<>();

  @AnalysisConstructor
  public EnvironmentLiveness(Abstraction scope) {
    super(scope);
    run(new State());
  }

  @Override
  protected AbstractInterpretation<State>.OnCfg mkOnCfg(CFG cfg) {
    return new OnCfg(cfg);
  }

  /// Returns all environment ranges
  public @UnmodifiableView Collection<EnvRange> allEnvs() {
    return Collections.unmodifiableCollection(allEnvs.values());
  }

  /// Returns the environment range created by the [MkEnv] at `mk`, or `null` if there's none.
  public @Nullable EnvRange rangeAt(CfgPosition mk) {
    return allEnvs.get(mk);
  }

  public @UnmodifiableView Set<EnvRange> envsAt(BB bb, int instructionIndex) {
    return Collections.unmodifiableSet(at(bb, instructionIndex).envs);
  }

  /// Returns whether there's an environment at `(bb, instructionIndex)`.
  public boolean hasEnvironmentAt(BB bb, int instructionIndex) {
    return !at(bb, instructionIndex).envs.isEmpty();
  }

  private final class OnCfg extends AbstractInterpretation<State>.OnCfg {
    OnCfg(CFG cfg) {
      super(cfg);
    }

    @Override
    protected void run(Statement statement) {
      var pos = new CfgPosition(bb(), instructionIndex(), statement);
      switch (statement.expression()) {
        case Promise(var _, var _, var code) -> runSubAnalysis(code, state()::merge);
        case MkEnv _ -> {
          var range = allEnvs.computeIfAbsent(pos, EnvRange::new);
          state().push(range);
        }
        case PopEnv _ -> state().pop(pos);
        default -> {}
      }
    }
  }

  /// Abstract state containing live environment ranges.
  public static final class State implements AbstractInterpretation.State<State> {
    private final LinkedHashSet<EnvRange> envs = new LinkedHashSet<>();

    private void push(EnvRange range) {
      envs.add(range);
    }

    private void pop(CfgPosition pos) {
      if (envs.isEmpty()) {
        return;
      }

      var range = envs.removeLast();
      range.addPop(pos);
    }

    @Override
    public State copy() {
      var copy = new State();
      copy.envs.addAll(envs);
      return copy;
    }

    /// Intersect
    @Override
    public void merge(State other) {
      var it = envs.iterator();
      while (it.hasNext()) {
        var env = it.next();
        if (!other.envs.contains(env)) {
          it.remove();
        }
      }
    }

    @Override
    public boolean equals(@Nullable Object o) {
      if (this == o) {
        return true;
      }
      if (!(o instanceof State other)) {
        return false;
      }
      return envs.equals(other.envs);
    }

    @Override
    public int hashCode() {
      return envs.hashCode();
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      p.print(envs);
    }
  }

  /// The positions of a [MkEnv] and its corresponding [PopEnv]s.
  public static final class EnvRange {
    private final CfgPosition mk;
    private final Set<CfgPosition> pops = new LinkedHashSet<>();

    private EnvRange(CfgPosition mk) {
      this.mk = mk;
    }

    public CfgPosition mk() {
      return mk;
    }

    public @UnmodifiableView Set<CfgPosition> pops() {
      return Collections.unmodifiableSet(pops);
    }

    private void addPop(CfgPosition pop) {
      pops.add(pop);
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("[ mk:\n  ");
      w.runIndented(() -> p.print(mk));
      for (var pop : pops) {
        w.write("\n  pop:\n  ");
        w.runIndented(() -> p.print(pop));
      }
      w.write(" ]");
    }
  }
}
