package org.prlprg.ir.cfg;

import java.lang.ref.Cleaner;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.primitive.Names;

/** Node representing missing, invalid, or placeholder data. */
public class InvalidNode implements DeoptReason, RValue, FrameState, GlobalNode {
  private static final NodeOrBBIdDisambiguatorMap DISAMBIGUATORS = new NodeOrBBIdDisambiguatorMap();
  private static final Cleaner CLEANER = Cleaner.create();

  private static int disambiguatorFor(String desc) {
    synchronized (DISAMBIGUATORS) {
      return DISAMBIGUATORS.get(desc);
    }
  }

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
  private final String name;
  private final GlobalNodeId<InvalidNode> id;
  private final String toString;

  private String toString(int disambiguator, String name) {
    return (disambiguator == 0 ? "" : disambiguator) + Names.quoteIfNecessary(name);
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

  public InvalidNode(String name) {
    this(disambiguatorFor(name), name);
  }

  InvalidNode(int disambiguator, String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException("Name must not be empty");
    }

    synchronized (DISAMBIGUATORS) {
      try {
        DISAMBIGUATORS.add(name, disambiguator);
      } catch (IllegalArgumentException e) {
        throw new IllegalArgumentException(
            "Duplicate ID assigned to `InvalidNode`: " + toString(disambiguator, name), e);
      }
    }
    CLEANER.register(
        this,
        () -> {
          synchronized (DISAMBIGUATORS) {
            DISAMBIGUATORS.remove(name, disambiguator);
          }
        });

    this.disambiguator = disambiguator;
    this.name = name;
    id = new GlobalNodeIdImpl<>(this);
    toString = toString(disambiguator, name);
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
    return toString.equals(that.toString);
  }

  @Override
  public int hashCode() {
    return Objects.hash(toString);
  }

  @Override
  public String toString() {
    return toString;
  }
}
