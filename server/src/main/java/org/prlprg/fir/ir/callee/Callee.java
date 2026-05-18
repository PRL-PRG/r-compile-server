package org.prlprg.fir.ir.callee;

import java.util.List;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;

@Immutable
public sealed interface Callee permits StaticFnCallee, DynamicCallee {
  @Unmodifiable
  List<Argument> arguments();

  Callee mapArguments(Function<Argument, Argument> transformer);
}
