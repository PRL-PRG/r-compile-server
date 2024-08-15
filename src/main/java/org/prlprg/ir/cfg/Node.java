package org.prlprg.ir.cfg;

import java.util.Objects;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.Parser;

/**
 * An abstract value of type {@link T}; the IR representation of a value of type {@link T} that
 * exists in compiled code at runtime.
 */
public sealed interface Node<T> permits LocalNode, GlobalNode {
  /** Parse a node ({@link Parser#parse(Class)}), and {@link #cast(Class)} it to the given type. */
  static <T> Node<? extends T> parse(Parser p, Class<T> type) {
    return Node.cast(p.parse(Node.class), type);
  }

  /** {@link #cast(Class)}, but call on a raw type. */
  @SuppressWarnings("rawtypes")
  static <U> Node<? extends U> cast(Node node, Class<U> clazz) {
    return ((Node<?>) node).cast(clazz);
  }

  /**
   * Cast {@code Node<? extends A>} to {@code Node<? extends B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  default <U> Node<? extends U> cast(Class<U> clazz) {
    if (!type().isSubsetOf(clazz)) {
      var myClass =
          Objects.requireNonNull(type().clazz(), "the nothing type is a subset of all classes");
      assert myClass != clazz;

      if (myClass.getSimpleName().equals(clazz.getSimpleName())) {
        throw new ClassCastException(
            "Can't cast "
                + id()
                + " of type "
                + myClass.getName()
                + " to "
                + clazz.getName()
                + " (they have the same simple name, but are different classes)");
      } else {
        throw new ClassCastException(
            "Can't cast "
                + id()
                + " of type "
                + myClass.getSimpleName()
                + " to "
                + clazz.getSimpleName());
      }
    }
    return (Node<? extends U>) this;
  }

  /**
   * This represents {@link T}: the type that the node represents an abstract runtime value of.
   *
   * <p>It's used to check node types at runtime. Due to Java's type erasure and because some node
   * types change when the node is mutated (e.g. {@link Phi}s when their inputs change), it's
   * possible to have a node in {@code Node<? extends A>} whose runtime values aren't actually
   * subtypes of {@code A}. To alleviate this issue, we periodically check the node's runtime {@code
   * #type()} against its compile-time {@code T} (specifically, in {@link #cast(Class)} and in
   * {@linkplain Instr#inputs() instruction inputs}.
   */
  RType type();

  /** Whether this node's {@link #type()}} is a subtype of the given type (incl. identical). */
  default boolean isSubtypeOf(RType otherType) {
    return type().isSubsetOf(otherType);
  }

  /**
   * Whether this node's {@link #type()}} is a subtype of the {@link RType} representing the given
   * class (incl. identical).
   */
  default boolean isSubtypeOf(Class<?> otherType) {
    return type().isSubsetOf(otherType);
  }

  /**
   * Unique identifier for the node.
   *
   * <p>If this is a {@link LocalNode}, the returned ID must be unique to this node within the CFG.
   * If this is a {@link GlobalNode}, the returned ID must be unique within <b>every</b> CFG.
   */
  NodeId<T> id();
}
