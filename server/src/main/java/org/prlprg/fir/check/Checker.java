package org.prlprg.fir.check;

import com.google.common.base.Joiner;
import java.util.ArrayList;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;

public abstract class Checker {
  /// Check types and CFG invariants in the module, and throw [IllegalStateException] if there
  /// are any errors.
  public static void checkAll(Module module) {
    var cfgChecker = new CFGChecker();
    cfgChecker.run(module);
    cfgChecker.finish();

    var typeChecker = new TypeChecker();
    typeChecker.run(module);
    typeChecker.finish();
  }

  private @Nullable Function function = null;
  private final List<CheckException> errors = new ArrayList<>();

  /// Returns all errors found during type-checking.
  public List<CheckException> errors() {
    return errors;
  }

  /// Check all code in the module.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  /// if there were reported errors.
  public final void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  /// Check all code in the function.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  /// if there were reported errors.
  public final void run(Function function) {
    for (var version : function.versions()) {
      run(function, version);
    }
  }

  /// Check all code in the version.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  /// if there were reported errors.
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

  /// Throws an [IllegalStateException] if there are any errors found during type-checking.
  public final void finish() {
    if (!errors.isEmpty()) {
      throw new IllegalStateException(
          "Encountered type errors:\n\n" + Joiner.on("\n\n").join(errors));
    }
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
