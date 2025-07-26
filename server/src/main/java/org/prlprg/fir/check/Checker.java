package org.prlprg.fir.check;

import com.google.common.base.Joiner;
import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;

public abstract class Checker {
  private final List<CheckException> errors = new ArrayList<>();

  /// Returns all errors found during type-checking.
  public List<CheckException> errors() {
    return errors;
  }

  protected void report(BB bb, int instructionIndex, String message) {
    errors.add(new CheckException(new CFGCursor(bb, instructionIndex), message));
  }

  /// Throws an [IllegalStateException] if there are any errors found during type-checking.
  public void finish() {
    if (!errors.isEmpty()) {
      throw new IllegalStateException(
          "Encountered type errors:\n\n" + Joiner.on("\n\n").join(errors));
    }
  }

  /// Check all code in the module.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  // if
  /// there were reported errors.
  public void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  /// Check all code in the function.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  // if
  /// there were reported errors.
  public void run(Function function) {
    for (var version : function.versions()) {
      run(version);
    }
  }

  /// Check all code in the abstraction.
  ///
  /// Reports errors in [#errors()]. Doesn't throw; call [#finish()] after to throw an exception
  // if
  /// there were reported errors.
  public abstract void run(Abstraction abstraction);
}
