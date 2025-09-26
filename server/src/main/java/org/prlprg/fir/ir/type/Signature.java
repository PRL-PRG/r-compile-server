package org.prlprg.fir.ir.type;

import com.google.common.collect.ImmutableList;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Streams;

public record Signature(ImmutableList<Type> parameterTypes, Type returnType, Effects effects) {
  /// Whether any argument types that satisfy `this` also satisfy `other`.
  public boolean hasNarrowerParameters(Signature other) {
    return parameterTypes.size() == other.parameterTypes.size()
        && Streams.zip(
                parameterTypes.stream(), other.parameterTypes.stream(), Type::allMatchesMatch)
            .allMatch(b -> b);
  }

  /// Whether `this`'s effects and return are a subset/subtype of `other`'s.
  public boolean hasNarrowerEffectsAndReturn(Signature other) {
    return effects.isSubsetOf(other.effects) && returnType.canBeAssignedToAll(other.returnType);
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
