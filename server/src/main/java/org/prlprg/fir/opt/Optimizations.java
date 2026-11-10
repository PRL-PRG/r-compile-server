package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.BiConsumer;
import java.util.function.Function;
import java.util.function.IntFunction;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;
import org.prlprg.fir.opt.sequence.Sequence;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideBuiltinClosure;
import org.prlprg.fir.opt.specialize.ElideCheckMissing;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideEnv;
import org.prlprg.fir.opt.specialize.ElideRedundantAssumeLoad;
import org.prlprg.fir.opt.specialize.ElideTrivialAssume;
import org.prlprg.fir.opt.specialize.ElideTrivialCast;
import org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.specialize.ImproveSignatures;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.SpecializeEmptyDots;
import org.prlprg.fir.opt.specialize.SpecializeLiteSpecial;
import org.prlprg.fir.opt.specialize.SpecializeLocalPromise;
import org.prlprg.fir.opt.specialize.SpecializeNonReflectiveEnv;
import org.prlprg.fir.opt.specialize.SpecializeOptimization;
import org.prlprg.fir.opt.specialize.SpecializeRealIndex;
import org.prlprg.fir.opt.specialize.SpecializeSubscript;
import org.prlprg.fir.opt.specialize.StaticClosure;
import org.prlprg.util.Strings;

public class Optimizations {
  /// An optimization that never changes anything
  private static final Optimization NOOP =
      new Optimization() {
        @Override
        public String name() {
          return "noop";
        }

        @Override
        public boolean runWithoutRecording(
            Optimization topLevel, ModuleFeedback feedback, org.prlprg.fir.ir.module.Function f) {
          return false;
        }
      };

  private static final int DEFAULT_THRESHOLD = 10;

  /// For each individual optimization, groups of other ones: when every optimization of one group
  /// is removed from [#defaultOptimizations()], it changes nothing. So removing it too produces
  /// the same code (see [#canonicalRemoval(Collection)]).
  ///
  /// It only has the entries that the optimizations' code guarantees, for modules that bc2fir
  /// creates (a FIŘ text module may have non-baseline versions already).
  public static final @Unmodifiable Map<String, @Unmodifiable List<@Unmodifiable Set<String>>>
      REQUIRES = requires();

  private static Map<String, List<Set<String>>> requires() {
    var requires = new LinkedHashMap<String, List<Set<String>>>();
    BiConsumer<String, Set<String>> require =
        (name, group) -> requires.computeIfAbsent(name, _ -> new ArrayList<>()).add(group);

    var names = individualOptimizationNames();

    // bc2fir only creates baselines. Only `copyBaseline` creates the first non-baseline version
    // (the others copy non-baselines), and no optimization changes a baseline.
    names.stream()
        .filter(name -> !name.equals("copyBaseline"))
        .forEach(name -> require.accept(name, Set.of("copyBaseline")));
    // Only `callOwnedVersion` inserts `dup`, which they need.
    require.accept("consumeDeadDup", Set.of("callOwnedVersion"));
    require.accept("elideConsumedDup", Set.of("callOwnedVersion"));
    require.accept("createOwnedParameterVersion", Set.of("callOwnedVersion"));
    // Only `specializeNonReflectiveEnv` makes the non-reflective environments it needs.
    require.accept("elideDeadStore", Set.of("specializeNonReflectiveEnv"));
    // Only `speculateAssume` inserts `assume`, which they need.
    require.accept("mergeAssumeLoadVar", Set.of("speculateAssume"));
    require.accept("elideTrivialAssume", Set.of("speculateAssume"));
    // Only `mergeAssumeLoadVar` makes the `AssumeLoadFun`/`AssumeLoadVar` it needs.
    require.accept("elideRedundantAssumeLoad", Set.of("mergeAssumeLoadVar"));

    // Not entries, although they hold on most examples:
    // - `elideConsumedDup` -> `consumeDeadDup`: `inline` can substitute `consume d` into a `dup`.
    // - `createBorrowedParameterVersion` -> `createOwnedParameterVersion`: `createBestVersion` can
    //   create a version with an owned parameter.
    // - `strictifyPhi` -> `strictifyPromise`: `inline` makes the `prom { return v }` it needs.
    // - `elideRedundantBoxUnbox`, `schedulePure` -> `unbox` or `unboxPhi`: bc2fir boxes in a
    //   `switch` on a string.

    var unknown =
        Stream.concat(
                requires.keySet().stream(),
                requires.values().stream().flatMap(List::stream).flatMap(Set::stream))
            .filter(name -> !names.contains(name))
            .toList();
    if (!unknown.isEmpty()) {
      throw new AssertionError("`REQUIRES` has unknown optimizations: " + unknown);
    }
    requires.replaceAll((_, groups) -> List.copyOf(groups));
    return Collections.unmodifiableMap(requires);
  }

  /// `removed` without every optimization that the others make change nothing (see [#REQUIRES]),
  /// in pipeline order.
  ///
  /// Two removal sets with the same canonical removal produce the same code.
  /// [#defaultOptimizationsWithout(Collection)] of the canonical removal is the same as of
  /// `removed`, so benchmark only one of them.
  ///
  /// @throws IllegalArgumentException if a name isn't in [#individualOptimizationNames()].
  public static List<String> canonicalRemoval(Collection<String> removed) {
    var ordered = inPipelineOrder(removed);
    return ordered.stream()
        .filter(
            name ->
                !removalClosure(ordered.stream().filter(other -> !other.equals(name)).toList())
                    .contains(name))
        .toList();
  }

  /// `removed` and every optimization that it makes change nothing, transitively (see
  /// [#REQUIRES]).
  public static Set<String> removalClosure(Collection<String> removed) {
    var closure = new LinkedHashSet<>(removed);
    var changed = true;
    while (changed) {
      changed = false;
      for (var entry : REQUIRES.entrySet()) {
        if (!closure.contains(entry.getKey())
            && entry.getValue().stream().anyMatch(closure::containsAll)) {
          closure.add(entry.getKey());
          changed = true;
        }
      }
    }
    return closure;
  }

  public static Optimization defaultOptimizations() {
    return defaultOptimizations(DEFAULT_THRESHOLD, true);
  }

  public static Optimization defaultOptimizations(int threshold, boolean modifyCheckpoints) {
    return defaultOptimizations(threshold, modifyCheckpoints, List.of());
  }

  /// [#defaultOptimizations()] with the individual optimization named `without` removed, e.g. to
  /// measure how much that optimization contributes (see
  /// `org.prlprg.snapshot.bench.OptimizationBenchmark`).
  ///
  /// @throws IllegalArgumentException if `without` isn't in [#individualOptimizationNames()].
  public static Optimization defaultOptimizationsWithout(String without) {
    return defaultOptimizationsWithout(List.of(without));
  }

  /// [#defaultOptimizations()] with every individual optimization in `without` removed.
  ///
  /// The name lists the removed optimizations in pipeline order, so it doesn't depend on the
  /// order of `without`, and with one name it's the name of
  /// [#defaultOptimizationsWithout(String)].
  ///
  /// @throws IllegalArgumentException if a name in `without` isn't in
  ///     [#individualOptimizationNames()].
  public static Optimization defaultOptimizationsWithout(Collection<String> without) {
    return defaultOptimizations(DEFAULT_THRESHOLD, true, inPipelineOrder(without));
  }

  /// `names` in pipeline order, without duplicates.
  ///
  /// @throws IllegalArgumentException if a name isn't in [#individualOptimizationNames()].
  private static List<String> inPipelineOrder(Collection<String> names) {
    var all = individualOptimizationNames();
    var unknown = names.stream().filter(name -> !all.contains(name)).toList();
    if (!unknown.isEmpty()) {
      throw new IllegalArgumentException(
          "Not an individual optimization in the default pipeline: "
              + Strings.join(", ", unknown)
              + "\nExpected one of: "
              + Strings.join(", ", all));
    }
    return all.stream().filter(names::contains).toList();
  }

  /// The [name][Optimization#name()] of every optimization in [#defaultOptimizations()] that isn't
  /// a sequence, in the (deterministic) order the pipeline is constructed in, which groups each
  /// sequence's optimizations together but is otherwise unrelated to the order they run in.
  ///
  /// These are exactly the names [#defaultOptimizationsWithout(Collection)] accepts: removing a
  /// sequence would remove everything inside it, so sequences aren't included.
  public static List<String> individualOptimizationNames() {
    var filter = new Filter(List.of());
    var _ = defaultOptimizations(DEFAULT_THRESHOLD, true, filter);
    return List.copyOf(filter.encountered);
  }

  /// @param without Individual optimization names, in pipeline order.
  private static Optimization defaultOptimizations(
      int threshold, boolean modifyCheckpoints, List<String> without) {
    return defaultOptimizations(threshold, modifyCheckpoints, new Filter(without));
  }

  private static Optimization defaultOptimizations(
      int threshold, boolean modifyCheckpoints, Filter filter) {
    return new Sequence(
        defaultName(threshold, modifyCheckpoints, filter.without),
        filter.keep(
            new CopyBaseline(),
            new ElideUnforcedPromise(threshold),
            new SpeculateDispatch(threshold, 3, 9),
            new SpeculateAssume(threshold),
            new ModuleFixpointSequence(
                "mainThenElideCheckpoints",
                filter.keep(
                    new ModuleFixpointSequence(
                        "mainThenCreateBestVersions",
                        filter.keep(
                            new AbstractionFixpointSequence(
                                "main",
                                filter.keepAbstraction(
                                    new MergeAssumeLoadVar(),
                                    new Specialize(
                                        "specialize",
                                        filter.keepSpecialize(
                                            new DefiniteForce(),
                                            new ElideBuiltinClosure(),
                                            new ElideCheckMissing(),
                                            new ElideDeadStore(),
                                            new ElideTrivialAssume(),
                                            new ElideRedundantAssumeLoad(),
                                            new ElideTrivialCast(),
                                            new ElideUseSubscriptWrite(),
                                            new StaticClosure(),
                                            new SpecializeEmptyDots(),
                                            new OptimizeCallee(threshold),
                                            new ResolveDynamicCallee(),
                                            new ResolveLoad(),
                                            new SpecializeSubscript(),
                                            new SpecializeRealIndex(),
                                            new SpecializeLiteSpecial(),
                                            new ImproveSignatures())),
                                    new Specialize(
                                        "specializeEnv",
                                        filter.keepSpecialize(
                                            new SpecializeNonReflectiveEnv(threshold),
                                            new SpecializeLocalPromise(threshold),
                                            // must be in a pass after `ElideDeadStore`
                                            new ElideEnv())),
                                    new PromoteStaticallyKnownVariables(),
                                    new Unbox(),
                                    new StrictifyPhi(),
                                    new UnboxPhi(),
                                    new ElideRedundantBoxUnbox(),
                                    new ElideRangeRead(),
                                    new SchedulePure(),
                                    new Inline(1000),
                                    new DeferIntoPromise(),
                                    new StrictifyPromise(),
                                    new CallOwnedVersion(),
                                    new ConsumeDeadDup(),
                                    new ElideConsumedDup(),
                                    new Cleanup(false))),
                            new CreateBestVersion(9),
                            new CreateOwnedParameterVersion(9),
                            new CreateBorrowedParameterVersion(9))),
                    modifyCheckpoints ? new HoistLoopAssume() : NOOP,
                    modifyCheckpoints ? new MergeConsecutiveCheckpoints() : NOOP,
                    modifyCheckpoints ? new ElideUnusedCheckpoints() : NOOP))));
  }

  /// The name of the [#defaultOptimizations(int,boolean)] sequence with these arguments, which is
  /// `"default"` for the [#defaultOptimizations()] ones.
  ///
  /// Every configuration needs its own name, because an [Optimization]'s name is the identity of
  /// the snapshot it produces (see `org.prlprg.snapshot.fir.opt.OptimizedFirQuery`), and these
  /// arguments select pipelines whose output differs a lot: without `modifyCheckpoints`, the
  /// checkpoints that stay put block promise strictification, so far fewer versions get
  /// specialized; `without` removes optimizations outright.
  private static String defaultName(
      int threshold, boolean modifyCheckpoints, List<String> without) {
    var name = new StringBuilder("default");
    if (threshold != DEFAULT_THRESHOLD) {
      name.append("Threshold").append(threshold);
    }
    if (!modifyCheckpoints) {
      name.append("KeepCheckpoints");
    }
    if (!without.isEmpty()) {
      name.append("Without").append(Strings.join("And", Strings::camelCaseToPascalCase, without));
    }
    return name.toString();
  }

  /// Whether `optimization` only groups other optimizations, so removing it would remove
  /// everything inside it.
  private static boolean isSequence(Object optimization) {
    return optimization instanceof Sequence
        || optimization instanceof ModuleFixpointSequence
        || optimization instanceof AbstractionFixpointSequence
        || optimization instanceof Specialize;
  }

  /// Removes the optimizations named in `without` from the pipeline as it's constructed, and
  /// records the names of every optimization it could have removed.
  ///
  /// Sequences and [#NOOP] are passed through unrecorded: removing a sequence would remove
  /// everything inside it, and [#NOOP] isn't really an optimization. Everything else goes through
  /// one of the `keep` methods exactly once per pipeline, which is what makes
  /// [#individualOptimizationNames()] the pipeline's own definition instead of a list that has to
  /// be kept in sync.
  private static final class Filter {
    private final List<String> without;
    private final LinkedHashSet<String> encountered = new LinkedHashSet<>();

    private Filter(List<String> without) {
      this.without = without;
    }

    private Optimization[] keep(Optimization... optimizations) {
      return keep(optimizations, Optimization::name, Optimization[]::new);
    }

    private AbstractionOptimization[] keepAbstraction(AbstractionOptimization... optimizations) {
      return keep(optimizations, Optimization::name, AbstractionOptimization[]::new);
    }

    private SpecializeOptimization[] keepSpecialize(SpecializeOptimization... optimizations) {
      return keep(optimizations, SpecializeOptimization::name, SpecializeOptimization[]::new);
    }

    private <T> T[] keep(T[] optimizations, Function<T, String> name, IntFunction<T[]> newArray) {
      return Arrays.stream(optimizations)
          .filter(o -> isSequence(o) || o == NOOP || keep(name.apply(o)))
          .toArray(newArray);
    }

    private boolean keep(String name) {
      encountered.add(name);
      return !without.contains(name);
    }
  }

  private Optimizations() {}
}
