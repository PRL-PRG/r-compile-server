package org.prlprg.ir.cfg.instr;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.effect.REffect;
import org.prlprg.sexp.LangSXP;
import org.prlprg.util.Pair;

/**
 * Each type of jump instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from jumps.
 */
public sealed interface JumpData extends InstrData {
  /** Replace "return" with a new target. */
  default JumpData replaceReturnWith(BB newTarget) {
    return switch (this) {
      case NonLocalReturn _ -> throw new UnsupportedOperationException(
          "Can't inline or otherwise replace the return, because we don't know if it's local");
      case Return _ -> new Goto(newTarget);
      default -> this;
    };
  }

  @EffectsAre({})
  record Goto(BB next) implements JumpData {}

  @EffectsAre({})
  record Branch(@Nullable LangSXP ast, ISexp condition, BB ifTrue, BB ifFalse)
      implements JumpData {
    public Branch(ISexp condition, BB ifTrue, BB ifFalse) {
      this(null, condition, ifTrue, ifFalse);
    }
  }

  @EffectsAreAribtrary
  record NonLocalReturn(ISexp value, ISexp env) implements JumpData {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  record Return(ISexp value) implements JumpData {}

  @EffectsAre({})
  record Unreachable() implements JumpData {}

  @EffectsAre({})
  record Checkpoint_(
      @TypeIs("BOOL") ImmutableList<ISexp> tests,
      @SameLen("tests") ImmutableList<org.prlprg.rshruntime.DeoptReason> failReasons,
      BB ifPass,
      BB ifFail)
      implements JumpData {
    public int numAssumptions() {
      return tests.size();
    }

    @SuppressWarnings("UnstableApiUsage")
    public Stream<Pair<ISexp, org.prlprg.rshruntime.DeoptReason>> streamAssumptionData() {
      return Streams.zip(tests.stream(), failReasons.stream(), Pair::new);
    }
  }

  @EffectsAreAribtrary
  record Deopt(
      FrameState frameState,
      @Nullable DeoptReason reason,
      @Nullable ISexp trigger,
      boolean escapedEnv)
      implements JumpData {
    public Deopt {
      if (reason == null && trigger != null) {
        throw new IllegalArgumentException(
            "trigger must be null if reason is null (same will non-null)");
      }
      if (reason != null && trigger == null) {
        throw new IllegalArgumentException(
            "trigger must be non-null if reason is non-null (same will null)");
      }
    }

    public Deopt(FrameState frameState) {
      this(frameState, null, null, false);
    }
  }
}
