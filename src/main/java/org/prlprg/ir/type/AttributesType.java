package org.prlprg.ir.type;

import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.Attributes;

/**
 * The information we know about a value's attributes: whether it may or does have particular
 * attributes and if they are known, and whether it may have other unknown attributes.
 */
@Immutable
public interface AttributesType extends BoundedLattice<AttributesType> {
  /** Any set of attributes is an instance of this. */
  AttributesType ANY = AnyAttributesType.INSTANCE;

  /** No set of attributes is an instance of this.
   *
   * <p>Not to be confused with {@link AttributesType#EMPTY}, which has one instance: the empty set
   * of attributes (this is why the field name isn't {@code NOTHING}).
   */
  AttributesType BOTTOM = BottomAttributesType.INSTANCE;

  /** The type of {@link Attributes#NONE} (the empty set of attributes).
   *
   * <p>Not to be confused with {@link AttributesType#BOTTOM}, which has no instances (the field
   * name isn't {@code NONE} because it's too close to {@code NOTHING}, which typically refers to
   * the bottom type).
   */
  AttributesType EMPTY = EmptyAttributesType.INSTANCE;

  /** Any set of attributes with the "class" attribute an instance of this. */
  AttributesType ANY_OBJECT = AnyObjectAttributesType.INSTANCE;

  /** A type whose instance is only the given attributes. */
  static AttributesType exact(Attributes attributes) {
    if (attributes.isEmpty()) {
      return EMPTY;
    }

    return new ExactAttributesType(attributes);
  }

  default Maybe isObject() {
    return Lattice.relation(this, ANY_OBJECT);
  }

  default Maybe isEmpty() {
    return Lattice.relation(this, EMPTY);
  }

  @Override
  default boolean isSubsetOf(AttributesType other) {
    return other == this || other == ANY;
  }

  @Override
  default boolean isSupersetOf(AttributesType other) {
    return other == this || other == BOTTOM;
  }

  @Override
  default AttributesType union(AttributesType other) {
    return other == BOTTOM ? this : ANY;
  }

  @Override
  default AttributesType intersection(AttributesType other) {
    return other == ANY ? this : BOTTOM;
  }
}

class AnyAttributesType implements AttributesType {
  static final AnyAttributesType INSTANCE = new AnyAttributesType();

  @Override
  public boolean isSubsetOf(AttributesType other) {
    return other == ANY;
  }

  @Override
  public boolean isSupersetOf(AttributesType other) {
    return true;
  }

  @Override
  public AttributesType union(AttributesType other) {
    return this;
  }

  @Override
  public AttributesType intersection(AttributesType other) {
    return other;
  }

  @Override
  public String toString() {
    return "⊤";
  }

  private AnyAttributesType() {}
}

class BottomAttributesType implements AttributesType {
  static final BottomAttributesType INSTANCE = new BottomAttributesType();

  @Override
  public boolean isSubsetOf(AttributesType other) {
    return true;
  }

  @Override
  public boolean isSupersetOf(AttributesType other) {
    return other == this;
  }

  @Override
  public AttributesType union(AttributesType other) {
    return other;
  }

  @Override
  public AttributesType intersection(AttributesType other) {
    return this;
  }

  @Override
  public String toString() {
    return "⊥";
  }

  private BottomAttributesType() {}
}

class EmptyAttributesType implements AttributesType {
  static final EmptyAttributesType INSTANCE = new EmptyAttributesType();

  @Override
  public String toString() {
    return "";
  }
}

class AnyObjectAttributesType implements AttributesType {
  static final AnyObjectAttributesType INSTANCE = new AnyObjectAttributesType();

  @Override
  public boolean isSupersetOf(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? exact.attributes().isObject()
        : AttributesType.super.isSupersetOf(other);
  }

  @Override
  public AttributesType union(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? (exact.attributes().isObject() ? this : ANY)
        : AttributesType.super.union(other);
  }

  @Override
  public AttributesType intersection(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? (exact.attributes().isObject() ? other : BOTTOM)
        : AttributesType.super.intersection(other);
  }

  @Override
  public String toString() {
    return "class=⊤";
  }

  private AnyObjectAttributesType() {}
}

record ExactAttributesType(Attributes attributes) implements AttributesType {
  @Override
  public boolean isSubsetOf(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? attributes.equals(exact.attributes)
        : (attributes.isObject() && other == ANY_OBJECT)
            || AttributesType.super.isSubsetOf(other);
  }

  @Override
  public boolean isSupersetOf(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? attributes.equals(exact.attributes)
        : AttributesType.super.isSupersetOf(other);
  }

  @Override
  public AttributesType intersection(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? (attributes.equals(exact.attributes) ? this : BOTTOM)
        : other == ANY_OBJECT
            ? (attributes.isObject() ? this : BOTTOM)
            : AttributesType.super.intersection(other);
  }

  @Override
  public AttributesType union(AttributesType other) {
    return other instanceof ExactAttributesType exact
        ? (
            attributes.equals(exact.attributes)
                ? this
                : attributes.isObject() && exact.attributes.isObject()
                    ? ANY_OBJECT
                    : ANY)
        : other == ANY_OBJECT
            ? (attributes.isObject() ? ANY_OBJECT : ANY)
            : AttributesType.super.union(other);
  }

  @Override
  public String toString() {
    return attributes.toString();
  }
}