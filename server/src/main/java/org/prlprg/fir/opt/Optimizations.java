package org.prlprg.fir.opt;

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
import org.prlprg.fir.opt.specialize.SpecializeRealIndex;
import org.prlprg.fir.opt.specialize.SpecializeSubscript;
import org.prlprg.fir.opt.specialize.StaticClosure;

public class Optimizations {
  /// An optimization that never changes anything
  private static final Optimization NOOP = (_, _) -> false;

  private static final int DEFAULT_THRESHOLD = 10;

  public static Optimization defaultOptimizations() {
    return defaultOptimizations(DEFAULT_THRESHOLD, true);
  }

  public static Optimization defaultOptimizations(int threshold, boolean modifyCheckpoints) {
    return new Sequence(
        defaultName(threshold, modifyCheckpoints),
        new ElideUnusedVersions(threshold),
        new CopyBaseline(),
        new ElideUnforcedPromise(threshold),
        new SpeculateDispatch(threshold, 3, 9),
        new SpeculateAssume(threshold),
        new ModuleFixpointSequence(
            "mainThenElideCheckpoints",
            new ModuleFixpointSequence(
                "mainThenCreateBestVersions",
                new AbstractionFixpointSequence(
                    "main",
                    new MergeAssumeLoadVar(),
                    new Specialize(
                        "specialize",
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
                        new ImproveSignatures()),
                    new Specialize(
                        "specializeEnv",
                        new SpecializeNonReflectiveEnv(threshold),
                        new SpecializeLocalPromise(threshold),
                        new ElideEnv()), // must be in a pass after `ElideDeadStore`
                    new PromoteStaticallyKnownVariables(),
                    new Unbox(),
                    new UnboxPhi(),
                    new ElideRedundantBoxUnbox(),
                    new SchedulePure(),
                    new Inline(1000),
                    new DeferIntoPromise(),
                    new StrictifyPromise(),
                    new CallOwnedVersion(),
                    new ConsumeDeadDup(),
                    new ElideConsumedDup(),
                    new Cleanup(false)),
                new CreateBestVersion(9),
                new CreateOwnedParameterVersion(9),
                new CreateBorrowedParameterVersion(9)),
            modifyCheckpoints ? new MergeConsecutiveCheckpoints() : NOOP,
            modifyCheckpoints ? new ElideUnusedCheckpoints() : NOOP));
  }

  /// The name of the [#defaultOptimizations(int,boolean)] sequence with these arguments, which is
  /// `"default"` for the [#defaultOptimizations()] ones.
  ///
  /// Every configuration needs its own name, because an [Optimization]'s name is the identity of
  // the
  /// snapshot it produces (see `org.prlprg.snapshot.fir.opt.OptimizedFirQuery`), and these
  // arguments
  /// select pipelines whose output differs a lot: without `modifyCheckpoints`, the checkpoints that
  /// stay put block promise strictification, so far fewer versions get specialized.
  private static String defaultName(int threshold, boolean modifyCheckpoints) {
    var name = new StringBuilder("default");
    if (threshold != DEFAULT_THRESHOLD) {
      name.append("Threshold").append(threshold);
    }
    if (!modifyCheckpoints) {
      name.append("KeepCheckpoints");
    }
    return name.toString();
  }

  private Optimizations() {}
}
