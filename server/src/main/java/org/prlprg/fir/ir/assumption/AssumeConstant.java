package org.prlprg.fir.ir.assumption;

import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;

/// Assume that the target argument equals a specific constant.
/// This is a no-op when evaluated, but is checked when reaching a checkpoint.
public record AssumeConstant(Value constant) implements Assumption {
  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
