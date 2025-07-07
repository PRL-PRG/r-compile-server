package org.prlprg.fir.type;

import com.google.common.collect.ImmutableList;
import org.jetbrains.annotations.NotNull;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Signature(ImmutableList<Type> parameterTypes, Type returnType, Effects effects) {
  @Override
  public @NotNull String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.printSeparated(", ", parameterTypes);
    if (!parameterTypes.isEmpty()) {
      w.write(' ');
    }
    w.write("-> ");

    p.print(returnType);
    p.print(effects);
  }

  @ParseMethod
  private static Signature parse(Parser p) {
    var s = p.scanner();

    var parameterTypes = ImmutableList.<Type>builder();
    if (!s.trySkip("->")) {
      do {
        parameterTypes.add(p.parse(Type.class));
      } while (s.trySkip(","));
      s.assertAndSkip("->");
    }

    var returnType = p.parse(Type.class);
    var effects = p.parse(Effects.class);

    return new Signature(parameterTypes.build(), returnType, effects);
  }
}
