package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

public record Call(Callee callee, ImmutableList<Argument> callArguments) implements Expression {
  /// *Not* just [#callArguments()], but the [callee][DynamicCallee#actualCallee()] if it's
  /// [`DynamicCallee`][org.prlprg.fir.ir.callee.DynamicCallee].
  ///
  /// @deprecated You probably want [#callArguments()]. If not, do
  /// `((Expression)call).arguments()`.
  @Deprecated
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    var calleeArguments =
        switch (callee()) {
          case DynamicCallee(var calleeReg, _) -> List.of(calleeReg);
          case StaticFnCallee _ -> List.<Argument>of();
        };
    return Lists.concatLazy(calleeArguments, callArguments);
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return new Call(
        callee.mapArguments(transformer),
        callArguments.stream().map(transformer).collect(ImmutableList.toImmutableList()));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(callee());
    p.printAsList("(", ")", callArguments);
  }
}
