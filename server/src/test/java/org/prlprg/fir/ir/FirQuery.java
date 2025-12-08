package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.io.IOException;
import java.nio.file.Path;
import junit.framework.AssertionFailedError;
import org.prlprg.bc.BCQuery;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Paths;

public class FirQuery implements Query<Module> {
  public static final FirQuery INSTANCE = new FirQuery();

  private FirQuery() {}

  @Override
  public String name() {
    return "fir";
  }

  @Override
  public Module compute(Example example, SnapshotStore store) {
    if (example.rpath().endsWith(".fir")) {
      return parseModule(example.text());
    } else if (example.rpath().endsWith(".R")) {
      try (var R = store.query(example, GNURQuery.INSTANCE)) {
        var bc = store.query(example, BCQuery.INSTANCE);

        // An environment with one function, `main`,
        // which takes zero arguments and its body is `bc`.
        var env = new UserEnvSXP();
        env.set("main", SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), env));

        return compile(env, R.getSession());
      }
    } else {
      throw new AssertionFailedError("Can't get fir module from this type of example: " + example.rpath());
    }
  }

  @Override
  public Module deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    path = Paths.addExtension(path, "fir");

    return Parser.fromFile(path.toFile(), Module.class);
  }

  @Override
  public void serialize(Module data, Path path, Example example, SnapshotStore store)
      throws IOException {
    path = Paths.addExtension(path, "fir");

    new Printer(path.toFile()).print(data);
  }
}
