package org.prlprg.ir.cfg;

import java.util.regex.Pattern;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.rshruntime.DeoptReason;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Classes;
import org.prlprg.util.InterfaceHiddenMembers;

/**
 * Unique identifier for a <b>global {@linkplain Node node}</b>; that is, one that doesn't exist in
 * any {@link CFG} (it's {@link Node#cfg()} is {@code null}).
 */
@InterfaceHiddenMembers(GlobalNodeIdImpl.class)
public interface GlobalNodeId<N extends Node> extends NodeId<N> {
  /**
   * Gets or creates the node with this ID.
   *
   * <p>This node's {@link Node#id()} is this ID, and its {@link Node#cfg()} is {@code null}.
   */
  N node();
}

final class GlobalNodeIdImpl<N extends Node> extends NodeIdImpl<N> implements GlobalNodeId<N> {
  private static final Pattern REGEX = Pattern.compile("\\{\\w+:(.+)}", Pattern.DOTALL);

  private final N node;

  private static String checkAndGetName(String id) {
    var match = REGEX.matcher(id);
    if (!match.matches()) {
      throw new IllegalArgumentException(
          "global node ID must match regex '" + REGEX.pattern() + "': " + id);
    }
    return match.group(1);
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
    super(Classes.classOf(node), node.toString(), checkAndGetName(node.toString()));
    this.node = node;
  }

  @Override
  public N node() {
    return node;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static GlobalNodeId<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('{');
    var type = s.readUntil(':');
    s.assertAndSkip(':');
    var node =
        switch (type) {
          case "const" -> new Constant(p.parse(SEXP.class));
          case "dr" -> new ConstantDeoptReason(p.parse(DeoptReason.class));
          case "invalid" -> new InvalidNode(s.readUntil('}'));
          case "env" -> {
            var name = s.readUntil('}');
            var env = StaticEnv.ALL.get(name);
            if (env == null) {
              throw s.fail("Unknown static environment: " + name);
            }
            yield env;
          }
          default -> throw s.fail("Unhandled global node type: " + type);
        };
    s.assertAndSkip('}');
    return (GlobalNodeId<?>) node.id();
  }
}
