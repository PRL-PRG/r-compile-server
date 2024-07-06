package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public sealed interface RFunType extends RValueType
    permits RFunTypeImpl, RClosureType, RBuiltinOrSpecialType {
  RFunType ANY = RFunTypeImpl.INSTANCE;

  static RFunType of(Collection<RSignatureType> overloads) {
    if (overloads.isEmpty()) {
      return ANY;
    }

    return new RFunTypeImpl(new RFunTypeOverloads(overloads));
  }

  static RFunType of(RSignatureType overload) {
    return of(ImmutableList.of(overload));
  }

  /**
   * The known overloads of the closure. Each overload is a function signature.
   *
   * <p>Simple closures will only have one overload, but complex closures can have many (especially
   * builtins whose types we know in detail). Unknown closures will have zero.
   */
  RFunTypeOverloads overloads();

  /** The base part of {@link Object#toString() self.toString()}. */
  String typeString();

  @PrintMethod
  private static void print(RFunType self, Printer p) {
    var w = p.writer();

    w.write(self.typeString());
    if (!self.overloads().isEmpty()) {
      p.print(self.overloads());
    }
  }

  /** Whether this is a closure. */
  default Maybe isClosure() {
    return Lattice.relation(this, RFunType.ANY);
  }

  /** Whether this is a non-special or special builtin. */
  default Maybe isMaybeSpecialSpecialBuiltin() {
    return Lattice.relation(this, RBuiltinOrSpecialType.ANY);
  }

  /** Whether this is a non-special builtin. */
  default Maybe isNonSpecialBuiltin() {
    return Lattice.relation(this, RBuiltinType.ANY);
  }

  /** Whether this is a special builtin. */
  default Maybe isSpecialBuiltin() {
    return Lattice.relation(this, RSpecialType.ANY);
  }

  /**
   * Returns the most specific known overload for the given argument types, or {@code null} if there
   * is none.
   */
  default @Nullable RSignatureType mostSpecificOverload(List<RArgumentType> arguments) {
    return overloads().mostSpecific(arguments);
  }
}

record RFunTypeImpl(RFunTypeOverloads overloads) implements RFunType {
  static final RFunTypeImpl INSTANCE = new RFunTypeImpl(RFunTypeOverloads.NONE);

  @Override
  public String typeString() {
    return "fun";
  }
}
