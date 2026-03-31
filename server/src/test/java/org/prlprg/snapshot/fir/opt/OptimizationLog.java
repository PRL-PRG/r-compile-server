package org.prlprg.snapshot.fir.opt;

import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.opt.Optimization;

public class OptimizationLog {
  private static final HashMap<Module, OptimizationLog> ATTACHED = new HashMap<>();
  private static final Observer OBSERVER =
      new Observer() {
        @Override
        public void before(String func, List<Object> args) {
          if (!func.equals("Optimization#run")) {
            return;
          }

          var _ = (Optimization) args.get(0);
          var module = (Module) args.get(2);
          var log = ATTACHED.get(module);
          assert log != null : "Module isn't attached to an OptimizationLog, but has its observer";

          log.before = module.toString();
        }

        @Override
        public void after(String func, List<Object> args, @Nullable Object returnValue) {
          if (!func.equals("Optimization#run")) {
            return;
          }

          var opt = (Optimization) args.get(0);
          var module = (Module) args.get(2);
          var log = ATTACHED.get(module);
          var changed = (boolean) Objects.requireNonNull(returnValue);
          assert log != null : "Module isn't attached to an OptimizationLog, but has its observer";

          if (!changed) {
            // Don't record unchanged optimization
            return;
          }

          log.record(opt, module);
        }
      };

  public static void attach(Module module) {
    module.addObserver(OBSERVER);
    ATTACHED.put(module, new OptimizationLog());
  }

  public static void remove(Module module) {
    module.removeObserver(OBSERVER);
    ATTACHED.remove(module);
  }

  public static @Nullable OptimizationLog get(Module module) {
    return ATTACHED.get(module);
  }

  private String before = "";
  private static final ArrayList<Diff> diffs = new ArrayList<>();

  private OptimizationLog() {}

  private void record(Optimization opt, Module module) {
    var after = module.toString();
    diffs.add(new Diff(opt.name(), before, after));
  }

  public void writeHtml(Path outPath) {
    // TODO(LLM)
  }

  private record Diff(String optName, String before, String after) {}
}
