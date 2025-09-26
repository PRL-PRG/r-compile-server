package org.prlprg.sexp;

public sealed interface DotsListSXP extends AbstractListSXP permits NilSXP, DotsListSXPImpl {
  @Override
  DotsListSXP withAttributes(Attributes attributes);

  @Override
  DotsListSXP copy();
}

final class DotsListSXPImpl extends AbstractListSXPImpl implements DotsListSXP {
  DotsListSXPImpl(TaggedElem[] data, Attributes attributes) {
    super(data, attributes);
  }

  @Override
  public SEXPType type() {
    return SEXPType.DOT;
  }

  @Override
  public DotsListSXP withAttributes(Attributes attributes) {
    return new DotsListSXPImpl(data, attributes);
  }

  @Override
  public DotsListSXP copy() {
    return new DotsListSXPImpl(data, attributes);
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return DotsListSXP.class;
  }
}
