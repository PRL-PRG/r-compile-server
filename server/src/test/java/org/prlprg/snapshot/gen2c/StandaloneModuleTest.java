package org.prlprg.snapshot.gen2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.prlprg.examples.Example;
import org.prlprg.parseprint.Parser;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.StrSXP;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir2c.Fir2CQuery;
import org.prlprg.util.Paths;

/// A standalone module (as the benchmarks load it, without `rsh`) installs the vendored R's
/// `Rsh_ClosureBodyExpr` while it is loaded: `body()` of its closures gives their source, which
/// e.g. `setAs` reads.
class StandaloneModuleTest {
  @Test
  void bodyIsSourceOnlyWhileLoaded() throws Exception {
    var rpath = Path.of("closure.R");
    var example =
        Parser.fromFile(
            Paths.getResource(Example.class, "R").resolve(rpath).toFile(),
            Example.class,
            new Example.ParseContext(rpath));
    var path = new SnapshotStore().loadPath(example, Fir2CQuery.FULLY_OPTIMIZED).toAbsolutePath();

    var output =
        GNUR.instance()
            .capturingEval(
                """
                local({
                  so <- '%s/code.so'
                  dyn.load(so)
                  pool <- readRDS('%s/bindings.rds')
                  invisible(.Call("Fir_fun_init_main", pool))
                  env <- new.env()
                  .Call("Fir_fun_from_r_main", env, pool)
                  loaded <- typeof(body(env$f))
                  dyn.unload(so)
                  paste(loaded, typeof(body(env$f)))
                })
                """
                    .formatted(path, path));

    assertEquals("language externalptr", ((StrSXP) output.first()).get(0));
  }
}
