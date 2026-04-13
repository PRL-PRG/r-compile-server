package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.Optional;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.util.Pair;

/// [ModuleFixpointSequence] but (instead of an entire [Module]) runs on an [Abstraction]
public class AbstractionFixpointSequence
    extends GenFixpointSequence<
        AbstractionOptimization, AbstractionFeedback, Pair<Optional<Function>, Abstraction>>
    implements AbstractionOptimization {
  public AbstractionFixpointSequence(String name, AbstractionOptimization... subOptimizations) {
    super(name, subOptimizations);
  }

  public AbstractionFixpointSequence(
      String name, int maxIterations, AbstractionOptimization... subOptimizations) {
    super(name, maxIterations, subOptimizations);
  }

  @Override
  public boolean runWithoutRecording(
      @Nullable Function function, AbstractionFeedback feedback, Abstraction abstraction) {
    return runImpl(feedback, Pair.of(Optional.ofNullable(function), abstraction));
  }

  @Override
  protected boolean runOptimization(
      AbstractionOptimization abstractionOptimization,
      AbstractionFeedback abstractionFeedback,
      Pair<Optional<Function>, Abstraction> functionAndAbstraction) {
    var function = functionAndAbstraction.first().orElse(null);
    var abstraction = functionAndAbstraction.second();
    return abstractionOptimization.run(function, abstractionFeedback, abstraction);
  }

  @Override
  protected boolean checkTarget(Pair<Optional<Function>, Abstraction> functionAndAbstraction) {
    var abstraction = functionAndAbstraction.second();
    return checkAll(abstraction, Exclude.STRICT_CFG);
  }
}
