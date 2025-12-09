package org.prlprg.fir.opt;

import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.io.IOException;
import java.nio.file.Path;
import java.util.Objects;
import junit.framework.AssertionFailedError;
import org.prlprg.bc.BCQuery;
import org.prlprg.examples.Example;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.GenFirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Paths;

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
