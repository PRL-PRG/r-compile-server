package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableBiMap;
import java.util.Objects;
import javax.annotation.Nonnull;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.util.Strings;

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
  Class<T> type();

  @ParseMethod
  private static GlobalNodeId<?> parse(Parser p) {
    return p.parse(GlobalNodeIdImpl.class);
  }
}

record GlobalNodeIdImpl<T>(GlobalNode<T> node) implements GlobalNodeId<T> {
  @Override
  public @Nonnull Class<T> type() {
    return node.type();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  // region serialization and deserialization
  /**
   * The first character identifies the type of global node the ID encodes when it's parsed.
   *
   * <p>e.g. "\" for constants, "!" for invalid nodes.
   */
  @SuppressWarnings("rawtypes")
  private static final ImmutableBiMap<Class<? extends GlobalNode>, Character> NODE_CLASS_MAP =
      ImmutableBiMap.of(
          Constant.class, '\\',
          StaticEnv.class, '?',
          InvalidNode.class, '!');

  @ParseMethod(SkipWhitespace.NONE)
  private static GlobalNodeIdImpl<?> parse(Parser p) {
    var s = p.scanner();

    var subclass = s.peekChar() > 127 ? null : NODE_CLASS_MAP.inverse().get((char) s.peekChar());
    if (subclass == null) {
      throw s.fail(
          Strings.join(" | ", c -> Character.toString(c), NODE_CLASS_MAP.values()),
          Character.toString(s.peekChar()));
    }
    s.readChar();

    return (GlobalNodeIdImpl<?>) p.parse(subclass).id();
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(
        Objects.requireNonNull(
            NODE_CLASS_MAP.get(node.getClass()),
            "global node subclass not in `GlobalNodeId#NODE_CLASS_MAP`"));
    p.print(node);
  }
  // endregion serialization and deserialization
}
