package org.prlprg.ir.type;

public sealed interface RStrOrRegSymType extends RValueType
    permits RAnyStrOrRegSymType, RRegSymType, RStrType {
  RStrOrRegSymType ANY = RAnyStrOrRegSymType.INSTANCE;
}

final class RAnyStrOrRegSymType implements RStrOrRegSymType {
  static final RAnyStrOrRegSymType INSTANCE = new RAnyStrOrRegSymType();

  @Override
  public boolean isSubsetOf(RValueType other) {
    return other == RValueType.ANY || other instanceof RStrOrRegSymType;
  }

  @Override
  public boolean isSupersetOf(RValueType other) {
    return other == this || other == NOTHING;
  }

  @Override
  public RValueType union(RValueType other) {
    return other == NOTHING || other instanceof RStrOrRegSymType ? this : RValueType.ANY;
  }

  @Override
  public RValueType intersection(RValueType other) {
    return other == ANY ? this : other instanceof RStrOrRegSymType ? other : NOTHING;
  }

  @Override
  public String toString() {
    return "str|sym";
  }

  private RAnyStrOrRegSymType() {}
}
