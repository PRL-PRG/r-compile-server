package org.prlprg.snapshot.bc;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcOptLevel;
import org.prlprg.examples.Example;
import org.prlprg.parseprint.Printer;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.*;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;

public record BCQuery(BcOptLevel optimizationLevel) implements Query<Bc> {
  public static BCQuery REGULAR = new BCQuery(BcOptLevel.DEFAULT);
  public static BCQuery OPT = new BCQuery(BcOptLevel.MAX);
  public static BCQuery FIR = new BCQuery(BcOptLevel.FIR);

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
    if (optimizationLevel == BcOptLevel.FIR) {
      return Query.super.oracle(example, store);
    }

    return genCompute(
        example,
        (R, text, optimizationLevel) -> {
          var value =
              R.eval(
                  "compiler::cmpfun("
                      + text
                      + ", options = list(optimize = "
                      + optimizationLevel.value()
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
            example.intOption(name(), "optimizationLevel", this.optimizationLevel.value()));

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
    return "bc." + optimizationLevel.name().toLowerCase();
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
    var text = Printer.toString(body, SEXPPrintOptions.DEFAULT.withBcDetails(true));
    Files.writeString(path.resolveSibling(path.getFileName() + ".txt"), text);
  }
}
