package org.prlprg.fir.opt;

import java.util.Objects;
import org.prlprg.examples.Example;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.interpret.InterpretQuery;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.GenFirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.snapshots.SkipQueryException;
import org.prlprg.snapshots.SnapshotStore;

public record OptimizedFirQuery(Optimization optimization) implements GenFirQuery {
  @Override
  public String name() {
    return "opt." + optimization.name() + ".fir";
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof OptimizedFirQuery(Optimization o1))) {
      return false;
    }
    return Objects.equals(optimization.name(), o1.name());
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(optimization.name());
  }

  @Override
  public Module compute(Example example, SnapshotStore store) {
    var fir = store.load(example, FirQuery.INSTANCE);

    ModuleFeedback feedback;
    try {
      var interpreterOutput = store.load(example, InterpretQuery.MAIN);
      feedback = interpreterOutput.feedback();
      System.err.println("Using INTERPRETER feedback");
    } catch (SkipQueryException e) {
      System.err.println("Interpreter crashed: " + e.getMessage());
      //noinspection CallToPrintStackTrace
      e.printStackTrace();

      feedback = new MockModuleFeedback();
      System.err.println("Using MOCK feedback");
    }

    optimization.run(feedback, fir);
    return fir;
  }
}
