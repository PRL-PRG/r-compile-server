package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;

/// An optimization that runs sub-optimizations in a sequence repeatedly until a fixpoint.
///
/// It can't reuse analyses, and will rerun every optimization in the sequence until there is a
/// full pass where none make any changes. You can optionally limit the number of iterations.
///
/// This runs until a fixpoint is reached on the entire module, not one function at a time
public final class ModuleFixpointSequence extends Optimization {
  private final String name;
  private final int maxIterations;
  private final List<Optimization> subOptimizations;

  public ModuleFixpointSequence(String name, Optimization... subOptimizations) {
    this(name, Integer.MAX_VALUE, subOptimizations);
  }

  public ModuleFixpointSequence(String name, int maxIterations, Optimization... subOptimizations) {
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
      Optimization topLevel, ModuleFeedback feedback, Module module) {
    return new GenFixpointSequence<Optimization, ModuleFeedback, Module>(
        maxIterations, subOptimizations) {
      @Override
      protected boolean runOptimization(
          Optimization optimization, ModuleFeedback moduleFeedback, Module module) {
        return optimization.run(topLevel, moduleFeedback, module);
      }

      @Override
      protected boolean checkTarget(Module module) {
        return checkAll(module, Exclude.STRICT_CFG, Exclude.CAPTURE);
      }
    }.run(feedback, module);
  }

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel, ModuleFeedback feedback, Function function) {
    throw new UnsupportedOperationException(
        "ModuleFixpointSequence can't run on individual functions, only entire modules");
  }
}
