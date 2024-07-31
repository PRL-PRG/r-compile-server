package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/** Primitive vector that can contain {@code NA} values. */
public sealed interface RNAAbleVecType extends RPrimVecType
    permits RNAAbleVecTypeImpl, RNumericOrLogicalType, RStringType {
  RNAAbleVecType ANY = new RNAAbleVecTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.MAYBE);
  RNAAbleVecType NO_NA = new RNAAbleVecTypeImpl(MaybeNat.UNKNOWN, NoOrMaybe.NO);
  RNAAbleVecType SCALAR = new RNAAbleVecTypeImpl(MaybeNat.of(1), NoOrMaybe.MAYBE);
  RNAAbleVecType SCALAR_NO_NA = new RNAAbleVecTypeImpl(MaybeNat.of(1), NoOrMaybe.NO);

  @SuppressWarnings("DuplicatedCode")
  static RNAAbleVecType of(MaybeNat length, NoOrMaybe hasNAOrNaN) {
    if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return ANY;
    } else if (!length.isKnown() && hasNAOrNaN == NoOrMaybe.NO) {
      return NO_NA;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.MAYBE) {
      return SCALAR;
    } else if (length.isDefinitely(1) && hasNAOrNaN == NoOrMaybe.NO) {
      return SCALAR_NO_NA;
    }

    return new RNAAbleVecTypeImpl(length, hasNAOrNaN);
  }

  /** Whether the vector contains NAs or NaNs. */
  NoOrMaybe hasNAOrNaN();

  @Override
  RNAAbleVecType withLength(MaybeNat length);

  RNAAbleVecType notNAOrNaN();

  @PrintMethod
  private static void print(RNAAbleVecType self, Printer p) {
    var w = p.writer();

    w.write(self.typeString());
    if (self.length().isKnown() || self.hasNAOrNaN() != NoOrMaybe.MAYBE) {
      w.write("(");
      if (self.length().isKnown()) {
        p.print(self.length());
      }
      if (self.hasNAOrNaN() == NoOrMaybe.NO) {
        w.write("/NA");
      }
      w.write(")");
    }
  }
}

record RNAAbleVecTypeImpl(@Override MaybeNat length, @Override NoOrMaybe hasNAOrNaN)
    implements RNAAbleVecType {
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
