package org.prlprg.fir.ir.type;

import com.google.common.collect.ImmutableList;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.ImmutableBoolArray;
import org.prlprg.util.Streams;
import org.prlprg.util.Strings;

public record Signature(
    ImmutableList<Type> parameterTypes,
    ImmutableBoolArray parameterStrictnesses,
    Type returnType,
    Effects effects) {
  public Signature(ImmutableList<Type> parameterTypes, Type returnType, Effects effects) {
    this(
        parameterTypes,
        parameterTypes.stream().map(_ -> false).collect(ImmutableBoolArray.toImmutableBoolArray()),
        returnType,
        effects);
  }

  public Signature {
    if (parameterTypes.size() != parameterStrictnesses.length()) {
      throw new IllegalArgumentException(
          "Parameter types and strictnesses must have the same size:\ntypes = "
              + Strings.join(", ", parameterTypes)
              + "\nstrictnesses = "
              + Strings.join(", ", parameterStrictnesses));
    }
    for (var i = 0; i < parameterTypes.size(); i++) {
      if (parameterTypes.get(i).isValue() && parameterStrictnesses.get(i)) {
        throw new IllegalArgumentException(
            "Value parameter can't be strict: at index "
                + i
                + " in:\n"
                + Strings.join(",", parameterTypes));
      }
    }
  }

  /// Whether any argument types that satisfy `this` also satisfy `other`.
  public boolean hasNarrowerParameters(Signature other) {
    return parameterTypes.size() == other.parameterTypes.size()
        && Streams.zip(
                parameterTypes.stream(), other.parameterTypes.stream(), Type::allMatchesMatch)
            .allMatch(b -> b);
  }

  /// Whether `this`'s strictnesses, effects and return are a subset/subtype of `other`'s.
  public boolean hasNarrowerPostconditions(Signature other) {
    var numParams = Math.min(parameterTypes.size(), other.parameterTypes.size());
    for (var i = 0; i < numParams; i++) {
      if (!parameterStrictnesses.get(i)
          && !parameterTypes.get(i).isValue()
          && other.parameterStrictnesses.get(i)) {
        return false;
      }
    }

    return effects.isSubsetOf(other.effects) && returnType.canBeAssignedToAll(other.returnType);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    for (int i = 0; i < parameterTypes.size(); i++) {
      if (i > 0) {
        w.write(',');
      }
      p.print(parameterTypes.get(i));
      if (parameterStrictnesses.get(i)) {
        w.write("@!");
      }
    }
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
    var parameterStrictnesses = ImmutableBoolArray.builder();
    if (!s.nextCharIs('-')) {
      do {
        parameterTypes.add(p.parse(Type.class));
        parameterStrictnesses.add(s.trySkip("@!"));
      } while (s.trySkip(","));
    }

    s.assertAndSkip('-');
    var effects = p.parse(Effects.class);
    s.assertAndSkip('>');
    var returnType = p.parse(Type.class);

    return new Signature(
        parameterTypes.build(), parameterStrictnesses.build(), returnType, effects);
  }
}
