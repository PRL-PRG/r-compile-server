package org.prlprg.fir.ir.parameter;

import java.util.List;
import java.util.Objects;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind.AnyValue;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

public record ParameterDefinition(NamedVariable name, Abstraction defaultBody) {
  private static final Abstraction MISSING_DEFAULT_BODY =
      new Abstraction(GlobalModules.INTRINSICS, List.of());

  static {
    MISSING_DEFAULT_BODY.setEffects(Effects.NONE);
    MISSING_DEFAULT_BODY.setReturnType(Type.MISSING);
    Objects.requireNonNull(MISSING_DEFAULT_BODY.cfg())
        .entry()
        .setJump(new Return(new Constant(SEXPs.MISSING_ARG)));
  }

  public static final ParameterDefinition DOTS = new ParameterDefinition(NamedVariable.DOTS);

  public ParameterDefinition(NamedVariable name) {
    this(name, MISSING_DEFAULT_BODY);
  }

  public ParameterDefinition {
    //noinspection ConstantValue (`DOTS` must initialize itself)
    if (name.equals(NamedVariable.DOTS) && this != DOTS && DOTS != null) {
      throw new IllegalArgumentException(
          "'...' parameter must be represented by ParameterDefinition.DOTS");
    }
    if (!defaultBody.parameters().isEmpty()) {
      throw new IllegalArgumentException("default body can't have parameters, it's a thunk");
    }
    if (!defaultBody.returnType().isDefinitely(AnyValue.class)) {
      throw new IllegalArgumentException("default body must return a value");
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (this == DOTS) {
      w.write("...");
      return;
    }

    p.print(name);
    if (defaultBody != MISSING_DEFAULT_BODY) {
      w.write(" = ");
      p.print(defaultBody);
    }
  }

  @ParseMethod
  private static ParameterDefinition parse(Parser p) {
    var s = p.scanner();

    if (s.trySkip("...")) {
      return DOTS;
    }

    var name = p.parse(NamedVariable.class);
    var body = s.trySkip('=') ? p.parse(Abstraction.class) : MISSING_DEFAULT_BODY;
    return new ParameterDefinition(name, body);
  }
}
