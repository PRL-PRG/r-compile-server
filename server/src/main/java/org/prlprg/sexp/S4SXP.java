package org.prlprg.sexp;

/// An S4 object that isn't a vector, function, or environment (`OBJSXP` in GNU-R), e.g. what
/// `new()` returns for a class that contains no basic type. Its slots are its attributes.
public record S4SXP(@Override Attributes attributes) implements SEXP {
  @Override
  public SEXPType type() {
    return SEXPType.S4;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return S4SXP.class;
  }

  @Override
  public S4SXP withAttributes(Attributes attributes) {
    return new S4SXP(attributes);
  }
}
