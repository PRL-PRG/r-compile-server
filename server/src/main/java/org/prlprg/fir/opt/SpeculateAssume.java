package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Promisity;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.Register;

/// Insert assumptions that feedback suggests will always pass.
///
/// Specifically, if a register's feedback indicates:
/// - It's always a closure whode body is a compiled function
/// - It's always a constant
/// - It's always an instance of some type
///
/// AND has more hits than `threshold`,
///
/// Then, in the earliest checkpoint after the register's definition\[1\], insert the
/// corresponding [AssumeFunction], [AssumeConstant], or [AssumeType] respectively.
///
/// \[1\] Specifically, every checkpoint in the register's own CFG that its definition dominates
/// and that isn't dominated by another such checkpoint. There's usually only one, although we
/// handle the case where there's multiple.
///
/// By default, this optimization doesn't run on baseline versions, since if we deoptimize from
/// baseline we don't have anywhere to go that isn't FIŘ.
public record SpeculateAssume(int threshold, boolean onBaseline)
    implements AbstractionOptimization {
  public SpeculateAssume(int threshold) {
    this(threshold, false);
  }

  /// The block a [Checkpoint]-terminated `bb` continues into when its assumptions hold, or `null`
  /// if `bb` doesn't end in one.
  private static @Nullable BB successOf(BB bb) {
    return bb.jump().expression() instanceof Checkpoint checkpoint
        ? checkpoint.success().get()
        : null;
  }

  @Override
  public boolean runWithoutRecording(ModuleFeedback feedback, Function function) {
    var changed = false;
    for (var version : function.versions()) {
      // Don't run on baseline unless overridden via field
      if (!onBaseline && version == function.baseline()) {
        continue;
      }

      changed |= run(function, feedback.get(version), version);
    }
    return changed;
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction scope) {
    // Compute checkpoint BBs and analyses we'll need
    var checkpointBbs =
        scope
            .streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .filter(bb -> bb.jump().expression() instanceof Checkpoint)
            .toList();
    var domTree = new DominatorTree(scope);

    // Find assumptions. Each speculation pairs an assumption with the register it targets (the
    // target is the assume statement's argument, no longer part of the assumption).
    record Spec(Assumption assumption, Register target) {}
    var assumptionsToInsert = new LinkedHashMap<BB, List<Spec>>();
    for (var register : scope.streamRegisters().filter(r -> !scope.isParameter(r)).toList()) {
      if (feedback.times(register) < threshold) {
        continue;
      }

      // Skip if we've assumed anything for this register, anywhere:
      // that means we already ran this optimization,
      // and our assumptions never become more precise, only less
      if (register.uses().stream()
          .anyMatch(
              use ->
                  use.instruction() instanceof Statement s && s.expression() instanceof Assume)) {
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
      //
      // Not when the register is already declared a definite promise, though. Nothing can hand it a
      // value -- `Type#matches` won't let a caller pass one -- so there's no inlining to survive,
      // and widening anyway makes the assumption incomparable with what's declared: a maybe-promise
      // neither subtypes a promise nor is subtyped by one, which is exactly the shape
      // [org.prlprg.fir.check.TypeAndEffectChecker#assumeCanSucceed] rejects.
      if (typeFeedback.isPromise() && !register.type().isPromise()) {
        typeFeedback =
            typeFeedback.withPromisity(Promisity.maybe(typeFeedback.promisity().effects()));
        if (typeFeedback.equals(Type.ANY_SEXP.withConcreteness(Concreteness.DEFINITE))) {
          typeFeedback = Type.ANY_SEXP;
        }
      }

      // Whether the register's declared type is already at least as precise as the feedback, so
      // an `AssumeType` would tell us nothing -- or actively lose ground.
      //
      // `InferType` reads an `AssumeType`'s result straight off the assumption, so `i3: V = i2 ?:
      // V`
      // on an `i2: v1(I)` makes `i3` the *wider* `V`. Where that feeds a promise's return value,
      // `ImproveSignatures` widens the promise's declared type to match, and `Specialize` -- which
      // re-derives the assignee's type from the expression and requires it to subtype what's
      // already declared -- fails outright the next time the abstraction is optimized.
      var alreadyKnown = register.type().isSubtypeOf(typeFeedback);

      // An assumption whose type is disjoint from what's declared can never hold, so speculating on
      // it only buys a guaranteed deopt -- and it doesn't type-check. This is
      // [org.prlprg.fir.check.TypeAndEffectChecker#assumeCanSucceed], spelled out rather than
      // called, because that takes a built `AssumeType` and building one rejects the non-SEXP types
      // (`B`, `I`, ...) plenty of registers have.
      var canSucceed = alreadyKnown || typeFeedback.isSubtypeOf(register.type());

      // Skip if assumptions won't increase knowledge.
      if (calleeFeedback == null && constantFeedback == null && (alreadyKnown || !canSucceed)) {
        continue;
      }

      // Skip malformed where the register's definition isn't attached to a block.
      var defBb = register.definingBB();
      if (defBb == null) {
        continue;
      }
      // Where in that block: a statement's own index, or before all of them for a phi, which is
      // assigned on entry. Compared against the *start* of the success block below, so a register
      // defined by a statement in that very block doesn't count as reaching an assume placed ahead
      // of it -- `DomineeSubstituter` would then be asked to rewrite the definition itself.
      var defIndex =
          register instanceof AssigneeOf assignee ? assignee.statement().indexInBB() : -1;

      // Get possible checkpoints where after we can insert assumptions for the register.
      //
      // Only ones in the register's own CFG. `DominatorTree`'s block-level check walks a block in
      // a promise up to the statement that defines that promise and then compares blocks,
      // forgetting the statement index -- so `p = prom{ ... }` "dominates" every checkpoint inside
      // its own body, and we'd insert an assume reading `p` before `p` is assigned. Even where the
      // index does work out, an assume inside a promise makes that promise capture the register,
      // which only a local one may do ([org.prlprg.fir.check.CaptureChecker]), and nothing has
      // marked promises local this early. A checkpoint in a promise can't be reached from a
      // register defined outside it in the other direction anyway: `DominatorTree` never lets
      // anything in a promise dominate anything outside.
      var availableCheckpointBbs =
          checkpointBbs.stream()
              .filter(
                  bb -> {
                    // Against the block the assume actually lands in, not the one holding the
                    // checkpoint. A checkpoint's success block can have other predecessors, and
                    // then a definition that reaches the checkpoint still doesn't reach every way
                    // into the success block -- so the assume would read a register that isn't
                    // assigned yet on some path.
                    var successBb = successOf(bb);
                    return successBb != null
                        && successBb.owner() == defBb.owner()
                        && domTree.dominates(defBb, defIndex, successBb, -1);
                  })
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
        var successBb = Objects.requireNonNull(successOf(cpBb));

        // Use `else if` because each assumption is strictly better,
        // and we can't substitute multiple times.
        if (calleeFeedback != null) {
          assumptionsToInsert
              .computeIfAbsent(successBb, _ -> new ArrayList<>())
              .add(new Spec(new AssumeFunction(calleeFeedback), register));
        } else if (constantFeedback != null) {
          assumptionsToInsert
              .computeIfAbsent(successBb, _ -> new ArrayList<>())
              .add(new Spec(new AssumeConstant(constantFeedback), register));
        } else if (!alreadyKnown && canSucceed) {
          assumptionsToInsert
              .computeIfAbsent(successBb, _ -> new ArrayList<>())
              .add(new Spec(new AssumeType(typeFeedback), register));
        }
      }
    }

    // Stop unless we have changes
    if (assumptionsToInsert.isEmpty()) {
      return false;
    }

    // Build the assume statements (so their assignees exist as substitution targets) and stage
    // substitutions of each assumed register to its refined result.
    var assumptionSubsts = new DomineeSubstituter(domTree, scope);
    var stmtsByBb = new LinkedHashMap<BB, List<Statement>>();
    for (var entry : assumptionsToInsert.entrySet()) {
      var successBb = entry.getKey();
      var stmts = new ArrayList<Statement>();

      for (var spec : entry.getValue()) {
        var target = spec.target();
        var assumeStmt = new Statement(new Assume(spec.assumption()), List.of(new Read(target)));
        switch (spec.assumption()) {
          case AssumeType(var type) -> {
            var dst = assumeStmt.setAssignee(scope.freshName(target.name()), type);
            assumptionSubsts.stage(target, new Read(dst), successBb);
          }
          case AssumeFunction _ -> {
            var dst = assumeStmt.setAssignee(scope.freshName(target.name()), Type.CLOSURE);
            assumptionSubsts.stage(target, new Read(dst), successBb);
            // After we insert `f1 = f ?- f_static`,
            // [ResolveDynamicCallee] will substitute `dyn f1` with `f_static@f1`
          }
          case AssumeConstant(var constant) ->
              assumptionSubsts.stage(target, new Constant(constant), successBb);
          case AssumeLoadFun _, AssumeLoadVar _ ->
              throw new IllegalStateException(
                  "SpeculateAssume never creates load-based assumptions");
        }
        stmts.add(assumeStmt);
      }
      stmtsByBb.put(successBb, stmts);
    }
    assumptionSubsts.commit();

    // Insert the assume statements at the start of their blocks, preserving order.
    for (var entry : stmtsByBb.entrySet()) {
      var successBb = entry.getKey();
      var stmts = entry.getValue();
      for (var i = stmts.size() - 1; i >= 0; i--) {
        successBb.prependStatement(stmts.get(i));
      }
    }

    return true;
  }
}
