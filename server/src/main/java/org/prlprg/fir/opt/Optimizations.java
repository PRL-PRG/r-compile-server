package org.prlprg.fir.opt;

import org.prlprg.fir.opt.egraph.DefiniteForce;
import org.prlprg.fir.opt.egraph.EGraphOptimization;
import org.prlprg.fir.opt.egraph.ElideBuiltinClosure;
import org.prlprg.fir.opt.egraph.ElideCheckMissing;
import org.prlprg.fir.opt.egraph.ElideDeadStore;
import org.prlprg.fir.opt.egraph.ElideRedundantAssumeLoad;
import org.prlprg.fir.opt.egraph.ElideTrivialAssume;
import org.prlprg.fir.opt.egraph.ElideTrivialCast;
import org.prlprg.fir.opt.egraph.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.egraph.ImproveSignatures;
import org.prlprg.fir.opt.egraph.OptimizeCallee;
import org.prlprg.fir.opt.egraph.ResolveDynamicCallee;
import org.prlprg.fir.opt.egraph.ResolveLoad;
import org.prlprg.fir.opt.egraph.StaticClosure;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;
import org.prlprg.fir.opt.sequence.Sequence;

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
                    // The rewrite rules that used to be a separate `Specialize` pass now run inside
                    // an `EGraphOptimization`. They must run *before* `Unbox` (as `Specialize`
                    // did),
                    // so callee resolution (`OptimizeCallee`) picks the best version before `Unbox`
                    // rewrites the call.
                    new EGraphOptimization(
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
                    // The value-equivalence + scheduling phases run after `Unbox` to fold the
                    // box/unbox pairs it introduces (this instance carries no rewrite rules).
                    new EGraphOptimization(),
                    new ElideEnv(),
                    new Inline(1000),
                    new StrictifyPromise(),
                    new Cleanup(false)),
                new CreateBestVersion(9)),
            modifyCheckpoints ? new MergeConsecutiveCheckpoints() : NOOP,
            modifyCheckpoints ? new ElideUnusedCheckpoints() : NOOP));
  }

  private Optimizations() {}
}
