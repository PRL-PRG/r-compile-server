package org.prlprg.fir.opt;

import com.google.common.collect.ArrayListMultimap;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Objects;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.AssumeConstant;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeLoadFun;
import org.prlprg.fir.ir.expression.AssumeType;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.util.Lists;
import org.prlprg.util.Pair;

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
///
/// By default, this optimization doesn't run on baseline versions, since if we deoptimize from
/// baseline we don't have anywhere to go that isn't FIŘ.
public record SpeculateAssume(int threshold, boolean onBaseline)
    implements AbstractionOptimization {
  public SpeculateAssume(int threshold) {
    this(threshold, false);
  }

  @Override
  public boolean run(ModuleFeedback feedback, Function function) {
    var changed = false;
    for (var version : function.versions()) {
      // Don't run on baseline unless overridden via field
      if (!onBaseline && version == function.baseline()) {
        continue;
      }

      changed |= run(feedback.get(version), version);
    }
    return changed;
  }

  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction scope) {
    // Compute checkpoint BBs and analyses we'll need
    var checkpointBbs =
        scope
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .filter(bb -> bb.jump() instanceof Checkpoint)
            .toList();
    var defUses = new DefUses(scope);
    var domTree = new DominatorTree(scope);

    // Find assumptions
    var assumesToInsert = new LinkedHashMap<BB, List<Assume>>();
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
      if (defUses.uses(register).stream()
          .anyMatch(
              use ->
                  use.inInnermostCfg().instruction() instanceof Statement s
                      && s.expression() instanceof Assume)) {
        continue;
      }

      var calleeFeedback = feedback.callee(register);
      var constantFeedback = feedback.constant(register);
      var typeFeedback = feedback.type(register).union();

      // If type feedback is a promise, speculate on a maybe-promise,
      // because callees to this closure may inline the promise argument
      // which would cause deopt.
      // ???: maybe we should change "promise" to "maybe-promise",
      // because strict promises are replaced by SEXP values and semantics are equivalent,
      // and we don't really get optimization since optimized code has minimal promises
      // (although we do get better correctness, since a value can't be passed to a promise)
      if (typeFeedback.isPromise()) {
        typeFeedback =
            typeFeedback.withPromisity(Promisity.maybe(typeFeedback.promisity().effects()));
        if (typeFeedback.equals(Type.ANY.withConcreteness(Concreteness.DEFINITE))) {
          typeFeedback = Type.ANY;
        }
      }

      // Skip if assumptions won't increase knowledge.
      if (calleeFeedback == null && constantFeedback == null && typeFeedback.equals(local.type())) {
        continue;
      }

      // Skip malformed where register isn't defined or is defined multiple times.
      var def = defUses.definition(register);
      if (def == null) {
        continue;
      }

      // Get possible checkpoints where after we can insert assumptions for the register
      var availableCheckpointBbs =
          checkpointBbs.stream()
              .filter(bb -> domTree.dominates(def.inInnermostCfg().bb(), bb))
              .toList();
      if (availableCheckpointBbs.isEmpty()) {
        continue;
      }

      // Filter out checkpoints where the assumptions would be strictly redundant,
      // because they're dominated by another checkpoint we'll insert assumptions at.
      var immediateCheckpointBbs =
          availableCheckpointBbs.stream()
              .filter(
                  bb ->
                      availableCheckpointBbs.stream()
                          .noneMatch(other -> other != bb && domTree.dominates(other, bb)))
              .toList();
      assert !immediateCheckpointBbs.isEmpty();

      for (var cpBb : immediateCheckpointBbs) {
        var successBb = ((Checkpoint) cpBb.jump()).success().bb();

        // Use `else if` because each assumption is strictly better,
        // and we can't substitute multiple times.
        if (calleeFeedback != null) {
          var assumeCallee = new AssumeFunction(new Read(register), calleeFeedback);
          assumesToInsert.computeIfAbsent(successBb, _ -> new ArrayList<>()).add(assumeCallee);
        } else if (constantFeedback != null) {
          var assumeConstant = new AssumeConstant(new Read(register), constantFeedback);
          assumesToInsert.computeIfAbsent(successBb, _ -> new ArrayList<>()).add(assumeConstant);
        } else if (!typeFeedback.equals(local.type())) {
          var assumeType = new AssumeType(new Read(register), typeFeedback);
          assumesToInsert.computeIfAbsent(successBb, _ -> new ArrayList<>()).add(assumeType);
        }
      }
    }

    // Stop unless we have changes
    if (assumesToInsert.isEmpty()) {
      return false;
    }

    // Substitute assumed registers
    var assumeSubsts = new DomineeSubstituter(domTree, scope);
    var assumeDsts = new HashMap<Pair<Assume, BB>, Register>();
    var afterAssumeStmts = ArrayListMultimap.<BB, Statement>create();
    for (var entry : assumesToInsert.entrySet()) {
      var successBb = entry.getKey();
      var assumes = entry.getValue();

      for (var assume : assumes) {
        var target = Objects.requireNonNull((Read) assume.target()).variable();
        switch (assume) {
          case AssumeType(var _, var type) -> {
            var improvedType = scope.addLocal(target.name(), type);
            assumeSubsts.stage(target, new Read(improvedType), successBb);
            assumeDsts.put(Pair.of(assume, successBb), improvedType);
          }
          case AssumeFunction af -> {
            var fun = af.function();

            var globalLookup = scope.addLocal(target.name(), Type.CLOSURE);
            afterAssumeStmts.put(
                successBb, new Statement(globalLookup, new LoadFun(fun.name(), Env.GLOBAL)));
            assumeSubsts.stage(target, new Read(globalLookup), successBb);
          }
          case AssumeConstant(var _, var constant) ->
              assumeSubsts.stage(target, new Constant(constant), successBb);
          case AssumeLoadFun _ ->
              throw new IllegalStateException("SpeculateAssume never creates AssumeLoadFun");
        }
      }
    }
    assumeSubsts.commit();

    for (var entry : assumesToInsert.entrySet()) {
      var successBb = entry.getKey();
      var assumes = entry.getValue();

      var assumeStmts =
          Lists.concatLazy(
              Lists.mapLazy(
                  assumes,
                  assume -> {
                    var dst = assumeDsts.get(Pair.of(assume, successBb));
                    return new Statement(dst, assume);
                  }),
              afterAssumeStmts.get(successBb));

      successBb.insertStatements(0, assumeStmts);
    }

    return true;
  }
}
