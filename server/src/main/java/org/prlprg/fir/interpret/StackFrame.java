package org.prlprg.fir.interpret;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;

/// Runtime stack frame for FIR interpretation, managing register and environment bindings.
final class StackFrame {
  /// If there are multiple, that's because we're in a promise being forced.
  private final List<CFGCursor> positions = new ArrayList<>();
  private final Map<Register, SEXP> registers = new HashMap<>();
  private final EnvSXP environment;

  StackFrame(EnvSXP environment) {
    this.environment = Objects.requireNonNull(environment);
  }

  public void enter(CFGCursor position) {
    positions.add(position);
  }

  public void exit() {
    if (positions.isEmpty()) {
      throw new IllegalStateException("No position to exit from");
    }
    positions.removeLast();
  }

  @UnmodifiableView
  List<CFGCursor> positions() {
    return Collections.unmodifiableList(positions);
  }

  CFGCursor position(int index) {
    if (index < 0 || index >= positions.size()) {
      throw new IndexOutOfBoundsException("Invalid position index: " + index);
    }
    return positions.get(index);
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
  }

  @Override
  public String toString() {
    return Printer.toString(this, new PrintContext());
  }
}
