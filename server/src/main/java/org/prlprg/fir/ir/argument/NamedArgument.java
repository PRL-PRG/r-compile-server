package org.prlprg.fir.ir.argument;

import javax.annotation.Nullable;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Characters;

/// An argument with an optional name.
public record NamedArgument(@Nullable NamedVariable name, Argument argument) {
  public NamedArgument(Argument argument) {
    this(null, argument);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (name != null) {
      p.print(name);
      w.write(" = ");
    }
    p.print(argument);
  }

  @ParseMethod
  public static NamedArgument parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharSatisfies(Characters::isIdentifierStart)) {
      // We don't have lookahead, so we must handle this case where we could parsed a name,
      // or the start of a `use` argument, or a register argument.
      var nameOrUseOrRegister = s.readIdentifierOrKeyword();

      if (s.trySkip('=')) {
        var value = p.parse(Argument.class);
        return new NamedArgument(Variable.named(nameOrUseOrRegister), value);
      }

      if (nameOrUseOrRegister.equals("use")) {
        var register = p.parse(Register.class);
        return new NamedArgument(new Use(register));
      } else {
        return new NamedArgument(new Read(Variable.register(nameOrUseOrRegister)));
      }
    }

    var name = p.parse(NamedVariable.class);
    s.assertAndSkip('=');
    var value = p.parse(Argument.class);
    return new NamedArgument(name, value);
  }
}
