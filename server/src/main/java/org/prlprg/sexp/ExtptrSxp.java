package org.prlprg.sexp;

/// An external pointer. The address itself isn't kept, only the protected value, tag, and
/// attributes (e.g. `class`, as in `DLLInfoReference` and `NativeSymbolInfo` addresses).
public record ExtptrSxp(SEXP prot, SEXP tag, @Override Attributes attributes) implements SEXP {
  public ExtptrSxp(SEXP prot, SEXP tag) {
    this(prot, tag, Attributes.NONE);
  }

  @Override
  public SEXPType type() {
    return SEXPType.EXTPTR;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return ExtptrSxp.class;
  }

  @Override
  public ExtptrSxp withAttributes(Attributes attributes) {
    return new ExtptrSxp(prot, tag, attributes);
  }
}
