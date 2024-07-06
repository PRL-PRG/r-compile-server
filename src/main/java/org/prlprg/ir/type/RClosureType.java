package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import javax.annotation.Nonnull;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;

public sealed interface RClosureType extends RFunType permits RNothingValueType, RClosureTypeImpl {
  RClosureType ANY = RClosureTypeImpl.INSTANCE;

  static RClosureType of(Collection<RSignatureType> overloads) {
    if (overloads.isEmpty()) {
      return ANY;
    }

    return new RClosureTypeImpl(overloads);
  }

  static RClosureType of(RSignatureType overload) {
    return of(ImmutableList.of(overload));
  }

  /**
   * Returns the most specific type that can be trivially inferred for the closure.
   *
   * <p>Looks at formals, but not body.
   */
  static RClosureType exact(CloSXP sexp) {
    return of(
        RSignatureType.of(
            sexp.parameters().stream()
                .map(
                    e ->
                        new RParameterType(
                            e.tagOrEmpty(), NoOrMaybe.of(e.value() == SEXPs.MISSING_ARG)))
                .collect(ImmutableList.toImmutableList()),
            REffects.ARBITRARY,
            RType.ANY));
  }
}

record RClosureTypeImpl(RFunTypeOverloads overloads) implements RClosureType {
  static final RClosureTypeImpl INSTANCE = new RClosureTypeImpl(RFunTypeOverloads.NONE);

  RClosureTypeImpl(Collection<RSignatureType> overloads) {
    this(new RFunTypeOverloads(overloads));
  }

  @Override
  public @Nonnull SEXPType sexpType() {
    return SEXPType.CLO;
  }

  @Override
  public String typeString() {
    return sexpType().toString();
  }
}
