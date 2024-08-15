package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Scanner;
import org.prlprg.parseprint.SkipWhitespace;

/**
 * Identifies a {@link Node Node<T>} within a {@link CFG} and {@link CFGEdit}s that can be replayed
 * across different {@link CFG}s.
 *
 * <p>Every {@link Node} has an ID, accessible via {@link Node#id()}. Every {@link LocalNode} has an
 * ID unique within its {@link CFG}, but not other {@link CFG}s. Every {@link GlobalNode} has an ID
 * unique within all {@link CFG}s.
 */
@Immutable
public sealed interface NodeId<T> permits LocalNodeId, GlobalNodeId {
  /**
   * Returns {@code true} if the next string begins a {@link NodeId}.
   *
   * <p>This is particularly important to disambiguate {@linkplain org.prlprg.primitive.Names names}
   * and node IDs, since they may both start with alphanumeric characters.
   */
  static boolean isNodeIdStart(Scanner s) {
    var c = s.peekChar();
    return switch (c) {
      case '%',
              '?',
              '!',
              '[',
              '-',
              '0',
              '1',
              '2',
              '3',
              '4',
              '5',
              '6',
              '7',
              '8',
              '9',
              '"',
              '\'',
              '<' ->
          true;
      default -> false;
    };
  }

  /**
   * This represents {@link T}: the type that the node represents an abstract runtime value of.
   *
   * <p>It can be {@code null} if the ID hasn't been assigned to a node (e.g. was just parsed). In
   * this case, it will be set when the ID is assigned to a {@link Node}. Otherwise, it's equal to
   * the assigned node's {@link Node#type()}.
   *
   * <p>It's purpose is the same as {@link Node#type()}'s, see that documentation for more details.
   */
  @Nullable RType type();

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    return switch (s.peekChar()) {
      case '%' -> p.parse(LocalNodeId.class);
      case '?', '!', '[', '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '"', '\'', '<' ->
          p.parse(GlobalNodeId.class);
      default ->
          throw s.fail(
              "Expected local node ID (starting with '%') or global node ID (starting with '?', '!', '[', '-', a digit, '\"', '\\'', or '<')");
    };
  }
}
