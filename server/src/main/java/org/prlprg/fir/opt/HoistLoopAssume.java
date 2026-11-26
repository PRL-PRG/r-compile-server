package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.Loops;
import org.prlprg.fir.analyze.cfg.Loops.Loop;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;

/// Moves the loop-invariant assumptions of a loop header's checkpoint to a new checkpoint on the
/// loop's entry edge.
///
/// A loop qualifies if its header has no statement, ends in a checkpoint without phi arguments,
/// and has one predecessor out of the loop, which jumps to it once. An assumption at the start of
/// the checkpoint's success block is invariant if it is a type, function, or constant assumption
/// of a register defined out of the loop. The new checkpoint's deopt block is a copy of the
/// header's, with each header phi replaced by its argument on the entry edge, so it leaves the
/// frame that the header's deopt leaves on the first trip.
///
/// The new check runs where the old one ran on the first trip, so it adds no deopt. In a later
/// trip the old one can't fail, because a register doesn't change. [ElideUnusedCheckpoints] then
/// removes the header's checkpoint if no assumption stays.
public final class HoistLoopAssume extends AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction scope) {
    if (scope.isStub()) {
      return false;
    }
    var changed = false;
    while (hoistOne(scope, scope.body())) {
      changed = true;
    }
    return changed;
  }

  /// Hoists the assumptions of one loop, and recomputes the loops before the next one, because the
  /// new blocks belong to the loops that contain this one.
  private static boolean hoistOne(Abstraction scope, CFG cfg) {
    for (var loop : new Loops(cfg, new CfgDominatorTree(cfg)).getLoops()) {
      var header = loop.getHeader();
      if (!header.statements().isEmpty()
          || !(header.jump().expression() instanceof Checkpoint(var success, var deopt, var _))
          || !header.jump().args().isEmpty()
          || !deopt.get().phiParameters().isEmpty()
          || deopt.get().statements().stream().anyMatch(s -> s.expression() instanceof Promise)) {
        continue;
      }
      var entries = header.predecessors().stream().filter(bb -> !loop.contains(bb)).toList();
      if (entries.size() != 1) {
        continue;
      }
      var entry = entries.getFirst();
      var entryTargets =
          entry.jump().targets().stream().filter(target -> target.bb() == header).toList();
      if (entryTargets.size() != 1) {
        continue;
      }
      var invariant =
          success.get().statements().stream()
              .takeWhile(statement -> statement.expression() instanceof Assume)
              .filter(statement -> isInvariant(scope, statement, loop))
              .toList();
      if (invariant.isEmpty()) {
        continue;
      }

      hoist(scope, cfg, entry, header, entryTargets.getFirst().phiArgs(), deopt.get(), invariant);
      return true;
    }
    return false;
  }

  /// An owned or fresh register isn't invariant: a `SubscriptWrite` in the loop changes its value.
  private static boolean isInvariant(Abstraction scope, Statement statement, Loop loop) {
    if (!(statement.expression() instanceof Assume(var assumption))
        || !(assumption instanceof AssumeType
            || assumption instanceof AssumeFunction
            || assumption instanceof AssumeConstant)
        || !(statement.arg(0) instanceof Read(var register))
        || scope.typeOf(register).ownership() == Ownership.OWNED
        || scope.typeOf(register).ownership() == Ownership.FRESH) {
      return false;
    }
    var definition = register.definingBB();
    return definition != null && !loop.contains(definition);
  }

  /// `entry: ... goto check()`, `check: check moved() else deopt1()`,
  /// `moved: <invariant>; goto header(entryArgs)`, `deopt1: <copy of deopt>`.
  private static void hoist(
      Abstraction scope,
      CFG cfg,
      BB entry,
      BB header,
      List<Argument> entryArgs,
      BB deopt,
      List<Statement> invariant) {
    var moved = cfg.addBB();
    moved.setJump(new Jump(new Goto(new BBRef(header)), entryArgs));
    invariant.forEach(statement -> statement.moveBefore(moved.jump()));

    var substitution = new HashMap<Register, Argument>();
    for (var i = 0; i < entryArgs.size(); i++) {
      substitution.put(header.phiParameters().get(i), entryArgs.get(i));
    }
    var deopt1 = cfg.addBB();
    for (var statement : deopt.statements()) {
      var copy = statement.copy((_, argument) -> substitute(argument, substitution));
      var assignee = statement.assignee();
      var copyAssignee = copy.assignee();
      if (assignee != null && copyAssignee != null) {
        copyAssignee.rename(scope.freshName(assignee.name()));
        substitution.put(assignee, new Read(copyAssignee));
      }
      deopt1.appendStatement(copy);
    }
    deopt1.setJump(deopt.jump().copy((_, argument) -> substitute(argument, substitution)));

    var check = cfg.addBB();
    check.setJump(new Jump(new Checkpoint(new BBRef(moved), new BBRef(deopt1), 0), List.of()));

    // `mapTargets` on the jump in place wouldn't update the targets' predecessors.
    var jump = entry.jump().copy((_, argument) -> argument);
    jump.mapTargets(
        target ->
            target.bb() == header ? new Target(new BBRef(check), ImmutableList.of()) : target);
    entry.setJump(jump);
  }

  private static Argument substitute(Argument argument, Map<Register, Argument> substitution) {
    return switch (argument) {
      case Read(var register) when substitution.containsKey(register) -> substitution.get(register);
      case Consume(var register) when substitution.containsKey(register) ->
          substitution.get(register) instanceof Read(var copy)
              ? new Consume(copy)
              : substitution.get(register);
      default -> argument;
    };
  }
}
