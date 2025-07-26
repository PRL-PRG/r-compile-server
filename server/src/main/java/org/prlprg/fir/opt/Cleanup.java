package org.prlprg.fir.opt;

import org.prlprg.fir.ir.abstraction.Abstraction;

/// Cleanup optimizations:
/// - Remove unreachable basic blocks.
/// - Convert branches whose condition is always true or false, or where both blocks are the same,
///   to gotos. Moves the condition into an instruction before the goto if it's not a constant
/// - Merge blocks with a single successor.
public class Cleanup extends Optimization {
  @Override
  public void run(Abstraction abstraction) {
    // TODO
  }
}
