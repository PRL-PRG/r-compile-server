package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import org.prlprg.util.Reflection;

/** IR instruction which is the final instruction and outgoing edge of a basic block. */
public non-sealed interface Jump extends Instr {
  /**
   * (A shallow copy of) {@link BB}s that this jump can go to.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  ImmutableList<BB> targets();

  /**
   * Replace the target in arguments.
   *
   * @throws IllegalArgumentException If the old target wasn't in {@link #targets()}.
   */
  void replace(BB old, BB replacement);

  @Override
  JumpData<?> data();

  @Override
  NodeId<? extends Jump> id();

  record Args<I extends Jump>(String name, JumpData<I> data) {
    public IdArgs<I> id() {
      return new IdArgs<>(name, MapToIdIn.of(data));
    }
  }

  record IdArgs<I extends Jump>(String name, MapToIdIn<? extends JumpData<I>> data) {
    public IdArgs(String name, JumpData<I> data) {
      this(name, MapToIdIn.of(data));
    }

    public Args<I> decode(CFG cfg) {
      return new Args<>(name, data.decode(cfg));
    }
  }
}

abstract non-sealed class JumpImpl<D extends JumpData<?>> extends InstrImpl<D> implements Jump {
  JumpImpl(Class<D> dataClass, CFG cfg, String name, D data) {
    super(dataClass, cfg, name, data);
  }

  @Override
  public ImmutableList<BB> targets() {
    // Reflectively get all BB record components
    if (!(data() instanceof Record r)) {
      throw new IllegalArgumentException("data is not a record");
    }

    return Arrays.stream(data().getClass().getRecordComponents())
        .filter(cmp -> cmp.getType() == BB.class)
        .map(cmp -> (BB) Reflection.getComponent(r, cmp))
        .collect(ImmutableList.toImmutableList());
  }

  @Override
  public void replace(BB old, BB replacement) {
    replace("BB", old, replacement);
  }

  @Override
  public NodeId<? extends Jump> id() {
    return uncheckedCastId();
  }
}

/** {@link Jump} which doesn't return anything. */
final class VoidJumpImpl extends JumpImpl<JumpData.Void> {
  VoidJumpImpl(CFG cfg, String name, JumpData.Void data) {
    super(JumpData.Void.class, cfg, name, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}