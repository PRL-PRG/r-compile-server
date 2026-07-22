package org.prlprg.fir.ir.callee;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;

/// A call to a dynamically-determined callee. The actual callee is the owning statement's argument
/// at index 0, and [#callArgumentNames] names the call arguments that follow it.
public record DynamicCallee(ImmutableList<OptionalNamedVariable> callArgumentNames)
    implements Callee {
  public DynamicCallee() {
    this(ImmutableList.of());
  }
}
