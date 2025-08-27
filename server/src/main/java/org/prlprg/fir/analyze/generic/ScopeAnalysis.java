package org.prlprg.fir.analyze.generic;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

/// Scope analysis: computes the source of each register and named variable at each IR instruction.
/// A "source" is a nullable `Argument` that defines the register or constant it originated from.
/// Only named variable sources can be `null`, as every register's source is at least itself.
public final class ScopeAnalysis extends AbstractInterpretation<ScopeAnalysis.ScopeState> {

  public ScopeAnalysis(Abstraction scope) {
    super(scope);
    run(new ScopeState());
  }

  @Override
  protected OnCfg mkOnCfg(CFG cfg) {
    return new OnScopeCfg(cfg);
  }

  public static final class ScopeState implements State<ScopeState> {
    private final Map<Register, Argument> registerSources = new HashMap<>();
    private final Map<NamedVariable, Argument> variableSources = new HashMap<>();

    public ScopeState() {}

    private ScopeState(
        Map<Register, Argument> registerSources, Map<NamedVariable, Argument> variableSources) {
      this.registerSources.putAll(registerSources);
      this.variableSources.putAll(variableSources);
    }

    public @Nullable Argument getRegisterSource(Register register) {
      return registerSources.get(register);
    }

    public @Nullable Argument getVariableSource(NamedVariable variable) {
      return variableSources.get(variable);
    }

    public void setRegisterSource(Register register, Argument source) {
      registerSources.put(register, source);
    }

    public void setVariableSource(NamedVariable variable, @Nullable Argument source) {
      variableSources.put(variable, source);
    }

    @Override
    public ScopeState copy() {
      return new ScopeState(registerSources, variableSources);
    }

    @Override
    public void merge(ScopeState other) {
      for (var entry : other.registerSources.entrySet()) {
        var register = entry.getKey();
        var otherSource = entry.getValue();
        var currentSource = registerSources.get(register);

        if (currentSource == null) {
          registerSources.put(register, otherSource);
        } else if (!Objects.equals(currentSource, otherSource)) {
          // Conflicting sources - keep the register as its own source
          registerSources.put(register, new Read(register));
        }
      }

      for (var entry : other.variableSources.entrySet()) {
        var variable = entry.getKey();
        var otherSource = entry.getValue();
        var currentSource = variableSources.get(variable);

        if (currentSource == null) {
          variableSources.put(variable, otherSource);
        } else if (!Objects.equals(currentSource, otherSource)) {
          // Conflicting sources - set to null
          variableSources.put(variable, null);
        }
      }
    }

    @Override
    public boolean equals(Object obj) {
      if (this == obj) return true;
      if (!(obj instanceof ScopeState other)) return false;
      return Objects.equals(registerSources, other.registerSources)
          && Objects.equals(variableSources, other.variableSources);
    }

    @Override
    public int hashCode() {
      return Objects.hash(registerSources, variableSources);
    }
  }

  private final class OnScopeCfg extends OnCfg {
    protected OnScopeCfg(CFG cfg) {
      super(cfg);
    }

    @Override
    protected void runEntry(BB bb) {
      // Initialize phi parameters with themselves as sources
      for (var phi : bb.phiParameters()) {
        state().setRegisterSource(phi, new Read(phi));
      }
    }

    @Override
    protected void run(Statement statement) {
      var assignee = statement.assignee();
      var expression = statement.expression();

      // Determine the source of the assigned value
      var source = getExpressionSource(expression);
      state().setRegisterSource(assignee, source);
    }

    private Argument getExpressionSource(Expression expression) {
      return switch (expression) {
        case Aea(var value) -> resolveArgumentSource(value);
        case Load(var variable) -> state().getVariableSource(variable);
        case LoadFun(var variable, var env) -> {
          // Function loads see through bindings that aren't closures
          var varSource = state().getVariableSource(variable);
          yield varSource != null ? varSource : new Read(null); // Unknown source
        }
        case Store(var variable, var value) -> {
          var resolvedValue = resolveArgumentSource(value);
          state().setVariableSource(variable, resolvedValue);
          yield resolvedValue;
        }
        case SuperStore(var variable, var value) -> {
          var resolvedValue = resolveArgumentSource(value);
          state().setVariableSource(variable, resolvedValue);
          yield resolvedValue;
        }
        case Promise(var valueType, var effects, var code) -> {
          // Analyze the promise's code
          onCfg(code).run(state().copy());
          // Promise creates a new value
          yield new Read(null); // Placeholder for promise source
        }
        default -> new Read(null); // Default to unknown source
      };
    }

    private Argument resolveArgumentSource(Argument argument) {
      return switch (argument) {
        case Read(var register) -> {
          var source = state().getRegisterSource(register);
          yield source != null ? source : argument;
        }
        case Constant _ -> argument;
        default -> argument;
      };
    }
  }
}
