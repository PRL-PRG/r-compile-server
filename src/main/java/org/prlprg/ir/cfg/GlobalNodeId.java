package org.prlprg.ir.cfg;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.rshruntime.DeoptReason;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Classes;

/** Unique identifier for a {@linkplain GlobalNode global node}. */
public interface GlobalNodeId<N extends GlobalNode> extends NodeId<N> {
  /**
   * Gets or creates the node with this ID.
   *
   * <p>Node IDs exist because {@link CFGEdit} must be able to store nodes in a way that they can be
   * replayed across CFGs, and the IDs must still be equivalent even though the duplicated node in
   * the other CFG is not. Thus, multiple local nodes may have the same ID. But a global node can be
   * reused across CFGs, so each global node ID is only assigned to one global node, therefore it
   * can store it directly.
   */
  N node();

  @Override
  default boolean isLocal() {
    return false;
  }
}

final class GlobalNodeIdImpl<N extends GlobalNode> extends NodeIdImpl<N>
    implements GlobalNodeId<N> {
  private final N node;

  private static String nodeTypeName(GlobalNode node) {
    return switch (node) {
      case Constant _ -> "const";
      case ConstantDeoptReason _ -> "dr";
      case InvalidNode _ -> "invalid";
      case StaticEnv _ -> "env";
      default -> throw new AssertionError("Unhandled global node type: " + node);
    };
  }

  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored for internal assertions.
   * The id is the node's string representation, which must be of the form "{type:name}" where
   * "name" can contain any character except '}', and the name is the "name" part of that string.
   *
   * @throws IllegalArgumentException If the node's string representation doesn't match the required
   *     format.
   */
  public GlobalNodeIdImpl(N node) {
    super(Classes.classOf(node), node.toString(), nodeTypeName(node) + "." + node);
    this.node = node;
  }

  @Override
  public N node() {
    return node;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof GlobalNodeIdImpl<?> that)) return false;
    return Objects.equals(node, that.node);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(node);
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static GlobalNodeId<?> parse(Parser p) {
    var s = p.scanner();

    var type = s.readUntil('.');
    s.assertAndSkip('.');
    var node =
        switch (type) {
            // ???: This may cause issues (makes parsing much harder since IDs have
            // context-sensitive
            // syntax, and large SEXPs may be repeated)
          case "const" -> new Constant(p.parse(SEXP.class));
            // This makes IDs have context-sensitive syntax, but won't be large.
          case "dr" -> new ConstantDeoptReason(p.parse(DeoptReason.class));
          case "invalid" -> InvalidNode.parsed(s.readUInt(), s.readJavaIdentifierOrKeyword());
          case "env" -> {
            var name = s.readJavaIdentifierOrKeyword();
            var env = StaticEnv.ALL.get(name);
            if (env == null) {
              throw s.fail("Unknown static environment: " + name);
            }
            yield env;
          }
          default -> throw s.fail("Unhandled global node type: " + type);
        };
    return node.id();
  }
}
