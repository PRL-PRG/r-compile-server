package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.iterator.BbDfs;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;

/// Cleanup optimizations:
/// - Basic blocks
///   - Remove unreachable blocks.
///   - Convert [If]s whose condition is always true or false into [Goto]s.
///   - Convert [If]s whose branches only pass through empty [Goto] and [If] blocks before
///     converging into [Goto]s.
///   - Merge single-predecessor/single-successor blocks.
///   - Remove phi parameters in single-predecessor blocks (substitute with the phi argument).
/// - Registers
///   - Substitute registers whose origin is another register or constant (e.g. if `a = b`,
///     substitute occurrences of `a` with `b`).
///   - Remove unused assignees (convert `r = e` to `e` if `r` is unused) and phis.
/// - Instructions
///   - Remove trivial no-ops (pure expressions not assigned to anything).
///
/// This is a special optimization that's implicitly run after other optimizations, and never
/// reports changes.
public record Cleanup(boolean reportChanges) implements AbstractionOptimization {
  /// Run the [Cleanup] optimization on `module`
  public static boolean cleanup(Module module) {
    var changed = false;
    for (var function : module.localFunctions()) {
      for (var abstraction : function.versions()) {
        changed |= cleanup(abstraction);
      }
    }
    return changed;
  }

  /// Run the [Cleanup] optimization on `abstraction`
  public static boolean cleanup(Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  @Override
  public boolean runWithoutRecording(
      Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return reportChanges && opt.changed;
  }

  private static class OnAbstraction {
    final Abstraction scope;
    final InferEffects inferEffects;
    final Substituter substituter;
    boolean changed = false;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      inferEffects = new InferEffects(scope);
      substituter = new Substituter(scope);
    }

    void run() {
      // Registers
      substituteWithOrigins();

      // Instructions (affected by origins)
      scope.streamCfgs().forEach(this::removeEffectiveNoOps);

      // Basic blocks (affected by instructions)
      scope.streamCfgs().forEach(cfg -> cfg.bbs().forEach(this::constantFoldBranches));
      scope.streamCfgs().forEach(cfg -> cfg.bbs().forEach(this::removeNoEffectIfJumps));
      scope.streamCfgs().forEach(cfg -> cfg.bbs().forEach(this::removeSinglePredecessorPhis));
      scope.streamCfgs().forEach(this::removeUnreachableBlocks);
      scope.streamCfgs().forEach(this::mergeBlocks);
      substituter.commit();

      // Registers (affected by instructions and blocks)
      removeUnusedLocals();
    }

    void removeUnreachableBlocks(CFG cfg) {
      var unreachable = new HashSet<>(cfg.bbs());
      var worklist = new ArrayList<BB>();

      // Start from entry block
      var entry = cfg.entry();
      unreachable.remove(entry);
      worklist.add(entry);

      // Find all reachable blocks
      while (!worklist.isEmpty()) {
        var current = worklist.removeLast();
        for (var successor : current.successors()) {
          if (unreachable.remove(successor)) {
            worklist.add(successor);
          }
        }
      }

      // Remove unreachable blocks
      for (var bb : unreachable) {
        cfg.removeBB(bb);
      }
      changed |= !unreachable.isEmpty();
    }

    void constantFoldBranches(BB bb) {
      if (bb.jump() instanceof If(var comments, var cond, var ifTrue, var ifFalse)) {
        if (cond instanceof Constant(var c) && c instanceof Value.Bool(var b)) {
          var target = b ? ifTrue : ifFalse;
          bb.setJump(new Goto(comments, target));
          changed = true;
        }
      }
    }

    void removeNoEffectIfJumps(BB bb) {
      if (!(bb.jump() instanceof If(var comments, _, var ifTrue, var ifFalse))) {
        return;
      }

      var collapsedIfTrue = collapseTransparentTarget(ifTrue);
      if (collapsedIfTrue == null) {
        return;
      }
      var collapsedIfFalse = collapseTransparentTarget(ifFalse);
      if (collapsedIfFalse == null) {
        return;
      }

      if (!collapsedIfTrue.equals(collapsedIfFalse)) {
        return;
      }

      bb.setJump(new Goto(comments, collapsedIfTrue));
      changed = true;
    }

    @Nullable Target collapseTransparentTarget(Target start) {
      var exits = new LinkedHashSet<Target>();
      var visited = new LinkedHashSet<Target>();
      var worklist = new ArrayList<Target>();
      worklist.add(start);

      while (!worklist.isEmpty()) {
        var current = worklist.removeLast();
        if (!visited.add(current)) {
          continue;
        }

        var currentBb = current.bb();
        if (!isTransparentBranchBypass(currentBb)) {
          exits.add(current);
          if (exits.size() > 1) {
            return null;
          }
          continue;
        }

        var nextTargets = instantiatedTargets(current);
        if (nextTargets == null) {
          return null;
        }
        worklist.addAll(nextTargets);
      }

      return exits.size() == 1 ? Iterables.getOnlyElement(exits) : null;
    }

    boolean isTransparentBranchBypass(BB bb) {
      return bb.statements().isEmpty() && (bb.jump() instanceof Goto || bb.jump() instanceof If);
    }

    @Nullable ImmutableList<Target> instantiatedTargets(Target incoming) {
      var bb = incoming.bb();
      var phiParameters = bb.phiParameters();
      var phiArgs = incoming.phiArgs();
      if (phiParameters.size() != phiArgs.size()) {
        return null;
      }

      var targets = ImmutableList.<Target>builderWithExpectedSize(bb.jump().targets().size());
      for (var target : bb.jump().targets()) {
        var instantiatedTarget = instantiateTarget(target, phiParameters, phiArgs);
        if (instantiatedTarget == null) {
          return null;
        }
        targets.add(instantiatedTarget);
      }
      return targets.build();
    }

    @Nullable Target instantiateTarget(
        Target target, List<Register> phiParameters, List<Argument> phiArgs) {
      var instantiatedArgs =
          ImmutableList.<Argument>builderWithExpectedSize(target.phiArgs().size());
      for (var argument : target.phiArgs()) {
        var instantiatedArgument = instantiateArgument(argument, phiParameters, phiArgs);
        if (instantiatedArgument == null) {
          return null;
        }
        instantiatedArgs.add(instantiatedArgument);
      }
      return new Target(target.bb(), instantiatedArgs.build());
    }

    @Nullable Argument instantiateArgument(
        Argument argument, List<Register> phiParameters, List<Argument> phiArgs) {
      var variable = argument.variable();
      if (variable == null) {
        return argument;
      }

      var phiIndex = phiParameters.indexOf(variable);
      if (phiIndex == -1) {
        return argument;
      }

      var phiArg = phiArgs.get(phiIndex);
      return switch (argument) {
        case Read _ -> phiArg;
        case Consume _ ->
            switch (phiArg) {
              case Read(var register) -> new Consume(register);
              case Consume _ -> phiArg;
              case Constant _ -> null;
            };
        case Constant _ -> argument;
      };
    }

    void removeSinglePredecessorPhis(BB bb) {
      // Skip blocks with no phi parameters (fastcase)
      if (bb.phiParameters().isEmpty()) {
        return;
      }

      // Skip blocks with zero or multiple predecessors
      if (bb.predecessors().size() != 1) {
        return;
      }
      var predecessor = Iterables.getOnlyElement(bb.predecessors());

      // Skip if the predecessor has multiple targets pointing to this BB.
      // For example, if the predecessor is an `If` and both branches point to this block:
      // - if the arguments are the same, it will be handled by `removeNoEffectIfJumps`.
      // - if the arguments are different, we can't remove the jump or phi parameters.
      var jumpTargets =
          predecessor.jump().targets().stream().filter(target -> target.bb() == bb).toList();
      if (jumpTargets.isEmpty()) {
        throw new IllegalStateException(
            "CFG is malformed: block is not it's predecessor's successor: "
                + bb.label()
                + ", "
                + predecessor.label());
      } else if (jumpTargets.size() > 1) {
        return;
      }
      var jumpTarget = Iterables.getOnlyElement(jumpTargets);

      // If the number of arguments doesn't match the number of parameters,
      // this is a malformed CFG, so skip.
      var phiParams = bb.phiParameters();
      var phiArgs = jumpTarget.phiArgs();
      if (phiParams.size() != phiArgs.size()) {
        return;
      }

      // Substitute each phi parameter with the corresponding argument
      for (var i = 0; i < phiParams.size(); i++) {
        var phi = phiParams.get(i);
        var arg = phiArgs.get(i);

        substituter.stage(phi, arg);
      }

      // Remove phi parameter definitions and arguments.
      bb.clearPhiParameters();
      predecessor.setJump(removingAllJumpArguments(predecessor.jump(), bb));

      changed = true;
    }

    void mergeBlocks(CFG cfg) {
      for (var bb : BbDfs.bbDfs(cfg)) {
        while (canMergeWithSuccessor(bb)) {
          mergeWithSuccessor(bb);
        }
      }
    }

    static boolean canMergeWithSuccessor(BB bb) {
      // Can merge if:

      // 1. Block has exactly one successor ([Goto])
      if (!(bb.jump() instanceof Goto(_, var target))) {
        return false;
      }
      var successor = target.bb();

      // 2. That successor has exactly one predecessor (this block)
      if (successor.predecessors().size() != 1) {
        return false;
      }

      // 3. The successor is not the entry block
      if (successor == bb.owner().entry()) {
        return false;
      }

      // 4. The jump has the correct number of arguments (general CFG invariant)
      return target.phiArgs().size() == successor.phiParameters().size();
    }

    void mergeWithSuccessor(BB first) {
      var cfg = first.owner();
      var target = ((Goto) first.jump()).target();
      var second = target.bb();

      // Substitute phi parameters with arguments
      for (var i = 0; i < target.phiArgs().size(); i++) {
        var arg = target.phiArgs().get(i);
        var phi = second.phiParameters().get(i);

        substituter.stage(phi, arg);
      }

      // Add statements and replace jump
      first.appendStatements(second.statements());
      first.setJump(second.jump());

      // Remove second block
      cfg.removeBB(second);

      changed = true;
    }

    void substituteWithOrigins() {
      var analyses =
          new Analyses(scope, OriginAnalysis.class, DefUses.class, CfgDominatorTree.class);
      var defUseAnalysis = analyses.get(DefUses.class);
      var originAnalysis = analyses.get(OriginAnalysis.class);

      for (var entry : originAnalysis.registerOrigins().entrySet()) {
        var register = entry.getKey();
        var origin = entry.getValue();

        // Can't substitute invalid
        if (!scope.contains(register)) {
          continue;
        }

        // Can't substitute with `consume`, unless there's exactly one other occurrence.
        if (origin instanceof Consume(var used) && defUseAnalysis.uses(used).size() > 2) {
          continue;
        }

        // Can't substitute if origin analysis is too smart, e.g. looks through promises,
        // such that `origin`'s definition doesn't dominate `register`'s uses.
        // Eventually said promises will be inlined, and other analyses use origin analysis,
        // so it doesn't really hurt optimizations.
        // But if it did, technically we're allowed to substitute and the code is "valid" in
        // that it won't cause UB (assuming no other bugs), it just isn't "valid" according to
        // our underapproximate but simpler criteria (promises can never be guaranteed forced).
        if (origin.variable() != null) {
          var originDef = defUseAnalysis.definition(origin.variable());
          if (originDef == null
              || defUseAnalysis.uses(register).stream()
                  .anyMatch(
                      registerUse ->
                          !CfgDominatorTree.dominates(
                              cfg -> analyses.get(cfg, CfgDominatorTree.class),
                              originDef,
                              registerUse))) {
            continue;
          }
        }

        substituter.stage(register, origin);
        changed = true;
      }

      substituter.commit();
    }

    void removeUnusedLocals() {
      // ???: Do we need to repeat this for long phi/jump-argument chains, since we remove jump
      //  arguments? Or we may need to do something equivalent to repeating but more optimal.
      var defUses = new DefUses(scope);

      var iterator = scope.mutablyIterateLocals();
      while (iterator.hasNext()) {
        var local = iterator.next();

        if (!(local.variable() instanceof Register localReg && defUses.uses(localReg).isEmpty())) {
          continue;
        }

        // Remove the local from definitions
        for (var definition : defUses.definitions(localReg)) {
          var localDef = definition.inInnermostCfg();
          var defBb = localDef.bb();
          var defStmt = (Statement) localDef.instruction();

          if (defStmt == null) {
            // Remove unused phi
            var phiIndex = defBb.phiParameters().indexOf(localReg);
            assert phiIndex != -1
                : "def-use analysis reported a def in phis, but there is no phi: "
                    + localReg
                    + " in\n"
                    + defBb;
            defBb.removeParameterAt(phiIndex);
            for (var pred : defBb.predecessors()) {
              pred.setJump(removingJumpArgument(pred.jump(), defBb, phiIndex));
            }
          } else {
            // Convert assignment to void statement
            localDef.replaceWith(new Statement(defStmt.comments(), defStmt.expression()));
          }
        }

        // Remove the local from the scope
        iterator.remove();
        changed = true;
      }
    }

    void removeEffectiveNoOps(CFG cfg) {
      for (var bb : cfg.bbs()) {
        for (int i = 0; i < bb.statements().size(); ) {
          var stmt = bb.statements().get(i);
          if (stmt.assignee() != null
              || stmt.expression() instanceof Assume
              || inferEffects.of(stmt.expression()) != Effects.NONE) {
            i++;
            continue;
          }

          // No-op, remove
          bb.removeStatementAt(i);
          changed = true;
        }
      }
    }
  }

  /// Returns the jump removing the phi argument in the target pointing to `targetBb`.
  public static Jump removingJumpArgument(Jump jump, BB targetBb, int index) {
    return jump.mapTargets(t -> removingJumpArgument(t, targetBb, index));
  }

  /// Returns the jump removing all phi arguments for the given target BB
  private static Jump removingAllJumpArguments(Jump jump, BB targetBb) {
    return jump.mapTargets(t -> removingAllJumpArguments(t, targetBb));
  }

  /// If this points to `targetBb`, returns removing the phi argument at the given index.
  private static Target removingJumpArgument(Target target, BB targetBb, int index) {
    if (target.bb() != targetBb) {
      return target;
    }

    var phiArgs = ImmutableList.<Argument>builderWithExpectedSize(target.phiArgs().size() - 1);
    phiArgs.addAll(target.phiArgs().subList(0, index));
    phiArgs.addAll(target.phiArgs().subList(index + 1, target.phiArgs().size()));

    return new Target(target.bb(), phiArgs.build());
  }

  /// If this points to targetBb, returns it with all phi arguments removed
  private static Target removingAllJumpArguments(Target target, BB targetBb) {
    if (target.bb() != targetBb) {
      return target;
    }
    return new Target(target.bb(), ImmutableList.of());
  }
}
