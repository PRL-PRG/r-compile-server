package org.prlprg.fir.check;

import java.util.ArrayList;
import java.util.List;
import javax.annotation.CheckReturnValue;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;

public abstract class Checker {
  /// Check types, effects, flow, and CFG invariants in the module. If there are any errors,
  /// [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  public static boolean checkAll(Module module) {
    return checkAll(module, true);
  }

  /// Check types, effects, optionally flow, and CFG invariants in the module. If there are any
  /// errors, [prints them to `stderr`][Checker#print] and returns `false`.
  @CheckReturnValue
  public static boolean checkAll(Module module, boolean includeFlow) {
    var cfgChecker = new CFGChecker();
    var typeAndEffectChecker = new TypeAndEffectChecker();
    var flowChecker = includeFlow ? new FlowChecker() : null;

    cfgChecker.run(module);
    typeAndEffectChecker.run(module);
    if (flowChecker != null) {
      flowChecker.run(module);
    }

    cfgChecker.print();
    typeAndEffectChecker.print();
    if (flowChecker != null) {
      flowChecker.print();
    }

    return !cfgChecker.hasErrors()
        && !typeAndEffectChecker.hasErrors()
        && (flowChecker == null || !flowChecker.hasErrors());
  }

  private @Nullable Function function = null;
  private final List<CheckException> errors = new ArrayList<>();

  /// Returns all errors found during type-checking.
  public List<CheckException> errors() {
    return errors;
  }

  /// Check all code in the module.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  public final void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  /// Check all code in the function.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  public final void run(Function function) {
    for (var version : function.versions()) {
      run(function, version);
    }
  }

  /// Check all code in the version.
  ///
  /// Reports errors in [#errors()]. Doesn't print or throw.
  ///
  /// @throws IllegalArgumentException If `version` isn't in `function`.
  public final void run(Function function, Abstraction version) {
    if (!function.contains(version)) {
      throw new IllegalArgumentException(
          "Function " + function.name() + " doesn't contain version " + version);
    }

    this.function = function;
    doRun(version);
    this.function = null;
  }

  /// Prints any errors found during checking.
  public final void print() {
    if (!errors.isEmpty()) {
      var name = getClass().getSimpleName().replace("Checker", "");
      System.err.println("Encountered " + name + " errors:");
      for (var error : errors) {
        System.err.println();
        System.err.println(error.getMessage());
      }
    }
  }

  public final boolean hasErrors() {
    return !errors.isEmpty();
  }

  protected abstract void doRun(Abstraction version);

  /// The function currently being checked.
  ///
  /// @throws IllegalStateException If [#doRun(Abstraction)] isn't being called.
  protected final Function function() {
    if (function == null) {
      throw new IllegalStateException("Checker isn't running");
    }

    return function;
  }

  /// @throws IllegalStateException If [#doRun(Abstraction)] isn't being called.
  protected final void report(Abstraction abstraction, String message) {
    report(abstraction.cfg().entry(), 0, message);
  }

  /// @throws IllegalStateException If [#doRun(Abstraction)] isn't being called.
  protected final void report(ScopePosition position, String message) {
    report(position.inInnermostCfg(), message);
  }

  /// @throws IllegalStateException If [#doRun(Abstraction)] isn't being called.
  protected final void report(CfgPosition position, String message) {
    report(position.bb(), position.instructionIndex(), message);
  }

  /// @throws IllegalStateException If [#doRun(Abstraction)] isn't being called.
  protected final void report(BB bb, int instructionIndex, String message) {
    errors.add(new CheckException(function(), new CFGCursor(bb, instructionIndex), message));
  }
}
