package org.prlprg.ir.type.sexp;

import java.util.Collection;
import javax.annotation.Nonnull;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.ValueSXP;

public sealed interface RBuiltinType extends RBuiltinOrSpecialType
    permits RNothingValueType, RBuiltinTypeImpl {
  RBuiltinType ANY = RBuiltinTypeImpl.INSTANCE;

  /** Returns a type with the built-in's signature. */
  static RBuiltinType exact(BuiltinSXP sexp) {
    return (RBuiltinType) RBuiltinOrSpecialType.of(sexp.id());
  }
}

record RBuiltinTypeImpl(RFunTypeOverloads overloads) implements RBuiltinType {
  static final RBuiltinTypeImpl INSTANCE = new RBuiltinTypeImpl(RFunTypeOverloads.NONE);

  RBuiltinTypeImpl(Collection<RSignatureType> overloads) {
    this(new RFunTypeOverloads(overloads));
  }

  @Override
  public Class<? extends ValueSXP> clazz() {
    return BuiltinSXP.class;
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.BUILTIN;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
