package org.prlprg.fir.opt;

import java.util.Objects;
import org.prlprg.examples.Example;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.GenFirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.snapshots.SnapshotStore;

public record OptimizedFirQuery(Optimization optimization) implements GenFirQuery {
  @Override
  public String name() {
    return "fir.opt." + optimization.name();
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
    var fir = store.query(example, FirQuery.INSTANCE);
    optimization.run(new MockModuleFeedback(), fir);
    return fir;
  }
}
