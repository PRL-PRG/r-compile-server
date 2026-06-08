package org.prlprg.fir.opt.aegraph;

import java.util.Comparator;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.opt.aegraph.data.AEInterface;

/// [AEInterface] for FIR
public class FIRAEInterface implements AEInterface<Expression, Argument> {
  private final Abstraction scope;

  public FIRAEInterface(Abstraction scope) {
    this.scope = scope;
  }

  @Override
  public Comparator<Argument> argumentComparator() {
    return Comparator.naturalOrder();
  }

  @Override
  public Argument freshRegister() {
    // Type will be replaced
    return new Read(scope.addLocal(Type.MISSING));
  }

  @Override
  public @UnmodifiableView List<Argument> arguments(Expression expression) {
    return expression.arguments();
  }

  @Override
  public Expression mapArguments(Expression expression, Function<Argument, Argument> transform) {
    return expression.mapArguments(transform);
  }
}
