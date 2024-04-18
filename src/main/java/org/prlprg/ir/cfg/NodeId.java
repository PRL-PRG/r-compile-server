package org.prlprg.ir.cfg;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.util.Classes;
import org.prlprg.util.InterfaceHiddenMembers;

/**
 * CFG-unique identifier for a node of class {@code N}, which can refer to a future node in {@link
 * CFGEdit}s. Every local node has an id unique within its CFG, and every global node has an id
 * unique within <b>every</b> CFG.
 */
@InterfaceHiddenMembers(NodeIdImpl.class)
public interface NodeId<N extends Node> {
  /** Specific class of the node with this id. */
  Class<? extends N> clazz();

  /**
   * Get the id's string representation, without the preceeding '%' or 'φ' if it's local.
   *
   * <p><i>Don't</i> print or compare ids with this, use {@link Object#toString()} for the real
   * string representation. This is because a regular instruction, phi, and global may have the same
   * {@code name}, but they will always have a different string representation. This is used
   * internally to construct ids whose string representations are derived from other ids.
   */
  default String name() {
    var full = toString();
    return full.startsWith("%") || full.startsWith("φ") ? full.substring(1) : full;
  }
}

abstract class NodeIdImpl<N extends Node> implements NodeId<N> {
  private final Class<? extends N> clazz;
  private final String id;

  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  protected NodeIdImpl(N node, String id) {
    this.clazz = Classes.classOf(node);
    this.id = id;
  }

  private NodeIdImpl(Class<? extends N> clazz, String id) {
    this.clazz = clazz;
    this.id = id;
  }

  public Class<? extends N> clazz() {
    return clazz;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof NodeIdImpl<?> nodeId)) return false;
    return Objects.equals(id, nodeId.id);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id);
  }

  @Override
  public String toString() {
    return id;
  }

  /**
   * Node ID parsed from a string.
   *
   * <p>This means that, unlike other constructed ids constructed directly from strings, it may be
   * equal to an existing ID in the CFG.
   */
  private static final class Parsed extends NodeIdImpl<Node> {
    public Parsed(String id) {
      super(Node.class, id);
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    // IDs are literal, so keep the type/disambiguator and quoted content including all punctuation.
    var type = s.trySkip('%') ? '%' : s.trySkip('φ') ? 'φ' : "";
    var content = NodesAndBBIds.readIdNameLiterally(s);
    var auxMembers = new StringBuilder();
    while (s.trySkip('#')) {
      auxMembers
          .append('#')
          .append(
              s.readWhile(
                  s.nextCharSatisfies(Character::isDigit)
                      ? Character::isDigit
                      : NodesAndBBIds::isValidUnescapedIdChar));
    }

    return new Parsed(type + content + auxMembers);
  }
}

final class GlobalNodeId<N extends Node> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public GlobalNodeId(N node, String id) {
    super(node, id);
  }
}

final class InstrId<N extends Instr> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public InstrId(N node, CFG cfg, String name) {
    super(node, '%' + cfg.nextNodeId(name));
  }
}

final class PhiId<N extends Phi<?>> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public PhiId(N node, CFG cfg, String name) {
    super(node, 'φ' + cfg.nextNodeId(name));
  }
}

final class AuxillaryNodeId<N extends Node> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive member name.
   *
   * <p>The node is not actually stored in the id, only its class is stored internally for internal
   * assertions. Equality is only determined by the class of the id itself (not node), and the other
   * arguments to this constructor.
   */
  public AuxillaryNodeId(N node, NodeId<?> base, String memberId) {
    super(node, base + "#" + memberId);
    assert NodesAndBBIds.isValidUnescapedId(memberId)
            || memberId.chars().allMatch(Character::isDigit)
        : "auxillary node's member ID must be a valid CFG id or number";
  }
}
