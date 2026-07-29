package org.prlprg.fir.ir.module;

import org.jspecify.annotations.Nullable;
import org.prlprg.util.ForwardRef;

/// A reference to a [Function], which may not be resolved yet.
///
/// While parsing, references are handed out before the functions they name exist (see
/// [org.prlprg.fir.parseprint.ModuleParseContext.FunctionParseContext#deferredLookup]).
public final class FunctionRef extends ForwardRef<Function> {
  public FunctionRef() {
    super();
  }

  public FunctionRef(@Nullable Function function) {
    super(function);
  }
}
