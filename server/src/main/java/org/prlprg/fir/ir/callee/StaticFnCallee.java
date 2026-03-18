package org.prlprg.fir.ir.callee;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record StaticFnCallee(boolean isDispatch, FunctionRef functionRef, Signature signature)
    implements Callee {
  public StaticFnCallee(boolean isDispatch, Function function, Signature signature) {
    this(isDispatch, new FunctionRef(function), signature);
  }

  public Function function() {
    return functionRef.get();
  }

  /// The worst version that will be dispatched, or `null` if non exist (invalid)
  public @Nullable Abstraction minVersion() {
    return function().guess(signature);
  }

  /// The exact version that will be dispatched. `null` if dynamic or none exist
  public @Nullable Abstraction exactVersion() {
    return isDispatch ? null : function().guess(signature);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(function().name());
    if (isDispatch) {
      w.write('%');
    }
    w.write("< ");
    p.print(signature);
    w.write(" >");
  }
}
