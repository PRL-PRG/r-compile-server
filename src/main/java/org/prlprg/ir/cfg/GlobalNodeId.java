package org.prlprg.ir.cfg;

import javax.annotation.Nonnull;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

/**
 * Unique identifier for a {@link GlobalNode}.
 *
 * <p>This stores a back-reference to the {@link GlobalNode} it identifies, for convenience and for
 * parsing and printing; see {@link #node()} for more explanation.
 */
public sealed interface GlobalNodeId<T> extends NodeId<T> {
  /**
   * Gets the node with this ID.
   *
   * <p>Node IDs exist because {@link CFGEdit} must be able to store nodes in a way that they can be
   * replayed across CFGs, and the IDs must still be equivalent even though the duplicated node in
   * the other CFG is not. Thus, multiple local nodes may have the same ID. But a global node can be
   * reused across CFGs, so each global node ID is only assigned to one global node, therefore it
   * can store it directly.
   */
  GlobalNode<T> node();

  @Override
  @Nonnull
  RType type();

  @ParseMethod
  private static GlobalNodeId<?> parse(Parser p) {
    return p.parse(GlobalNodeIdImpl.class);
  }
}

record GlobalNodeIdImpl<T>(GlobalNode<T> node) implements GlobalNodeId<T> {
  @Override
  public @Nonnull RType type() {
    return node.type();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  // region serialization and deserialization
  @ParseMethod(SkipWhitespace.NONE)
  private static GlobalNodeIdImpl<?> parse(Parser p) {
    var s = p.scanner();

    var subclass =
        switch (s.peekChar()) {
          case '?' -> StaticEnv.class;
          case '!' -> InvalidNode.class;
          case '[', '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '"', '\'', '<' ->
              Constant.class;
          default ->
              throw s.fail(
                  "Expected global node ID (starting with '?', '!', '[', '-', a digit, '\"', '\\'', or '<')");
        };

    var id = p.parse(subclass).id();

    return switch (id) {
      case GlobalNodeIdImpl<?> g -> g;
    };
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(node);
  }
  // endregion serialization and deserialization
}
