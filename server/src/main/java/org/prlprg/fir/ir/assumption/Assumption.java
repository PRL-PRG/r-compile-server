package org.prlprg.fir.ir.assumption;

import java.util.Collection;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

/// These are no-ops when evaluated, but *checked* when reaching a checkpoint: at the
/// checkpoint, if any assumptions in the normal successor fail their check, control diverts
/// into the deopt successor.
@Immutable
public sealed interface Assumption
    permits AssumeConstant, AssumeFunction, AssumeLoadFun, AssumeType {
  /// The argument whose value is being assumed.
  @Nullable Argument target();

  @UnmodifiableView
  Collection<Argument> arguments();

  @ParseMethod
  private static Assumption parse(Parser p) {
    var expr = p.parse(Expression.class);
    if (!(expr instanceof Assume(var assumption))) {
      throw p.scanner().fail("Expected an assumption");
    }

    return assumption;
  }
}
