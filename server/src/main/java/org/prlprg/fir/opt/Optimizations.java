package org.prlprg.fir.opt;

import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.function.Function;
import java.util.function.IntFunction;
import org.jspecify.annotations.Nullable;
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
  private static final Optimization NOOP = (_, _) -> false;

  private static final int DEFAULT_THRESHOLD = 10;

  public static Optimization defaultOptimizations() {
    return defaultOptimizations(DEFAULT_THRESHOLD, true);
  }

  public static Optimization defaultOptimizations(int threshold, boolean modifyCheckpoints) {
    return defaultOptimizations(threshold, modifyCheckpoints, (String) null);
  }

  /// [#defaultOptimizations()] with the individual optimization named `without` removed, e.g. to
  /// measure how much that optimization contributes (see
  /// `org.prlprg.snapshot.bench.OptimizationBenchmark`).
  ///
  /// @throws IllegalArgumentException if `without` isn't in [#individualOptimizationNames()].
  public static Optimization defaultOptimizationsWithout(String without) {
    return defaultOptimizations(DEFAULT_THRESHOLD, true, without);
  }

  /// The [name][Optimization#name()] of every optimization in [#defaultOptimizations()] that isn't
  /// a sequence, in the (deterministic) order the pipeline is constructed in, which groups each
  /// sequence's optimizations together but is otherwise unrelated to the order they run in.
  ///
  /// These are exactly the names [#defaultOptimizationsWithout(String)] accepts: removing a
  /// sequence would remove everything inside it, so sequences aren't included.
  public static List<String> individualOptimizationNames() {
    var filter = new Filter(null);
    var _ = defaultOptimizations(DEFAULT_THRESHOLD, true, filter);
    return List.copyOf(filter.encountered);
  }

  private static Optimization defaultOptimizations(
      int threshold, boolean modifyCheckpoints, @Nullable String without) {
    var filter = new Filter(without);
    var optimizations = defaultOptimizations(threshold, modifyCheckpoints, filter);
    filter.checkRemovedSomething();
    return optimizations;
  }

  private static Optimization defaultOptimizations(
      int threshold, boolean modifyCheckpoints, Filter filter) {
    return new Sequence(
        defaultName(threshold, modifyCheckpoints, filter.without),
        filter.keep(
            new ElideUnusedVersions(threshold),
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
  /// specialized; `without` removes an optimization outright.
  private static String defaultName(
      int threshold, boolean modifyCheckpoints, @Nullable String without) {
    var name = new StringBuilder("default");
    if (threshold != DEFAULT_THRESHOLD) {
      name.append("Threshold").append(threshold);
    }
    if (!modifyCheckpoints) {
      name.append("KeepCheckpoints");
    }
    if (without != null) {
      name.append("Without").append(Strings.camelCaseToPascalCase(without));
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

  /// Removes the optimization named `without` (if any) from the pipeline as it's constructed, and
  /// records the names of every optimization it could have removed.
  ///
  /// Sequences and [#NOOP] are passed through unrecorded: removing a sequence would remove
  /// everything inside it, and [#NOOP] isn't really an optimization. Everything else goes through
  /// one of the `keep` methods exactly once per pipeline, which is what makes
  /// [#individualOptimizationNames()] the pipeline's own definition instead of a list that has to
  /// be kept in sync.
  private static final class Filter {
    private final @Nullable String without;
    private final LinkedHashSet<String> encountered = new LinkedHashSet<>();
    private boolean removedSomething = false;

    private Filter(@Nullable String without) {
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
      if (!name.equals(without)) {
        return true;
      }
      removedSomething = true;
      return false;
    }

    private void checkRemovedSomething() {
      if (without != null && !removedSomething) {
        throw new IllegalArgumentException(
            "Not an individual optimization in the default pipeline: "
                + without
                + "\nExpected one of: "
                + Strings.join(", ", encountered));
      }
    }
  }

  private Optimizations() {}
}
