package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.ValueSXP;

/** Primitive vector {@link RSexpType} projection. */
public sealed interface RPrimVecType extends RVectorType
    permits RPrimVecTypeImpl, RNAAbleVecType, RRawType {
  RPrimVecType ANY = new RPrimVecTypeImpl(MaybeNat.UNKNOWN);
  RPrimVecType SCALAR = new RPrimVecTypeImpl(MaybeNat.of(1));

  static RPrimVecType of(MaybeNat length) {
    if (!length.isKnown()) {
      return ANY;
    } else if (length.isDefinitely(1)) {
      return SCALAR;
    }

    return new RPrimVecTypeImpl(length);
  }

  @Override
  RPrimVecType withLength(MaybeNat length);

  /** Is this a primitive vector of numbers (int, real, or complex)? */
  default Maybe isNumeric() {
    return Lattice.relation(this, RNumericType.ANY);
  }
}

record RPrimVecTypeImpl(@Override MaybeNat length) implements RPrimVecType {
  @Override
  public Class<? extends ValueSXP> clazz() {
    return PrimVectorSXP.class;
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
