package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.SequencedCollection;
import org.prlprg.util.Reflection;

/** IR instruction which is the final instruction and outgoing edge of a basic block. */
public non-sealed interface Jump extends Instr {
  /**
   * (A view of) {@link BB}s that this jump can go to.
   *
   * <p>These are ordered to ensure deterministic traversal.
   */
  SequencedCollection<BB> targets();

  @Override
  Data<?> data();

  sealed interface Data<I extends Jump> extends Instr.Data<I> permits Jumps.Void {}
}

abstract non-sealed class JumpImpl<D extends Jump.Data<?>> extends InstrImpl<D> implements Jump {
  JumpImpl(Class<D> dataClass, CFG cfg, D data) {
    super(dataClass, cfg, data);
  }

  @Override
  public SequencedCollection<BB> targets() {
    // Reflectively get all BB record components
    var cls = data().getClass();
    assert cls.isRecord() : "Instr.Data must be a record";
    return Arrays.stream(cls.getRecordComponents())
        .filter(cmp -> cmp.getType() == BB.class)
        .map(cmp -> (BB) Reflection.getComponent(data(), cmp))
        .collect(ImmutableList.toImmutableList());
  }
}

/** {@link Jump} which doesn't return anything. */
final class VoidJumpImpl extends JumpImpl<Jumps.Void> {
  VoidJumpImpl(CFG cfg, Jumps.Void data) {
    super(Jumps.Void.class, cfg, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
