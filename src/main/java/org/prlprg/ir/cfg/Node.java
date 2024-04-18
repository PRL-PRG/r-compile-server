package org.prlprg.ir.cfg;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;

/** IR (intermediate representation) node; value or instruction. */
public interface Node {
  /**
   * CFG containing the node, or {@code null} if it's a shared static node (e.g. {@code
   * R_GlobalEnv}.
   */
  @Nullable CFG cfg();

  /**
   * The instruction that created this node. If this node is a phi or instruction, it will be
   * itself. If this node is a global, it will be {@code null}.
   */
  @Nullable InstrOrPhi origin();

  /**
   * Get the node's {@link #id()} with a more refined type.
   *
   * <p>We have an invariant that the type parameter of a node's id is always its specific class.
   * Unfortunately this invariant is inexpressible in Java's type system. This method is the
   * workaround so we don't need to put {@code @SuppressWarning("unchecked")} everywhere.
   */
  @SuppressWarnings("unchecked")
  static <N extends Node> NodeId<? extends N> idOf(N node) {
    return (NodeId<? extends N>) node.id();
  }

  /**
   * Unique identifier and a short descriptive name of the node.
   *
   * <p>If {@link #cfg()} is non-null, the returned ID must be unique to this node within the CFG.
   * If {@link #cfg()} is null, the returned ID must be unique within <b>every</b> CFG.
   *
   * <p>Ids follow the common syntax, derived from <a
   * href="https://mlir.llvm.org/docs/LangRef/">MLIR's</a>:
   *
   * <ul>
   *   <li>Global node ids don't start with {@code %}, so they won't conflict with local nodes.
   *   <li>Local instructions start with {@code %} followed by a descriptive name, and then a number
   *       if needed to disambiguate them from other local nodes. Use {@link CFG#nextNodeId(String)}
   *       to create.
   *   <li>Phis start with {@code φ} followed by a descriptive name and number if needed. The name
   *       is the same as that of the first input value. Be aware that a phi and local instruction
   *       may exist whose ids are only different in the {@code %}/{@code φ} prefix.
   *   <li>Derived nodes from instructions with multiple return values have the id {@code
   *       <origin>#<name>}, e.g. {@code %for2#info}.
   * </ul>
   */
  NodeId<?> id();
}

/** An IR node with a non-null {@link CFG}. */
interface NodeWithCfg extends Node {
  // We must explicitly annotate with `@Nonnull`, otherwise IntelliJ assumes this is still nullable.
  // Unfortunately, IntelliJ still thinks `@Nonnull` is a useless annotation, so we must also
  // suppress the warning.
  @SuppressWarnings("NullableProblems")
  @Override
  @Nonnull
  CFG cfg();
}
