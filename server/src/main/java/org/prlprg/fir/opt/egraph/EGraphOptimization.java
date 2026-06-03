package org.prlprg.fir.opt.egraph;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
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
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;

/// Egraph optimization inspired by
/// [cranelift's](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md).
///
/// It builds an [AEGraph] over the abstraction's arguments, which discovers value equivalences:
/// - **Copy propagation:** `r = a` makes `r` equal to `a`.
/// - **GVN/CSE:** two pure, shareable instructions with equal (canonicalized) operands hash-cons
///   to the same e-class.
///
/// It then rewrites the code by replacing each register with the best *dominating* member of its
/// e-class (a constant, or a register whose definition dominates this one and all its uses). This
/// subsumes global value numbering and copy propagation. Code motion, dead-code elimination, and
/// re-scheduling of the now-redundant definitions are intentionally left to the passes that run
/// after this one (e.g. `SchedulePure`, `Cleanup`).
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

    /// Populate the e-graph from the abstraction: parameters and phis become [EParam] leaves, and
    /// every statement becomes a copy-propagation [union][AEGraph#union] or an [EInstruction].
    private void buildGraph() {
      for (var parameter : scope.parameters()) {
        graph.add(new EParam(parameter.variable()));
      }

      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var phi : bb.phiParameters()) {
                    graph.add(new EParam(phi));
                  }

                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    addStatement(statement, new CfgPosition(bb, i, statement));
                  }

                  // Register jump operands so their canonical forms participate in substitution.
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
      // A `consume` aliases an owned value, so it isn't a value-equivalence we can share.
      if (statement.expression() instanceof Aea(var value) && !(value instanceof Consume)) {
        graph.union(canonicalizeArgument(value), out);
        return;
      }

      if (isAegraphPure(statement)) {
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
    /// left as-is (treated as opaque), since it transfers ownership rather than naming a value.
    private Argument canonicalizeArgument(Argument argument) {
      if (argument instanceof Consume) {
        return argument;
      }
      return graph.addArgument(argument);
    }

    /// Whether a statement's result can be shared with an equivalent one (and so participate in
    /// GVN/CSE). It must assign a value, be pure (no effects, no `consume` operands), and -- since
    /// sharing means two uses observe one result -- produce a [shared][Ownership#SHARED], not
    /// freshly-owned, value. Only `r = a` and pure static calls qualify; everything else is pinned.
    private boolean isAegraphPure(Statement statement) {
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
          || expression instanceof Call(StaticFnCallee(_, _, _, var signature), _)
              && signature.effects() == Effects.NONE
              && signature.returnType().ownership() == Ownership.SHARED;
    }

    // endregion build

    // region rewrite

    /// For every register, find the best equivalent argument to replace it with (if any). Returns
    /// a map from each register to its replacement, ready to stage on the [Substituter].
    private Map<Register, Argument> collectSubstitutions() {
      var substitutions = new LinkedHashMap<Register, Argument>();
      for (var eclass : graph.classes().values()) {
        for (var member : eclass) {
          if (!(member instanceof Read(var original))
              || scope.isParameter(original)
              || substitutions.containsKey(original)) {
            continue;
          }

          var replacement = replacementFor(original, eclass);
          if (replacement != null) {
            substitutions.put(original, replacement);
          }
        }
      }
      return substitutions;
    }

    private @Nullable Argument replacementFor(Register original, Iterable<Argument> eclass) {
      for (var candidate : eclass) {
        if (candidate.equals(new Read(original))) {
          continue;
        }
        if (canSubstitute(original, candidate)) {
          return candidate;
        }
      }
      return null;
    }

    /// Whether every use of `original` can be replaced with `replacement` while preserving
    /// semantics: `original` must still be a used, non-`consume`d local of a compatible type, and a
    /// register `replacement` must be defined somewhere that dominates `original`'s definition and
    /// all of its uses (so the replacement is always available where `original` was).
    private boolean canSubstitute(Register original, Argument replacement) {
      if (replacement instanceof Consume
          || !scope.contains(original)
          || defUses.uses(original).isEmpty()
          || hasConsumeUse(original)) {
        return false;
      }

      var originalType = scope.typeOf(original);
      var replacementType = scope.typeOf(replacement);
      if (originalType != null
          && replacementType != null
          && !replacementType.canBeAssignedTo(originalType)) {
        return false;
      }

      return switch (replacement) {
        case Constant _ -> true;
        case Read(var replacementRegister) -> {
          var originalDefinition = defUses.definition(original);
          var replacementDefinition = defUses.definition(replacementRegister);
          if (originalDefinition == null || replacementDefinition == null) {
            yield false;
          }

          var replacementPosition = replacementDefinition.inInnermostCfg();
          yield dominatorTree.dominates(replacementPosition, originalDefinition.inInnermostCfg())
              && defUses.uses(original).stream()
                  .map(use -> use.inInnermostCfg())
                  .allMatch(use -> dominatorTree.dominates(replacementPosition, use));
        }
        case Consume _ -> false;
      };
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

    // endregion rewrite
  }
}
