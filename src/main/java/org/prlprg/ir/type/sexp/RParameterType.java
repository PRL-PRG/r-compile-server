package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

/**
 * Name and {@link RSexpType}, describing one of a function's parameters.
 *
 * <p>This doesn't implement {@link Lattice} because you can't compare parameters with different
 * names, and comparing those with the same name is just comparing their {@link #type()}s.
 */
public record RParameterType(
    String name, NoOrMaybe isRequired, RValueType valueType, AttributesType attributesType) {
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
   * <p>If the parameter is required, this type won't be missing (can't accept missing), otherwise
   * it will be maybe missing (can accept missing, but can accept a value).
   *
   * <p>The promise type is always {@link RPromiseType#STRICT_MAYBE_PROMISE}. Although GNU-R never
   * does, functions can be called with values directly, because forcing a value does nothing. So
   * values and strict promises are always accepted. On the other hand, while calling a function
   * with a lazy promise only produces semantic differences if the promise has a side-effect,
   * promises can have arbitrary side effects that may completely change the function's effects and
   * return type, and we don't analyze if a parameter is never used because that isn't common, so we
   * only assert the signature's effects and return types if all arguments are strict.
   *
   * <p>The parameter type is always owned, because we automatically insert a clone before calling
   * when necessary.
   */
  public RSexpType type() {
    return RSexpType.of(
        valueType,
        YesOrMaybe.YES,
        attributesType,
        RPromiseType.STRICT_MAYBE_PROMISE,
        Maybe.of(isRequired));
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

    if (isRequired == NoOrMaybe.NO) {
      w.write('?');
    }
    w.write(':');
    // Inline `p.print(type().notMissing().forced())`.
    p.print(valueType);
    if (attributesType.isEmpty() != Maybe.YES) {
      w.write('[');
      p.print(attributesType);
      w.write(']');
    }
  }

  public String toString() {
    return Printer.toString(this);
  }
}
