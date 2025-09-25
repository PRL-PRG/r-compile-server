package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideTrivialCast;
import org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.specialize.Inline;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;

public class Optimizations {
  public static Optimization defaultOptimizations(ModuleFeedback feedback) {
    return defaultOptimizations(feedback, 10);
  }

  public static Optimization defaultOptimizations(ModuleFeedback feedback, int threshold) {
    return new Sequence(
        new SpeculateAssume(feedback, threshold),
        new SpeculateDispatch(feedback, threshold, 3, 9),
        new FixpointSequence(
            new Specialize(
                new DefiniteForce(),
                new ElideDeadStore(),
                new ElideTrivialCast(),
                new ElideUseSubscriptWrite(),
                new OptimizeCallee(feedback, threshold),
                new ResolveDynamicCallee(),
                new ResolveLoad(),
                new ResolveLoadFun(),
                new Inline(1000),
                new ReturnTypeAndEffects()),
            new Cleanup()));
  }

  private Optimizations() {}
}
