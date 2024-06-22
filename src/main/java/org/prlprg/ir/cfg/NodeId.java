package org.prlprg.ir.cfg;

import java.util.Objects;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Scanner;
import org.prlprg.parseprint.SkipWhitespace;

/**
 * Identifies a {@linkplain Node node} of class {@code N} within a {@linkplain CFG control-flow
 * graph} or globally, as well as within {@linkplain CFGEdit edits} that can be replayed across
 * different graphs.
 *
 * <p>Every local node (node whose {@link Node#cfg()} is non-null) has an ID unique within its CFG,
 * but not other CFGs. Every global node has an ID unique within all CFGs.
 */
@Immutable
public interface NodeId<N extends Node> {
  /**
   * Get the {@linkplain Node node}'s {@linkplain Node#id() ID} with a more refined type.
   *
   * <p>We have an invariant that the type parameter of a node's ID is always its specific class.
   * Unfortunately this invariant is inexpressible in Java's type system. This method is the
   * workaround so we don't need to put {@code @SuppressWarning("unchecked")} everywhere.
   */
  @SuppressWarnings("unchecked")
  static <N extends Node> NodeId<? extends N> of(N node) {
    return (NodeId<? extends N>) node.id();
  }

  /**
   * Asserts that the given ID is the given node class or a superclass, and returns it unchanged.
   *
   * <p>If the ID's {@code clazz} is null it will still return as-is, since that means the class is
   * delayed and will be set when it's set in the node.
   */
  @SuppressWarnings("unchecked")
  static <N extends Node> NodeId<N> cast(NodeId<?> id, Class<? extends N> nodeClass) {
    if (id.clazz() == null || !nodeClass.isAssignableFrom(id.clazz())) {
      throw new ClassCastException(
          "node ID is for a different class: expected " + nodeClass + ", got " + id.clazz());
    }
    return (NodeId<N>) id;
  }

  /**
   * Returns {@code true} if the next string begins a {@link NodeId}.
   *
   * <p>This is particularly important to disambiguate {@linkplain org.prlprg.primitive.Names names}
   * and node IDs, since they may both start with alphanumeric characters.
   */
  static boolean isNodeIdStart(Scanner s) {
    return s.nextCharIs('%')
        || GlobalNodeId.GLOBAL_NODE_TYPES.stream()
            .anyMatch(nodeType -> s.nextCharsAre(nodeType + "\\"));
  }

  /**
   * Exact class of the node that the ID belongs to.
   *
   * <p>This ensures that IDs are assigned to nodes of the correct type, since Java's generics can't
   * due to erasure.
   *
   * <p>This is {@code null} for IDs that have just been parsed so the class can't be determined.
   * Once one of these "untyped" IDs is assigned to a node, the node will create a new ID with the
   * correct class and the untyped one will be discarded.
   */
  @Nullable Class<? extends N> clazz();

  /**
   * Whether the ID is for a local or {@linkplain GlobalNode global node}.
   *
   * <p>This is {@code false} iff {@code this instanceof }{@link GlobalNodeId}.
   */
  boolean isLocal();

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    var peek = s.peekChar();
    if (Character.isLetter(peek) || peek == '\\') {
      return p.parse(GlobalNodeId.class);
    } else if (peek == '%') {
      return p.parse(LocalNodeIdImpl.class);
    } else {
      throw s.fail(
          "Expected global node ID (starting with letter or '\\') or local node ID (starting with '%')");
    }
  }
}

abstract sealed class NodeIdImpl<N extends Node> implements NodeId<N>
    permits LocalNodeIdImpl, GlobalNodeIdImpl {
  protected @Nullable Class<? extends N> clazz;

  protected NodeIdImpl(@Nullable Class<? extends N> clazz) {
    this.clazz = clazz;
  }

  @Override
  public @Nullable Class<? extends N> clazz() {
    return clazz;
  }
}

abstract sealed class LocalNodeIdImpl<N extends LocalNode> extends NodeIdImpl<N>
    permits InstrOrPhiIdImpl, AuxiliaryNodeIdImpl {
  private final String toString;

  LocalNodeIdImpl(String toString) {
    super(null);
    this.toString = toString;
  }

  /**
   * Return the given {@link NodeId} casted to a {@link LocalNodeIdImpl}.
   *
   * <p>Any {@linkplain LocalNode local node} ID is guaranteed to be a {@link LocalNodeIdImpl}, so
   * we have this dedicated method to reduce the amount of casts.
   */
  @SuppressWarnings("unchecked")
  static <I extends InstrOrPhi> LocalNodeIdImpl<I> cast(NodeId<I> id) {
    if (!(id instanceof LocalNodeIdImpl<?> instrOrPhiId)) {
      throw new ClassCastException(
          "ID which is allegedly an instruction or phi ID (but maybe not due to generic erasure) isn't a `LocalNodeIdImpl`: "
              + id);
    }
    return (LocalNodeIdImpl<I>) instrOrPhiId;
  }

  /**
   * Assign a class to an ID which may have been parsed, or if not, just check that the class is the
   * same as the one that would've been assigned.
   */
  // Cast is valid if `this.clazz` is unset (means we dynamically delayed assigning a generic arg)
  // or `this.clazz == clazz` (no-op);
  @SuppressWarnings("unchecked")
  void lateAssignClass(Class<?> clazz) {
    assert this.clazz == null || this.clazz == clazz
        : "node ID is for a different class: expected " + this.clazz + ", got " + clazz;
    this.clazz = (Class<? extends N>) clazz;
  }

  @Override
  public String toString() {
    return toString;
  }

  @Override
  public boolean isLocal() {
    return true;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static LocalNodeIdImpl<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('%');
    var disambiguator = s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0;
    var name = NodeAndBBIds.readName(s);
    var base = new InstrOrPhiIdImpl<>(disambiguator, name);
    if (s.nextCharIs('#')) {
      var auxiliary = s.readUInt();
      return new AuxiliaryNodeIdImpl<>(base, auxiliary);
    } else {
      return base;
    }
  }
}

final class InstrOrPhiIdImpl<N extends InstrOrPhi> extends LocalNodeIdImpl<N> {
  /**
   * Return the given {@link NodeId} casted to a {@link InstrOrPhiIdImpl}.
   *
   * <p>Any {@linkplain InstrOrPhi instruction or phi} ID is guaranteed to be a {@link
   * InstrOrPhiIdImpl}, so we have this dedicated method to reduce the amount of casts.
   */
  @SuppressWarnings("unchecked")
  static <I extends InstrOrPhi> InstrOrPhiIdImpl<I> cast(NodeId<I> id) {
    if (!(id instanceof InstrOrPhiIdImpl<?> instrOrPhiId)) {
      throw new ClassCastException(
          "ID which is allegedly an instruction or phi ID (but maybe not due to generic erasure) isn't a `InstrOrPhiIdImpl`: "
              + id);
    }
    return (InstrOrPhiIdImpl<I>) instrOrPhiId;
  }

  private final int disambiguator;
  private final String name;

  InstrOrPhiIdImpl(int disambiguator, String name) {
    super(
        "%" + (disambiguator == 0 ? "" : disambiguator) + NodeAndBBIds.quoteNameIfNecessary(name));

    this.disambiguator = disambiguator;
    this.name = name;
  }

  int disambiguator() {
    return disambiguator;
  }

  String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof InstrOrPhiIdImpl<?> that)) return false;
    return disambiguator == that.disambiguator && name.equals(that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator == 0 ? name : disambiguator);
  }
}

final class AuxiliaryNodeIdImpl<N extends LocalNode> extends LocalNodeIdImpl<N> {
  private final InstrOrPhiIdImpl<?> owner;
  private final int index;

  AuxiliaryNodeIdImpl(InstrOrPhiIdImpl<?> owner, int index) {
    super(owner + "#" + index);

    this.owner = owner;
    this.index = index;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof AuxiliaryNodeIdImpl<?> that)) return false;
    return owner.equals(that.owner) && index == that.index;
  }

  @Override
  public int hashCode() {
    return Objects.hash(owner, index);
  }
}
