package org.prlprg.ir.cfg;

import java.util.Objects;
import java.util.concurrent.atomic.AtomicInteger;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.primitive.Names;

/** Node representing missing, invalid, or placeholder data. */
public class InvalidNode implements DeoptReason, RValue, FrameState, GlobalNode {
  private static final AtomicInteger NEXT_DISAMBIGUATOR = new AtomicInteger(0);

  /**
   * The node assigned to {@linkplain Phi phi} inputs that are automatically added when the phi's
   * {@linkplain BB basic block} gets a new predecessor, and when the phi is added to a block
   * without preset input nodes.
   */
  public static final InvalidNode UNSET_PHI_INPUT = new InvalidNode("unsetPhiInput");

  public static InvalidNode todoGlobal() {
    return new InvalidNode("todoGlobal");
  }

  private final int disambiguator;
  private final GlobalNodeId<InvalidNode> id;
  private final String toString;

  public InvalidNode(String desc) {
    this(NEXT_DISAMBIGUATOR.getAndIncrement(), desc);
  }

  /**
   * Returns itself, casted.
   *
   * <p>This cast is usually valid because {@code InvalidNode} is the superclass of all node types
   * except {@code ...Impl}s. <i>This method can't be called to cast to an {@code ...Impl} or it
   * will fail.</i> This method is defined because this cast is so frequent, but kept package-
   * private because it's not safe.
   */
  @SuppressWarnings("unchecked")
  <N extends Node> N uncheckedCast() {
    return (N) this;
  }

  /** Only to be used by {@link org.prlprg.ir.cfg.GlobalNodeId}. */
  static InvalidNode parsed(int disambiguator, String desc) {
    var result = new InvalidNode(disambiguator, desc);
    // Want to ensure disambiguator is still unique.
    NEXT_DISAMBIGUATOR.getAndUpdate(i -> Math.max(i, result.disambiguator + 1));
    return result;
  }

  private InvalidNode(int disambiguator, String desc) {
    if (desc.isEmpty()) {
      throw new IllegalArgumentException("Description must not be empty");
    }
    this.disambiguator = disambiguator;
    this.id = new GlobalNodeIdImpl<>(this);
    toString = disambiguator + Names.quoteIfNecessary(desc);
  }

  @Override
  public RType type() {
    return RTypes.NOTHING;
  }

  @Override
  public @Nullable InstrOrPhi origin() {
    return null;
  }

  @Override
  public GlobalNodeId<InvalidNode> id() {
    return id;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof InvalidNode that)) return false;
    return disambiguator == that.disambiguator;
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator);
  }

  @Override
  public String toString() {
    return toString;
  }
}
