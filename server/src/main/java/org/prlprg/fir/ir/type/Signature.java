package org.prlprg.fir.ir.type;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Signature(ImmutableList<Type> parameterTypes, Type returnType, Effects effects) {
  /// Whether any call context and arguments that satisfy `this` also satisfy `expected`: whether
  /// `this` has more specific parameters, and less specific effects and return type.
  public boolean satisfies(Signature expected) {
    return parameterTypes.size() == expected.parameterTypes.size()
        && Streams.zip(
                parameterTypes.stream(), expected.parameterTypes.stream(), Type::allMatchesMatch)
            .allMatch(b -> b)
        && expected.returnType.canBeAssignedToAll(returnType)
        && expected.effects.isSubsetOf(effects);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.printSeparated(", ", parameterTypes);
    if (!parameterTypes.isEmpty()) {
      w.write(' ');
    }

    w.write('-');
    p.print(effects);
    w.write("> ");
    p.print(returnType);
  }

  @ParseMethod
  private static Signature parse(Parser p) {
    var s = p.scanner();

    var parameterTypes = ImmutableList.<Type>builder();
    if (!s.nextCharIs('-')) {
      do {
        parameterTypes.add(p.parse(Type.class));
      } while (s.trySkip(","));
    }

    s.assertAndSkip('-');
    var effects = p.parse(Effects.class);
    s.assertAndSkip('>');
    var returnType = p.parse(Type.class);

    return new Signature(parameterTypes.build(), returnType, effects);
  }
}
