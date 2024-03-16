package org.prlprg.sexp;

public record BuiltinSXP(String name) implements SEXP {
  @Override
  public SEXPType type() {
    return SEXPType.BUILTIN;
  }
}
