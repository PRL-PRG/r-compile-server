package org.prlprg.ir.type.lattice;

import javax.annotation.Nullable;

/** A number which may be unknown. */
public sealed interface MaybeNat extends Lattice<MaybeNat> {
  MaybeNat UNKNOWN = new Unknown();

  static MaybeNat of(int value) {
    return new Known(value);
  }

  default boolean isKnown() {
    return this instanceof Known;
  }

  default boolean isDefinitely(int value) {
    return this instanceof Known known && known.value() == value;
  }

  default boolean isDefinitelyLessThan(int value) {
    return this instanceof Known known && known.value() < value;
  }

  default @Override MaybeNat union(MaybeNat other) {
    return switch (other) {
      case Known(var otheiSexp) -> union(otheiSexp);
      case Unknown() -> other;
    };
  }

  @Override
  default boolean isSubsetOf(MaybeNat other) {
    return switch (other) {
      case Known(var otheiSexp) ->
          switch (this) {
            case Known(var value) -> value == otheiSexp;
            case Unknown() -> false;
          };
      case Unknown() -> true;
    };
  }

  default MaybeNat union(int exact) {
    return switch (this) {
      case Known(var value) -> value == exact ? this : new Unknown();
      case Unknown() -> this;
    };
  }

  @Override
  default @Nullable MaybeNat intersection(MaybeNat other) {
    return switch (other) {
      case Known(var otheiSexp) ->
          switch (this) {
            case Known(var value) -> value == otheiSexp ? this : null;
            case Unknown() -> other;
          };
      case Unknown() -> this;
    };
  }
}

record Known(int value) implements MaybeNat {
  public Known {
    if (value < 0) {
      throw new IllegalArgumentException("Can't be negative");
    }
  }

  @Override
  public String toString() {
    return Integer.toString(value);
  }
}

record Unknown() implements MaybeNat {
  public Unknown {}

  @Override
  public String toString() {
    return "";
  }
}
