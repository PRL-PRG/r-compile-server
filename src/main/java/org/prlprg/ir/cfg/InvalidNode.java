package org.prlprg.ir.cfg;

import java.lang.ref.Cleaner;
import java.util.Objects;
import java.util.WeakHashMap;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.primitive.Names;

/** Node representing missing, invalid, or placeholder data. */
public class InvalidNode implements DeoptReason, RValue, FrameState, GlobalNode {
  private static class Globals {
    private final NodeOrBBIdDisambiguatorMap DISAMBIGUATORS = new NodeOrBBIdDisambiguatorMap();
    private final WeakHashMap<String, InvalidNode> EXISTING = new WeakHashMap<>();
  }

  private static final Globals GLOBALS = new Globals();
  private static final Cleaner CLEANER = Cleaner.create();

  private static int disambiguatorFor(String desc) {
    synchronized (GLOBALS) {
      return GLOBALS.DISAMBIGUATORS.get(desc);
    }
  }

  /**
   * The node assigned to {@linkplain Phi phi} inputs that are automatically added when the phi's
   * {@linkplain BB basic block} gets a new predecessor, and when the phi is added to a block
   * without preset input nodes.
   */
  public static final InvalidNode UNSET_PHI_INPUT = InvalidNode.create("unsetPhiInput");

  public static InvalidNode todoGlobal() {
    return InvalidNode.create("todoGlobal");
  }

  private final GlobalNodeId<InvalidNode> id;
  private final String toString;

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

  /**
   * Returns an {@link InvalidNode} with a disambiguator to make it parse and print uniquely among
   * others with the given name.
   */
  public static InvalidNode create(String name) {
    synchronized (GLOBALS) {
      var disambiguator = disambiguatorFor(name);
      var toString = (disambiguator == 0 ? "" : disambiguator) + Names.quoteIfNecessary(name);

      var node = new InvalidNode(disambiguator, name, toString);
      GLOBALS.EXISTING.put(toString, node);
      return node;
    }
  }

  /**
   * If an {@link InvalidNode} with the same disambiguator or name already exists, returns it.
   * Otherwise creates a new one.
   */
  static InvalidNode getOrCreate(int disambiguator, String name) {
    var toString = (disambiguator == 0 ? "" : disambiguator) + Names.quoteIfNecessary(name);

    synchronized (GLOBALS) {
      return GLOBALS.EXISTING.computeIfAbsent(
          toString, _ -> new InvalidNode(disambiguator, name, toString));
    }
  }

  private InvalidNode(int disambiguator, String name, String toString) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException("Name must not be empty");
    }

    try {
      GLOBALS.DISAMBIGUATORS.add(name, disambiguator);
    } catch (IllegalArgumentException e) {
      throw new IllegalArgumentException("Duplicate ID assigned to `InvalidNode`: " + toString, e);
    }

    CLEANER.register(
        this,
        () -> {
          synchronized (GLOBALS) {
            GLOBALS.DISAMBIGUATORS.remove(name, disambiguator);
            GLOBALS.EXISTING.remove(toString);
          }
        });

    this.toString = toString;
    id = new GlobalNodeIdImpl<>(this);
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
