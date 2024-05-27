package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.type.REffect;
import org.prlprg.sexp.LangSXP;

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
    default Jump make(CFG cfg, TokenToCreateNewInstr id) {
      return new VoidJumpImpl(cfg, id, this);
    }
  }

  @EffectsAre({})
  record Goto(BB next) implements Void {}

  @EffectsAre({})
  record Branch(Optional<LangSXP> ast1, RValue condition, BB ifTrue, BB ifFalse)
      implements Void, InstrData.HasAst {
    public Branch(@Nullable LangSXP ast1, RValue condition, BB ifTrue, BB ifFalse) {
      this(Optional.ofNullable(ast1), condition, ifTrue, ifFalse);
    }

    public Branch(RValue condition, BB ifTrue, BB ifFalse) {
      this(Optional.empty(), condition, ifTrue, ifFalse);
    }
  }

  @EffectsAreAribtrary
  record NonLocalReturn(RValue value, @IsEnv RValue env) implements Void {
    @Override
    public JumpData<Jump> replaceReturnWith(BB newTarget) {
      throw new UnsupportedOperationException(
          "Can't inline or otherwise replace the return, because we don't know if it's local");
    }
  }

  @EffectsAre(REffect.LeaksNonEnvArg)
  record Return(RValue value) implements Void {
    @Override
    public JumpData<Jump> replaceReturnWith(BB newTarget) {
      return new Goto(newTarget);
    }
  }

  @EffectsAre({})
  record Unreachable() implements Void {}

  @EffectsAre({})
  record Checkpoint(
      @TypeIs("BOOL") ImmutableList<RValue> tests,
      @SameLen("tests") ImmutableList<DeoptReason> failReasons,
      BB ifPass,
      BB ifFail)
      implements JumpData<org.prlprg.ir.cfg.Checkpoint> {
    public int numAssumptions() {
      return tests.size();
    }

    @Override
    public org.prlprg.ir.cfg.Checkpoint make(CFG cfg, TokenToCreateNewInstr id) {
      return new CheckpointImpl(cfg, id, this);
    }
  }

  @EffectsAreAribtrary
  record Deopt(
      FrameState frameState,
      Optional<DeoptReason> reason,
      Optional<RValue> trigger,
      boolean escapedEnv)
      implements Void {
    public Deopt {
      if (reason.isEmpty() && trigger.isPresent()) {
        throw new IllegalArgumentException(
            "trigger must be null if reason is null (same will non-null)");
      }
      if (reason.isPresent() && trigger.isEmpty()) {
        throw new IllegalArgumentException(
            "trigger must be non-null if reason is non-null (same will null)");
      }
    }

    public Deopt(
        FrameState frameState,
        @Nullable DeoptReason reason,
        @Nullable RValue trigger,
        boolean escapedEnv) {
      this(frameState, Optional.ofNullable(reason), Optional.ofNullable(trigger), escapedEnv);
    }

    public Deopt(FrameState frameState) {
      this(frameState, (DeoptReason) null, null, false);
    }
  }
}
