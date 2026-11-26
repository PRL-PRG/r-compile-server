package org.prlprg.fir.check;

import java.util.stream.Stream;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;

/// Checks that every dispatch call's signature takes and returns SEXPs.
///
/// This is necessary because the C dispatch function of a function takes and returns SEXPs.
public class DispatchSignatureChecker extends Checker {
  @Override
  public String name() {
    return "dispatchSignature";
  }

  @Override
  protected void doRun(Abstraction version) {
    if (version.isStub()) {
      return;
    }
    var cfg = version.body();

    var cursor = new CFGCursor(cfg);
    for (var bb : cfg.bbs()) {
      cursor.iterateBb(bb, stmt -> checkStatement(cursor, stmt), _ -> {});
    }
  }

  private void checkStatement(CFGCursor cursor, Statement statement) {
    if (statement.expression() instanceof Noop) {
      return;
    }
    if (!(statement.expression() instanceof Call call)) {
      return;
    }
    if (!(call.callee() instanceof StaticFnCallee callee)) {
      return;
    }
    if (callee.isDispatch() && !isSexpSignature(callee.signature())) {
      report(
          cursor.bb(),
          cursor.instructionIndex(),
          "Dispatch call must have a signature that takes and returns SEXPs, but got: "
              + callee.signature()
              + "\nIn: "
              + statement);
    }
  }

  public static boolean isSexpSignature(Signature signature) {
    return Stream.concat(signature.parameterTypes().stream(), Stream.of(signature.returnType()))
        .allMatch(type -> type.kind().repr() == Repr.SEXP);
  }
}
