package org.prlprg.fir;

import java.nio.file.Path;
import java.util.List;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.parameter.ParameterDefinition;
import org.prlprg.parseprint.Parser;
import org.prlprg.session.GNURSession;

public final class GlobalModules {
  /// Module containing GNU-R builtins.
  public static final Module BUILTINS =
      Parser.fromResource(Path.of("../../builtins.fir"), Module.class);
  /// Module containing intrinsic functions (non-builtins that are used in the IR, e.g. "inc").
  public static final Module INTRINSICS =
      Parser.fromResource(Path.of("../../intrinsics.fir"), Module.class);

  static {
    // Add GNU-R builtins that we don't have explicit versions for.
    for (var bltName : GNURSession.getAllBuiltins()) {
      if (BUILTINS.localFunction(bltName) != null) {
        // Already defined.
        continue;
      }
      // Builtin that we haven't manually defined.
      // Its builtin formals are unknown, hence `List.of(ParameterDefinition.DOTS)`.
      BUILTINS.addFunction(bltName, List.of(ParameterDefinition.DOTS), true);
    }

    // Ensure intrinsic names don't conflict with builtins.
    for (var function : INTRINSICS.localFunctions()) {
      assert !BUILTINS.localFunctions().contains(function)
          : "intrinsic function is also a builtin, it must be renamed: " + function.name();
    }
  }

  private GlobalModules() {}
}
