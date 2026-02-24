package org.prlprg.fir.ir.callee;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Function;

@Immutable
public sealed interface Callee permits DispatchCallee, DynamicCallee, StaticCallee {
  @Nullable Function function();
}
