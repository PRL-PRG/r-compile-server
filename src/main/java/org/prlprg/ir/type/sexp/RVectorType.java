package org.prlprg.ir.type.sexp;

import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.ValueSXP;
import org.prlprg.sexp.VectorSXP;

public sealed interface RVectorType extends RListOrVectorType
    permits RVectorTypeImpl, RPrimVecType, RGenericVecType, RExprVecType {
  RVectorType ANY = new RVectorTypeImpl(MaybeNat.UNKNOWN);
  RVectorType SCALAR = new RVectorTypeImpl(MaybeNat.of(1));

  static RVectorType of(MaybeNat length) {
    if (!length.isKnown()) {
      return ANY;
    } else if (length.isDefinitely(1)) {
      return SCALAR;
    }

    return new RVectorTypeImpl(length);
  }

  /** The length of the vector, if known. */
  MaybeNat length();

  /** Returns the same type with a different length. */
  RVectorType withLength(MaybeNat length);

  /** Is this a scalar? */
  default Maybe isScalar() {
    if (length().isDefinitely(1)) {
      return Maybe.YES;
    }
    if (length().isKnown()) {
      return Maybe.NO;
    }
    return Maybe.MAYBE;
  }

  /** The base part of {@link Object#toString() self.toString()}. */
  String typeString();

  @PrintMethod
  private static void print(RVectorType self, Printer p) {
    var w = p.writer();

    w.write(self.typeString());
    if (self.length().isKnown()) {
      w.write("(");
      p.print(self.length());
      w.write(")");
    }
  }
}

record RVectorTypeImpl(@Override MaybeNat length) implements RVectorType {
  @Override
  public Class<? extends ValueSXP> clazz() {
    return VectorSXP.class;
  }

  @Override
  public RVectorType withLength(MaybeNat length) {
    return new RVectorTypeImpl(length);
  }

  @Override
  public String typeString() {
    return "vector";
  }
}
