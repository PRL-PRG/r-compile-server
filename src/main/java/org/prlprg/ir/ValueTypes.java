package org.prlprg.ir;

import com.google.common.collect.ImmutableSet;
import java.util.EnumSet;
import org.prlprg.sexp.*;
import org.prlprg.util.NoOrMaybe;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.Quad;
import org.prlprg.util.YesOrMaybe;

/**
 * All global {@link ValueType}s and methods to create {@link ValueType}s are here so they're easy
 * to find.
 */
public class ValueTypes {
  /**
   * The subtype of every type, represents an expression which hangs, errors, or otherwise diverts
   * control flow.
   */
  public static final ValueType BOTTOM = new Bottom();

  /** The supertype of every type, represents an expression which may have any value. */
  public static final ValueType TOP = new Top();

  /** The most precise representable type which encompasses all given values. */
  public static ValueType exact(ImmutableSet<SEXP> possibilities) {
    if (possibilities.isEmpty()) {
      return BOTTOM;
    }
    return new Exact(possibilities);
  }

  /**
   * The subtype of every type, represents an expression which hangs, errors, or otherwise diverts
   * control flow.
   */
  public static final class Bottom implements ValueType {
    private Bottom() {}

    @Override
    public EnumSet<SEXPType> sexpTypes() {
      return EnumSet.noneOf(SEXPType.class);
    }

    @Override
    public boolean isSubtypeOf(ValueType other) {
      return true;
    }

    @Override
    public boolean isSupertypeOf(ValueType other) {
      return other == ValueTypes.BOTTOM;
    }

    @Override
    public ValueType union(ValueType other) {
      return other;
    }

    @Override
    public ValueType intersection(ValueType other) {
      return this;
    }

    @Override
    public Quad isPromise() {
      return Quad.IRRELEVANT;
    }

    @Override
    public NoOrMaybe isLazy() {
      return NoOrMaybe.NO;
    }

    @Override
    public Quad isScalar() {
      return Quad.IRRELEVANT;
    }

    @Override
    public Quad hasAttributes() {
      return Quad.IRRELEVANT;
    }

    @Override
    public Quad isObject() {
      return Quad.IRRELEVANT;
    }

    @Override
    public YesOrMaybe isFastVecElt() {
      return YesOrMaybe.YES;
    }

    @Override
    public Quad hasNaOrNaN() {
      return Quad.IRRELEVANT;
    }

    @Override
    public Quad isMissing() {
      return Quad.IRRELEVANT;
    }

    @Override
    public Quad isUnbound() {
      return Quad.IRRELEVANT;
    }
  }

  /** The supertype of every type, represents an expression which may have any value. */
  public static final class Top implements ValueType {
    private Top() {}

    @Override
    public EnumSet<SEXPType> sexpTypes() {
      return EnumSet.allOf(SEXPType.class);
    }

    @Override
    public boolean isSubtypeOf(ValueType other) {
      return other == ValueTypes.TOP;
    }

    @Override
    public boolean isSupertypeOf(ValueType other) {
      return true;
    }

    @Override
    public ValueType union(ValueType other) {
      return this;
    }

    @Override
    public ValueType intersection(ValueType other) {
      return other;
    }

    @Override
    public Quad isPromise() {
      return Quad.MAYBE;
    }

    @Override
    public NoOrMaybe isLazy() {
      return NoOrMaybe.MAYBE;
    }

    @Override
    public Quad isScalar() {
      return Quad.MAYBE;
    }

    @Override
    public Quad hasAttributes() {
      return Quad.MAYBE;
    }

    @Override
    public Quad isObject() {
      return Quad.MAYBE;
    }

    @Override
    public YesOrMaybe isFastVecElt() {
      return YesOrMaybe.MAYBE;
    }

    @Override
    public Quad hasNaOrNaN() {
      return Quad.MAYBE;
    }

    @Override
    public Quad isMissing() {
      return Quad.MAYBE;
    }

    @Override
    public Quad isUnbound() {
      return Quad.MAYBE;
    }
  }

  /** The instance is equivalent to one of a set of possibilities. */
  public record Exact(ImmutableSet<SEXP> possibilities) implements ValueType {
    public Exact {
      if (possibilities.isEmpty()) {
        throw new IllegalArgumentException("Exact has empty possibilities, should be BOTTOM.");
      }
    }

    @Override
    public EnumSet<SEXPType> sexpTypes() {
      var result = EnumSet.noneOf(SEXPType.class);
      for (var possibility : possibilities) {
        result.add(possibility.type());
      }
      return result;
    }

    @Override
    public boolean isSubtypeOf(ValueType other) {
      return switch (other) {
        case Bottom ignored -> false;
        case Top ignored -> true;
        case Exact exact -> possibilities.containsAll(exact.possibilities);
      };
    }

    @Override
    public ValueType union(ValueType other) {
      return switch (other) {
        case Bottom ignored -> this;
        case Top ignored -> other;
        case Exact exact ->
            exact(
                ImmutableSet.<SEXP>builder()
                    .addAll(possibilities)
                    .addAll(exact.possibilities)
                    .build());
      };
    }

    @Override
    public ValueType intersection(ValueType other) {
      return switch (other) {
        case Bottom ignored -> other;
        case Top ignored -> this;
        case Exact exact ->
            exact(
                possibilities.stream()
                    .filter(exact.possibilities::contains)
                    .collect(ImmutableSet.toImmutableSet()));
      };
    }

    @Override
    public Quad isPromise() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        result = result.union(possibility instanceof PromSXP);
      }
      return result;
    }

    @Override
    public NoOrMaybe isLazy() {
      for (var possibility : possibilities) {
        if (possibility instanceof PromSXP prom && prom.isLazy()) {
          return NoOrMaybe.MAYBE;
        }
      }
      return NoOrMaybe.NO;
    }

    @Override
    public Quad isScalar() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        if (!(possibility instanceof VectorSXP<?> vector)) {
          return Quad.IRRELEVANT;
        }
        result = result.union(vector.isScalar());
      }
      return result;
    }

    @Override
    public Quad hasAttributes() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        result = result.union(possibility.hasAttributes());
      }
      return result;
    }

    @Override
    public Quad isObject() {
      // isObject isn't implemented in SEXP
      throw new NotImplementedError();
    }

    @Override
    public YesOrMaybe isFastVecElt() {
      throw new NotImplementedError();
    }

    @Override
    public Quad hasNaOrNaN() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        if (!(possibility instanceof PrimVectorSXP<?> vector)) {
          return Quad.IRRELEVANT;
        }
        result = result.union(vector.hasNaOrNaN());
      }
      return result;
    }

    @Override
    public Quad isMissing() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        result = result.union(possibility == SEXPs.MISSING_ARG);
      }
      return result;
    }

    @Override
    public Quad isUnbound() {
      var result = Quad.IRRELEVANT;
      for (var possibility : possibilities) {
        result = result.union(possibility == SEXPs.UNBOUND_VALUE);
      }
      return result;
    }
  }

  private ValueTypes() {}
}
