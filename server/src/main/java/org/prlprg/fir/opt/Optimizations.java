package org.prlprg.fir.opt;

import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;
import org.prlprg.fir.opt.sequence.Sequence;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideRedundantAssumeLoadFun;
import org.prlprg.fir.opt.specialize.ElideTrivialAssume;
import org.prlprg.fir.opt.specialize.ElideTrivialCast;
import org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;

public class Optimizations {
  public static Optimization defaultOptimizations() {
    return defaultOptimizations(10);
  }

  public static Optimization defaultOptimizations(int threshold) {
    return new Sequence(
        "default",
        new SpeculateDispatch(threshold, 3, 9),
        new SpeculateAssume(threshold),
        new MergeAssumeLoadFun(),
        new ModuleFixpointSequence(
            "defaultModuleFixpoint",
            new AbstractionFixpointSequence(
                "defaultAbstractionFixpoint",
                new Specialize(
                    "defaultSpecialize",
                    new DefiniteForce(),
                    new ElideDeadStore(),
                    new ElideTrivialAssume(),
                    new ElideRedundantAssumeLoadFun(),
                    new ElideTrivialCast(),
                    new ElideUseSubscriptWrite(),
                    new OptimizeCallee(threshold),
                    new ResolveDynamicCallee(),
                    new ResolveLoad(),
                    new ResolveLoadFun(),
                    new ReturnTypeAndEffects()),
                new Inline(1000),
                new StrictifyPromise(),
                new Cleanup()),
            new StrictnessOptimization(),
            new CreateBestVersion(9)),
        new MergeConsecutiveCheckpoints(),
        new ElideUnusedCheckpoints());
  }

  private Optimizations() {}
}
