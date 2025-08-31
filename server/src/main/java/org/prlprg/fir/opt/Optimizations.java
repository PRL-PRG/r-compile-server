package org.prlprg.fir.opt;

import org.prlprg.fir.feedback.Feedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.opt.specialize.DefiniteForce;
import org.prlprg.fir.opt.specialize.ElideUselessCast;
import org.prlprg.fir.opt.specialize.OptimizeCallee;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;
import org.prlprg.fir.opt.specialize.ReturnTypeAndEffects;
import org.prlprg.util.OptionalFunction;

public class Optimizations {
  public static Optimization defaultOptimizations(
      OptionalFunction<Abstraction, Feedback> getFeedback) {
    return new Sequence(
        new SpeculateDispatch(getFeedback, 10, 3, 9),
        new FixpointSequence(
            new Specialize(
                new DefiniteForce(),
                // new ElideDeadStore(),
                new ElideUselessCast(),
                new OptimizeCallee(getFeedback, 10),
                new ResolveDynamicCallee(),
                new ResolveLoad(),
                new ResolveLoadFun(),
                new ReturnTypeAndEffects()),
            new Inline(1000),
            new Cleanup()));
  }

  private Optimizations() {}
}
