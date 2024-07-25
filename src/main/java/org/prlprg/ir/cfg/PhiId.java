package org.prlprg.ir.cfg;

/**
 * A {@link LocalNodeId} belonging to a {@link Phi}.
 *
 * <p>Be aware that a {@link LocalNodeId} and {@link PhiId} with the same string representation are
 * considered equal (and thus both can't exist in the {@link CFG} unless they refer to the same
 * node).
 */
public final class PhiId<T> extends LocalNodeId<T> implements InstrOrPhiId {
  PhiId(int disambiguator, String name) {
    super(disambiguator, name);
  }

  /** Returns the equivalent {@link PhiId} if necessary, otherwise returns as-is. */
  static <T> PhiId<T> of(LocalNodeId<T> id) {
    return id instanceof PhiId<T> phiId ? phiId : new PhiId<>(id.disambiguator(), id.name());
  }
}
