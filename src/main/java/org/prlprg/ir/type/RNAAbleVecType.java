package org.prlprg.ir.type;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/** Primitive vector that can contain {@code NA} values. */
public sealed interface RNAAbleVecType extends RPrimVecType
    permits RNAAbleVecTypeImpl, RNumericOrLogicalType, RStringType {
  RNAAbleVecType ANY = RNAAbleVecTypeImpl.INSTANCE;

  static RNAAbleVecType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    }

    return new RNAAbleVecTypeImpl(length, hasNAOrNaN);
  }

  @Override
  RNAAbleVecType withLength(MaybeNat length);

  RNAAbleVecType notNAOrNaN();

  @PrintMethod
  private static void print(RNAAbleVecType self, Printer p) {
    var w = p.writer();

    w.write(self.typeString());
    if (self.hasNAOrNaN() == NoOrMaybe.NO) {
      w.write("/NA");
    }
    if (self.length().isKnown()) {
      w.write("(");
      p.print(self.length());
      w.write(")");
    }
  }
}

record RNAAbleVecTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RNAAbleVecType {
  static final RNAAbleVecTypeImpl INSTANCE =
      new RNAAbleVecTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);

  @Override
  public RNAAbleVecType withLength(MaybeNat length) {
    return new RNAAbleVecTypeImpl(length, hasNAOrNaN);
  }

  @Override
  public RNAAbleVecType notNAOrNaN() {
    return new RNAAbleVecTypeImpl(length, NoOrMaybe.NO);
  }

  @Override
  public String typeString() {
    return "navec";
  }
}
