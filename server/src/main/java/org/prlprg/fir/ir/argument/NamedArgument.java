package org.prlprg.fir.ir.argument;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
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
  private static NamedArgument parse(Parser p) {
    var s = p.scanner();

    if (s.nextCharSatisfies(Characters::isIdentifierStart)) {
      // We don't have lookahead, so we must handle this case where we could parsed a name,
      // or the start of a `use` argument, or a register argument.
      var nameOrUseOrRegister = s.readIdentifierOrKeyword();

      // Handle unnamed arguments that are identifier constants
      switch (nameOrUseOrRegister) {
        case "TRUE":
          return new NamedArgument(new Constant(new Value.Bool(true)));
        case "FALSE":
          return new NamedArgument(new Constant(new Value.Bool(false)));
        case "TRUE_LGL":
          return new NamedArgument(new Constant(new Value.Lgl(Logical.TRUE)));
        case "FALSE_LGL":
          return new NamedArgument(new Constant(new Value.Lgl(Logical.FALSE)));
        case "NA_LGL":
          return new NamedArgument(new Constant(new Value.Lgl(Logical.NA)));
        case "NA_INT":
          return new NamedArgument(new Constant(new Value.Int(Constants.NA_INT)));
        case "NA_REAL":
          return new NamedArgument(new Constant(new Value.Real(Constants.NA_REAL)));
        case "NA_STR":
          return new NamedArgument(new Constant(new Value.Str(Constants.NA_STRING)));
        case "NULL", "NA_CPLX":
          throw s.fail("Constant '" + nameOrUseOrRegister + "' not implemented");
      }

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
    } else if (s.nextCharIs('`')) {
      // Definitely named
      var name = p.parse(NamedVariable.class);
      s.assertAndSkip('=');
      var value = p.parse(Argument.class);
      return new NamedArgument(name, value);
    } else {
      // Definitely unnamed
      var value = p.parse(Argument.class);
      return new NamedArgument(value);
    }
  }
}
