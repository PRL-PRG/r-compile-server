package org.prlprg.fir.opt;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.CfgHierarchy;
import org.prlprg.fir.analyze.cfg.CfgReachability;
import org.prlprg.fir.analyze.cfg.Loads;
import org.prlprg.fir.analyze.cfg.Loops;
import org.prlprg.fir.analyze.resolve.OriginAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Promotes local named variables into registers when every direct load is statically known.
///
/// This is effectively a conservative mem2reg pass:
/// - Stores are only promoted in the main CFG. A load in a nested promise is promoted too, but
///   only when the promise body is guaranteed to run before the variable can change (see
///   [#readsCreationTimeValue]) -- a promise reads the variable when it's *forced*, not where
///   it's built, so its body can't just capture the value at the creation site otherwise.
/// - It requires every direct local load to have a known origin.
/// - It inserts phi parameters only at dominance-frontier merge points whose incoming origins
///   are statically known and different.
/// - It only runs when nothing outside the abstraction can see its environments (see
///   [#envIsPrivate]), since otherwise the bindings the removed stores would have left are
///   observable.
/// - It re-stores the promoted value in every deopt branch, because a deopt resumes GNU-R
///   bytecode that reads the variable out of the environment.
///   So a variable that is only stored is promoted too: only the deopt branches keep its stores.
/// - A variable that is only *maybe* bound at some deopt is promoted where it's bound (where
///   [OriginAnalysis] knows its origins), and stored back on each edge out of that region (see
///   [#writeBack]), so a deopt out of the region sees the binding the removed stores left.
public final class PromoteStaticallyKnownVariables extends AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    if (abstraction.isStub()) {
      return false;
    }
    var cfg = abstraction.body();

    // [OriginAnalysis] has no state for an unreachable block, and a phi needs an argument from
    // every predecessor, so remove them (without `DEBUG`, nothing else has yet).
    var reachable = new CfgReachability(cfg).maySucceed(cfg.entry());
    cfg.bbs().stream().filter(bb -> !reachable.contains(bb)).toList().forEach(cfg::removeBB);

    var changed = false;
    while (true) {
      var pass = new OnAbstraction(abstraction, cfg);
      var promoted = pass.promoteNextVariable();
      changed |= promoted;
      if (!promoted) {
        return changed;
      }
    }
  }

  private static final class OnAbstraction {
    private final Abstraction scope;
    private final CFG cfg;

    private OnAbstraction(Abstraction scope, CFG cfg) {
      this.scope = scope;
      this.cfg = cfg;
    }

    boolean promoteNextVariable() {
      if (!envIsPrivate()) {
        return false;
      }

      var analyses =
          new Analyses(
              scope,
              OriginAnalysis.class,
              CfgDominatorTree.class,
              CfgHierarchy.class,
              CfgReachability.class,
              Loads.class,
              Loops.class);
      var originAnalysis = analyses.get(OriginAnalysis.class);
      var hierarchy = analyses.get(CfgHierarchy.class);
      var loads = analyses.get(Loads.class);
      var reachability = analyses.get(cfg, CfgReachability.class);
      var dominatorTree = analyses.get(cfg, CfgDominatorTree.class);
      var loops = analyses.get(cfg, Loops.class);
      var dominanceFrontier = dominanceFrontier(dominatorTree);

      for (var candidate : collectCandidates(originAnalysis, hierarchy, loads).values()) {
        var writeBack = !deoptsKeepTheBinding(candidate, originAnalysis, reachability);
        if (writeBack
            && (!hasOneEnv()
                || (loads.get(candidate.variable()).isEmpty()
                    && !storesLessOften(candidate, originAnalysis, loops)))) {
          continue;
        }
        promote(candidate, writeBack, originAnalysis, dominatorTree, dominanceFrontier);
        return true;
      }

      return false;
    }

    /// Whether the abstraction makes one environment. Then each store goes to the frame that holds
    /// the variable, so a store at the end of the region where it's bound (at a block entry where
    /// paths merge, or where [#lostAt] says the analysis loses track of it) puts back the binding
    /// that the removed stores left.
    private boolean hasOneEnv() {
      return scope
              .streamCfgs()
              .flatMap(someCfg -> someCfg.bbs().stream())
              .flatMap(bb -> bb.statements().stream())
              .filter(statement -> statement.expression() instanceof MkEnv)
              .count()
          == 1;
    }

    /// Whether a store of the store-only `candidate` is in a loop that contains no end of the
    /// region where the variable is bound. Then [#rename] stores it back less often than the loop
    /// stores it. After a promotion, each store is at an end of the region, so this stops the loop
    /// in [#runWithoutRecording].
    private boolean storesLessOften(
        Candidate candidate, OriginAnalysis originAnalysis, Loops loops) {
      var variable = candidate.variable();
      var ends = cfg.bbs().stream().filter(bb -> endsRegion(bb, variable, originAnalysis)).toList();
      return candidate.storeBlocks().stream()
          .map(loops::getInnermostLoop)
          .filter(Objects::nonNull)
          .anyMatch(loop -> ends.stream().noneMatch(loop::contains));
    }

    /// Whether the region where `variable` is bound ends in `bb` (see [#lostAt]), or on an edge
    /// from `bb` to a block that isn't a deopt branch.
    private static boolean endsRegion(
        BB bb, NamedVariable variable, OriginAnalysis originAnalysis) {
      var lost = lostAt(bb, variable, originAnalysis);
      return IntStream.range(0, lost.length).anyMatch(i -> lost[i])
          || (!originAnalysis.getPossible(bb, bb.statements().size() - 1, variable).isEmpty()
              && bb.successors().stream()
                  .anyMatch(
                      successor ->
                          !(successor.jump().expression() instanceof Deopt)
                              && originAnalysis.getPossible(successor, -1, variable).isEmpty()));
    }

    /// Whether every deopt branch a store can reach still knows what the variable holds, so
    /// [#restoreBeforeDeopt] can put the binding back.
    ///
    /// It can't when the variable is only *maybe* bound there -- one incoming path stored it and
    /// another didn't. Then the renaming walk has no value to restore, but the path that did store
    /// would have left one, so dropping the stores would change what the deopted-into bytecode
    /// sees.
    private boolean deoptsKeepTheBinding(
        Candidate candidate, OriginAnalysis originAnalysis, CfgReachability reachability) {
      var reachableDeopts = new LinkedHashSet<BB>();
      for (var storeBb : candidate.storeBlocks()) {
        for (var reachable : reachability.maySucceed(storeBb)) {
          if (reachable.jump().expression() instanceof Deopt) {
            reachableDeopts.add(reachable);
          }
        }
      }
      return reachableDeopts.stream()
          .noneMatch(
              deopt -> originAnalysis.getPossible(deopt, -1, candidate.variable()).isEmpty());
    }

    /// Whether nothing outside this abstraction can see its environments, so removing a store is
    /// unobservable.
    ///
    /// Two ways to be sure: the environment is [MkEnvType#NON_REFLECTIVE] (the speculation that it
    /// was never reflectively accessed, which is what
    /// [org.prlprg.fir.opt.specialize.ElideDeadStore] relies on too), or nothing reflective runs
    /// while it's alive, so even a reflectively-accessible one is never reached. A non-static
    /// closure is ruled out either way: it captures the environment and may load from it long
    /// after this abstraction returns.
    ///
    /// Deopts are *not* a reason to bail: [#restoreBeforeDeopt] puts the binding back before every
    /// one of them.
    ///
    /// Note that this says nothing about *loads* being resolvable -- [OriginAnalysis] already
    /// reports no origins for a variable in an environment reflection may have written, and
    /// [#collectCandidates] rejects those.
    private boolean envIsPrivate() {
      var sawEnv = false;
      var envIsReflectivelyAccessible = false;

      for (var someCfg : scope.streamCfgs().toList()) {
        for (var bb : someCfg.bbs()) {
          for (var statement : bb.statements()) {
            switch (statement.expression()) {
              case MkEnv(var type) -> {
                sawEnv = true;
                envIsReflectivelyAccessible |= type == MkEnvType.REGULAR;
              }
              case Closure(var isStatic, _) -> {
                if (!isStatic) {
                  return false;
                }
              }
              default -> {}
            }
          }
        }
      }

      if (!sawEnv) {
        // No env = loads and stores are non-local = can't elide
        return false;
      }
      if (!envIsReflectivelyAccessible) {
        // Env can't be reflectively accessed,
        // so elide local loads and stores even among reflective instructions
        return true;
      }

      // No reflective instructions
      var inferEffects = new InferEffects(scope);
      return scope
          .streamCfgs()
          .flatMap(someCfg -> someCfg.bbs().stream())
          .flatMap(bb -> bb.statements().stream())
          .noneMatch(statement -> inferEffects.of(statement).reflect());
    }

    private Map<NamedVariable, Candidate> collectCandidates(
        OriginAnalysis originAnalysis, CfgHierarchy hierarchy, Loads loads) {
      var candidates = new LinkedHashMap<NamedVariable, Candidate>();
      var forbidden = new LinkedHashSet<NamedVariable>();

      for (var someCfg : scope.streamCfgs().toList()) {
        for (var bb : someCfg.bbs()) {
          for (var i = 0; i < bb.statements().size(); i++) {
            var statement = bb.statements().get(i);
            var expression = statement.expression();

            switch (expression) {
              case Store(var storeType, var variable) when storeType == StoreType.LOCAL_VAR -> {
                if (someCfg != cfg) {
                  forbidden.add(variable);
                  continue;
                }

                var resolved = originAnalysis.resolve(statement.arg(0));
                if (!isPromotableOrigin(resolved)) {
                  forbidden.add(variable);
                  continue;
                }

                // A store in a deopt branch is the form a promotion leaves, so it alone doesn't
                // make a candidate (the promotion would only put it back).
                if (!(bb.jump().expression() instanceof Deopt)) {
                  candidates.computeIfAbsent(variable, Candidate::new).addStore(bb);
                }
              }
              case Load(var loadType, var variable)
                  when loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN -> {
                if (someCfg != cfg) {
                  // A load in a promise reads the variable when the promise is *forced*, so it can
                  // only take the value from the creation site when the body is guaranteed to run
                  // before that value changes.
                  if (loadType != LoadType.LOCAL_VAR
                      || !readsCreationTimeValue(someCfg, variable, originAnalysis, hierarchy)) {
                    forbidden.add(variable);
                  }
                  continue;
                }

                var origins = originAnalysis.getPossible(bb, i, variable);
                if (origins.isEmpty()
                    || origins.stream().anyMatch(origin -> !isPromotableOrigin(origin))
                    || (loadType == LoadType.LOCAL_FUN
                        && origins.stream().anyMatch(origin -> !isClosure(origin)))) {
                  forbidden.add(variable);
                }
              }
              // An inlined callee's frame reads and writes this one's bindings with these.
              case Load(var loadType, var variable) when loadType == LoadType.SUPER_VAR ->
                  forbidden.add(variable);
              case Store(var storeType, var variable) when storeType == StoreType.SUPER_VAR ->
                  forbidden.add(variable);
              case ReflectiveLoad(var variable) -> forbidden.add(variable);
              case ReflectiveStore(var variable) -> forbidden.add(variable);
              case org.prlprg.fir.ir.expression.Assume(var assumption) -> {
                switch (assumption) {
                  case AssumeLoadFun(var variable, var _) -> forbidden.add(variable);
                  case AssumeLoadVar(var variable, var _) -> forbidden.add(variable);
                  case AssumeConstant _, AssumeFunction _, AssumeType _ -> {}
                }
              }
              default -> {}
            }
          }
        }
      }

      forbidden.forEach(candidates::remove);
      // A symbol or language constant argument is evaluated in this environment by whatever
      // receives it (a GNU-R special gets `x[i]` as the symbols `x` and `i`), so it reads the
      // variable by name at runtime, with no load to rewrite. [Loads] records those alongside real
      // loads, so a statement it lists that isn't a [Load] of the variable is one of them (or a
      // load of `..N`, which reads `...`).
      candidates
          .values()
          .removeIf(
              candidate ->
                  loads.get(candidate.variable()).stream()
                      .anyMatch(
                          load ->
                              !(load.expression() instanceof Load(_, var loaded)
                                  && loaded.equals(candidate.variable()))));
      return candidates;
    }

    private boolean isPromotableOrigin(Argument origin) {
      return origin instanceof Read || origin instanceof Constant;
    }

    /// Whether the body of the promise `promiseCfg` belongs to sees the same `variable` when it
    /// runs as it would where the promise is built, so [#rewritePromiseBody] may replace its load
    /// with the value the renaming walk carries at the creation site.
    ///
    /// A promise body runs at the *force*, which in general is anywhere the promise reaches, so we
    /// only accept the shape the compiler actually emits for an argument: a local promise, used
    // once, handed straight to a
    /// strict parameter of a static call in the same block, with no store to the variable between
    /// the two. A strict parameter is forced inside that call, and the callee can't store into this
    /// environment -- reaching it would take reflection, which [#envIsPrivate] has ruled out.
    private boolean readsCreationTimeValue(
        CFG promiseCfg,
        NamedVariable variable,
        OriginAnalysis originAnalysis,
        CfgHierarchy hierarchy) {
      var promiseStatement = hierarchy.parentPromise(promiseCfg);
      if (promiseStatement == null
          || !(promiseStatement.expression() instanceof Promise(_, _, _, var isLocal, _))
          || !isLocal) {
        return false;
      }

      // Only promises built directly in the main CFG: a nested one's creation site is itself in a
      // promise body, so the value there isn't the one the renaming walk carries.
      var bb = promiseStatement.parentBB();
      if (bb == null || bb.owner() != cfg) {
        return false;
      }

      // The walk must have a value to substitute, i.e. the variable is already bound here.
      var promiseIndex = promiseStatement.indexInBB();
      if (originAnalysis.getPossible(bb, promiseIndex, variable).isEmpty()) {
        return false;
      }

      var assignee = promiseStatement.assignee();
      if (assignee == null || assignee.uses().size() != 1) {
        return false;
      }
      var use = assignee.uses().iterator().next();
      if (!(use.instruction() instanceof Statement call)
          || call.parentBB() != bb
          || !(call.expression() instanceof Call(StaticFnCallee callee))) {
        return false;
      }

      // Argument 0 is the callee's own closure, so parameter `i` is argument `i + 1`.
      var parameter = use.index() - 1;
      var strictnesses = callee.signature().parameterStrictnesses();
      if (parameter < 0 || parameter >= strictnesses.length() || !strictnesses.get(parameter)) {
        return false;
      }

      var callIndex = call.indexInBB();
      if (callIndex < promiseIndex) {
        return false;
      }
      for (var i = promiseIndex + 1; i < callIndex; i++) {
        if (bb.statements().get(i).expression() instanceof Store(var storeType, var stored)
            && storeType == StoreType.LOCAL_VAR
            && stored.equals(variable)) {
          return false;
        }
      }

      return true;
    }

    private boolean isClosure(Argument origin) {
      var type = scope.typeOf(origin);
      return type != null && type.isSubtypeOf(Type.CLOSURE);
    }

    private void promote(
        Candidate candidate,
        boolean writeBack,
        OriginAnalysis originAnalysis,
        CfgDominatorTree dominatorTree,
        Map<BB, Set<BB>> dominanceFrontier) {
      var variable = candidate.variable();
      var phiBlocks = phiBlocks(candidate, originAnalysis, dominanceFrontier);
      var phis = appendPhis(variable, phiBlocks, originAnalysis);
      rename(cfg.entry(), variable, null, phis, writeBack, originAnalysis, dominatorTree);
      scope.setNamedVariableType(variable, Type.ANY_SEXP);
    }

    private Set<BB> phiBlocks(
        Candidate candidate, OriginAnalysis originAnalysis, Map<BB, Set<BB>> dominanceFrontier) {
      var result = new LinkedHashSet<BB>();
      var worklist = new ArrayDeque<>(candidate.storeBlocks());
      var visited = new LinkedHashSet<>(candidate.storeBlocks());

      while (!worklist.isEmpty()) {
        var bb = worklist.removeFirst();
        for (var frontierBb : dominanceFrontier.getOrDefault(bb, Set.of())) {
          if (originAnalysis.getPossible(frontierBb, -1, candidate.variable()).size() > 1) {
            result.add(frontierBb);
          }
          // A merge without a phi still changes the value its dominator carries, so its own
          // frontier may need one.
          if (visited.add(frontierBb)) {
            worklist.addLast(frontierBb);
          }
        }
      }

      return result;
    }

    private Map<BB, BlockParameter> appendPhis(
        NamedVariable variable, Set<BB> phiBlocks, OriginAnalysis originAnalysis) {
      var phis = new LinkedHashMap<BB, BlockParameter>();

      for (var bb : cfg.bbs()) {
        if (!phiBlocks.contains(bb)) {
          continue;
        }

        var phiType =
            originAnalysis.getPossible(bb, -1, variable).stream()
                .map(scope::typeOf)
                .reduce(
                    (Type) null,
                    (left, right) -> Type.union(left, right == null ? Type.ANY_SEXP : right));
        var phi =
            new BlockParameter(
                scope.freshName(variable.name()), phiType == null ? Type.ANY_SEXP : phiType);
        bb.appendPhiParameter(phi);
        phis.put(bb, phi);
      }

      return phis;
    }

    private void rename(
        BB bb,
        NamedVariable variable,
        @Nullable Argument current,
        Map<BB, BlockParameter> phis,
        boolean writeBack,
        OriginAnalysis originAnalysis,
        CfgDominatorTree dominatorTree) {
      var entryOrigins = originAnalysis.getPossible(bb, -1, variable);
      if (phis.containsKey(bb)) {
        current = new Read(phis.get(bb));
      } else if (entryOrigins.size() == 1) {
        // Paths that stored the same value merge here without a phi, and the dominator may be
        // before the stores.
        current = entryOrigins.iterator().next();
      } else if (writeBack && entryOrigins.isEmpty()) {
        current = null;
      }

      // Before the rewrite: the analysis recomputes a state inside a block from its statements.
      var unknownAtEnd =
          writeBack
              && originAnalysis.getPossible(bb, bb.statements().size() - 1, variable).isEmpty();
      var lost = writeBack ? lostAt(bb, variable, originAnalysis) : null;
      var statements = bb.statements();
      for (var i = 0; i < statements.size(); i++) {
        var statement = statements.get(i);
        // The region also ends inside a block, e.g. at a force of a promise that the analysis
        // doesn't know.
        if (lost != null && lost[i] && current != null) {
          if (!(statement.expression() instanceof PopEnv)) {
            store(variable, current).insertBefore(statement);
          }
          current = null;
        }
        current = rewriteStatement(bb, i, statement, variable, current, originAnalysis);
      }
      // E.g. after a `popenv`, where a store would go to the enclosing environment.
      if (unknownAtEnd) {
        current = null;
      }

      restoreBeforeDeopt(bb, variable, current);

      if (!phis.isEmpty()) {
        appendPhiArguments(bb.jump(), current, phis);
      }
      if (writeBack && current != null) {
        writeBack(bb, variable, current, originAnalysis);
      }

      for (var child :
          dominatorTree.immediateDominees(bb).stream()
              .sorted(Comparator.comparing(BB::label))
              .toList()) {
        rename(child, variable, current, phis, writeBack, originAnalysis, dominatorTree);
      }
    }

    /// For each statement of `bb`, whether [OriginAnalysis] knows what `variable` holds before the
    /// statement but not after it. E.g. a force of a promise that the analysis doesn't know taints
    /// the environment.
    private static boolean[] lostAt(BB bb, NamedVariable variable, OriginAnalysis originAnalysis) {
      var lost = new boolean[bb.statements().size()];
      var known = !originAnalysis.getPossible(bb, -1, variable).isEmpty();
      for (var i = 0; i < lost.length; i++) {
        var knownAfter = !originAnalysis.getPossible(bb, i, variable).isEmpty();
        lost[i] = known && !knownAfter;
        known = knownAfter;
      }
      return lost;
    }

    /// Stores `current` to `variable` on each edge from `bb` to a block where it's not known to be
    /// bound (the end of the region where it's promoted), so the frame there is the one the removed
    /// stores left. A deopt branch gets [#restoreBeforeDeopt] instead.
    private void writeBack(
        BB bb, NamedVariable variable, Argument current, OriginAnalysis originAnalysis) {
      var exits =
          bb.jump().targets().stream()
              .map(Target::bb)
              .filter(
                  target ->
                      !(target.jump().expression() instanceof Deopt)
                          && originAnalysis.getPossible(target, -1, variable).isEmpty())
              .collect(Collectors.toCollection(LinkedHashSet::new));
      if (exits.isEmpty()) {
        return;
      }

      switch (bb.jump().expression()) {
        // A store before the jump is also right on an edge that stays in the region (e.g. a
        // `check`'s deopt branch), only redundant.
        case Goto _, Checkpoint _ -> bb.appendStatement(store(variable, current));
        case If _ -> {
          // `mapTargets` on the jump in place wouldn't update the targets' predecessors.
          var jump = bb.jump().copy((_, argument) -> argument);
          jump.mapTargets(
              target -> {
                if (!exits.contains(target.bb())) {
                  return target;
                }
                var edge = cfg.addBB();
                edge.appendStatement(store(variable, current));
                edge.setJump(new Jump(new Goto(new BBRef(target.bb())), target.phiArgs()));
                return new Target(edge, ImmutableList.of());
              });
          bb.setJump(jump);
        }
        default ->
            throw new IllegalStateException(
                "Unexpected edge out of the region of " + variable + ": " + bb.jump());
      }
    }

    private static Statement store(NamedVariable variable, Argument value) {
      return new Statement(new Store(StoreType.LOCAL_VAR, variable), List.of(value));
    }

    private @Nullable Argument rewriteStatement(
        BB bb,
        int index,
        Statement statement,
        NamedVariable variable,
        @Nullable Argument current,
        OriginAnalysis originAnalysis) {
      return switch (statement.expression()) {
        case Load(var loadType, var loaded)
            when loaded.equals(variable)
                && (loadType == LoadType.LOCAL_VAR || loadType == LoadType.LOCAL_FUN) -> {
          if (current == null) {
            throw new IllegalStateException(
                "Missing promoted value for " + variable + " in " + bb.label());
          }
          // Forward the load's result to the promoted value, then drop the load.
          if (statement.assignee() != null) {
            statement.assignee().substUsesWith(current);
          }
          statement.replaceWith(new Statement(statement.comments(), new Noop(), List.of()));
          yield current;
        }
        case Store(var storeType, var stored)
            when storeType == StoreType.LOCAL_VAR && stored.equals(variable) -> {
          var resolved = originAnalysis.resolve(statement.arg(0));
          if (!isPromotableOrigin(resolved)) {
            throw new IllegalStateException(
                "Unexpected non-promotable origin while promoting " + variable + ": " + resolved);
          }
          statement.replaceWith(new Statement(statement.comments(), new Noop(), List.of()));
          yield resolved;
        }
        case Promise(_, _, var code, _, _) -> {
          rewritePromiseBody(code, variable, current);
          yield current;
        }
        default -> current;
      };
    }

    /// Replaces every load of `variable` in a promise body with `current`, which the promise
    /// captures from the enclosing CFG.
    ///
    /// [#collectCandidates] has already checked (via [#readsCreationTimeValue]) that every such
    /// body sees `current` when it runs, and that the promise is local, so the capture is legal.
    private void rewritePromiseBody(CFG code, NamedVariable variable, @Nullable Argument current) {
      var rewroteAny = false;

      for (var bb : code.bbs()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          var statement = bb.statements().get(i);
          if (!(statement.expression() instanceof Load(var loadType, var loaded))
              || loadType != LoadType.LOCAL_VAR
              || !loaded.equals(variable)) {
            continue;
          }
          if (current == null) {
            throw new IllegalStateException(
                "Missing promoted value for " + variable + " in promise " + code);
          }
          if (statement.assignee() != null) {
            statement.assignee().substUsesWith(current);
          }
          statement.replaceWith(new Statement(statement.comments(), new Noop(), List.of()));
          rewroteAny = true;
        }
      }

      if (rewroteAny) {
        for (var bb : code.bbs()) {
          restoreBeforeDeopt(bb, variable, current);
        }
      }
    }

    /// If `bb` deopts, appends a store of `current` to `variable`, so the GNU-R bytecode we resume
    /// into still finds the binding the stores we removed would have left.
    private void restoreBeforeDeopt(BB bb, NamedVariable variable, @Nullable Argument current) {
      if (current == null || !(bb.jump().expression() instanceof Deopt)) {
        return;
      }
      bb.appendStatement(store(variable, current));
    }

    private void appendPhiArguments(
        Jump jump, @Nullable Argument current, Map<BB, BlockParameter> phis) {
      jump.mapTargets(
          target -> {
            var phi = phis.get(target.bb());
            if (phi == null) {
              return target;
            }
            if (current == null) {
              throw new IllegalStateException(
                  "Missing promoted value for phi " + phi + " on edge to " + target.bb().label());
            }
            var phiArgs =
                ImmutableList.<Argument>builderWithExpectedSize(target.phiArgs().size() + 1);
            phiArgs.addAll(target.phiArgs());
            phiArgs.add(current);
            return new Target(target.bb(), phiArgs.build());
          });
    }

    private Map<BB, Set<BB>> dominanceFrontier(CfgDominatorTree dominatorTree) {
      var frontier = new LinkedHashMap<BB, Set<BB>>();
      for (var bb : cfg.bbs()) {
        frontier.put(bb, new LinkedHashSet<>());
      }

      for (var bb : cfg.bbs()) {
        if (bb.predecessors().size() < 2) {
          continue;
        }

        var immediateDominator = dominatorTree.immediateDominator(bb);
        for (var predecessor : bb.predecessors()) {
          for (var runner = predecessor;
              runner != null && runner != immediateDominator;
              runner = dominatorTree.immediateDominator(runner)) {
            frontier.get(runner).add(bb);
          }
        }
      }

      return frontier;
    }
  }

  private static final class Candidate {
    private final NamedVariable variable;
    private final LinkedHashSet<BB> storeBlocks = new LinkedHashSet<>();

    private Candidate(NamedVariable variable) {
      this.variable = variable;
    }

    NamedVariable variable() {
      return variable;
    }

    void addStore(BB bb) {
      storeBlocks.add(bb);
    }

    Set<BB> storeBlocks() {
      return storeBlocks;
    }
  }
}
