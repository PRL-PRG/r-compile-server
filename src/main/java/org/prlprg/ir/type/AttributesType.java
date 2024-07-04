package org.prlprg.ir.type;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.Attributes;

/**
 * The information we know about a value's attributes: whether it may or does have particular
 * attributes and if they are known, and whether it may have other unknown attributes.
 */
@Immutable
public interface AttributesType extends Lattice<AttributesType> {
  /** If we know the exact attributes, otherwise {@code null}. */
  @Nullable Attributes exact();

  Maybe isObject();

  default boolean isEmpty() {
    return exact() != null && exact().isEmpty();
  }
}

// TODO: replace with actual subtype(s).
record TODOAttributesType() implements AttributesType {
  @Nullable @Override
  public Attributes exact() {
    return null;
  }

  @Override
  public Maybe isObject() {
    return Maybe.MAYBE;
  }

  @Override
  public boolean isSubsetOf(AttributesType other) {
    return true;
  }

  @Override
  public AttributesType union(AttributesType other) {
    return this;
  }

  @Override
  public AttributesType intersection(AttributesType other) {
    return this;
  }
}
