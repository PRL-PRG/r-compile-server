package org.prlprg.fir.opt;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;

/// Elides a `dup` that only moves one owned vector into another (`r1 = dup consume r`, which
/// [ConsumeDeadDup] produces), replacing every use of the assignee with the consumed register.
public record ElideConsumedDup() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    var changed = false;
    for (var cfg : scope.streamCfgs().toList()) {
      for (var bb : cfg.bbs()) {
        // Copy, because `run` removes statements from `bb`.
        for (var statement : List.copyOf(bb.statements())) {
          changed |= run(scope, statement);
        }
      }
    }
    return changed;
  }

  private boolean run(Abstraction scope, Statement statement) {
    if (!(statement.expression() instanceof Dup)
        || !(statement.arg(0) instanceof Consume(var vector))) {
      return false;
    }
    var assignee = statement.assignee();
    if (assignee == null) {
      // Nothing uses the duplicate, so this is dead code for `Cleanup` to remove.
      return false;
    }
    // Both must be owned for the uses to keep type-checking: the assignee's `consume`s become
    // `consume`s of `vector`, which is only allowed if it's owned, and its plain reads must still
    // satisfy the assignee's declared type.
    if (scope.typeOf(assignee).ownership() != Ownership.OWNED
        || scope.typeOf(vector).ownership() != Ownership.OWNED) {
      return false;
    }

    // `vector` isn't used after this statement (that's what its `consume` guarantees), so the
    // assignee's uses can become uses of `vector` -- each keeping its own `consume`.
    for (var use : List.copyOf(assignee.uses())) {
      use.replaceWith(use.argument() instanceof Consume ? new Consume(vector) : new Read(vector));
    }
    statement.remove();
    return true;
  }
}
