package org.prlprg.fir.ir.assumption;

import javax.annotation.concurrent.Immutable;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// The metadata of an [Assume][org.prlprg.fir.ir.expression.Assume] operation. These are no-ops
/// when evaluated, but *checked* when reaching a checkpoint: at the checkpoint, if any assumptions
/// in the normal successor fail their check, control diverts into the deopt successor.
///
/// Assumptions with a target (the value being assumed) carry it as the owning statement's single
/// argument: [AssumeConstant], [AssumeFunction], and [AssumeType] have one argument;
/// [AssumeLoadVar] and [AssumeLoadFun] have none.
@Immutable
public sealed interface Assumption
    permits AssumeConstant, AssumeFunction, AssumeLoadFun, AssumeLoadVar, AssumeType {
  /// An assumption can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(this)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }
}
