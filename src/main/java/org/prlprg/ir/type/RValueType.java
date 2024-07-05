package org.prlprg.ir.type;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/**
 * The type of a non-promise, not-missing {@link SEXP}, without the attributes.
 *
 * <p>The "value" part of an {@link RType}; see {@link RType#value()}.
 *
 * <p>There's a subclass for each type of {@link SEXP}.
 */
@Immutable
public sealed interface RValueType extends Lattice<RValueType>
    permits RAnyValueType,
        RNothingValueType,
        RStrOrRegSymType,
        RSymOrLangType,
        RListOrVectorType,
        RLangOrListType,
        RFunType,
        REnvType,
        RBCodeType {
  RValueType ANY = RAnyValueType.INSTANCE;
  RValueType NOTHING = RNothingValueType.INSTANCE;

  /**
   * If this has a specific {@link SEXPType}, returns it, otherwise {@code null}.
   *
   * <p>Note that both {@link RValueType#ANY} and {@link RValueType#NOTHING} return {@code null}.
   */
  default @Nullable SEXPType sexpType() {
    return null;
  }

  @Override
  default boolean isSubsetOf(RValueType other) {
    return other == this || other == ANY || other.getClass().isInstance(this);
  }

  @Override
  default boolean isSupersetOf(RValueType other) {
    return other == this || other == NOTHING || getClass().isInstance(other);
  }

  @Override
  default RValueType union(RValueType other) {
    return isSupersetOf(other) ? this : isSubsetOf(other) ? other : ANY;
  }

  @Override
  default RValueType intersection(RValueType other) {
    return isSubsetOf(other) ? this : isSupersetOf(other) ? other : NOTHING;
  }
}

final class RAnyValueType implements RValueType {
  static final RAnyValueType INSTANCE = new RAnyValueType();

  @Override
  public boolean isSubsetOf(RValueType other) {
    return other == this;
  }

  @Override
  public boolean isSupersetOf(RValueType other) {
    return true;
  }

  @Override
  public RValueType intersection(RValueType other) {
    return other;
  }

  @Override
  public String toString() {
    return "⊤";
  }

  private RAnyValueType() {}
}

final class RNothingValueType implements RValueType {
  static final RNothingValueType INSTANCE = new RNothingValueType();

  @Override
  public boolean isSubsetOf(RValueType other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(RValueType other) {
    return other == this;
  }

  @Override
  public RValueType union(RValueType other) {
    return other;
  }

  @Override
  public String toString() {
    return "⊥";
  }

  private RNothingValueType() {}
}
