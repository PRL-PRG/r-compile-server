package org.prlprg.fir.ir.expression;

import javax.annotation.concurrent.Immutable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;

/// These are no-ops when evaluated, but *checked* when reaching a checkpoint: at the checkpoint,
/// if any assumptions in the normal successor fail their check, control diverts into the deopt
/// successor.
@Immutable
public sealed interface Assume extends Expression
    permits AssumeConstant, AssumeFunction, AssumeLoadFun, AssumeType {
  /// The argument whose value is being assumed.
  @Nullable Argument target();
}
