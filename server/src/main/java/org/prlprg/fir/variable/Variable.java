package org.prlprg.fir.variable;

public sealed interface Variable permits NamedVariable, Register {
  String name();
}
