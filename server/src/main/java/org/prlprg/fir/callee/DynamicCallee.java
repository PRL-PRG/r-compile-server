package org.prlprg.fir.callee;

import org.prlprg.fir.variable.NamedVariable;

public record DynamicCallee(NamedVariable variable) implements Callee {
  @Override
  public String toString() {
    return "dyn<" + variable.name() + '>';
  }
}
