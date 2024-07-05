package org.prlprg.ir.type;

import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;

/** Primitive vector {@link RType} projection. */
public sealed interface RPrimVecType extends RVectorType
    permits RPrimVecTypeImpl, RNAAbleVecType, RRawType {
  RPrimVecType ANY = RPrimVecTypeImpl.INSTANCE;

  static RPrimVecType of(MaybeNat length) {
    return new RPrimVecTypeImpl(length);
  }

  /** Whether the vector contains NAs or NaNs. */
  NoOrMaybe hasNAOrNaN();

  @Override
  RPrimVecType withLength(MaybeNat length);

  /** Is this a primitive vector of numbers (int, real, or complex)? */
  default Maybe isNumeric() {
    return Lattice.relation(this, RNumericType.ANY);
  }
}

record RPrimVecTypeImpl(@Override MaybeNat length) implements RPrimVecType {
  static final RPrimVecTypeImpl INSTANCE = new RPrimVecTypeImpl(MaybeNat.UNKNOWN);

  @Override
  public NoOrMaybe hasNAOrNaN() {
    return NoOrMaybe.NO;
  }

  @Override
  public RPrimVecType withLength(MaybeNat length) {
    return new RPrimVecTypeImpl(length);
  }

  @Override
  public String typeString() {
    return "primvec";
  }
}
