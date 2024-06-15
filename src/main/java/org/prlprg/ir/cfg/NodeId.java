package org.prlprg.ir.cfg;

import java.util.Objects;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Scanner;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.util.Classes;

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

  /** Whether the ID is for a local or global node. */
  boolean isLocal();

  /**
   * Descriptive name to make the logic in the CFG clearer, or empty string if there is none.
   *
   * <p>Specifically:
   *
   * <ul>
   *   <li>For a local node: this is the variable name if the node refers to the value in that
   *       variable at any point in time, otherwise it's the empty string.
   *   <li>For a global node: it depends.
   * </ul>
   *
   * <p>Different IDs in the same CFG may have the same name; use {@link Object#toString()} to
   * return a unique string representation.
   */
  String name();
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

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    var peek = s.peekChar();
    if (Character.isLetter(peek)) {
      return p.parse(GlobalNodeId.class);
    } else if (peek == '%') {
      return p.parse(LocalNodeIdImpl.class);
    } else {
      throw s.fail(
          "Expected global node ID (starting with letter) or local node ID (starting with '%')");
    }
  }
}

final class LocalNodeIdImpl<N extends LocalNode> extends NodeIdImpl<N> {
  private final int disambiguator;
  private final String name;
  private final String toString;

  /** Create an instruction or phi id (of the given class, CFG, and name). */
  LocalNodeIdImpl(N node, String name) {
    this(Classes.classOf(node), node.cfg().nextInstrOrPhiDisambiguator(), name, -1);
  }

  /** Create an auxiliary node ID (of the given class, base ID, and auxiliary number). */
  LocalNodeIdImpl(N node, NodeId<?> base, int auxiliary) {
    super(Classes.classOf(node));
    if (!(base instanceof LocalNodeIdImpl<?> b)) {
      throw new AssertionError(
          "auxiliary node ID can only be created for an instruction or phi ID, not a global node ID");
    }
    assert b.disambiguator == -1
        : "auxiliary node ID can only be created for an instruction or phi ID, not another auxiliary node ID";

    name = base.name();
    toString = base + "#" + auxiliary;
    this.disambiguator = b.disambiguator;
  }

  private LocalNodeIdImpl(
      @Nullable Class<? extends N> clazz, int disambiguator, String name, int auxiliary) {
    super(clazz);

    this.name = name;
    toString =
        "%"
            + disambiguator
            + NodeAndBBIds.quoteNameIfNecessary(name)
            + (auxiliary == -1 ? "" : "#" + auxiliary);
    this.disambiguator = disambiguator;
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
  public String name() {
    return name;
  }

  @Override
  public String toString() {
    return toString;
  }

  @Override
  public boolean isLocal() {
    return true;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof LocalNodeIdImpl<?> nodeId)) return false;
    return disambiguator == nodeId.disambiguator;
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator);
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static LocalNodeIdImpl<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('%');
    var disambiguator = s.readUInt();
    var name = NodeAndBBIds.readName(s);
    var auxiliary = s.trySkip('#') ? s.readUInt() : -1;
    return new LocalNodeIdImpl<>(null, disambiguator, name, auxiliary);
  }
}
