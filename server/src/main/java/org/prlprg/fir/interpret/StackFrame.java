package org.prlprg.fir.interpret;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.feedback.Feedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;

/// Runtime stack frame for FIR interpretation, managing register and environment bindings.
final class StackFrame {
  private final Abstraction scope;
  /// If there are multiple, that's because we're in a promise being forced.
  private final List<CFGCursor> positions = new ArrayList<>();
  private final Map<Register, SEXP> registers = new LinkedHashMap<>();
  private final EnvSXP environment;
  private final Feedback scopeFeedback;

  StackFrame(Abstraction scope, EnvSXP parentEnv, Feedback scopeFeedback) {
    this.scope = scope;
    this.environment = new UserEnvSXP(parentEnv);
    this.scopeFeedback = scopeFeedback;
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

  public void enter(CFGCursor position) {
    if (position.cfg().scope() != scope) {
      throw new IllegalArgumentException("Position not in frame's scope");
    }

    positions.add(position);
  }

  public void exit() {
    if (positions.isEmpty()) {
      throw new IllegalStateException("No position to exit from");
    }

    positions.removeLast();
  }

  public @UnmodifiableView Map<Register, SEXP> registers() {
    return registers;
  }

  public EnvSXP environment() {
    return environment;
  }

  public Feedback scopeFeedback() {
    return scopeFeedback;
  }

  /// Lookup register or named variable.
  public @Nullable SEXP get(Variable variable) {
    return switch (variable) {
      case Register r -> registers.get(r);
      case NamedVariable nv -> environment.get(nv.name()).orElse(null);
    };
  }

  /// Function lookup named variable.
  public @Nullable CloSXP getFunction(NamedVariable variable) {
    return environment.getFunction(variable.name()).orElse(null);
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
    return Printer.use(p -> new PrintStackTrace().printFrame(this, p));
  }
}
