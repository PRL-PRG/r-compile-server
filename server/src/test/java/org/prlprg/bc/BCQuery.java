package org.prlprg.bc;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.*;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SkipQueryException;
import org.prlprg.snapshots.SnapshotStore;

public class BCQuery implements Query<Bc> {
  public static BCQuery REGULAR = new BCQuery(false);
  public static BCQuery FIR = new BCQuery(true);

  private final boolean fir;

  private BCQuery(boolean fir) {
    this.fir = fir;
  }

  @Override
  public Bc compute(Example example, SnapshotStore store) {
    return genCompute(
        example,
        (R, text, optimizationLevel) -> {
          var fun = (CloSXP) R.eval(text);
          var compiler = new BCCompiler(fun, R.getSession());
          compiler.setOptimizationLevel(optimizationLevel);
          return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
        });
  }

  @Override
  public Bc oracle(Example example, SnapshotStore store) {
    return fir ? Query.super.oracle(example, store) : genCompute(
        example,
        (R, text, optimizationLevel) -> {
          var value =
              R.eval(
                  "compiler::cmpfun("
                      + text
                      + ", options = list(optimize = "
                      + optimizationLevel
                      + "))");
          if (!(value instanceof CloSXP closure)) {
            throw new IllegalArgumentException("Expected a closure, got: " + value);
          }
          return closure.body();
        });
  }

  private Bc genCompute(Example example, ComputeImpl impl) {
    var optimizationLevel =
        BcOptLevel.fromValue(
            example.intOption(name(), "optimizationLevel", fir ? BcOptLevel.FIR.value() : BcOptLevel.DEFAULT.value()));

    var R = GNUR.instance();

    var bodySexp = impl.run(R, "function() { " + example.text() + " }", optimizationLevel);
    if (!(bodySexp instanceof BCodeSXP bcSxp)) {
      throw new SkipQueryException(name());
    }
    return bcSxp.bc();
  }

  @FunctionalInterface
  private interface ComputeImpl {
    SEXP run(GNUR R, String text, BcOptLevel optimizationLevel);
  }

  @Override
  public String name() {
    return fir ? "bc.fir" : "bc.regular";
  }

  @Override
  public String snapshotExtension() {
    return "bc";
  }

  @Override
  public Bc deserialize(Path path, Example example, SnapshotStore store) throws IOException {
    var R = GNUR.instance();
    return ((BCodeSXP) RDSReader.readFile(R.getSession(), path.toFile())).bc();
  }

  @Override
  public void serialize(Bc body, Path path, Example example, SnapshotStore store)
      throws IOException {
    RDSWriter.writeFile(path.toFile(), SEXPs.bcode(body));

    // Write string representation for debugging
    var text = body.toString();
    Files.writeString(path.resolveSibling(path.getFileName() + ".txt"), text);
  }
}
