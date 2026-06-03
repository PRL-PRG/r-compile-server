package org.prlprg.snapshot.fir.opt;

import static org.junit.Assert.fail;
import static org.prlprg.fir.check.Checker.checkAll;

import java.util.Objects;
import org.prlprg.examples.Example;
import org.prlprg.examples.SexpResult.Error;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.interpret.InterpretQuery;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.ir.GenFirQuery;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

public record OptimizedFirQuery(Optimization optimization) implements GenFirQuery {
  @Override
  public String name() {
    return optimization().name().equals("default")
        ? "opt.fir"
        : "opt." + optimization.name() + ".fir";
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof OptimizedFirQuery(var o1))) {
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
    if (example.text().contains("-error:")) {
      // Don't try to optimize invalid FIR, it may crash
      throw new SkipQueryException(name(), new RuntimeException("Invalid FIR"));
    }

    var original = store.load(example, FirQuery.INSTANCE);

    MockModuleFeedback feedback;
    try {
      var interpreterOutput = store.load(example, InterpretQuery.MAIN);
      if (interpreterOutput.result() instanceof Error(var message, _)) {
        System.err.println("WARNING: interpreter crashed:\n" + message);
      }
      feedback = interpreterOutput.feedback();
      System.err.println("Using INTERPRETER feedback");
    } catch (SkipQueryException e) {
      System.err.println("Interpreter crashed: " + e.getMessage());
      //noinspection CallToPrintStackTrace
      e.printStackTrace();

      feedback = new MockModuleFeedback();
      System.err.println("Using MOCK feedback");
    }

    // Optimize a copy, otherwise we'll mutate the original and corrupt other tests
    var copy = MockModuleFeedback.deepCopy(original, feedback);
    var copyModule = copy.first();
    var copyFeedback = copy.second();

    // Log optimizations, and save even if we fail to compute
    var log = new OptimizationLog(copyModule);
    try {
      optimization.run(copyFeedback, copyModule);
    } finally {
      log.close();

      if (!example.hasOption("", "dontSaveSnapshots")) {
        var path = Paths.addingExtension(store.snapshotPath(example, this), "optlog.html");
        Files.createDirectories(path.getParent());
        log.writeHtml(path);
      }
    }

    return copyModule;
  }

  @Override
  public void verifyExtra(Module data, Example example, SnapshotStore store) {
    if (!checkAll(data)) {
      fail("Optimized FIR is invalid");
    }
  }
}
