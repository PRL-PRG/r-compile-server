package org.prlprg.fir.ir.callee;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Signature;

@Immutable
public sealed interface Callee permits DispatchCallee, DynamicCallee, StaticCallee {
  @Nullable Function function();

  @Nullable Signature signature();
}
