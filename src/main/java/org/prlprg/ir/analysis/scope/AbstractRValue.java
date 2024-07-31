package org.prlprg.ir.analysis.scope;

import com.google.common.collect.ImmutableSet;
import java.util.Set;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.type.RSexpType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * The possible {@linkplain ISexp R SEXPs} at a particular {@linkplain Instr instruction} in any
 * interpretation trace.
 */
public final class AbstractISexp implements AbstractNode<AbstractISexp> {
  public record ValueOrigin(ISexp value, @Nullable Instr origin, int recursionLevel) {
    private static final ValueOrigin UNBOUND = new ValueOrigin(null, null, 0);

    @PrintMethod
    private void print(Printer p) {
      p.print(value.id());
      if (origin != null) {
        p.print(':');
        p.print(origin.id());
      }
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  /**
   * The "top" of the lattice, representing a completely unknown value.
   *
   * <p>This can is because it can't change; merging with unknown always produces unknown.
   */
  public static final AbstractISexp UNKNOWN =
      new AbstractISexp(ImmutableSet.of(), RSexpType.ANY, true);

  private static final int MAX_VALUES = 5;

  // These are small so we just keep them immutable and create new ones when necessary.
  private ImmutableSet<ValueOrigin> origins;
  private RSexpType type;
  private boolean isUnknown;

  /** Creates an abstract value representing "bottom". */
  public AbstractISexp() {
    origins = ImmutableSet.of();
    type = RSexpType.NOTHING;
    isUnknown = false;
  }

  /** Creates an abstract value representing the given concrete value. */
  public AbstractISexp(ISexp value, @Nullable Instr origin, int recursionLevel) {
    origins = ImmutableSet.of(new ValueOrigin(value, origin, recursionLevel));
    type = value.type();
    isUnknown = false;
  }

  /** Internal constructor for {@link #copy()} and {@link #UNKNOWN}. */
  private AbstractISexp(ImmutableSet<ValueOrigin> origins, RSexpType type, boolean isUnknown) {
    this.origins = origins;
    this.type = type;
    this.isUnknown = isUnknown;
  }

  public @Unmodifiable Set<ValueOrigin> origins() {
    return origins;
  }

  public RSexpType type() {
    return type;
  }

  public boolean isUnknown() {
    return isUnknown;
  }

  public boolean hasSingleOrigin() {
    return origins.size() == 1;
  }

  public @Nullable ValueOrigin singleOrigin() {
    return hasSingleOrigin() ? origins.iterator().next() : null;
  }

  public Maybe isUnboundValue() {
    if (isUnknown) {
      return Maybe.MAYBE;
    }
    Maybe result = null;
    for (var o : origins) {
      var update = o.value() == null;
      result = Maybe.intersection(result, update);
    }
    return result == null ? Maybe.NO : result;
  }

  /** Set to {@link #UNKNOWN}. */
  public void taint() {
    origins = ImmutableSet.of();
    type = RSexpType.ANY;
    isUnknown = true;
  }

  public AbstractResult mergeUnbound() {
    // Skip if unknown or equal
    if (isUnknown || origins.contains(ValueOrigin.UNBOUND)) {
      return AbstractResult.NONE;
    }

    // Give up if there are too many origins.
    if (origins.size() == MAX_VALUES) {
      taint();
      return AbstractResult.LOST_PRECISION;
    }

    // Merge (guaranteed updated).
    origins = ImmutableSet.<ValueOrigin>builder().addAll(origins).add(ValueOrigin.UNBOUND).build();
    return AbstractResult.UPDATED;
  }

  @Override
  public AbstractResult merge(AbstractISexp other) {
    // Skip if unknown or equal.
    if (isUnknown
        || (type.isNothing() && other.type.isNothing())
        || origins.equals(other.origins)) {
      return AbstractResult.NONE;
    }

    // Replace with other if `self == BOTTOM`.
    if (type.isNothing()) {
      origins = other.origins;
      type = other.type;
      isUnknown = other.isUnknown;
      return AbstractResult.UPDATED;
    }

    // Replace with other and lose precision if `self != BOTTOM && other == TOP`.
    if (other.isUnknown) {
      taint();
      return AbstractResult.LOST_PRECISION;
    }

    var newOrigins =
        Stream.concat(origins.stream(), other.origins.stream())
            .collect(ImmutableSet.toImmutableSet());

    // Give up if there are too many origins.
    if (newOrigins.size() > MAX_VALUES) {
      taint();
      return AbstractResult.LOST_PRECISION;
    }

    // Merge (guaranteed updated).
    origins = newOrigins;
    type = type.unionOf(other.type);
    return AbstractResult.UPDATED;
  }

  @Override
  public AbstractISexp copy() {
    return new AbstractISexp(origins, type, isUnknown);
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isUnknown) {
      w.write("??");
    } else {
      w.write("{");
      var first = true;
      for (var origin : origins) {
        if (!first) {
          w.write(" | ");
        }
        first = false;
        p.print(origin);
      }
      w.write("}");
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
