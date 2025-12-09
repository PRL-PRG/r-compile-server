package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.fir.check.Checker.checkAll;
import static org.prlprg.fir.interpret.RegisterStubs.registerStubs;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.io.IOException;
import java.nio.file.Path;
import java.util.List;
import java.util.function.Consumer;
import javax.annotation.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.gen2c.EvalOutput;
import org.prlprg.gen2c.PerformanceCounters;
import org.prlprg.parseprint.Printer;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.sexp.SEXP;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.Files;
import org.prlprg.util.Streams;
import org.prlprg.util.Strings;

public final class InterpretQuery implements Query<InterpreterOutput> {
  public static InterpreterOutput interpret(Module module, Example example) {
    var mainFun = module.localFunction(Variable.named("main"));
    if (mainFun == null
        || mainFun.versions().isEmpty()
        || !mainFun.version(0).parameters().isEmpty()) {
      fail(
          "File must have `fun main` with at least one version, and the first version must have no parameters");
    }

    var interpreter = new InternalInterpreter(module);
    registerStubs(interpreter);

    SEXP[] returnValue = {null};
    var checkpointTrace = interpreter.checkpointTrace().track(() -> returnValue[0] = interpreter.call("main"));
    var checkpointTraceStr = Strings.join("\n", checkpointTrace);
    return new InterpreterOutput(checkpointTraceStr, returnValue[0]);
  }

  public final InterpretQuery INSTANCE = new InterpretQuery();

  private InterpretQuery() {}

  @Override
  public InterpreterOutput compute(Example example, SnapshotStore store) {
    var oracleModule = store.query(example, FirQuery.INSTANCE);
    return interpret(oracleModule, example);
  }

  @Override
  public InterpreterOutput deserialize(Path path, Example example, SnapshotStore store)
      throws IOException {
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      var returnValuePath = path.resolve("returnValue.RDS");
      var checkpointTracePath = path.resolve("trace.log");

      var returnValue = RDSReader.readFile(R.getSession(), returnValuePath.toFile());
      var checkpointTrace = Files.readString(checkpointTracePath);

      return new InterpreterOutput(checkpointTrace, returnValue);
    }
  }

  @Override
  public void serialize(InterpreterOutput data, Path path, Example example, SnapshotStore store)
      throws IOException {
    var returnValuePath = path.resolve("returnValue.RDS");
    var checkpointTracePath = path.resolve("trace.log");

    Files.createDirectories(path);
    RDSWriter.writeFile(returnValuePath.toFile(), data.returnValue());
    Files.writeString(checkpointTracePath, data.checkpointTrace());
  }
}
