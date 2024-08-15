package org.prlprg.ir.effect;

import com.google.common.collect.ForwardingSet;
import com.google.common.collect.ImmutableSet;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Set;
import java.util.stream.Collectors;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.BoundedLattice;

/** Set of effects an instruction or function overload may be performed when executed or called. */
@Immutable
public final class REffects extends ForwardingSet<REffect> implements BoundedLattice<REffects> {
  /**
   * Instruction or function overload has no effects.
   *
   * <p>This is a subset of all other REffects.
   */
  public static final REffects PURE = new REffects();

  /**
   * Instruction or function overload has every effect.
   *
   * <p>This is a superset of all other REffects.
   */
  public static final REffects ARBITRARY = new REffects(new Arbitrary());

  /** The effects of a arithmetic bytecode instruction, whose arguments have the given types. */
  public static REffects arithmeticOp(RType... types) {
    // TODO
    return ARBITRARY;
  }

  /** The effects of a comparison bytecode instruction, whose arguments have the given types. */
  public static REffects comparisonOp(RType... types) {
    // TODO
    return ARBITRARY;
  }

  /**
   * The effects of a simple "and", "or", or "not" bytecode instruction, whose arguments have the
   * given types.
   */
  public static REffects booleanOp(RType... types) {
    // TODO
    return ARBITRARY;
  }

  private final ImmutableSet<REffect> effects;

  public REffects(ImmutableSet<REffect> effects) {
    this.effects = effects;
  }

  public REffects(Iterable<REffect> effects) {
    this(ImmutableSet.copyOf(effects));
  }

  public REffects(REffect... effects) {
    this(ImmutableSet.copyOf(effects));
  }

  /** Returns the effects with the new effects added. */
  public REffects with(REffect... newEffects) {
    return new REffects(ImmutableSet.<REffect>builder().addAll(effects).add(newEffects).build());
  }

  /** Returns the effects with the new effects added. */
  public REffects with(Iterable<REffect> newEffects) {
    return new REffects(ImmutableSet.<REffect>builder().addAll(effects).addAll(newEffects).build());
  }

  /** Returns the effects with the new effects removed. */
  public REffects without(REffect... newEffects) {
    var newEffects1 = ImmutableSet.copyOf(newEffects);
    return new REffects(
        ImmutableSet.copyOf(effects).stream()
            .filter(f -> !newEffects1.contains(f))
            .collect(ImmutableSet.toImmutableSet()));
  }

  /** Returns the effects with the new effects removed. */
  public REffects without(Iterable<REffect> newEffects) {
    var newEffects1 = ImmutableSet.copyOf(newEffects);
    return new REffects(
        ImmutableSet.copyOf(effects).stream()
            .filter(f -> !newEffects1.contains(f))
            .collect(ImmutableSet.toImmutableSet()));
  }

  /** Whether this contains any of the given effects. */
  public boolean containsAny(REffect... effects) {
    return !Collections.disjoint(this.effects, Arrays.asList(effects));
  }

  /** Whether this contains any of the given effects. */
  public boolean containsAny(Collection<REffect> effects) {
    return !Collections.disjoint(this.effects, effects);
  }

  /** Whether this contains all of the given effects. */
  public boolean containsAll(REffect... effects) {
    return this.effects.containsAll(Arrays.asList(effects));
  }

  @Override
  public boolean isSubsetOf(REffects other) {
    // TODO
    return other.effects.containsAll(effects);
  }

  @Override
  public boolean isSupersetOf(REffects other) {
    // TODO
    return effects.containsAll(other.effects);
  }

  @Override
  public REffects intersectionOf(REffects other) {
    // TODO
    return new REffects(
        ImmutableSet.copyOf(effects).stream()
            .filter(other.effects::contains)
            .collect(ImmutableSet.toImmutableSet()));
  }

  @Override
  public REffects unionOf(REffects other) {
    // TODO
    return new REffects(
        ImmutableSet.<REffect>builder().addAll(effects).addAll(other.effects).build());
  }

  @Override
  public String toString() {
    // TODO
    return effects.stream().map(Object::toString).sorted().collect(Collectors.joining());
  }

  @Override
  protected Set<REffect> delegate() {
    return effects;
  }
}
