package org.prlprg.fir.ir.callee;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record StaticFnCallee(
    FunctionRef functionRef, boolean isDispatch, Argument closureWithEnv, Signature signature)
    implements Callee {
  public StaticFnCallee(
      Function function, boolean isDispatch, Argument closureWithEnv, Signature signature) {
    this(new FunctionRef(function), isDispatch, closureWithEnv, signature);
  }

  public StaticFnCallee(Function function, boolean isDispatch, Signature signature) {
    this(new FunctionRef(function), isDispatch, Constant.ELIDED_CLOSURE, signature);
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
    return isDispatch ? null : minVersion();
  }

  @Override
  public Callee mapArguments(java.util.function.Function<Argument, Argument> transformer) {
    return new StaticFnCallee(
        functionRef, isDispatch, transformer.apply(closureWithEnv), signature);
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
    if (!closureWithEnv.equals(Constant.ELIDED_CLOSURE)) {
      w.write('@');
      p.print(closureWithEnv);
    }
    w.write("< ");
    p.print(signature);
    w.write(" >");
  }
}
