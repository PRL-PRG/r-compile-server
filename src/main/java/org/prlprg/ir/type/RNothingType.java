package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.ir.type.sexp.AttributesType;
import org.prlprg.ir.type.sexp.RPromiseType;
import org.prlprg.ir.type.sexp.RSexpType;
import org.prlprg.ir.type.sexp.RValueType;

public final class RNothingType<T> implements RSexpType<T> {
  @SuppressWarnings("ConstantValue")
  RNothingType() {
    assert NOTHING == null || NOTHING == this
        : "`RType#NOTHING` should be the only `RNothingType` instance";
  }

  // This is technically illegal in Java, but we pretend `Void` is a subclass of every other class
  // because Java has no proper BOTTOM type. It works out because Java doesn't check generic type
  // parameters, only we do manually, so we special-case this relation.
  @SuppressWarnings("unchecked")
  @Override
  public Class<? extends T> clazz() {
    return (Class<? extends T>) Void.class;
  }

  /** Returns itself, with the type parameter casted.
   *
   * <p>Semantically, this is legal, because the nothing type is the subtype of any type. Java's
   * type system can't encode BOTTOM. However, Java's type system also permits this due to erasure,
   * and we special-case it in code like {@link RType#cast(Class)}.
   */
  @SuppressWarnings("unchecked")
  public <U> RNothingType<? extends U> cast() {
    return (RNothingType<? extends U>) this;
  }

  @Override
  public boolean isSubsetOf(RType<?> other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(RType<?> other) {
    return other == NOTHING;
  }

  @Override
  public RType<?> unionOf(RType<?> other) {
    return other;
  }

  @Override
  public RNothingType<?> intersectionOf(RType<?> other) {
    return this;
  }

  @Override
  public RValueType value() {
    return RValueType.NOTHING;
  }

  @Override
  public YesOrMaybe isOwned() {
    return YesOrMaybe.YES;
  }

  @Override
  public AttributesType attributes() {
    return AttributesType.BOTTOM;
  }

  @Nullable
  @Override
  public RPromiseType promise() {
    return null;
  }

  @Nullable
  @Override
  public Maybe isMissing() {
    return null;
  }
}
