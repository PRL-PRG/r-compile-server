package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.opt.AbstractionOptimization;

/// [ModuleFixpointSequence] but (instead of an entire [Module]) runs on an [Abstraction]
public class AbstractionFixpointSequence
    extends GenFixpointSequence<AbstractionOptimization, AbstractionFeedback, Abstraction>
    implements AbstractionOptimization {
  public AbstractionFixpointSequence(String name, AbstractionOptimization... subOptimizations) {
    super(name, subOptimizations);
  }

  public AbstractionFixpointSequence(
      String name, int maxIterations, AbstractionOptimization... subOptimizations) {
    super(name, maxIterations, subOptimizations);
  }

  @Override
  public boolean run(AbstractionFeedback feedback, Abstraction abstraction) {
    return runImpl(feedback, abstraction);
  }

  @Override
  protected boolean runOptimization(
      AbstractionOptimization abstractionOptimization,
      AbstractionFeedback abstractionFeedback,
      Abstraction abstraction) {
    return abstractionOptimization.run(abstractionFeedback, abstraction);
  }

  @Override
  protected boolean checkTarget(Abstraction abstraction) {
    return checkAll(abstraction, Exclude.STRICT_CFG);
  }
}
