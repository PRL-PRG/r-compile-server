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

  record Args<I extends Stmt>(String name, StmtData<I> data) {
    public IdArgs<I> id() {
      return new IdArgs<>(name, MapToIdIn.of(data));
    }
  }

  record IdArgs<I extends Stmt>(String name, MapToIdIn<? extends StmtData<I>> data) {
    public IdArgs(String name, StmtData<I> data) {
      this(name, MapToIdIn.of(data));
    }

    public Args<I> decode(CFG cfg) {
      return new Args<>(name, data.decode(cfg));
    }
  }
}

abstract non-sealed class StmtImpl<D extends StmtData<?>> extends InstrImpl<D> implements Stmt {
  StmtImpl(Class<D> dataClass, CFG cfg, String name, D data) {
    super(dataClass, cfg, name, data);
  }

  @Override
  public NodeId<? extends Stmt> id() {
    return uncheckedCastId();
  }
}

/** {@link Stmt} (IR instruction) which doesn't produce anything. */
final class VoidStmtImpl extends StmtImpl<StmtData.Void> {
  VoidStmtImpl(CFG cfg, String name, StmtData.Void data) {
    super(StmtData.Void.class, cfg, name, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}

/** {@link Stmt} (IR instruction) which produces exactly one value, itself. */
abstract class SelfReturningStmtImpl<D extends StmtData<?>> extends StmtImpl<D> {
  private final ImmutableList<Node> returns = ImmutableList.of(this);

  SelfReturningStmtImpl(Class<D> dataClass, CFG cfg, String name, D data) {
    super(dataClass, cfg, name, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return returns;
  }
}
