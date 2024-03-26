package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.rshruntime.DeoptReason;

/**
 * Each type of jump instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from jumps.
 */
public sealed interface JumpData<I extends Jump> extends InstrData<I> {
  /** Replace "return" with a new target. */
  default JumpData<I> replaceReturnWith(BB newTarget) {
    return this;
  }

  sealed interface Void extends JumpData<Jump> {
    @Override
    default Jump make(CFG cfg, String name) {
      return new VoidJumpImpl(cfg, name, this);
    }
  }

  record Goto(BB next) implements Void {}

  record Branch(RValue condition, BB ifTrue, BB ifFalse) implements Void {}

  record NonLocalReturn(RValue value, Env env) implements Void {
    @Override
    public JumpData<Jump> replaceReturnWith(BB newTarget) {
      throw new UnsupportedOperationException(
          "Can't inline or otherwise replace the return, because we don't know if it's local");
    }
  }

  record Return(RValue value) implements Void {
    @Override
    public JumpData<Jump> replaceReturnWith(BB newTarget) {
      return new Goto(newTarget);
    }
  }

  record Unreachable() implements Void {}

  record Checkpoint_(
      @TypeIs("BOOL") ImmutableList<RValue> tests,
      @SameLen("tests") ImmutableList<DeoptReason> failReasons,
      BB ifPass,
      BB ifFail)
      implements JumpData<Checkpoint> {
    public int numAssumptions() {
      return tests.size();
    }

    @Override
    public Checkpoint make(CFG cfg, String name) {
      return new CheckpointImpl(cfg, name, this);
    }
  }

  record Deopt(FrameState frameState) implements Void {}
}
