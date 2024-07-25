package org.prlprg.ir.cfg;

import org.prlprg.parseprint.Parser;

/**
 * An abstract value of type {@code T}; the IR representation of a value of type {@code T} that
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
    // `Void` is special-cased to allow `InvalidNode` to emulate subclassing every other `Node`,
    // even though Java's type system can't encode BOTTOM.
    if (!clazz.isAssignableFrom(type()) && type() != Void.class) {
      if (type().getSimpleName().equals(clazz.getSimpleName())) {
        throw new ClassCastException(
            "Can't cast "
                + id()
                + " of type "
                + type().getName()
                + " to "
                + clazz.getName()
                + " (they have the same simple name, but are different classes)");
      } else {
        throw new ClassCastException(
            "Can't cast "
                + id()
                + " of type "
                + type().getSimpleName()
                + " to "
                + clazz.getSimpleName());
      }
    }
    return (Node<? extends U>) this;
  }

  /**
   * This is {@code T}: the type that the node represents an abstract runtime value of.
   *
   * <p>In some cases, it may be a subtype of {@code T}. For example, a {@link Phi}'s dynamic type
   * is always the union of its inputs' types. Since phi inputs can change, this means that the
   * phi's dynamic type can become more or less specific, but it's static type, being static, will
   * always be the same (in the event a phi's type becomes less specific in a way that breaks
   * occurrences in other instructions, a runtime exception is thrown).
   *
   * <p>For {@link GlobalNode}, which is the subtype of any other node, this returns {@link Void}.
   * Java's type system can't encode a true BOTTOM type, but {@link Void} is a type with no
   * (non-null) inhabitants, and we special-case it to emulate BOTTOM (e.g. {@link #cast(Class)}
   * always works on {@link InvalidNode} even though {@link Void} isn't a subclass).
   *
   * <p>This is needed due to Java's type erasure: if you cast {@code Node<? extends A>} to {@code
   * Node<? extends B>} where {@code B &lt;/: A} the compiler silently allows it, and if you upcast
   * {@code Node<? extends B>} to {@code Node<? extends A>} there's no way to safely recover the
   * original type and downcast. So, we store this data in {@link Node}, and periodically check it
   * (to prevent the illegal upcast) and to recover the original type (to enable safe downcast).
   */
  Class<? extends T> type();

  /** Whether this node's {@link #type()}} is a subtype of the given type (incl. identical). */
  default boolean isSubtypeOf(Class<?> otherType) {
    return otherType.isAssignableFrom(type());
  }

  /**
   * Unique identifier for the node.
   *
   * <p>If this is a {@link LocalNode}, the returned ID must be unique to this node within the CFG.
   * If this is a {@link GlobalNode}, the returned ID must be unique within <b>every</b> CFG.
   */
  NodeId<T> id();
}
