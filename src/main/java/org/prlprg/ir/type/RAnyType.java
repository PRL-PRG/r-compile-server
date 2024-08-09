package org.prlprg.ir.type;

final class RAnyType implements RType {
  @SuppressWarnings("ConstantValue")
  RAnyType() {
    assert ANY == null || ANY == this
        : "`RType#Any` should be the only `RAnyType` instance";
  }

  @Override
  public Class<Object> clazz() {
    return Object.class;
  }

  @Override
  public boolean isSubsetOf(RType other) {
    return other == ANY;
  }

  @Override
  public boolean isSupersetOf(RType other) {
    return true;
  }

  @Override
  public RAnyType unionOf(RType other) {
    return this;
  }

  @Override
  public RType intersectionOf(RType other) {
    return other;
  }
}
