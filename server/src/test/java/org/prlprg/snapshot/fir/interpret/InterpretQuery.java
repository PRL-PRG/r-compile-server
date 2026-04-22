package org.prlprg.snapshot.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.examples.SexpResult;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.util.Files;

public record InterpretQuery(@Override String name, String functionName, SEXP... arguments)
    implements Query<InterpretOutput> {
  public static final InterpretQuery MAIN = new InterpretQuery("interpret", "main");

  public static InterpretQuery deopt_int(String deoptFnName) {
    return new InterpretQuery("interpret.deopt.integer", deoptFnName, SEXPs.integer(1));
  }

  public static InterpretQuery deopt_real(String deoptFnName) {
    return new InterpretQuery("interpret.deopt.real", deoptFnName, SEXPs.real(1));
  }

  public static InterpretQuery deopt_lgl(String deoptFnName) {
    return new InterpretQuery("interpret.deopt.logical", deoptFnName, SEXPs.TRUE);
  }

  @Override
  public InterpretOutput compute(Example example, SnapshotStore store) {
    if (example.hasOption(name(), "noEval")) {
      throw new SkipQueryException(name);
    }
    var module = store.load(example, FirQuery.INSTANCE);

    return new TestInterpreter(module).call(functionName, arguments);
  }

  @Override
  public void verifyEqual(
      InterpretOutput expected, InterpretOutput actual, Example example, SnapshotStore store) {
    assertEquals(expected.result(), actual.result(), "Return value or crash reason changed");
    assertEquals(
        expected.checkpointTrace(),
        actual.checkpointTrace(),
        "Checkpoint trace changed\nOutput = " + expected.result());
  }

  @Override
  public void verifyNoRegression(
      InterpretOutput previous, InterpretOutput current, Example example, SnapshotStore store) {
    assertEquals(previous.result(), current.result(), "Return value or crash reason changed");
    assertEquals(
        previous.checkpointTrace(),
        current.checkpointTrace(),
        "Checkpoint trace changed\nOutput = " + previous.result());
  }

  @Override
  public void verifyExtra(InterpretOutput data, Example example, SnapshotStore store) {
    data.result().check(example);
  }

  @Override
  public InterpretOutput deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    var R = GNUR.instance();
    var module = store.load(example, FirQuery.INSTANCE);

    var checkpointTracePath = path.resolve("trace.log");
    var feedbackPath = path.resolve("feedback.txt");

    var result = SexpResult.read(path, R);
    var checkpointTrace = Files.readString(checkpointTracePath);

    // Relies on `module` being cached in-memory, because `feedback` has direct pointers.
    var feedback =
        Parser.fromFile(
            feedbackPath.toFile(),
            MockModuleFeedback.class,
            new MockModuleFeedback.ParseContext(module));

    return new InterpretOutput(result, checkpointTrace, feedback);
  }

  @Override
  public void serialize(InterpretOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var checkpointTracePath = path.resolve("trace.log");
    var feedbackPath = path.resolve("feedback.txt");

    Files.createDirectories(path);
    data.result().write(path);
    Files.writeString(checkpointTracePath, data.checkpointTrace());
    Printer.toFile(feedbackPath.toFile(), data.feedback());
  }
}
