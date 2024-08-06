package org.prlprg.ir.type.sexp;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import javax.annotation.Nonnull;
import org.prlprg.ir.cfg.instr.StmtData;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.ValueSXP;

public sealed interface RClosureType extends RFunType permits RNothingValueType, RClosureTypeImpl {
  RClosureType ANY = new RClosureTypeImpl(YesOrMaybe.MAYBE, RFunTypeOverloads.NONE);
  RClosureType ANY_JIT = new RClosureTypeImpl(YesOrMaybe.YES, RFunTypeOverloads.NONE);

  static RClosureType of(YesOrMaybe isJit, Collection<RSignatureType> overloads) {
    if (overloads.isEmpty()) {
      return switch (isJit) {
        case MAYBE -> ANY;
        case YES -> ANY_JIT;
      };
    }

    return new RClosureTypeImpl(isJit, overloads);
  }

  static RClosureType of(YesOrMaybe isJit, RSignatureType overload) {
    return of(isJit, ImmutableList.of(overload));
  }

  /**
   * Returns the most specific type that can be trivially inferred for the closure.
   *
   * <p>Looks at formals, but not body.
   */
  static RClosureType exact(CloSXP sexp) {
    return of(
        YesOrMaybe.MAYBE,
        RSignatureType.of(
            sexp.parameters().stream()
                .map(
                    e ->
                        new RParameterType(
                            e.tagOrEmpty(), NoOrMaybe.of(e.value() == SEXPs.MISSING_ARG)))
                .collect(ImmutableList.toImmutableList()),
            REffects.ARBITRARY,
            RSexpType.ANY));
  }

  /**
   * {@link YesOrMaybe#YES YES} if this is statically known to be created from a {@link Closure}.
   *
   * <p>If {@link YesOrMaybe#YES YES}, we explicitly provide a call context when calling this via a
   * call instruction.
   */
  YesOrMaybe isJit();
}

record RClosureTypeImpl(YesOrMaybe isJit, RFunTypeOverloads overloads) implements RClosureType {
  RClosureTypeImpl(YesOrMaybe isJit, Collection<RSignatureType> overloads) {
    this(isJit, new RFunTypeOverloads(overloads));
  }

  @Override
  public Class<? extends ValueSXP> clazz() {
    return CloSXP.class;
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
