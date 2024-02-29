package org.prlprg.ir.node;

import org.prlprg.ir.BB;
import org.prlprg.ir.CFG;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;

/** {@link Jump.Data} pattern-matchable records. */
public class Jumps {
  // We put this sealed class in `Jumps` so that we don't need a giant `permits` list.
  // We expose `Jump.Data` instead of (hypothetical) `Jumps.Data`
  // so that `Jumps` only exposes records (outside package code will never want to pattern-match on
  // `Void` or ...).
  sealed interface Void extends Jump.Data<Jump> {
    @Override
    default Jump make(CFG cfg) {
      return new VoidJumpImpl(cfg, this);
    }
  }

  sealed interface ForLoop extends ForLoopJump.Data {}

  public record Return(RValue value) implements Void {}

  public record Unreachable() implements Void {}

  public record Goto(BB next) implements Void {}

  public record Branch(RValue condition, BB ifTrue, BB ifFalse) implements Void {}

  // GNU-R specific jumps
  public record BrIfNot(RValue condition, Env env, BB ifTrue, BB ifFalse) implements Void {}

  public record StartLoopCntxt(boolean isForLoop, Env env, BB next, BB onBreak) implements Void {}

  public record DoLoopNext(Env env, BB next) implements Void {}

  public record DoLoopBreak(Env env, BB next) implements Void {}

  public record StartFor(LangSXP ast, RegSymSXP elemName, @Override RValue seq, Env env, BB next)
      implements ForLoop {}

  public record StepFor(
      @Override RValue seq, RValue loopInfo, RValue value, Env env, BB loopAgain, BB exitLoop)
      implements ForLoop {}

  public record StartSubset(LangSXP ast, Env env, BB afterObject, BB normalPath)
      implements StartDispatchable {}

  record StartSubassign(LangSXP ast, Env env, BB afterObject, BB normalPath)
      implements StartDispatchable {}

  record StartC(LangSXP ast, Env env, BB afterObject, BB normalPath) implements StartDispatchable {}

  record StartSubset2(LangSXP ast, Env env, BB afterObject, BB normalPath)
      implements StartDispatchable {}

  record StartSubassign2(LangSXP ast, Env env, BB afterObject, BB normalPath)
      implements StartDispatchable {}
}
