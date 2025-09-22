package org.prlprg.fir.opt;

import static org.prlprg.fir.check.TypeAndEffectChecker.assumeCanSucceed;
import static org.prlprg.fir.ir.cfg.cursor.CFGCopier.copyFrom;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.Feedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.AssumeConstant;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeType;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Lists;
import org.prlprg.util.OptionalFunction;
import org.prlprg.util.Streams;

/// Insert assumptions that feedback suggests will always pass.
///
/// Specifically, if a register's feedback indicates:
/// - It's always be a closure with global environment containing a compile function
/// - It's always a constant
/// - It's always an instance of some type
///
/// AND has more hits than `threshold`,
///
/// Then, in the earliest checkpoint after the register's definition\[1\], insert the
/// corresponding [AssumeFunction], [AssumeConstant], or [AssumeType] respectively.
///
/// \[1\] Specifically, every checkpoint that dominates the register's definition which isn't
/// dominated by another such checkpoint. There's usually only one, although we handle the case
/// where there's multiple.
public record SpeculateAssume(
    OptionalFunction<Abstraction, Feedback> getFeedback,
    int threshold)
    implements AbstractionOptimization {
  @Override
  public boolean run(Abstraction scope) {
    var feedback = getFeedback.apply(scope);
    if (feedback == null) {
      return false;
    }

    // Compute checkpoint BBs and analyses we'll need
    var checkpointBbs = scope.streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .filter(bb -> bb.jump() instanceof Checkpoint)
        .toList();
    var defUses = new DefUses(scope);
    // TODO: Use upgraded dominator tree which can check BBs in different CFGs
    var domTrees = scope.streamCfgs().collect(Collectors.toMap(c -> c, DominatorTree::new));

    // Find assumptions
    var assumptionsToInsert = new HashMap<BB, List<Assume>>();
    for (var local : scope.locals()) {
      if (!(local.variable() instanceof Register register)) {
        continue;
      }
      if (feedback.times(register) < threshold) {
        continue;
      }

      // Skip if we've assumed anything for this register, anywhere:
      // that means we already ran this optimization,
      // and our assumptions never become more precise, only less
      if (defUses.uses(register).stream().anyMatch(use -> use.inInnermostCfg().instruction() instanceof Statement s && s.expression() instanceof Assume)) {
        continue;
      }

      var calleeFeedback = feedback.callee(register);
      var constantFeedback = feedback.constant(register);
      var typeFeedback = feedback.type(register).union();

      // Skip if assumptions won't increase knowledge.
      if (calleeFeedback == null && constantFeedback == null && typeFeedback.equals(local.type())) {
        continue;
      }

      // Skip malformed where register isn't defined or is defined multiple times.
      var defs = defUses.definitions(register);
      if (defs.size() != 1) {
        continue;
      }
      var def = Iterables.getOnlyElement(defs);

      // Get possible checkpoints where after we can insert assumptions for the register
      var availableCheckpointBbs = checkpointBbs.stream()
          .filter(bb -> {
            var defInCfg = def.inCfg(bb.owner());
            return defInCfg != null && domTrees.get(bb.owner()).dominates(bb, defInCfg.bb());
          })
          .toList();
      if (availableCheckpointBbs.isEmpty()) {
        continue;
      }

      // Filter out checkpoints where the assumptions would be strictly redundant,
      // because they're dominated by another checkpoint we'll insert assumptions at.
      var immediateCheckpointBbs = availableCheckpointBbs.stream()
          .filter(bb -> availableCheckpointBbs.stream()
              // TODO: Once we have the upgraded dominator tree, comparing owners is no longer necessary
              .noneMatch(other -> other != bb && other.owner() == bb.owner() && domTrees.get(bb.owner()).dominates(other, bb)))
          .toList();
      assert !immediateCheckpointBbs.isEmpty();

      for (var cpBb : immediateCheckpointBbs) {
        var successBb = ((Checkpoint) cpBb.jump()).success().bb();

        var assumeCallee = calleeFeedback == null ? null : new AssumeFunction(new Read(register), calleeFeedback);
        var assumeConstant = constantFeedback == null ? null : new AssumeConstant(new Read(register), new Constant(constantFeedback));
        var assumeType = typeFeedback.equals(local.type()) ? null : new AssumeType(new Read(register), typeFeedback);
        var assumes = Lists.ofNonNull(assumeCallee, assumeConstant, assumeType);
        assert !assumes.isEmpty();

        if (!assumptionsToInsert.containsKey(successBb)) {
          assumptionsToInsert.put(successBb, new ArrayList<>());
        }
        assumptionsToInsert.get(successBb).add(assumeCallee);
      }
    }

    // Stop unless we have changes
    if (assumptionsToInsert.isEmpty()) {
      return false;
    }

    // Substitute registers that we assume the type of
    var assumeTypeSubsts = new DomineeSubstituter(domTrees, scope);
    var assumeDsts = new HashMap<Assume, Register>();
    for (var entry : assumptionsToInsert.entrySet()) {
      var successBb = entry.getKey();
      var assumes = entry.getValue();

      for (var assume : assumes) {
        if (assume instanceof AssumeType(var target, var type)) {
          var reg = ((Read) target).variable();
          var substReg = scope.addLocal(type);
          assumeTypeSubsts.stage(reg, substReg, successBb);
          assumeDsts.put(assume, substReg);
        }
      }
    }
    assumeTypeSubsts.commit();

    for (var entry : assumptionsToInsert.entrySet()) {
      var successBb = entry.getKey();
      var assumes = entry.getValue();
      var assumeStmts = Lists.mapLazy(assumes, assume -> {
        var dst = assumeDsts.get(assume);
        return new Statement(dst, assume);
      });

      successBb.insertStatements(0, assumeStmts);
    }

    return true;
  }
}
