package org.prlprg.fir.ir.binding;

import java.util.function.BiFunction;
import javax.annotation.concurrent.Immutable;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

@Immutable
public sealed interface Binding permits Local, Parameter {
  Variable variable();

  Type type();

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(
        switch (variable()) {
          case Register _ -> "reg ";
          case Variable _ -> "var ";
        });
    p.print(variable());
    w.write(":");
    p.print(type());
  }
}

final class Bindings {
  static <T> T parse(Parser p, BiFunction<Variable, Type, T> constructor) {
    var s = p.scanner();

    Variable var;
    if (s.trySkip("reg ")) {
      var = p.parse(Register.class);
    } else if (s.trySkip("var ")) {
      var = p.parse(NamedVariable.class);
    } else {
      throw s.fail("expected 'reg ' or 'var '");
    }
    s.assertAndSkip(':');
    var type = p.parse(Type.class);

    return constructor.apply(var, type);
  }
}
