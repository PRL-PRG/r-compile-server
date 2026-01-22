package org.prlprg.fir;

import com.google.common.collect.ImmutableList;
import java.nio.file.Path;
import java.util.List;
import java.util.stream.IntStream;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
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
    var funtab = GNURSession.readFunTab();
    for (var entry : funtab.entrySet()) {
      var bltName = Variable.named(entry.getKey());
      if (BUILTINS.localFunction(bltName) != null) {
        // Already defined.
        continue;
      }

      // Builtin that we haven't manually defined.
      // The formal names aren't always specified,
      // but the amount (and whether they're variadic) are in `FUNTAB`.
      var numArgs = entry.getValue().arity();
      var parameterNames =
          numArgs == -1
              ? List.of(NamedVariable.DOTS)
              : IntStream.range(0, numArgs)
                  .mapToObj(i -> Variable.named("arg" + i))
                  .collect(ImmutableList.toImmutableList());

      BUILTINS.addFunction(bltName, parameterNames, true);
    }

    // Ensure intrinsic names don't conflict with builtins.
    for (var function : INTRINSICS.localFunctions()) {
      assert !funtab.containsKey(function.name().name())
          : "intrinsic function is also a builtin, it must be renamed: " + function.name();
    }
  }

  private GlobalModules() {}
}
