package org.prlprg.fir.ir;

import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import junit.framework.AssertionFailedError;
import org.prlprg.bc.BCQuery;
import org.prlprg.bc2fir.BC2FirCFGCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2FirClosureCompilerUnsupportedException;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshots.SkipQueryException;
import org.prlprg.snapshots.SnapshotStore;

public class FirQuery implements GenFirQuery {
  public static final FirQuery INSTANCE = new FirQuery();

  private FirQuery() {}

  @Override
  public String name() {
    return "fir";
  }

  @Override
  public Module compute(Example example, SnapshotStore store) {
    return switch (example.type()) {
      case "fir" -> parseModule(example.text());
      case "R" -> {
        var R = GNUR.instance();
        var bc = store.load(example, BCQuery.FIR);

        // An environment with one function, `main`,
        // which takes zero arguments and its body is `bc`.
        var env = new UserEnvSXP();
        env.set("main", SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), env));

        try {
          yield compile(env, R.getSession());
        } catch (BC2FirClosureCompilerUnsupportedException
            | BC2FirCFGCompilerUnsupportedException e) {
          throw new SkipQueryException(name(), e);
        }
      }
      default ->
          throw new AssertionFailedError(
              "Can't get fir module from this type of example: " + example.rpath());
    };
  }
}
