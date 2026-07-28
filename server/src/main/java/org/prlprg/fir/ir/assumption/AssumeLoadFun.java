package org.prlprg.fir.ir.assumption;

import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Assume that a local function lookup of [#variable] doesn't encounter promises and yields
/// [#function] (has no argument).
///
/// Effectively combines `ldf` with [AssumeFunction], additionally assuming no promises are forced,
/// to remove the reflection in `ldf`. When checked, performs a function lookup of [#variable] that
/// fails instead of forcing promises. If the lookup succeeds, checks if the found function is
/// [#function]. The deopt after [AssumeLoadFun] is before the `ldf` it replaces.
public record AssumeLoadFun(NamedVariable variable, FunctionRef functionRef) implements Assumption {
  public AssumeLoadFun(NamedVariable variable, Function function) {
    this(variable, new FunctionRef(function));
  }

  public Function function() {
    return functionRef.get();
  }
}
