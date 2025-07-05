package org.prlprg.fir.binding;

import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Variable;

public sealed interface Binding permits Local, Parameter {
  Variable variable();

  Type type();
}
