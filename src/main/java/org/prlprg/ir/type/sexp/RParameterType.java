package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.SEXP;

/**
 * Name and {@link RType}, describing one of a function's parameters.
 *
 * <p>This doesn't implement {@link Lattice} because you can't compare parameters with different
 * names, and comparing those with the same name is just comparing their {@link #type()}s.
 */
public record RParameterType(String name, RType<?> type) {
  public RParameterType(
      String name, NoOrMaybe isRequired, RValueType valueType, AttributesType attributesType) {
    this(name,
        RSexpType.of(
            valueType,
            YesOrMaybe.YES,
            attributesType,
            RPromiseType.STRICT_MAYBE_PROMISE,
            Maybe.of(isRequired)));
  }

  public RParameterType(
      String name, boolean isRequired, RValueType valueType, AttributesType attributesType) {
    this(name, NoOrMaybe.of(isRequired), valueType, attributesType);
  }

  public RParameterType(String name, NoOrMaybe isRequired) {
    this(name, isRequired, RValueType.ANY, AttributesType.ANY);
  }

  /**
   * If a type of the corresponding argument isn't a subtype of this type, then it's not accepted:
   * if we're checking an overload signature, the signature won't perform its effects and return its
   * return type, it will perform different effects (probably but not necessarily error) and return
   * a different type.
   *
   * <p>Remember, parameters can be non-{@link SEXP}s (unboxed values) and non-promises, because
   * we're calling one of our compiled closures. If we call an arbitrary closure that takes
   * arguments the GNU-R way, we don't even have a signature.
   */
  public RType<?> type() {
    return type;
  }

  public NoOrMaybe isRequired() {
    return NoOrMaybe.of(!(type instanceof RSexpType<?> s) || s.isMissing() != Maybe.NO);
  }

  public boolean isNamed() {
    return !name.isEmpty();
  }

  public boolean isDots() {
    return name.equals("...");
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!name.isEmpty()) {
      Names.write(w, name);
    }

    if (type instanceof RSexpType<?> s) {
      if (isRequired() == NoOrMaybe.NO) {
        w.write('?');
      }
      if (s.isPromise() == Maybe.NO) {
        w.write('!');
      }
      w.write(':');
      // Inline `p.print(type().notMissing().forced())`.
      p.print(s.value());
      if (s.attributes().isEmpty() != Maybe.YES) {
        w.write('[');
        p.print(s.attributes());
        w.write(']');
      }
    } else {
      w.write(':');
      p.print(type);
    }
  }

  public String toString() {
    return Printer.toString(this);
  }
}
