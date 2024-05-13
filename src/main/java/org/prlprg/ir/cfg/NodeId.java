package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Objects;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
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
@Immutable
public interface NodeId<N extends Node> {
  /**
   * Specific class of the node with this id.
   *
   * <p>This is used for internal checks. It may be {@code null} for parsed nodes.
   */
  @Nullable Class<? extends N> clazz();

  /**
   * Get the id's string representation, without the information that determines its type.
   *
   * <p><i>Don't</i> print or compare ids with this, because two identifiers may have the same name.
   * 'Use {@link Object#toString()} for the real string representation, which is guaranteed to be
   * unique. This is mainly used internally to construct ids whose string representations are
   * derived from other ids, so that the type information doesn't get redundantly added over and
   * over.
   */
  String name();
}

/**
 * Base class of all {@link NodeId}s.
 *
 * <p>Stores its id and name so they don't have to be re-computed.
 */
abstract class NodeIdImpl<N extends Node> implements NodeId<N> {
  private final @Nullable Class<? extends N> clazz;
  private final String id;
  private final String name;

  protected NodeIdImpl(@Nullable Class<? extends N> clazz, String id, String name) {
    this.clazz = clazz;
    this.id = id;
    this.name = name;
  }

  public @Nullable Class<? extends N> clazz() {
    return clazz;
  }

  @Override
  public String name() {
    return name;
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

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    var id =
        switch (s.peekChar()) {
          case '{' -> p.parse(GlobalNodeId.class);
          case '%' -> p.parse(InstrId.class);
          case 'φ' -> p.parse(PhiId.class);
          default ->
              throw s.fail(
                  "Expected global node ID (starting with '{') or local node ID (starting with '%' or 'φ')");
        };

    while (s.trySkip('#')) {
      id = AuxillaryNodeId.parse(p, id);
    }

    return id;
  }
}

final class InstrId<N extends Instr> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored for internal assertions.
   * The name is also escaped and disambiguated within the {@link CFG} if necessary.
   */
  public InstrId(N node, CFG cfg, String name) {
    this(Classes.classOf(node), cfg.nextInstrOrPhiId(name));
  }

  private InstrId(@Nullable Class<? extends N> clazz, String name) {
    super(clazz, '%' + name, name);
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static InstrId<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('%');
    return new InstrId<>(null, InstrPhiAndBBIds.readIdNameLiterally(s));
  }
}

final class PhiId<N extends Phi<?>> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored for internal assertions.
   * The name is also escaped and disambiguated within the {@link CFG} if necessary.
   */
  public PhiId(N node, CFG cfg, String name) {
    this(Classes.classOf(node), cfg.nextInstrOrPhiId(name));
  }

  private PhiId(@Nullable Class<? extends N> clazz, String name) {
    super(clazz, 'φ' + name, name);
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static PhiId<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('φ');
    return new PhiId<>(null, InstrPhiAndBBIds.readIdNameLiterally(s));
  }
}

final class AuxillaryNodeId<N extends Node> extends NodeIdImpl<N> {
  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored for internal assertions.
   * The name is <i>not</i> escaped or disambiguated, and this will throw an {@link
   * IllegalArgumentException} if the name is not a valid CFG id or number.
   */
  public AuxillaryNodeId(N node, NodeId<?> base, String memberId) {
    this(Classes.classOf(node), base, memberId);
  }

  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  private AuxillaryNodeId(@Nullable Class<? extends N> clazz, NodeId<?> base, String memberId) {
    super(clazz, base + "#" + memberId, memberId);
    if (!InstrPhiAndBBIds.isValidUnescapedId(memberId)
        && !memberId.chars().allMatch(Character::isDigit)) {
      throw new IllegalArgumentException(
          "Auxillary node's member ID must be a valid CFG id or number");
    }
  }

  /** Should only be called from {@link NodeIdImpl}. */
  static AuxillaryNodeId<?> parse(Parser p, NodeId<?> base) {
    var s = p.scanner();

    s.assertAndSkip('#');
    var memberId =
        s.readWhile(
            s.nextCharSatisfies(Character::isDigit)
                ? Character::isDigit
                : InstrPhiAndBBIds::isValidUnescapedIdChar);
    return new AuxillaryNodeId<>((Class<? extends Node>) null, base, memberId);
  }
}
