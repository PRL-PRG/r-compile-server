package org.prlprg.ir.type;

import com.google.common.collect.ForwardingSet;
import com.google.common.collect.ImmutableSet;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Set;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.Strings;

/** Set of effects an instruction or function overload may be performed when executed or called. */
@Immutable
public final class REffects extends ForwardingSet<REffect> implements BoundedLattice<REffects> {
  /**
   * Instruction or function overload has no effects.
   *
   * <p>This is a subset of all other REffects.
   */
  public static REffects PURE = new REffects();

  /**
   * Instruction or function overload has every effect.
   *
   * <p>This is a superset of all other REffects.
   */
  public static REffects ARBITRARY = new REffects(REffect.values());

  /** The effects of a arithmetic bytecode instruction, whose arguments have the given types. */
  public static REffects arithmeticOp(RType... types) {
    throw new NotImplementedError();
  }

  /** The effects of a comparison bytecode instruction, whose arguments have the given types. */
  public static REffects comparisonOp(RType... types) {
    throw new NotImplementedError();
  }

  /**
   * The effects of a simple "and", "or", or "not" bytecode instruction, whose arguments have the
   * given types.
   */
  public static REffects booleanOp(RType... types) {
    throw new NotImplementedError();
  }

  private final ImmutableSet<REffect> flags;

  public REffects(ImmutableSet<REffect> flags) {
    this.flags = flags;
  }

  public REffects(Iterable<REffect> flags) {
    this(ImmutableSet.copyOf(flags));
  }

  public REffects(REffect... flags) {
    this(ImmutableSet.copyOf(flags));
  }

  /** Returns the effects with the new flags added. */
  public REffects with(REffect... newFlags) {
    return new REffects(ImmutableSet.<REffect>builder().addAll(flags).add(newFlags).build());
  }

  /** Returns the effects with the new flags added. */
  public REffects with(Iterable<REffect> newFlags) {
    return new REffects(ImmutableSet.<REffect>builder().addAll(flags).addAll(newFlags).build());
  }

  /** Returns the effects with the new flags removed. */
  public REffects without(REffect... newFlags) {
    var newFlags1 = ImmutableSet.copyOf(newFlags);
    return new REffects(
        ImmutableSet.copyOf(flags).stream()
            .filter(f -> !newFlags1.contains(f))
            .collect(ImmutableSet.toImmutableSet()));
  }

  /** Returns the effects with the new flags removed. */
  public REffects without(Iterable<REffect> newFlags) {
    var newFlags1 = ImmutableSet.copyOf(newFlags);
    return new REffects(
        ImmutableSet.copyOf(flags).stream()
            .filter(f -> !newFlags1.contains(f))
            .collect(ImmutableSet.toImmutableSet()));
  }

  /** Whether this contains any of the given flags. */
  public boolean containsAny(REffect... flags) {
    return !Collections.disjoint(this.flags, Arrays.asList(flags));
  }

  /** Whether this contains any of the given flags. */
  public boolean containsAny(Collection<REffect> flags) {
    return !Collections.disjoint(this.flags, flags);
  }

  /** Whether this contains all of the given flags. */
  public boolean containsAll(REffect... flags) {
    return this.flags.containsAll(Arrays.asList(flags));
  }

  @Override
  public boolean isSubsetOf(REffects other) {
    return other.flags.containsAll(flags);
  }

  @Override
  public boolean isSupersetOf(REffects other) {
    return flags.containsAll(other.flags);
  }

  @Override
  public REffects intersection(REffects other) {
    return new REffects(
        ImmutableSet.copyOf(flags).stream()
            .filter(other.flags::contains)
            .collect(ImmutableSet.toImmutableSet()));
  }

  @Override
  public REffects union(REffects other) {
    return new REffects(ImmutableSet.<REffect>builder().addAll(flags).addAll(other.flags).build());
  }

  @Override
  public String toString() {
    return flags.stream().sorted().collect(Strings.joining(""));
  }

  @Override
  protected Set<REffect> delegate() {
    return flags;
  }
}
