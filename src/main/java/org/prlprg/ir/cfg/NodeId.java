package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
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
    return s.nextCharIs('%') || s.nextCharIs('\\') || s.nextCharIs('?') || s.nextCharIs('!');
  }

  /**
   * This is {@code T}, the type of the value a node with this identifier represents.
   *
   * <p>It can be {@code null} if the ID hasn't been assigned to a node (e.g. was just parsed). In
   * this case, it will be set when the ID is assigned to a node.
   *
   * <p>This is necessary due to Java's type erasure: see {@link Node#type()} for more info.
   *
   * <p>This is {@code null} for IDs that have just been parsed so the class can't be determined.
   * Once one of these "untyped" IDs is assigned to a node, the node will create a new ID with the
   * correct class and the untyped one will be discarded.
   */
  @Nullable Class<? extends T> type();

  @ParseMethod(SkipWhitespace.NONE)
  private static NodeId<?> parse(Parser p) {
    var s = p.scanner();

    return switch (s.peekChar()) {
      case '%' -> p.parse(LocalNodeId.class);
      case '\\' -> p.parse(GlobalNodeId.class);
      default ->
          throw s.fail(
              "Expected local node ID (starting with '%') or global node ID (starting with letter or '\\')");
    };
  }
}
