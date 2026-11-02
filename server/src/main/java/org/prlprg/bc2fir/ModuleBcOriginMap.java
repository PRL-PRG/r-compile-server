package org.prlprg.bc2fir;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.WeakHashMap;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.ListSXP;

/// Maps FIR code to the GNU-R bytecode it was compiled from.
public final class ModuleBcOriginMap {
  private static final Map<Module, ModuleBcOriginMap> OF_MODULE =
      Collections.synchronizedMap(new WeakHashMap<>());

  private final Map<String, FunctionBcOrigin> byFunctionName = new LinkedHashMap<>();

  /// The map [BC2FirClosureCompiler] first recorded `module`'s bytecode in, or `null` if it
  /// recorded none.
  ///
  /// The bytecode of an inner closure is only in it once the enclosing function's baseline is
  /// evaluated.
  public static @Nullable ModuleBcOriginMap of(Module module) {
    return OF_MODULE.get(module);
  }

  /// Make this the map [#of(Module)] returns for `module`, unless it already returns one.
  void recordFor(Module module) {
    OF_MODULE.putIfAbsent(module, this);
  }

  /// Associate `functionName` with its original GNU-R bytecode and formals, and return the
  /// association (so the compiler can add the function's feedback registers to it).
  ///
  /// If the name was already recorded, keeps and returns the existing bytecode (a generated name
  /// collision is only ever with an identical closure, see [BC2FirCFGCompiler]'s `MakeClosure`
  /// handling).
  FunctionBcOrigin record(String functionName, Bc bc, ListSXP formals) {
    return byFunctionName.computeIfAbsent(functionName, _ -> new FunctionBcOrigin(bc, formals));
  }

  /// The original GNU-R bytecode and formals of the function with the given name, or `null` if it
  /// wasn't compiled from bytecode by [BC2FirClosureCompiler].
  public @Nullable FunctionBcOrigin get(String functionName) {
    return byFunctionName.get(functionName);
  }
}
