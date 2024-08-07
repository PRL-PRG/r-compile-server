package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableSet;
import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.rshruntime.DeoptReason;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Classes;

/** Unique identifier for a {@linkplain GlobalNode global node}. */
public interface GlobalNodeId<N extends GlobalNode> extends NodeId<N> {
  ImmutableSet<String> GLOBAL_NODE_TYPES = ImmutableSet.of("", "dr", "i", "e");

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

  @ParseMethod
  private static GlobalNodeId<?> parse(Parser p) {
    return p.parse(GlobalNodeIdImpl.class);
  }
}

final class GlobalNodeIdImpl<N extends GlobalNode> extends NodeIdImpl<N>
    implements GlobalNodeId<N> {
  private final N node;

  /**
   * Create a node id using the class of the given node and given descriptive name.
   *
   * <p>The node is not actually stored in the id, only its class is stored for internal assertions.
   * The id is the node's string representation, which must be of the form "type\\node", where
   * "type" is one of the values in {@link GlobalNodeId#GLOBAL_NODE_TYPES} and returned by {@link
   * GlobalNodeIdImpl#nodeTypeName(GlobalNode)}.
   *
   * @throws IllegalArgumentException If the node's string representation doesn't match the required
   *     format.
   */
  public GlobalNodeIdImpl(N node) {
    super(Classes.classOf(node));
    this.node = node;
  }

  @Override
  public N node() {
    return node;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
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

  // region serialization and deserialization
  /**
   * Returns the prefix that identifies the type of global node the ID encodes when it's parsed.
   *
   * <p>The ID syntax is "type\\node", where "type" is this return value and "node" is {@code
   * node.}{@link Object#toString() toString()} or {@link Printer#print(Object) Printer.print}{@code
   * (node)} when printed (need to use {@link Printer#print(Object)} to retain context).
   */
  private static String nodeTypeName(GlobalNode node) {
    return switch (node) {
      case Constant _ -> "";
      case ConstantDeoptReason _ -> "dr";
      case InvalidNode _ -> "i";
      case StaticEnv _ -> "e";
      default -> throw new AssertionError("Unhandled global node type: " + node);
    };
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static GlobalNodeIdImpl<?> parse(Parser p) {
    var s = p.scanner();

    var type = s.nextCharIs('\\') ? "" : s.readJavaIdentifierOrKeyword();
    s.assertAndSkip('\\');
    var node =
        switch (type) {
          case "" -> new Constant(p.parse(SEXP.class));
          case "dr" -> new ConstantDeoptReason(p.parse(DeoptReason.class));
          case "i" ->
              InvalidNode.getOrCreate(
                  s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0, Names.read(s, true));
          case "e" -> {
            var name = s.readJavaIdentifierOrKeyword();
            var env = StaticEnv.ALL.get(name);
            if (env == null) {
              throw s.fail("Unknown static environment: " + name);
            }
            yield env;
          }
          default -> throw s.fail("Unhandled global node type: " + type);
        };
    return (GlobalNodeIdImpl<?>) node.id();
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(nodeTypeName(node));
    w.write('\\');
    switch (node) {
      case Constant(var constant) -> p.print(constant);
      case ConstantDeoptReason(var dr) -> p.print(dr);
      case InvalidNode i -> w.write(i.toString());
      case StaticEnv s -> w.write(s.toString());
      default ->
          throw new AssertionError(
              "Unhandled global node type with handled `nodeTypeName`: " + nodeTypeName(node));
    }
  }
  // endregion serialization and deserialization
}
