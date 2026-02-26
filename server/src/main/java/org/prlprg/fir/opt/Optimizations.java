package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideDeadStore;
import org.prlprg.fir.opt.specialize.ElideTrivialAssume;
import org.prlprg.fir.opt.specialize.ElideTrivialCast;
import org.prlprg.fir.opt.specialize.ElideUseSubscriptWrite;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;

public class Optimizations {
  public static Optimization NOOP =
      new Optimization() {
        @Override
        public String name() {
          return "noop";
        }

        @Override
        public void run(ModuleFeedback feedback, Module module) {}

        @Override
        public void run(ModuleFeedback feedback, Function function) {}
      };

  public static Optimization defaultOptimizations() {
    return defaultOptimizations(10, true);
  }

  public static Optimization defaultOptimizations(int threshold, boolean affectCheckpoints) {
    return new Sequence(
        "default",
        new SpeculateDispatch(threshold, 3, 9),
        new SpeculateAssume(threshold),
        new MergeAssumeLoadFun(),
        new FixpointSequence(
            "defaultFixpoint",
            new Specialize(
                "defaultSpecialize",
                new DefiniteForce(),
                new ElideDeadStore(),
                new ElideTrivialAssume(),
                new ElideTrivialCast(),
                new ElideUseSubscriptWrite(),
                new OptimizeCallee(threshold),
                new ResolveDynamicCallee(),
                new ResolveLoad(),
                new ResolveLoadFun(),
                new ReturnTypeAndEffects()),
            new Inline(1000),
            new Cleanup()),
        affectCheckpoints ? new MergeConsecutiveCheckpoints() : NOOP,
        affectCheckpoints ? new ElideUnusedCheckpoints() : NOOP);
  }

  private Optimizations() {}
}
