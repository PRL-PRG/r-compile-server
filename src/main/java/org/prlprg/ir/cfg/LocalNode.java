package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.CFGEdit.SetLocalNodeId;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * A {@link Node} that belongs to a specific control-flow-graph ({@link CFG}).
 *
 * <p>There are 2 types of node: these nodes that only exist in a specific control-flow graph, e.g.
 * {@link Param}s and instruction outputs; and {@link GlobalNode}s that can exist in any graph, e.g.
 * {@link Constant}s.
 *
 * <p>Some local nodes - {@link Phi}s and {@link InstrOutput}s - also have <b>liveness</b>: there
 * are regions in the {@link CFG} where they are "dead" and thus can't be referenced, or the
 * compiled program would potentially crash at runtime.
 */
public sealed class LocalNode<T> implements Node<T> permits Param, Phi, InstrOutput {
  private final CFG cfg;
  private Class<? extends T> type;
  private LocalNodeId<T> id;

  /**
   * Downcast {@code LocalNode<? extends A>} to {@code LocalNode<? extends B>} where {@code B &lt;:
   * A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  @Override
  public <U> LocalNode<? extends U> cast(Class<U> clazz) {
    return (LocalNode<U>) Node.super.cast(clazz);
  }

  protected LocalNode(CFG cfg, Class<? extends T> type, LocalNodeId<T> id) {
    this.cfg = cfg;
    this.type = type;
    this.id = id;

    id.lateAssignType(type);
  }

  /**
   * Unsafely change this node's type.
   *
   * <p>You must ensure that, either the type is a subtype of the current one, or all occurrences of
   * the node have the new type checked, to ensure no occurrence's static type is more specific.
   */
  @SuppressWarnings("unchecked")
  protected void unsafeSetType(Class<?> type) {
    this.type = (Class<? extends T>) type;
    id.unsafeReassignType(type);
  }

  /**
   * Change the node's name.
   *
   * <p>The name is the "descriptive" part of the identifier (the part that makes the IR easier to
   * understand). This changes {@link #id()}, but all occurrences of the node will also be changed,
   * so it has no semantic effect.
   *
   * <p>This will record a {@link CFGEdit}.
   */
  public void rename(String newName) {
    setId(cfg().uniqueLocalId(newName));
  }

  /**
   * Change the node's id.
   *
   * <p>This is called internally and only when a specific ID is needed (e.g. for {@link CFGEdit}
   * undo/replay or {@link CFGCleanup} re-numbering), otherwise call {@link #rename(String)}.
   *
   * @throws IllegalArgumentException If the ID's {@link #type()} isn't delayed or the node's {@link
   *     #type()}.
   *     <p><b>OR</b> if the ID is taken by another {@link LocalNode} in the {@link CFG}.
   */
  final void setId(LocalNodeId<T> newId) {
    var oldId = id();

    unsafeSetId(id);

    cfg().record(new SetLocalNodeId<>(oldId, newId), new SetLocalNodeId<>(newId, oldId));
  }

  /**
   * Change the node's id.
   *
   * <p>This is the same as {@link #setId(LocalNodeId)}, except it doesn't record a {@link CFGEdit},
   * and it performs an unchecked cast on the {@link LocalNodeId}, hence "unsafe".
   *
   * @throws IllegalArgumentException If the ID's {@link #type()} isn't delayed or the node's {@link
   *     #type()}.
   *     <p><b>OR</b> if the ID is taken by another {@link LocalNode} in the {@link CFG}.
   */
  @SuppressWarnings("unchecked")
  final void unsafeSetId(LocalNodeId<?> newId) {
    newId.lateAssignType(type);

    cfg().untrack(this);
    id = (LocalNodeId<T>) newId;
    cfg().track(this);
  }

  /**
   * CFG containing the node.
   *
   * <p>The node can't be used in any other {@link CFG}. For example, the {@link #id()} of a local
   * node in a different {@link CFG} may be equal to this node's id, even though nodes are uniquely
   * identified by their {@link #id()}, because this uniqueness only holds within the {@link CFG}.
   */
  public CFG cfg() {
    return cfg;
  }

  @Override
  public Class<? extends T> type() {
    return type;
  }

  /**
   * Unique identifier for the node within its own {@link CFG}.
   *
   * <p>No other node in the same {@link CFG} can/will have the same ID. However, a local nodes in a
   * different {@link CFG} can have the same ID.
   */
  @Override
  public LocalNodeId<T> id() {
    return id;
  }

  // region serialization and deserialization
  @ParseMethod
  private Phi<?> parse(Parser ignored) {
    throw new UnsupportedOperationException("can't parse a local node outside of a BB");
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new CFGParseOrPrintContext(p.context(), cfg()).new BBContext(null)).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
