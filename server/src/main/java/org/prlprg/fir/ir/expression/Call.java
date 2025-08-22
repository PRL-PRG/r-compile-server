package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

public final class Call implements Expression {
  private @Nullable Callee callee;
  private final ImmutableList<Argument> callArguments;

  public Call(Callee callee, ImmutableList<Argument> callArguments) {
    this.callee = callee;
    this.callArguments = callArguments;
  }

  /// Only called when parsing, since the callee may be in a function that's parsed later, and we
  /// represent it via direct reference.
  void unsafeSetCallee(Callee callee) {
    if (this.callee != null) {
      throw new IllegalStateException("Callee is already set: " + this.callee);
    }
    this.callee = callee;
  }

  public Callee callee() {
    return Objects.requireNonNull(callee, "callee was deferred and not set");
  }

  public ImmutableList<Argument> callArguments() {
    return callArguments;
  }

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
          case DynamicCallee(var actualCallee, var _) -> List.of(actualCallee);
          case DispatchCallee _, StaticCallee _, InlineCallee _ -> List.<Argument>of();
        };
    return Lists.concatLazy(calleeArguments, callArguments);
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (Call) obj;
    return Objects.equals(this.callee, that.callee)
        && Objects.equals(this.callArguments, that.callArguments);
  }

  @Override
  public int hashCode() {
    return Objects.hash(callee, callArguments);
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
