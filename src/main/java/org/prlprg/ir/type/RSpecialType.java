package org.prlprg.ir.type;

import java.util.Collection;
import javax.annotation.Nonnull;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SpecialSXP;

public sealed interface RSpecialType extends RBuiltinOrSpecialType
    permits RNothingValueType, RSpecialTypeImpl {
  RSpecialType ANY = RSpecialTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RSpecialType exact(SpecialSXP sexp) {
    return (RSpecialType) RBuiltinOrSpecialType.of(sexp.id());
  }
}

record RSpecialTypeImpl(RFunTypeOverloads overloads) implements RSpecialType {
  static final RSpecialTypeImpl INSTANCE = new RSpecialTypeImpl(RFunTypeOverloads.NONE);

  RSpecialTypeImpl(Collection<RSignatureType> overloads) {
    this(new RFunTypeOverloads(overloads));
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.SPECIAL;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
