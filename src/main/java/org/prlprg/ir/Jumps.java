package org.prlprg.ir;

/** {@link Jump.Data} pattern-matchable records. */
public class Jumps {
  // We put this sealed class in `Jumps` so that we don't need a giant `permits` list.
  // We expose `Jump.Data` instead of (hypothetical) `Jumps.Data`
  // so that `Jumps` only exposes records (outside package code will never want to pattern-match on
  // `Void` or ...).
  sealed interface Void extends Jump.Data<Jump> {
    @Override
    default Jump make(CFG cfg, String name) {
      return new VoidJumpImpl(cfg, name, this);
    }
  }

  public record Return(RValue value) implements Void {}

  public record Unreachable() implements Void {}

  public record Goto(BB next) implements Void {}

  public record Branch(RValue condition, BB ifTrue, BB ifFalse) implements Void {}
}
