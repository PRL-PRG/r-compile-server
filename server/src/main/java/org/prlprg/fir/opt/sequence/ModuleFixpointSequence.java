package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

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
public class ModuleFixpointSequence
    extends GenFixpointSequence<Optimization, ModuleFeedback, Module> implements Optimization {
  public ModuleFixpointSequence(String name, Optimization... subOptimizations) {
    super(name, subOptimizations);
  }

  public ModuleFixpointSequence(String name, int maxIterations, Optimization... subOptimizations) {
    super(name, maxIterations, subOptimizations);
  }

  @Override
  public boolean run(ModuleFeedback feedback, Module module) {
    return runImpl(feedback, module);
  }

  @Override
  public boolean run(ModuleFeedback feedback, Function function) {
    throw new UnsupportedOperationException(
        "ModuleFixpointSequence can't run on individual functions, only entire modules");
  }

  @Override
  protected boolean runOptimization(
      Optimization optimization, ModuleFeedback moduleFeedback, Module module) {
    return optimization.run(moduleFeedback, module);
  }

  @Override
  protected boolean checkTarget(Module module) {
    return checkAll(module, Exclude.STRICT_CFG);
  }
}
