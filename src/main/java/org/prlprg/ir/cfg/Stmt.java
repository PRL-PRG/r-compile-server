package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 *
 * @see Instr
 */
public non-sealed interface Stmt extends Instr {
  @Override
  StmtData<?> data();

  @Override
  NodeId<? extends Stmt> id();

  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   */
  record Args(String name, StmtData<?> data) {
    public Args(StmtData<?> data) {
      this("", data);
    }
  }

  /** Serialized form where everything is replaced by IDs. */
  record Serial(NodeId<? extends Stmt> id, MapToIdIn<? extends StmtData<?>> data) {
    Serial(Stmt node) {
      this(NodeId.of(node), MapToIdIn.of((StmtData<? extends Stmt>) node.data()));
    }
  }
}

abstract non-sealed class StmtImpl<D extends StmtData<?>> extends InstrImpl<D> implements Stmt {
  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   *
   * <p>Unlike {@link Stmt.Args}, this exposes that statements can be created with existing IDs.
   * Such functionality is only used in {@link CFGEdit}s that are replayed to maintain determinism.
   */
  record Args(NodeId<? extends Stmt> id, StmtData<?> data) {
    Args(CFG cfg, Serial serial) {
      this(serial.id(), serial.data().decode(cfg));
    }

    Args(Stmt node) {
      this(NodeId.of(node), node.data());
    }
  }

  StmtImpl(Class<D> dataClass, CFG cfg, NodeId<? extends Instr> id, D data) {
    super(dataClass, cfg, id, data);
  }

  @Override
  public NodeId<? extends Stmt> id() {
    return uncheckedCastId();
  }
}

/** {@link Stmt} (IR instruction) which doesn't produce anything. */
final class VoidStmtImpl extends StmtImpl<StmtData.Void> {
  VoidStmtImpl(CFG cfg, NodeId<? extends Instr> id, StmtData.Void data) {
    super(StmtData.Void.class, cfg, id, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}

/** {@link Stmt} (IR instruction) which produces exactly one value, itself. */
abstract class SelfReturningStmtImpl<D extends StmtData<?>> extends StmtImpl<D> {
  private final ImmutableList<Node> returns = ImmutableList.of(this);

  SelfReturningStmtImpl(Class<D> dataClass, CFG cfg, NodeId<? extends Instr> id, D data) {
    super(dataClass, cfg, id, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return returns;
  }
}
