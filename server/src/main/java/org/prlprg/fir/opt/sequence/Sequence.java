package org.prlprg.fir.opt.sequence;

import static org.prlprg.fir.check.Checker.checkAll;

import java.util.List;
import org.prlprg.AppConfig;
import org.prlprg.AppConfig.CfgDebugLevel;
import org.prlprg.fir.check.Checker.Exclude;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;

/// Run the optimizations in order, then don't re-run.
public class Sequence implements Optimization {
  private final String name;
  private final List<Optimization> subOptimizations;

  public Sequence(String name, Optimization... subOptimizations) {
    this.name = name;
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
  public boolean run(ModuleFeedback feedback, Module module) {
    return module.record(
        "Sequence#run",
        List.of(this, feedback, module),
        () ->
            runImpl(
                feedback,
                module,
                new TargetImpl<>() {
                  @Override
                  public boolean run(Optimization opt, ModuleFeedback feedback, Module module) {
                    return opt.run(feedback, module);
                  }

                  @Override
                  public boolean check(Module module) {
                    return checkAll(module, Exclude.STRICT_CFG);
                  }
                }));
  }

  @Override
  public boolean run(ModuleFeedback feedback, Function function) {
    return runImpl(
        feedback,
        function,
        new TargetImpl<>() {
          @Override
          public boolean run(Optimization opt, ModuleFeedback feedback, Function function) {
            return opt.run(feedback, function);
          }

          @Override
          public boolean check(Function function) {
            return checkAll(function, Exclude.STRICT_CFG);
          }
        });
  }

  private <Target> boolean runImpl(
      ModuleFeedback feedback, Target target, TargetImpl<Target> targetImpl) {
    var check = AppConfig.CFG_DEBUG_LEVEL.compareTo(CfgDebugLevel.AFTER_STEP) >= 0;
    var changed = false;

    for (var opt : subOptimizations) {
      var codePreOpt = check ? target.toString() : null;

      changed |= targetImpl.run(opt, feedback, target);

      if (check && !targetImpl.check(target)) {
        throw new AssertionError(
            "Verification failed after "
                + opt
                + "\nBefore:\n"
                + codePreOpt
                + "\nAfter:\n"
                + target);
      }
    }

    return changed;
  }

  private interface TargetImpl<Target> {
    boolean run(Optimization opt, ModuleFeedback feedback, Target target);

    boolean check(Target target);
  }
}
