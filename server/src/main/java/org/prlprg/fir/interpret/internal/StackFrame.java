package org.prlprg.fir.interpret.internal;

import static org.prlprg.fir.interpret.internal.PrintStack.printFrame;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.util.Lists;

/// Runtime stack frame for FIŘ interpretation, managing register and environment bindings.
final class StackFrame {
  /// If there are multiple, that's because we're in a promise being forced.
  private final List<SubFrame> subFrames = new ArrayList<>();
  private final Map<Register, SEXP> registers = new LinkedHashMap<>();
  private EnvSXP environment;
  private int numEnvsPushed = 0;

  StackFrame(EnvSXP parentEnv) {
    environment = parentEnv;
  }

  @UnmodifiableView
  List<CFGCursor> positions() {
    return Lists.mapLazy(subFrames, sf -> sf.position);
  }

  CFGCursor position(int index) {
    if (index < 0 || index >= subFrames.size()) {
      throw new IndexOutOfBoundsException("Invalid position index: " + index);
    }
    return subFrames.get(index).position;
  }

  public void enter(CFGCursor position, ModuleFeedback feedback) {
    var scope = position.cfg().scope();
    var scopeFeedback = feedback.get(scope);
    subFrames.add(new SubFrame(position, scopeFeedback));
  }

  public void exit() {
    if (subFrames.isEmpty()) {
      throw new IllegalStateException("No sub-frame to exit from");
    }

    subFrames.removeLast();
  }

  public @UnmodifiableView Map<Register, SEXP> registers() {
    return registers;
  }

  public EnvSXP environment() {
    return environment;
  }

  public AbstractionFeedback scopeFeedback() {
    if (subFrames.isEmpty()) {
      throw new IllegalStateException("Stack frame has no sub-frame (empty/invalid state)");
    }
    return subFrames.getLast().scopeFeedback;
  }

  /// Lookup register or named variable.
  public @Nullable SEXP get(Variable variable) {
    return switch (variable) {
      case Register r -> registers.get(r);
      case NamedVariable nv -> environment.get(nv.name()).orElse(null);
    };
  }

  /// Function lookup named variable.
  public @Nullable CloSXP getFunction(
      NamedVariable variable, java.util.function.Function<PromSXP, SEXP> forcer) {
    return environment.getFunction(variable.name(), forcer).orElse(null);
  }

  /// Set local register or store named variable.
  public void put(Variable variable, SEXP value) {
    switch (variable) {
      case Register r -> registers.put(r, value);
      case NamedVariable nv -> environment.set(nv.name(), value);
    }
  }

  public void mkEnv() {
    environment = new UserEnvSXP(environment);
    numEnvsPushed++;
  }

  public void popEnv() {
    if (numEnvsPushed == 0) {
      throw new IllegalStateException("Stack frame popped more environments than it pushed");
    }

    environment = environment.parent();
    numEnvsPushed--;
  }

  @Override
  public String toString() {
    return Printer.use(p -> printFrame(this, p));
  }

  private record SubFrame(CFGCursor position, AbstractionFeedback scopeFeedback) {}
}
