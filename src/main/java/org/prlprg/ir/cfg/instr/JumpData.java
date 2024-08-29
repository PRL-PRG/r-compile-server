package org.prlprg.ir.cfg.instr;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.FrameState;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.effect.Arbitrary;
import org.prlprg.ir.effect.CanDeopt;
import org.prlprg.ir.effect.Leaks;
import org.prlprg.rshruntime.DeoptReason;
import org.prlprg.sexp.EnvSXP;
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
      case NonLocalReturn _ ->
          throw new UnsupportedOperationException(
              "Can't inline or otherwise replace the return, because we don't know if it's local");
      case Return _ -> new Goto(newTarget);
      default -> this;
    };
  }

  record Goto(BB next) implements JumpData {}

  record Branch(Node<? extends Boolean> condition, BB ifTrue, BB ifFalse) implements JumpData {}

  @Effect(value = Leaks.class, inputs = "value")
  // TODO: Effect on `env`?
  record NonLocalReturn(Node<?> value, Node<? extends EnvSXP> env) implements JumpData {}

  @Effect(value = Leaks.class, inputs = "value")
  record Return(Node<?> value) implements JumpData {}

  record Unreachable() implements JumpData {}

  record Checkpoint_(
      ImmutableList<Node<? extends Boolean>> tests,
      @SameLen("tests") ImmutableList<org.prlprg.rshruntime.DeoptReason> failReasons,
      BB ifPass,
      BB ifFail)
      implements JumpData {
    public int numAssumptions() {
      return tests.size();
    }

    @SuppressWarnings("UnstableApiUsage")
    public Stream<Pair<Node<? extends Boolean>, org.prlprg.rshruntime.DeoptReason>>
        streamAssumptionData() {
      return Streams.zip(tests.stream(), failReasons.stream(), Pair::new);
    }
  }

  @Effect(CanDeopt.class)
  @Effect(Arbitrary.class)
  record Deopt(
      Node<? extends FrameState> frameState,
      @Nullable DeoptReason reason,
      @Nullable Node<?> trigger,
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

    public Deopt(Node<? extends FrameState> frameState) {
      this(frameState, null, null, false);
    }
  }
}
