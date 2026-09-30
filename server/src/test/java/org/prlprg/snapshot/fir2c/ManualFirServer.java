package org.prlprg.snapshot.fir2c;

import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.parseprint.Parser;
import org.prlprg.server.FirTestServer;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.util.Paths;

/// Compiles one R example lazily (with stubs), prints what `eval.R` needs to run it against the
/// test compile server, and keeps the server running. For debugging the compiled code by hand.
public final class ManualFirServer {
  public static void main(String[] args) throws Exception {
    var rpath = Path.of(args[0]);
    var example =
        Parser.fromFile(
            Paths.getResource(Example.class, "R").resolve(rpath).toFile(),
            Example.class,
            new Example.ParseContext(rpath));
    var store = new SnapshotStore();
    var query = Fir2CQuery.OPTIMIZED_ONLY_FIR.forEval();
    var path = store.loadPath(example, query);
    var server = FirTestServer.instance();
    System.out.println("path <- '" + path.toAbsolutePath() + "'");
    System.out.println(
        "prefix <- '" + org.prlprg.util.Files.readString(path.resolve("id.txt")) + "_'");
    System.out.println("fir_port <- " + server.port() + "L");
    System.out.println("runs <- 3L");
    System.out.flush();
    Thread.sleep(Long.MAX_VALUE);
  }
}
