package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.Optimization;

/// [ModuleFixpointSequence] but (instead of an entire [Module]) runs on an [Abstraction]
public final class AbstractionFixpointSequence extends AbstractionOptimization {
  private final String name;
  private final int maxIterations;
  private final List<AbstractionOptimization> subOptimizations;

  public AbstractionFixpointSequence(String name, AbstractionOptimization... subOptimizations) {
    this(name, Integer.MAX_VALUE, subOptimizations);
  }

  public AbstractionFixpointSequence(
      String name, int maxIterations, AbstractionOptimization... subOptimizations) {
    this.name = name;
    this.maxIterations = maxIterations;
    this.subOptimizations = List.of(subOptimizations);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public String toString() {
    return getClass().getSimpleName() + "[" + name + "]";
  }

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction abstraction) {
    return new GenFixpointSequence<AbstractionOptimization, AbstractionFeedback, Abstraction>(
        maxIterations, subOptimizations) {
      @Override
      protected boolean runOptimization(
          AbstractionOptimization optimization,
          AbstractionFeedback abstractionFeedback,
          Abstraction abstraction) {
        return optimization.run(topLevel, function, abstractionFeedback, abstraction);
      }

      @Override
      protected boolean checkTarget(Abstraction abstraction) {
        return checkAll(abstraction, Exclude.STRICT_CFG, Exclude.CAPTURE);
      }
    }.run(feedback, abstraction);
  }
}
