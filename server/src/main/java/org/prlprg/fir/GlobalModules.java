package org.prlprg.fir;

import com.google.common.collect.ImmutableList;
import java.nio.file.Path;
import java.util.List;
import java.util.Objects;
import java.util.stream.IntStream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.FunTabEntry;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SpecialSXP;
import org.prlprg.util.UnreachableError;

public final class GlobalModules {
  /// Module containing GNU-R globals from base.
  ///
  /// This intersects [#BUILTINS], but contains non-builtin globals, doesn't contain
  /// "internal" builtins, and the builtins are slightly different. It's currently only used by
  /// the internal interpreter; if not writing an interpreter, you usually want [#BUILTINS]
  /// instead.
  public static final Module BASE = new Module();
  /// Module containing GNU-R builtins.
  public static final Module BUILTINS =
      Parser.fromResource(Path.of("../../builtins.fir"), Module.class);
  /// Module containing intrinsic functions (non-builtins that are used in the IR, e.g. "inc").
  public static final Module INTRINSICS =
      Parser.fromResource(Path.of("../../intrinsics.fir"), Module.class);

  static {
    // Add GNU-R builtins that we don't have explicit versions for to BUILTINS and BASE
    var funTab = GNURSession.readFunTab();
    for (var entry : funTab.entrySet()) {
      var name = Variable.named(entry.getKey());
      var funTabEntry = entry.getValue();
      if (BUILTINS.localFunction(name) != null) {
        // Already defined.
        continue;
      }

      // Builtin that we haven't manually defined.
      var parameterNames = funTabEntryParamNames(funTabEntry);
      BUILTINS.addFunction(name, parameterNames, true);
    }

    // Add non-builtins to `BASE` (up until now it's the same as `BUILTINS`)
    var baseEnv = GNURSession.readLatestBaseEnv();
    for (var entry : baseEnv.bindings()) {
      var name = Variable.named(entry.getKey());
      var value = entry.getValue();

      if (!value.isFunction()) {
        // FIR doesn't support global variables, they just don't exist
        continue;
      }

      var parameterNames =
          switch (value) {
            case CloSXP c -> c.parameters().names().stream().map(Variable::named).toList();
            case BuiltinSXP _, SpecialSXP _ -> {
              var funTabEntry = funTab.get(entry.getKey());
              assert funTabEntry != null : "builtin or special not in FUNTAB: " + entry.getKey();
              yield funTabEntryParamNames(funTabEntry);
            }
            default ->
                throw new UnreachableError(
                    "Unexpected class whose `SEXP#isFunction` returned true: "
                        + value.getClass().getSimpleName());
          };
      BASE.addFunction(name, parameterNames, true);
    }

    // Ensure intrinsic names don't conflict with builtins.
    for (var function : INTRINSICS.localFunctions()) {
      assert BUILTINS.localFunction(function.name()) == null
          : "intrinsic function is also a builtin, it must be renamed: " + function.name();
    }
  }

  public static final Function BOX_FUN =
      Objects.requireNonNull(INTRINSICS.localFunction(Variable.named("box")));
  public static final Function UNBOX_FUN =
      Objects.requireNonNull(INTRINSICS.localFunction(Variable.named("unbox")));

  private static @Unmodifiable List<NamedVariable> funTabEntryParamNames(FunTabEntry entry) {
    // The formal names aren't always specified,
    // but the amount (and whether they're variadic) are in `FUNTAB`
    var numArgs = entry.arity();
    return numArgs == -1
        ? List.of(NamedVariable.DOTS)
        : IntStream.range(0, numArgs)
            .mapToObj(i -> Variable.named("." + i))
            .collect(ImmutableList.toImmutableList());
  }

  private GlobalModules() {}
}
