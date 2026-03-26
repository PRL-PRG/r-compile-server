package org.prlprg.fir.ir.callee;

import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.prlprg.fir.ir.argument.Argument;

@Immutable
public sealed interface Callee permits StaticFnCallee, DynamicCallee {
  Callee mapArguments(Function<Argument, Argument> transformer);
}
