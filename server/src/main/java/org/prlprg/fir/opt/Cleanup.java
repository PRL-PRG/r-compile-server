package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
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
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
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
///   - Remove trivial no-ops (pure expressions not assigned to anything), except a `setVisible` or
///     `setInvisible` that no later write or module function call in its block replaces, in a
///     closure or in a promise that can set `R_Visible` off.
///
/// This is a special optimization that's implicitly run after other optimizations, and never
/// reports changes.
public final class Cleanup extends AbstractionOptimization {
  private final boolean reportChanges;

  public Cleanup(boolean reportChanges) {
    this.reportChanges = reportChanges;
  }

  /// Run the [Cleanup] optimization on every evaluated version in `module`
  public static boolean cleanup(Module module) {
    var changed = false;
    for (var function : module.localFunctions()) {
      for (var abstraction : function.versions()) {
        changed |= cleanup(abstraction);
      }
    }
    return changed;
  }

  /// Run the [Cleanup] optimization on `abstraction`, unless it's unevaluated
  public static boolean cleanup(Abstraction abstraction) {
    if (!abstraction.isStub() && !abstraction.isEvaluated()) {
      return false;
    }
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return opt.changed;
  }

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    var opt = new OnAbstraction(abstraction);
    opt.run();
    return reportChanges && opt.changed;
  }

  private static class OnAbstraction {
    final Abstraction scope;
    final InferEffects inferEffects;
    final Substituter substituter;
    /// Variable loads whose value [#substituteWithOrigins] replaced. Each reads a variable that the
    /// analysis knows is bound, so it can't raise "object not found".
    final Set<Statement> resolvedLoads = new LinkedHashSet<>();
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
      var unreachable = new LinkedHashSet<>(cfg.bbs());
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
      if (bb.jump().expression() instanceof If) {
        var cond = bb.jump().arg(0);
        var targets = bb.jump().targets();
        if (cond instanceof Constant(var c) && c instanceof Value.Bool(var b)) {
          var target = b ? targets.get(0) : targets.get(1);
          bb.setJump(new Jump(bb.jump().comments(), new Goto(target.bbRef()), target.phiArgs()));
          changed = true;
        }
      }
    }

    void removeNoEffectIfJumps(BB bb) {
      if (!(bb.jump().expression() instanceof If)) {
        return;
      }
      var comments = bb.jump().comments();
      var targets = bb.jump().targets();

      var collapsedIfTrue = collapseTransparentTarget(targets.get(0));
      if (collapsedIfTrue == null) {
        return;
      }
      var collapsedIfFalse = collapseTransparentTarget(targets.get(1));
      if (collapsedIfFalse == null) {
        return;
      }

      if (!collapsedIfTrue.equals(collapsedIfFalse)) {
        return;
      }

      bb.setJump(new Jump(comments, new Goto(collapsedIfTrue.bbRef()), collapsedIfTrue.phiArgs()));
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

    /// Whether `bb` only forwards to its successors, so jumps to it can be redirected to them.
    /// Its phis must only be used by its own jump, since jumps that bypass it don't define them.
    boolean isTransparentBranchBypass(BB bb) {
      return bb.statements().isEmpty()
          && (bb.jump().expression() instanceof Goto || bb.jump().expression() instanceof If)
          && bb.phiParameters().stream()
              .allMatch(phi -> phi.uses().stream().allMatch(use -> use.instruction() == bb.jump()));
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
        Target target, List<? extends Register> phiParameters, List<Argument> phiArgs) {
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
        Argument argument, List<? extends Register> phiParameters, List<Argument> phiArgs) {
      var variable = argument.variable();
      if (variable == null) {
        return argument;
      }

      var phiIndex = phiParameters.indexOf(variable);
      if (phiIndex == -1) {
        return argument;
      }

      // A `consume` can only be used once, and the phi may be used more than once, so substitute
      // the consumed register instead (which keeps each use's `consume`-ness).
      var phiArg = phiArgs.get(phiIndex);
      if (phiArg instanceof Consume(var consumed)) {
        if (!canSubstituteConsumed(variable, consumed)) {
          return null;
        }
        phiArg = new Read(consumed);
      }
      return switch (argument) {
        case Read _ -> phiArg;
        case Consume _ -> phiArg instanceof Read(var register) ? new Consume(register) : null;
        case Constant _ -> argument;
      };
    }

    /// Whether `register`, assigned `consume consumed`, can be substituted with `consumed` (each
    /// use keeping its `consume`-ness), which is when that doesn't change its ownership.
    boolean canSubstituteConsumed(Register register, Register consumed) {
      return scope.typeOf(register).ownership() == Ownership.OWNED
          && scope.typeOf(consumed).ownership() == Ownership.OWNED;
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

      // Substitute each phi parameter with the corresponding argument. A `consume` can only be
      // used once, so the phi is substituted with the consumed register (which keeps each use's
      // `consume`-ness), or if that would change its ownership, with a register it's moved into.
      // Iterate backwards so the moves, each prepended, stay in order.
      for (var i = phiParams.size() - 1; i >= 0; i--) {
        var phi = phiParams.get(i);
        var arg = phiArgs.get(i);
        if (arg instanceof Consume(var consumed)) {
          if (canSubstituteConsumed(phi, consumed)) {
            arg = new Read(consumed);
          } else {
            var move = new Statement(new Dup(), List.of(arg));
            arg = new Read(move.setAssignee(scope.freshName(phi.name()), phi.type()));
            bb.prependStatement(move);
          }
        }

        substituter.stage(phi, arg);
      }

      // Remove phi parameter definitions and arguments.
      bb.clearPhiParameters();
      removingAllJumpArguments(predecessor.jump(), bb);

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
      if (!(bb.jump().expression() instanceof Goto)) {
        return false;
      }
      var target = bb.jump().targets().getFirst();
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
      var target = first.jump().targets().getFirst();
      var second = target.bb();

      // Substitute phi parameters with arguments
      for (var i = 0; i < target.phiArgs().size(); i++) {
        var arg = target.phiArgs().get(i);
        var phi = second.phiParameters().get(i);

        substituter.stage(phi, arg);
      }

      // Move the successor's statements to the end of this block and adopt a copy of its jump.
      for (var s : List.copyOf(second.statements())) {
        s.moveBefore(first.jump());
      }
      first.setJump(
          new Jump(
              second.jump().comments(),
              second.jump().expression(),
              List.copyOf(second.jump().args())));

      // Remove second block
      cfg.removeBB(second);

      changed = true;
    }

    void substituteWithOrigins() {
      var analyses = new Analyses(scope, OriginAnalysis.class, DominatorTree.class);
      var domTree = analyses.get(DominatorTree.class);
      var originAnalysis = analyses.get(OriginAnalysis.class);

      for (var entry : originAnalysis.registerOrigins().entrySet()) {
        var register = entry.getKey();
        Argument origin = entry.getValue();

        // Can't substitute invalid
        if (!scope.contains(register)) {
          continue;
        }

        // A `consume` can only be used once, so substitute the consumed register instead (which
        // keeps each use's `consume`-ness), unless that would change the register's ownership.
        if (origin instanceof Consume(var used)) {
          if (!canSubstituteConsumed(register, used)) {
            continue;
          }
          origin = new Read(used);
        }

        // Can't substitute if origin analysis is too smart, e.g. looks through promises,
        // such that `origin`'s definition doesn't dominate `register`'s uses.
        // Eventually said promises will be inlined, and other analyses use origin analysis,
        // so it doesn't really hurt optimizations.
        // But if it did, technically we're allowed to substitute and the code is "valid" in
        // that it won't cause UB (assuming no other bugs), it just isn't "valid" according to
        // our underapproximate but simpler criteria (promises can never be guaranteed forced).
        if (origin.variable() != null) {
          var originVar = origin.variable();
          if (originVar.definingBB() == null
              || register.uses().stream()
                  .anyMatch(
                      registerUse -> !domTree.dominates(originVar, registerUse.instruction()))) {
            continue;
          }
        }

        substituter.stage(register, origin);
        if (register instanceof AssigneeOf a
            && a.statement().expression() instanceof Load(var loadType, _)
            && (loadType == LoadType.LOCAL_VAR || loadType == LoadType.SUPER_VAR)) {
          resolvedLoads.add(a.statement());
        }
        changed = true;
      }

      substituter.commit();
    }

    void removeUnusedLocals() {
      // ???: Do we need to repeat this for long phi/jump-argument chains, since we remove jump
      //  arguments? Or we may need to do something equivalent to repeating but more optimal.
      for (var localReg : scope.streamRegisters().toList()) {
        // A register exists only by virtue of its definition; "removing" an unused non-parameter
        // register means removing its phi parameter or clearing its assigning statement's assignee.
        if (scope.isParameter(localReg) || localReg.isUsed()) {
          continue;
        }

        switch (localReg) {
          case BlockParameter phi -> {
            // Remove unused phi
            var defBb = phi.owner();
            if (defBb == null) {
              break;
            }
            var phiIndex = defBb.phiParameters().indexOf(phi);
            assert phiIndex != -1
                : "phi's owner block doesn't contain it: " + phi + " in\n" + defBb;
            defBb.removeParameterAt(phiIndex);
            for (var pred : defBb.predecessors()) {
              removingJumpArgument(pred.jump(), defBb, phiIndex);
            }
          }
          // Convert assignment to void statement
          case AssigneeOf a -> a.statement().clearAssignee();
          // Parameters are excluded above.
          case FunctionParameter _ -> {}
        }

        changed = true;
      }
    }

    void removeEffectiveNoOps(CFG cfg) {
      // A promise's forcer sets `R_Visible` on, so a promise that can't set it off needs no write.
      var keepsVisibility =
          !cfg.isPromise()
              || cfg.bbs().stream()
                  .flatMap(bb -> bb.statements().stream())
                  .anyMatch(InferEffects::maySetInvisible);
      for (var bb : cfg.bbs()) {
        // Only a `return` reads `R_Visible`, so a write is dead if a later one in the block
        // replaces it.
        var liveVisibilityWrites = new HashSet<Statement>();
        var overwritten = !keepsVisibility;
        for (var stmt : bb.statements().reversed()) {
          if (!overwritten && InferEffects.writesVisibility(stmt)) {
            liveVisibilityWrites.add(stmt);
          }
          overwritten |= InferEffects.overwritesVisibility(stmt);
        }
        for (int i = 0; i < bb.statements().size(); ) {
          var stmt = bb.statements().get(i);
          if ((stmt.assignee() != null && stmt.assignee().isUsed())
              || stmt.expression() instanceof Assume
              || liveVisibilityWrites.contains(stmt)
              || (inferEffects.maySignal(stmt) && !resolvedLoads.contains(stmt))) {
            i++;
            continue;
          }

          // No-op, remove (the next statement shifts into index `i`).
          stmt.remove();
          changed = true;
        }
      }
    }
  }

  /// Removes (in place) the phi argument at `index` in `jump`'s target(s) pointing to `targetBb`.
  public static void removingJumpArgument(Jump jump, BB targetBb, int index) {
    jump.mapTargets(t -> removingJumpArgument(t, targetBb, index));
  }

  /// Removes (in place) all phi arguments in `jump`'s target(s) pointing to `targetBb`.
  private static void removingAllJumpArguments(Jump jump, BB targetBb) {
    jump.mapTargets(t -> removingAllJumpArguments(t, targetBb));
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
