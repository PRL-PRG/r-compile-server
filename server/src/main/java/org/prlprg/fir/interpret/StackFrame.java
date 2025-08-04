package org.prlprg.fir.interpret;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;

/// Runtime stack frame for FIR interpretation, managing register and environment bindings.
public final class StackFrame {
  private final Map<Register, SEXP> registers = new HashMap<>();
  private final EnvSXP environment;

  public StackFrame(EnvSXP environment) {
    this.environment = Objects.requireNonNull(environment);
  }

  public @UnmodifiableView Map<Register, SEXP> registers() {
    return registers;
  }

  public EnvSXP environment() {
    return environment;
  }

  /// Lookup register or named variable.
  public @Nullable SEXP get(Variable variable) {
    return switch (variable) {
      case Register r -> registers.get(r);
      case NamedVariable nv -> environment.get(nv.name()).orElse(null);
    };
  }

  /// Set local register or store named variable.
  public void put(Variable variable, SEXP value) {
    switch (variable) {
      case Register r -> registers.put(r, value);
      case NamedVariable nv -> environment.set(nv.name(), value);
    }
    ;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("[ ");
    w.runIndented(
        () -> {
          for (var entry : registers.entrySet()) {
            p.print(entry.getKey());
            w.write(" = ");
            p.print(entry.getValue());
            w.write(";\n");
          }
          p.print(environment);
        });
    w.write("\n]");
  }
}
