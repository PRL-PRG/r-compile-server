package org.prlprg.fir.opt;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.Liveness;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Register;

/// Gives the owned type to a web of phis (phis connected by phi arguments, e.g. the phis of a
/// vector through a loop nest) that only moves owned vectors.
///
/// A phi's type is the union of its arguments' types, so a loop phi whose back edge argument is
/// itself (through other phis) stays shared even when each vector that enters the loop is owned.
/// Then a write in the loop copies the vector in each iteration (`dup`).
///
/// A web is owned if all of these are true:
/// - Each argument of a web phi is a web phi or an owned register that only this CFG uses and no
///   other use shares (see [ConsumeDeadDup]), and the jump kills it and has it once.
/// - Only this CFG uses the web phis.
/// - Each other use of a web phi is one of these:
///   - a borrow: the target of a `SubscriptRead` or the argument of a `dup`;
///   - in a block that deopts;
///   - a `return` or a `dots` element after which no use of a web phi is reachable (outside of
///     blocks that deopt). The `return` becomes a `consume`, which a shared return type accepts.
///
/// So each vector in the web has no other reference while a web phi can write it. [ConsumeDeadDup]
/// and [ElideConsumedDup] then remove the copy.
public final class OwnPhiWeb extends AbstractionOptimization {
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
    for (var cfg : scope.streamCfgs().toList()) {
      Liveness liveness = null;
      for (var web : webs(scope, cfg)) {
        if (liveness == null) {
          liveness = new Liveness(cfg);
        }
        var returns = ownedReturns(scope, cfg, liveness, web);
        if (returns != null) {
          web.forEach(phi -> phi.setType(phi.type().withOwnership(Ownership.OWNED)));
          returns.forEach(
              use ->
                  use.instruction()
                      .setArg(
                          use.index(),
                          new Consume(Objects.requireNonNull(use.argument().variable()))));
          changed = true;
        }
      }
    }
    return changed;
  }

  /// The connected components of the shared vector phis of `cfg`, where a phi that is an argument
  /// of another connects them.
  private static List<Set<BlockParameter>> webs(Abstraction scope, CFG cfg) {
    var phis = new LinkedHashSet<BlockParameter>();
    for (var bb : cfg.bbs()) {
      for (var phi : bb.phiParameters()) {
        var type = phi.type();
        if (type.ownership() == Ownership.SHARED
            && type.isValue()
            && type.kind().isWellFormedWithOwnership()) {
          phis.add(phi);
        }
      }
    }

    var neighbors = new LinkedHashMap<BlockParameter, Set<BlockParameter>>();
    phis.forEach(phi -> neighbors.put(phi, new LinkedHashSet<>()));
    for (var phi : phis) {
      for (var argument : arguments(phi)) {
        if (argument instanceof Read(BlockParameter other) && phis.contains(other)) {
          neighbors.get(phi).add(other);
          neighbors.get(other).add(phi);
        }
      }
    }

    var webs = new ArrayList<Set<BlockParameter>>();
    var seen = new HashSet<BlockParameter>();
    for (var phi : phis) {
      if (!seen.add(phi)) {
        continue;
      }
      var web = new LinkedHashSet<BlockParameter>();
      var worklist = new ArrayDeque<>(List.of(phi));
      while (!worklist.isEmpty()) {
        var next = worklist.pop();
        web.add(next);
        neighbors.get(next).stream().filter(seen::add).forEach(worklist::add);
      }
      webs.add(web);
    }
    return webs;
  }

  /// If `web` can be owned, the returns of its phis (which then `consume` them), else `null`.
  private static @Nullable List<Use> ownedReturns(
      Abstraction scope, CFG cfg, Liveness liveness, Set<BlockParameter> web) {
    // Each argument is moved into the web.
    for (var phi : web) {
      var bb = phi.owner();
      if (bb == null) {
        return null;
      }
      var index = bb.phiParameters().indexOf(phi);
      for (var predecessor : bb.predecessors()) {
        var jump = predecessor.jump();
        for (var target : jump.targets()) {
          if (target.bb() != bb) {
            continue;
          }
          if (!(target.phiArgs().get(index) instanceof Read(var argument))
              || !(web.contains(argument)
                  || ConsumeDeadDup.isMovableFrom(scope, cfg, argument, jump))
              || !liveness.isKilled(argument, predecessor, predecessor.statements().size())
              || jump.args().stream().filter(a -> a.equals(new Read(argument))).count() != 1) {
            return null;
          }
        }
      }
    }

    // Each other use of a web phi doesn't make a reference that can observe a write.
    var returns = new ArrayList<Use>();
    for (var phi : web) {
      for (var use : phi.uses()) {
        var instruction = use.instruction();
        var bb = instruction.parentBB();
        if (bb == null || bb.owner() != cfg) {
          return null;
        }
        if (isFlowInto(web, instruction, phi)
            || isBorrow(instruction, use.index())
            || bb.jump().expression() instanceof Deopt) {
          continue;
        }
        var isReturn = instruction instanceof Jump jump && jump.expression() instanceof Return;
        var isDotsElement =
            instruction instanceof Statement statement
                && statement.expression() instanceof MkVector;
        if (!(isReturn || isDotsElement) || reachesUse(web, bb, instruction)) {
          return null;
        }
        if (isReturn) {
          returns.add(use);
        }
      }
    }
    return returns;
  }

  /// Every argument of `phi`, from every incoming jump.
  private static List<Argument> arguments(BlockParameter phi) {
    var bb = phi.owner();
    if (bb == null) {
      return List.of();
    }
    return bb.phiArguments(bb.phiParameters().indexOf(phi)).stream()
        .flatMap(Collection::stream)
        .toList();
  }

  /// Whether `instruction` is a jump that passes `phi` to a web phi (the first check of
  /// [#isOwned] ensures it passes it once).
  private static boolean isFlowInto(
      Set<BlockParameter> web, Instruction instruction, Register phi) {
    return instruction instanceof Jump jump
        && jump.targets().stream()
            .anyMatch(
                target -> {
                  var parameters = target.bb().phiParameters();
                  for (var i = 0; i < parameters.size(); i++) {
                    if (target.phiArgs().get(i).equals(new Read(phi))
                        && web.contains(parameters.get(i))) {
                      return true;
                    }
                  }
                  return false;
                });
  }

  /// Whether the use reads the vector without keeping a reference to it.
  private static boolean isBorrow(Instruction instruction, int index) {
    if (!(instruction instanceof Statement statement)) {
      return false;
    }
    return switch (statement.expression()) {
      case SubscriptRead _ -> index == 0;
      case Dup _ -> statement.arg(0) instanceof Read;
      default -> false;
    };
  }

  /// Whether a use of a web phi is reachable after `instruction` in `bb`, outside of the blocks
  // that
  /// deopt.
  private static boolean reachesUse(Set<BlockParameter> web, BB bb, Instruction instruction) {
    var after =
        instruction instanceof Statement statement
            ? bb.statements().subList(statement.indexInBB() + 1, bb.statements().size())
            : List.<Statement>of();
    if (after.stream().anyMatch(s -> usesWeb(web, s))
        || instruction != bb.jump() && usesWeb(web, bb.jump())) {
      return true;
    }
    Set<BB> visited = new HashSet<>();
    var worklist = new ArrayDeque<>(bb.successors());
    while (!worklist.isEmpty()) {
      var next = worklist.pop();
      if (!visited.add(next) || next.jump().expression() instanceof Deopt) {
        continue;
      }
      if (next.statements().stream().anyMatch(s -> usesWeb(web, s)) || usesWeb(web, next.jump())) {
        return true;
      }
      worklist.addAll(next.successors());
    }
    return false;
  }

  private static boolean usesWeb(Set<BlockParameter> web, Instruction instruction) {
    return instruction.args().stream()
        .anyMatch(argument -> argument.variable() instanceof BlockParameter p && web.contains(p));
  }
}
