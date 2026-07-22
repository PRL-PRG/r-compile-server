package org.prlprg.fir.ir.instruction;

import java.util.LinkedHashSet;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// The operation of a [Jump]: a block terminator. Argument-free metadata (block references and
/// per-target phi-argument counts); the actual phi/condition/stack [Argument]s live on the owning
/// [Jump].
public sealed interface JumpExpression
    permits Checkpoint, Deopt, Goto, If, Raise, Return, Unreachable {
  /// The target block references, in order (Goto: 1; If/Checkpoint: 2; Return/Raise/Deopt/
  /// Unreachable: 0).
  @UnmodifiableView
  List<BBRef> targetRefs();

  /// The distinct target [BB]s, in order.
  default @UnmodifiableView List<BB> targetBBs() {
    var bbs = new LinkedHashSet<BB>();
    for (var ref : targetRefs()) {
      bbs.add(ref.get());
    }
    return List.copyOf(bbs);
  }

  /// Reconstruct full [Target]s (block ref + its phi-argument sublist) from the owning [Jump]'s
  /// flat `args`.
  @UnmodifiableView
  List<Target> targets(List<Argument> args);

  /// Apply `transformer` to each [Target], returning the new operation metadata and the new flat
  /// argument list. No-op for jumps without targets.
  Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args);

  /// Result of [#mapTargets]: the rewritten metadata plus the rewritten flat argument list.
  record Mapped(JumpExpression expression, List<Argument> args) {}
}
