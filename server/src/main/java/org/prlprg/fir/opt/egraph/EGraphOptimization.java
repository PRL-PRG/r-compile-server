package org.prlprg.fir.opt.egraph;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;
import static org.prlprg.fir.ir.cfg.iterator.BbReverseDfs.bbReverseDfs;

import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.stream.Collectors;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.DomineeSubstituter;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.util.Streams;

/// Value-equivalence + code-motion + peephole optimization built on an [AEGraph], inspired by
/// [Cranelift's](https://github.com/bytecodealliance/rfcs/blob/main/accepted/cranelift-egraph.md).
///
/// It runs a rewrite phase followed by three e-graph phases:
///
/// 0. **Rewrite** ([Run#runRewrites]). It applies the configured [RewriteOptimization]s — local
///    expression rewrites such as constant/trivial-cast/assume elimination, callee resolution, and
///    load resolution — to a fixpoint, re-running rules on expressions an earlier rule changed and
///    propagating type refinements to uses. This subsumes the standalone specialization pass
///    ([org.prlprg.fir.opt.specialize]); with no rewrites configured it's skipped.
///
/// 1. **Build** ([Run#buildGraph]). It pours the abstraction into an [AEGraph], one e-node per
///    parameter, phi, and statement, in *dominator order* so every operand is canonical before the
///    node that uses it (the acyclic invariant — see [AEGraph]). Three families of rewrites are
///    applied as nodes are added:
///    - **Copy-propagation:** `r = a` unions `r`'s class with `a`'s.
///    - **GVN/CSE:** two pure, shareable instructions with equal canonical operands hash-cons to
///      one e-class.
///    - **Inverse pairs:** `unbox(box(x)) → x` and `box(unbox(x)) → x` — when we add one of these
///      conversions and its operand's e-class already contains the inverse conversion, we union
///      the result with the operand of that inverse. Together with hash-consing, this also folds
///      duplicate conversions.
///
/// 2. **Substitute** ([Run#applySubstitutions]). For each register it
///    [extracts][AEGraph#extract] the cheapest equivalent that's actually *usable* at the
///    register's sites — a constant, or a register whose definition dominates this one and all of
///    its uses — and substitutes it. This is what realizes GVN/CSE, copy-propagation, and the
///    box/unbox-style folds as concrete IR rewrites.
///
/// 3. **Schedule pure instructions** ([Run#schedulePures]). Every surviving pure statement is
///    moved to the *deepest CFG containing all of its uses* and to the *latest dominating
///    position(s)* within that CFG that are still dominated by all of its operands. Concretely:
///    - If every use of the value is inside a single nested promise (directly or transitively
///      through other pure instructions whose only remaining use is the same promise), the
///      instruction is moved inside that promise.
///    - If every use is in a single dominee basic block, the instruction is moved to the head of
///      that block (after phis).
///    - If uses live in sibling branches that don't dominate each other and the producer is
///      *shareable*, the instruction is duplicated into each branch. Non-shareable pures (e.g.
///      `dup`, which holds a fresh identity) get a single placement; if their uses fan out they
///      stay where they were.
///    Pure instructions used nowhere are left untouched — eliminating dead code is
///    [Cleanup][org.prlprg.fir.opt.Cleanup]'s job. Deopt-target blocks are excluded as
///    placements: the interpreter only accepts a tiny whitelist of expressions there, so we
///    can't push arbitrary pure code into them.
///
/// This subsumes global value numbering, copy propagation, `box`/`unbox` peephole rewrites
/// (`ElideRedundantBoxUnbox`), pure-instruction scheduling / defer-into-promise (`SchedulePure`
/// and `DeferIntoPromise`), and — via the configured [RewriteOptimization]s — the specialization
/// pass (`Specialize`).
///
/// Side-effecting and `consume`-owning instructions are pinned in phase 1 and never participate
/// in CSE or motion — this preserves R's reference-counting semantics.
public class EGraphOptimization implements AbstractionOptimization {
  /// Analyses the e-graph and rewrite phases always need, before unioning in each rewrite's own.
  private static final AnalysisTypes BASE_ANALYSES =
      new AnalysisTypes(
          DefUses.class,
          DominatorTree.class,
          CfgDominatorTree.class,
          CfgHierarchy.class,
          InferEffects.class,
          InferType.class);

  private final List<RewriteOptimization> rewrites;
  private final AnalysisTypes analysisTypes;

  /// Create an e-graph optimization that first applies the given [RewriteOptimization]s to a
  /// fixpoint, then runs its value-equivalence and scheduling phases. With no rewrites it's purely
  /// the latter.
  public EGraphOptimization(RewriteOptimization... rewrites) {
    this.rewrites = List.of(rewrites);
    this.analysisTypes =
        this.rewrites.stream()
            .map(RewriteOptimization::analyses)
            .reduce(BASE_ANALYSES, AnalysisTypes::union);
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return new Run(abstraction, feedback).run();
  }

  private final class Run {
    private final Abstraction scope;
    private final AbstractionFeedback feedback;
    private final AEGraph graph = new AEGraph();
    private DefUses defUses;
    private DominatorTree dominatorTree;
    private InferEffects inferEffects;
    private CfgHierarchy hierarchy;
    private Analyses analyses;
    private Substituter substituter;

    /// Whether the rewrite-saturation phase changed anything. It's a field rather than a return
    /// value because the rewrite helpers are mutually recursive through type propagation.
    private boolean rewriteChanged;

    // The schedule phase reconstructs the set of movable statements by walking the IR after
    // substitutions commit, so there's no per-graph bookkeeping to keep in sync across phases.

    Run(Abstraction scope, AbstractionFeedback feedback) {
      this.scope = scope;
      this.feedback = feedback;
      refreshAnalyses();
    }

    private void refreshAnalyses() {
      analyses = new Analyses(scope, analysisTypes);
      defUses = analyses.get(DefUses.class);
      dominatorTree = analyses.get(DominatorTree.class);
      inferEffects = analyses.get(InferEffects.class);
      hierarchy = analyses.get(CfgHierarchy.class);
      substituter = new Substituter(scope);
    }

    boolean run() {
      // Phase 0: apply the rewrite rules to a fixpoint (subsumes the standalone specialize pass).
      var changed = runRewrites();
      if (changed) {
        // Rewrites mutated the IR; refresh analyses before building the e-graph.
        refreshAnalyses();
      }

      buildGraph();

      var substituted = applySubstitutions();
      if (substituted) {
        // Substitutions may have removed locals and rewritten uses; refresh analyses before
        // deciding where to move the surviving pures.
        refreshAnalyses();
      }
      changed |= substituted;
      changed |= schedulePures();
      return changed;
    }

    // region rewrite saturation

    /// Apply the [RewriteOptimization]s to a fixpoint: run every rule on every expression, then
    /// re-run rules on the expressions an earlier rule changed (and on uses whose operand type was
    /// narrowed), until none fire. Type refinements propagate to uses so dependent rules observe
    /// the narrower types, and deferred insertions are committed at the end. This equality
    /// saturation over the rule set is what lets this optimization subsume the specialization pass.
    private boolean runRewrites() {
      var activeRewrites = rewrites.stream().filter(r -> r.shouldRun(scope, analyses)).toList();
      if (activeRewrites.isEmpty()) {
        return false;
      }

      rewriteChanged = false;

      var cfgs =
          scope
              .streamCfgs()
              .gather(Streams.mapWithIndex(Map::entry))
              .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue));
      var changes =
          new TreeSet<>(
              Comparator.<CfgPosition>comparingInt(pos -> cfgs.get(pos.cfg()))
                  .thenComparing(Comparator.naturalOrder()));
      var deferredInsertions = new LinkedHashMap<BB, TreeMap<Integer, List<Runnable>>>();

      // Initially, run on every expression.
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var next = new CfgPosition(bb, i, bb.statements().get(i));
                    // Remove from `changes` in case an earlier expression added it; we run it now.
                    changes.remove(next);
                    runRewriteAt(next, activeRewrites, changes, deferredInsertions);
                  }
                }
              });

      // Then, only run on expressions changed by other expressions, until there are no more.
      // This always reaches a fixpoint because types only get more specific.
      while (!changes.isEmpty()) {
        runRewriteAt(changes.removeFirst(), activeRewrites, changes, deferredInsertions);
      }

      for (var rewrite : activeRewrites) {
        rewriteChanged |= rewrite.finish(scope, analyses);
      }

      // Commit deferred insertions last, because they invalidate `analyses`.
      rewriteChanged |= !deferredInsertions.isEmpty();
      for (var insertions : deferredInsertions.values()) {
        // Insert in reverse index order so earlier insertions don't shift later positions
        // (all insertions are local per `DeferredInsertions#stage`).
        for (var index : insertions.descendingKeySet()) {
          for (var insertion : insertions.get(index)) {
            insertion.run();
          }
        }
      }

      return rewriteChanged;
    }

    private void runRewriteAt(
        CfgPosition position,
        List<RewriteOptimization> activeRewrites,
        TreeSet<CfgPosition> changes,
        Map<BB, TreeMap<Integer, List<Runnable>>> deferredInsertions) {
      var bb = position.bb();
      var statementIndex = position.instructionIndex();
      var oldStmt =
          (Statement)
              Objects.requireNonNull(position.instruction(), "only adds statements to changes");
      var assignee = oldStmt.assignee();
      var expr = oldStmt.expression();

      var defer =
          (RewriteOptimization.DeferredInsertions)
              insertion ->
                  deferredInsertions
                      .computeIfAbsent(bb, _ -> new TreeMap<>())
                      .computeIfAbsent(statementIndex, _ -> new ArrayList<>())
                      .add(insertion);

      for (var rewrite : activeRewrites) {
        expr =
            rewrite.rewrite(bb, statementIndex, assignee, expr, scope, feedback, analyses, defer);
      }

      // If actually rewritten, replace the statement.
      if (!expr.equals(oldStmt.expression())) {
        bb.replaceStatementAt(statementIndex, new Statement(oldStmt.comments(), assignee, expr));
        rewriteChanged = true;
      }

      // If the type changed (even if the expression didn't), narrow the register's type and enqueue
      // its uses to be further rewritten.
      trySpecializeType(expr, assignee, changes);
    }

    private void trySpecializeType(
        Expression expr, @Nullable Register assignee, TreeSet<CfgPosition> changes) {
      if (assignee == null) {
        return;
      }
      var oldType = scope.typeOf(assignee);
      if (oldType == null) {
        return;
      }
      var newType = analyses.get(InferType.class).of(expr);
      if (newType == null) {
        return;
      }
      newType = newType.withOwnership(oldType.ownership());
      specializeType(assignee, oldType, newType, changes);
    }

    private void specializeType(
        Register assignee, @Nullable Type oldType, Type newType, TreeSet<CfgPosition> changes) {
      if (oldType != null && oldType.equals(newType)) {
        // No specialization occurred.
        return;
      }

      if (oldType != null && !newType.isSubtypeOf(oldType)) {
        throw new IllegalStateException(
            "A specialized expression's type must always subtype the original's:"
                + "\nOriginal type: "
                + oldType
                + "\nCurrent type: "
                + newType
                + "\n"
                + defUses.definitions(assignee).stream().findFirst().orElse(null));
      }

      scope.setLocalType(assignee, newType);
      rewriteChanged = true;

      for (var use : defUses.uses(assignee)) {
        // The position in the innermost CFG is all we care about.
        var use1 = use.inInnermostCfg();

        switch (Objects.requireNonNull(use1.instruction(), "phis are never uses")) {
          case Statement _ -> changes.add(use1);
          case Jump jump -> {
            // If it's a phi argument, try to refine the phi type.
            for (var target : jump.targets()) {
              var successor = target.bb();
              for (var i = 0; i < target.phiArgs().size(); i++) {
                var argument = target.phiArgs().get(i);
                if (!argument.equals(new Read(assignee))) {
                  continue;
                }

                var phi = successor.phiParameters().get(i);
                var arguments = successor.phiArguments(i);

                // Recompute the phi's best type (union of its arguments' types), then specialize.
                // This always reaches a fixpoint because phi types only get more specific.
                var oldPhiType = scope.typeOf(phi);
                arguments.stream()
                    .flatMap(Collection::stream)
                    .map(scope::typeOf)
                    .reduce(Type::union)
                    .ifPresent(newPhiType -> specializeType(phi, oldPhiType, newPhiType, changes));
              }
            }
          }
        }
      }
    }

    // endregion rewrite saturation

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
                blocks.sort(analyses.get(cfg, CfgDominatorTree.class).comparator());

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
        var canonicalExpression = canonicalize(statement.expression());
        // Pure + shareable: add with canonical operands so equal computations hash-cons (GVN/CSE).
        graph.add(new EInstruction(assignee, canonicalExpression, null));
        applyInverseRewrites(canonicalExpression, out);
      } else {
        // Side-effecting or otherwise unshareable: pin to its position so it never deduplicates.
        graph.add(new EInstruction(assignee, statement.expression(), position));
      }
    }

    /// Recognize `box(unbox(x)) → x` and `unbox(box(x)) → x` at e-node insertion time. When the
    /// operand's e-class already contains the matching inverse conversion, union the result
    /// (`out`) with the operand of that inverse — so the canonical form skips the round-trip.
    /// Hash-consing (in [AEGraph#add]) takes care of the symmetric "duplicate conversion" case.
    private void applyInverseRewrites(Expression canonicalExpression, Argument out) {
      var conversion = matchConversion(canonicalExpression);
      if (conversion == null) {
        return;
      }
      var operandArg = conversion.operand();
      if (operandArg.variable() == null) {
        return;
      }

      var inverseFun = conversion.kind() == ConversionKind.BOX ? UNBOX_FUN : BOX_FUN;
      for (var node : graph.nodes(operandArg)) {
        if (!(node instanceof EInstruction(_, var innerExpression, var pos)) || pos != null) {
          continue;
        }
        var inner = matchConversion(innerExpression);
        if (inner == null || inner.kind().function() != inverseFun) {
          continue;
        }

        // out = conversion(operand) where operand = inverse(inner.operand)
        // So out is equivalent to inner.operand.
        var innerOperand = inner.operand();
        if (innerOperand instanceof Consume) {
          continue;
        }
        graph.union(graph.addArgument(innerOperand), out);
        return;
      }
    }

    private static @Nullable Conversion matchConversion(Expression expression) {
      if (!(expression instanceof Call(StaticFnCallee callee, var arguments))
          || arguments.size() != 1) {
        return null;
      }
      var kind = ConversionKind.of(callee.function());
      if (kind == null) {
        return null;
      }
      return new Conversion(kind, arguments.getFirst());
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

    /// Whether a statement is pure: assigns a value, has no effects, and doesn't `consume` any of
    /// its operands. Pure statements can be freely moved (their location doesn't affect program
    /// behavior aside from the dominance constraints around their operands and uses), but they
    /// can't necessarily be duplicated — see [#isShareable].
    private boolean isPure(Statement statement) {
      var expression = statement.expression();
      return statement.assignee() != null
          && !(expression instanceof Assume)
          && !(expression instanceof Noop)
          && !(expression instanceof Promise)
          && statement.arguments().stream().noneMatch(Consume.class::isInstance)
          && inferEffects.of(expression) == Effects.NONE;
    }

    /// Whether a statement's result may be shared with an equivalent one (i.e. participate in
    /// GVN/CSE and be duplicated across sibling branches). It must be pure, and — since sharing
    /// means two uses observe one result — produce a [shared][Ownership#SHARED], not
    /// freshly-owned, value. Only `r = a` and pure static calls qualify; everything else is pinned
    /// for CSE purposes and capped at a single placement for scheduling.
    private boolean isShareable(Statement statement) {
      if (!isPure(statement)) {
        return false;
      }
      var expression = statement.expression();
      return expression instanceof Aea
          || (expression instanceof Call(StaticFnCallee(_, _, _, var signature), _)
              && signature.effects() == Effects.NONE
              && signature.returnType().ownership() == Ownership.SHARED);
    }

    // endregion build

    // region substitute

    /// For each non-parameter register, replace it with the cheapest equivalent available at its
    /// use sites: a constant, a copy source, an earlier identical computation, or — thanks to the
    /// inverse rewrites — the operand of a `box(unbox(...))` / `unbox(box(...))` round-trip.
    private boolean applySubstitutions() {
      var substitutions = collectSubstitutions();
      if (substitutions.isEmpty()) {
        return false;
      }

      substitutions.forEach(substituter::stage);
      return substituter.commit();
    }

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

    // endregion substitute

    // region schedule

    /// Move surviving pure shareable instructions to their best position(s), per the schedule
    /// described in the class doc:
    /// - The *target CFG* is the deepest CFG that contains every (effective) use site — taking
    ///   into account that an earlier-scheduled instruction may already have been moved into a
    ///   deeper CFG, in which case its dependents observe the move and follow it in.
    /// - Within that CFG, *leaf use positions* are the use sites not dominated by other use sites.
    /// - The instruction is rewritten to live at each leaf (just before the use that pulled it
    ///   there); siblings get duplicated copies, with the original's [Substituter] swapping the
    ///   downstream uses to the new register in the corresponding branch.
    ///
    /// Operand availability is enforced by walking the target CFG outward until every operand
    /// definition either lives in it or in one of its ancestors. We process surviving pures in
    /// reverse-dominator order (uses before defs) so that when we get to a producer, its consumers
    /// have already chosen their targets and the producer can follow them inward.
    private boolean schedulePures() {
      var alivePures = collectAlivePures();
      if (alivePures.isEmpty()) {
        return false;
      }

      var sorted = sortReverseDominatorOrder(alivePures);
      var plans = new LinkedHashMap<Register, MovePlan>();
      for (var pure : sorted) {
        var plan = planMove(pure, plans);
        if (plan != null) {
          plans.put(pure.assignee(), plan);
        }
      }

      return applyMoves(plans);
    }

    /// The pure statements still present in the abstraction. We re-read them from the IR because
    /// substitution and copy-propagation may have invalidated whatever we saw in phase 1.
    /// Shareable pures (e.g. `box`, `r = a`, static-call results with [Ownership#SHARED] return)
    /// may be duplicated into sibling branches; non-shareable pures (e.g. `dup`, a fresh
    /// allocation) may be moved but never duplicated, since their identity matters at runtime.
    private List<AlivePure> collectAlivePures() {
      var result = new ArrayList<AlivePure>();
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    var assignee = statement.assignee();
                    if (assignee == null || !isPure(statement)) {
                      continue;
                    }
                    if (!scope.contains(assignee) || defUses.uses(assignee).isEmpty()) {
                      continue;
                    }
                    result.add(
                        new AlivePure(
                            assignee,
                            statement,
                            new CfgPosition(bb, i, statement),
                            isShareable(statement)));
                  }
                }
              });
      return result;
    }

    /// Reverse dominator order (innermost CFG first; later positions before earlier ones).
    /// Visiting in this order means when we plan a producer's move, every consumer has already
    /// picked its target CFG and we can pull the producer along.
    private List<AlivePure> sortReverseDominatorOrder(List<AlivePure> alive) {
      var byCfg = new LinkedHashMap<CFG, List<AlivePure>>();
      for (var pure : alive) {
        byCfg.computeIfAbsent(pure.position().cfg(), _ -> new ArrayList<>()).add(pure);
      }

      var orderedCfgs = new ArrayList<CFG>();
      scope.streamCfgs().forEach(orderedCfgs::add);
      // Innermost CFGs first.
      orderedCfgs.sort(
          Comparator.comparingInt((CFG cfg) -> hierarchy.streamAncestors(cfg).toList().size())
              .reversed());

      var result = new ArrayList<AlivePure>();
      for (var cfg : orderedCfgs) {
        var pures = byCfg.get(cfg);
        if (pures == null) {
          continue;
        }
        var domTree = analyses.get(cfg, CfgDominatorTree.class);
        // Reverse-dominator order: later/dominee positions first. Within a BB, larger index first.
        var bbComparator = domTree.comparator();
        pures.sort(
            Comparator.comparing((AlivePure p) -> p.position().bb(), bbComparator)
                .thenComparingInt(p -> p.position().instructionIndex())
                .reversed());
        result.addAll(pures);
      }
      return result;
    }

    /// Pick the best placement for `pure`, or return `null` to leave it where it is. Returns
    /// `null` when there's no movement to do, when operand availability prevents any move, or when
    /// the move would require copying into a CFG cycle.
    private @Nullable MovePlan planMove(AlivePure pure, Map<Register, MovePlan> plans) {
      var uses = defUses.uses(pure.assignee());
      if (uses.isEmpty()) {
        return null;
      }

      // Effective use position per use: if the user was itself scheduled into a different CFG,
      // pull the use along into that CFG.
      var effectiveUses = new ArrayList<ScopePosition>();
      for (var use : uses) {
        var useInst = use.inInnermostCfg().instruction();
        if (useInst instanceof Statement s
            && s.assignee() != null
            && plans.containsKey(s.assignee())) {
          var consumerPlan = plans.get(s.assignee());
          for (var leafBb : consumerPlan.leafBlocks()) {
            effectiveUses.add(asScope(new CfgPosition(leafBb, 0)));
          }
        } else {
          effectiveUses.add(use);
        }
      }

      // Common-ancestor CFG of the effective use positions.
      var targetCfg =
          effectiveUses.stream()
              .map(p -> p.inInnermostCfg().cfg())
              .collect(hierarchy.commonAncestor())
              .orElse(null);
      if (targetCfg == null) {
        return null;
      }

      // Walk targetCfg up until every operand definition either lives in it or in one of its
      // ancestors. Walking up means computing in an outer CFG so the operands stay in scope.
      var operandDefCfgs = operandDefinitionCfgs(pure);
      while (!operandsAreVisible(operandDefCfgs, targetCfg)) {
        var parent = hierarchy.parent(targetCfg);
        if (parent == null) {
          return null;
        }
        targetCfg = parent.bb().owner();
      }

      // Reject moves into a target CFG that's reachable from itself (a loop). Cloning the
      // instruction into a loop would change how often it runs.
      if (targetCfg != pure.position().cfg() && cfgIsInLoopBody(pure.position().cfg(), targetCfg)) {
        return null;
      }

      var targetCfgFinal = targetCfg;
      var usesInTargetCfg = new ArrayList<CfgPosition>();
      for (var use : effectiveUses) {
        var inCfg = use.inCfg(targetCfgFinal);
        if (inCfg == null) {
          // The use is in an ancestor; project it down using the promise position that bridges
          // from the ancestor into targetCfg.
          inCfg = projectIntoCfg(use.inInnermostCfg(), targetCfgFinal);
          if (inCfg == null) {
            return null;
          }
        }
        usesInTargetCfg.add(inCfg);
      }

      // Compute leaf use positions in target CFG (uses not dominated by any other use).
      var leaves = leafPositions(usesInTargetCfg, targetCfg);

      // Non-shareable pures (e.g. `dup`) hold an identity that mustn't be duplicated. If their
      // uses fan out into sibling branches, the only valid placement is the common dominator —
      // which is wherever the instruction sits today — so there's nothing to do.
      if (!pure.shareable() && leaves.size() > 1) {
        return null;
      }

      // Deopt-target blocks are restored by the interpreter and may only contain a strict
      // whitelist of expressions (env setup, reversible box/unbox, local stores). If a use is in
      // such a block, we mustn't pull arbitrary pure code into it — and since we can't push the
      // leaf past the deopt jump either, the original placement is the best we can do.
      if (leaves.stream().anyMatch(leaf -> leaf.bb().jump() instanceof Deopt)) {
        return null;
      }

      // Decide if there's actually anything to move. We only move if the target CFG differs
      // (defer into / hoist out of a promise) or if the target BB differs (defer into a dominee
      // block or duplicate into sibling branches). Moving within the same BB is pointless: the
      // dominator constraints already place the original after every operand, and shuffling it a
      // few statements later doesn't change what's computed.
      if (targetCfg == pure.position().cfg()
          && leaves.stream().allMatch(leaf -> leaf.bb() == pure.position().bb())) {
        return null;
      }

      return new MovePlan(pure, targetCfg, leaves);
    }

    private Set<CFG> operandDefinitionCfgs(AlivePure pure) {
      var result = new LinkedHashSet<CFG>();
      for (var argument : pure.statement().arguments()) {
        var variable = argument.variable();
        if (variable == null || scope.isParameter(variable)) {
          continue;
        }
        var definition = defUses.definition(variable);
        if (definition != null) {
          result.add(definition.inInnermostCfg().cfg());
        }
      }
      return result;
    }

    /// Whether every CFG that defines an operand is either the target CFG or one of its
    /// ancestors. Operands defined inside a sibling or nested CFG aren't visible at the target.
    private boolean operandsAreVisible(Set<CFG> operandDefCfgs, CFG targetCfg) {
      for (var defCfg : operandDefCfgs) {
        if (defCfg == targetCfg) {
          continue;
        }
        if (hierarchy
            .streamAncestors(targetCfg)
            .noneMatch(ancestor -> ancestor.bb().owner() == defCfg)) {
          return false;
        }
      }
      return true;
    }

    /// Drop positions that are dominated by another position in the same list; what remains are
    /// the "leaves" — the latest dominating positions that together cover every input.
    private List<CfgPosition> leafPositions(List<CfgPosition> positions, CFG cfg) {
      var domTree = analyses.get(cfg, CfgDominatorTree.class);
      var leaves = new ArrayList<CfgPosition>();
      for (var pos : positions) {
        var dominatedByExisting = false;
        for (var leaf : leaves) {
          if (domTree.dominates(leaf, pos)) {
            dominatedByExisting = true;
            break;
          }
        }
        if (dominatedByExisting) {
          continue;
        }
        leaves.removeIf(leaf -> domTree.dominates(pos, leaf));
        leaves.add(pos);
      }
      return leaves;
    }

    /// Find the [CfgPosition] in `targetCfg` that corresponds to the promise statement bridging
    /// the use-CFG (a descendant) into `targetCfg`. Returns `null` if no such bridging position
    /// exists (the use's CFG isn't a descendant).
    private @Nullable CfgPosition projectIntoCfg(CfgPosition usePos, CFG targetCfg) {
      var cursor = usePos.bb().owner();
      var prev = usePos;
      while (cursor != targetCfg) {
        var parent = hierarchy.parent(cursor);
        if (parent == null) {
          return null;
        }
        prev = parent;
        cursor = parent.bb().owner();
      }
      return prev;
    }

    /// Whether `targetCfg` is itself part of a loop (the BB containing it can be reached again
    /// from its own predecessors). Copying into a loop body changes execution counts, so we don't.
    private boolean cfgIsInLoopBody(CFG originalCfg, CFG targetCfg) {
      if (originalCfg == targetCfg) {
        return false;
      }
      // Walk from `originalCfg` up to `targetCfg`. If any bridging promise position is inside a
      // loop with respect to its own CFG, then placing a copy there would multiply executions.
      var cursor = originalCfg;
      while (cursor != targetCfg) {
        var parent = hierarchy.parent(cursor);
        if (parent == null) {
          return false;
        }
        if (Iterables.contains(bbReverseDfs(parent.bb().predecessors()), parent.bb())) {
          return true;
        }
        cursor = parent.bb().owner();
      }
      return false;
    }

    private static ScopePosition asScope(CfgPosition position) {
      return new ScopePosition(List.of(), position);
    }

    /// Carry out the planned moves: replace each origin with NOOP, then insert one statement per
    /// leaf use. When a plan has multiple leaves we have to duplicate the instruction; the extra
    /// copies get fresh assignees and a [DomineeSubstituter] points the consumers in each branch
    /// at the corresponding copy.
    private boolean applyMoves(Map<Register, MovePlan> plans) {
      if (plans.isEmpty()) {
        return false;
      }

      // Phase 1: NOOP all origins so insertion indices don't drift while we plan.
      for (var plan : plans.values()) {
        plan.pure().position().replaceWith(Statement.NOOP);
      }

      // Phase 2: insert at each target. Group by BB and insert in reverse index order so that
      // an earlier insertion doesn't shift the indices of later ones.
      var insertionsByBb = new LinkedHashMap<BB, List<Insertion>>();
      var domSubsts = new DomineeSubstituter(dominatorTree, scope);
      for (var plan : plans.values()) {
        var leaves = plan.leaves();
        for (var i = 0; i < leaves.size(); i++) {
          var leaf = leaves.get(i);
          Register assignee;
          if (i == 0) {
            assignee = plan.pure().assignee();
          } else {
            var type = scope.typeOf(plan.pure().assignee());
            if (type == null) {
              continue;
            }
            assignee = scope.addLocal(plan.pure().assignee().name(), type);
            domSubsts.stage(plan.pure().assignee(), new Read(assignee), leaf.bb());
          }
          var statement =
              new Statement(
                  plan.pure().statement().comments(),
                  assignee,
                  plan.pure().statement().expression());
          insertionsByBb
              .computeIfAbsent(leaf.bb(), _ -> new ArrayList<>())
              .add(new Insertion(leaf.instructionIndex(), statement));
        }
      }

      for (var entry : insertionsByBb.entrySet()) {
        var bb = entry.getKey();
        var insertions = entry.getValue();
        insertions.sort(Comparator.comparingInt(Insertion::index).reversed());
        for (var insertion : insertions) {
          var clampedIndex = Math.min(insertion.index(), bb.statements().size());
          bb.insertStatement(clampedIndex, insertion.statement());
        }
      }

      domSubsts.commit();
      return true;
    }

    // endregion schedule
  }

  /// A pure [Statement] that is still present in the IR (survived substitution) and is therefore
  /// eligible to be moved. `shareable` controls whether the scheduler may place duplicate copies
  /// into sibling branches; a non-shareable pure (e.g. `dup`) holds a fresh identity and is
  /// restricted to a single placement.
  private record AlivePure(
      Register assignee, Statement statement, CfgPosition position, boolean shareable) {}

  /// A scheduling decision: move `pure` into `targetCfg`, placing a copy at each `leaves`
  /// position. If there's more than one leaf, the copies share an expression but get fresh
  /// assignees; the consumers in each branch are pointed at the matching copy.
  private record MovePlan(AlivePure pure, CFG targetCfg, List<CfgPosition> leaves) {
    Set<BB> leafBlocks() {
      var result = new LinkedHashSet<BB>();
      for (var leaf : leaves) {
        result.add(leaf.bb());
      }
      return result;
    }
  }

  private record Insertion(int index, Statement statement) {}

  private record Conversion(ConversionKind kind, Argument operand) {}

  private enum ConversionKind {
    BOX,
    UNBOX;

    static @Nullable ConversionKind of(Function function) {
      return function == BOX_FUN ? BOX : function == UNBOX_FUN ? UNBOX : null;
    }

    Function function() {
      return switch (this) {
        case BOX -> BOX_FUN;
        case UNBOX -> UNBOX_FUN;
      };
    }
  }
}
