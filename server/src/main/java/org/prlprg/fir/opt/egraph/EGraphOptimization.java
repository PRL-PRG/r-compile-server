package org.prlprg.fir.opt.egraph;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;

/// Value-equivalence optimization built on an [AEGraph], inspired by
/// [Cranelift's](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md).
///
/// It runs in two phases:
///
/// 1. **Build** ([Run#buildGraph]). It pours the abstraction into an [AEGraph], one e-node per
///    parameter, phi, and statement, in *dominator order* so every operand is canonical before the
///    node that uses it (the acyclic invariant — see [AEGraph]). Two rewrites are applied as nodes
///    are added:
///    - **Copy-propagation:** `r = a` unions `r`'s class with `a`'s.
///    - **GVN/CSE:** two pure, shareable instructions with equal canonical operands hash-cons to
///      one e-class.
///
/// 2. **Extract & rewrite** ([Run#collectSubstitutions]). For each register it
// [extracts][AEGraph#extract]
///    the cheapest equivalent that's actually *usable* at the register's sites — a constant, or a
///    register whose definition dominates this one and all of its uses — and substitutes it.
///
/// This subsumes global value numbering and copy propagation. It deliberately does **not** move,
/// duplicate, or delete code: the now-redundant definitions and any freed-up scheduling are left to
/// the passes that run after it (e.g. `SchedulePure`, `Cleanup`), keeping this pass idempotent.
///
/// Only *shareable* values participate (pure, effect-free, [shared][Ownership#SHARED] results with
/// no `consume`d operands); anything side-effecting or owning a fresh value is pinned and only ever
/// has its operands rewritten, never merged — this preserves R's reference-counting semantics.
public class EGraphOptimization implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return new Run(abstraction).run();
  }

  private static final class Run {
    private final Abstraction scope;
    private final AEGraph graph = new AEGraph();
    private final DefUses defUses;
    private final DominatorTree dominatorTree;
    private final InferEffects inferEffects;
    private final Substituter substituter;

    Run(Abstraction scope) {
      this.scope = scope;
      defUses = new DefUses(scope);
      dominatorTree = new DominatorTree(scope);
      inferEffects = new InferEffects(scope);
      substituter = new Substituter(scope);
    }

    boolean run() {
      buildGraph();

      var substitutions = collectSubstitutions();
      if (substitutions.isEmpty()) {
        return false;
      }

      substitutions.forEach(substituter::stage);
      return substituter.commit();
    }

    // region build

    /// Populate the e-graph from the abstraction. Parameters and phis become [EParam] leaves; every
    /// statement becomes a copy-propagation [union][AEGraph#union] or an [EInstruction]. Blocks are
    /// visited in dominator order (and statements in their natural order) so that each node's
    /// operands are already canonical when it's added — the precondition for hash-consing and
    /// at-creation rewrites to be correct without a rebuild step.
    private void buildGraph() {
      for (var parameter : scope.parameters()) {
        graph.add(new EParam(parameter.variable()));
      }

      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                // Dominators before dominees: a definition's e-class is finalized before any
                // dominated use is canonicalized against it.
                var blocks = new ArrayList<>(cfg.bbs());
                blocks.sort(new CfgDominatorTree(cfg).comparator());

                for (var bb : blocks) {
                  for (var phi : bb.phiParameters()) {
                    graph.add(new EParam(phi));
                  }

                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    addStatement(statement, new CfgPosition(bb, i, statement));
                  }

                  // Register jump operands so their canonical forms exist for substitution.
                  bb.jump().arguments().forEach(this::canonicalizeArgument);
                }
              });
    }

    private void addStatement(Statement statement, CfgPosition position) {
      // A [Promise]'s arguments live in its own (nested) CFG, so don't canonicalize them here.
      if (!(statement.expression() instanceof Promise)) {
        statement.arguments().forEach(this::canonicalizeArgument);
      }

      var assignee = statement.assignee();
      if (assignee == null) {
        return;
      }
      var out = new Read(assignee);

      // `r = a` (a zero-cost argument-as-expression): `r` is exactly `a`, so union their classes.
      // A `consume` aliases an owned value, so it isn't a value-equivalence we may freely share.
      if (statement.expression() instanceof Aea(var value) && !(value instanceof Consume)) {
        graph.union(canonicalizeArgument(value), out);
        return;
      }

      if (isShareable(statement)) {
        // Pure + shareable: add with canonical operands so equal computations hash-cons (GVN/CSE).
        graph.add(new EInstruction(assignee, canonicalize(statement.expression()), null));
      } else {
        // Side-effecting or otherwise unshareable: pin to its position so it never deduplicates.
        graph.add(new EInstruction(assignee, statement.expression(), position));
      }
    }

    private Expression canonicalize(Expression expression) {
      return expression.mapArguments(this::canonicalizeArgument);
    }

    /// Register `argument` in the e-graph and return its canonical representative. A `consume` is
    /// left opaque (it transfers ownership rather than naming a reusable value).
    private Argument canonicalizeArgument(Argument argument) {
      if (argument instanceof Consume) {
        return argument;
      }
      return graph.addArgument(argument);
    }

    /// Whether a statement's result may be shared with an equivalent one (i.e. participate in
    /// GVN/CSE). It must assign a value, be pure (no effects, no `consume` operands), and — since
    /// sharing means two uses observe one result — produce a [shared][Ownership#SHARED], not
    /// freshly-owned, value. Only `r = a` and pure static calls qualify; everything else is pinned.
    private boolean isShareable(Statement statement) {
      var expression = statement.expression();
      if (statement.assignee() == null
          || expression instanceof Assume
          || expression instanceof Noop
          || expression instanceof Promise
          || statement.arguments().stream().anyMatch(Consume.class::isInstance)
          || inferEffects.of(expression) != Effects.NONE) {
        return false;
      }

      return expression instanceof Aea
          || (expression instanceof Call(StaticFnCallee(_, _, _, var signature), _)
              && signature.effects() == Effects.NONE
              && signature.returnType().ownership() == Ownership.SHARED);
    }

    // endregion build

    // region extract & rewrite

    /// For every register, extract the best equivalent argument to replace it with (if any), keyed
    /// by the register and ready to stage on the [Substituter].
    private Map<Register, Argument> collectSubstitutions() {
      var substitutions = new LinkedHashMap<Register, Argument>();
      for (var members : graph.classes().values()) {
        for (var member : members) {
          if (!(member instanceof Read(var original))
              || scope.isParameter(original)
              || substitutions.containsKey(original)) {
            continue;
          }

          var replacement =
              graph.extract(
                  member, candidate -> isUsableReplacement(original, candidate), Run::cost);
          if (replacement != null) {
            substitutions.put(original, replacement);
          }
        }
      }
      return substitutions;
    }

    /// Cost used to rank equivalent members during [extraction][AEGraph#extract]: a known constant
    /// is free to rematerialize, so it's always preferred over keeping a register live.
    private static int cost(Argument argument) {
      return argument instanceof Constant ? 0 : 1;
    }

    /// Whether `candidate` may replace every occurrence of `original` while preserving semantics:
    /// `original` must remain a used, non-`consume`d local of a compatible type, and a register
    /// `candidate` must be defined somewhere that dominates `original`'s definition and all of its
    /// uses (so the replacement is available everywhere `original` was). `candidate` is never
    /// `original` itself, and never a `consume`.
    private boolean isUsableReplacement(Register original, Argument candidate) {
      if (candidate.equals(new Read(original))
          || candidate instanceof Consume
          || !scope.contains(original)
          || defUses.uses(original).isEmpty()
          || hasConsumeUse(original)) {
        return false;
      }

      var originalType = scope.typeOf(original);
      var candidateType = scope.typeOf(candidate);
      if (originalType != null
          && candidateType != null
          && !candidateType.canBeAssignedTo(originalType)) {
        return false;
      }

      // A `Constant` (the only non-`Read` left, since `Consume` was excluded above) is always
      // available. A `Read` is only available where its definition dominates.
      if (!(candidate instanceof Read(var replacementRegister))) {
        return true;
      }

      var originalDefinition = defUses.definition(original);
      var replacementDefinition = defUses.definition(replacementRegister);
      if (originalDefinition == null || replacementDefinition == null) {
        return false;
      }

      var replacementPosition = replacementDefinition.inInnermostCfg();
      return dominatorTree.dominates(replacementPosition, originalDefinition.inInnermostCfg())
          && defUses.uses(original).stream()
              .map(ScopePosition::inInnermostCfg)
              .allMatch(use -> dominatorTree.dominates(replacementPosition, use));
    }

    /// Whether some use of `register` consumes it (`consume register`). Substituting a consumed
    /// register would duplicate an owned value across the consumer and the replacement's users.
    private boolean hasConsumeUse(Register register) {
      return defUses.uses(register).stream()
          .map(use -> use.inInnermostCfg().instruction())
          .filter(Objects::nonNull)
          .flatMap(instruction -> instruction.arguments().stream())
          .anyMatch(
              argument -> argument instanceof Consume(var consumed) && consumed.equals(register));
    }

    // endregion extract & rewrite
  }
}
