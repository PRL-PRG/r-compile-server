package org.prlprg.fir.opt;

import org.prlprg.fir.opt.egraph.EGraphOptimization;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;
import org.prlprg.fir.opt.sequence.Sequence;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideBuiltinClosure;
import org.prlprg.fir.opt.specialize.ElideCheckMissing;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideRedundantAssumeLoad;
import org.prlprg.fir.opt.specialize.ElideTrivialAssume;
import org.prlprg.fir.opt.specialize.ElideTrivialCast;
import org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.specialize.ImproveSignatures;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.StaticClosure;

public class Optimizations {
  /// An optimization that never changes anything
  private static final Optimization NOOP = (_, _) -> false;

  public static Optimization defaultOptimizations() {
    return defaultOptimizations(10, true);
  }

  public static Optimization defaultOptimizations(int threshold, boolean modifyCheckpoints) {
    return new Sequence(
        "default",
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
                        new OptimizeCallee(threshold),
                        new ResolveDynamicCallee(),
                        new ResolveLoad(),
                        new ImproveSignatures()),
                    new PromoteStaticallyKnownVariables(),
                    new Unbox(),
                    new UnboxPhi(),
                    new ElideRedundantBoxUnbox(),
                    new EGraphOptimization(),
                    new SchedulePure(),
                    new ElideEnv(),
                    new Inline(1000),
                    new DeferIntoPromise(),
                    new StrictifyPromise(),
                    new Cleanup(false)),
                new CreateBestVersion(9)),
            modifyCheckpoints ? new MergeConsecutiveCheckpoints() : NOOP,
            modifyCheckpoints ? new ElideUnusedCheckpoints() : NOOP));
  }

  private Optimizations() {}
}
