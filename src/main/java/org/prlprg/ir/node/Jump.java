package org.prlprg.ir.node;

import com.google.common.collect.ImmutableCollection;
import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import org.prlprg.ir.BB;
import org.prlprg.util.Reflection;

/** IR instruction which is the final instruction and outgoing edge of a basic block. */
public interface Jump<D extends Jump.Data> extends Instr<D> {
  /** The BBs that this jump can go to. */
  ImmutableCollection<BB> targets();

  sealed interface Data extends Instr.Data permits ForLoopJump.Data, Jumps.Void {}
}

abstract class JumpImpl<D extends Jump.Data> extends InstrImpl<D> implements Jump<D> {
  JumpImpl(BB bb, D data) {
    super(bb, data);
  }

  @Override
  public ImmutableCollection<BB> targets() {
    // Reflectively get all BB record components
    var cls = data().getClass();
    assert cls.isRecord() : "Instr.Data must be a record";
    return Arrays.stream(cls.getRecordComponents())
        .filter(cmp -> cmp.getType() == BB.class)
        .map(cmp -> (BB) Reflection.getComponent(data(), cmp))
        .collect(ImmutableList.toImmutableList());
  }
}
