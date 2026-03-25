package org.prlprg.fir.check;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.type.Repr;

/// Checks that every dispatch call's signature returns SEXP.
///
/// This is necessary because dispatch calls can only be compiled to C when the return type is SEXP.
public class DispatchReturnTypeChecker extends Checker {
  @Override
  public String name() {
    return "dispatchReturn";
  }

  @Override
  protected void doRun(Abstraction version) {
    var cfg = version.cfg();
    if (cfg == null) {
      return;
    }

    var cursor = new CFGCursor(cfg);
    for (var bb : cfg.bbs()) {
      cursor.iterateBb(bb, stmt -> checkStatement(cursor, stmt), _ -> {});
    }
  }

  private void checkStatement(CFGCursor cursor, Statement statement) {
    if (statement.equals(Statement.NOOP)) {
      return;
    }
    if (!(statement.expression() instanceof Call call)) {
      return;
    }
    if (!(call.callee() instanceof StaticFnCallee callee)) {
      return;
    }
    if (callee.isDispatch() && callee.signature().returnType().kind().repr() != Repr.SEXP) {
      report(
          cursor.bb(),
          cursor.instructionIndex(),
          "Dispatch call must have a signature that returns SEXP, but got: "
              + callee.signature().returnType()
              + "\nIn: "
              + statement);
    }
  }
}
