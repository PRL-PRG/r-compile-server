package org.prlprg.ir.type.sexp;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.prlprg.ir.type.RType;

/** A list of matched arguments to be applied to a function overload. */
public sealed interface RSignatureTypeNormalizedArity {
  /**
   * The type of the matching argument at each parameter index, or union if the parameter is dots
   * and there are multiple arguments that match it.
   */
  ImmutableList<RType<?>> types();

  /** The arguments that match the dots parameter, or an empty list if there is no dots. */
  ImmutableList<RArgumentType> dotArgs();
}

/**
 * This is package-private so we can only construct in {@link
 * RSignatureType#normalizeToMatch(List)}.
 */
record RSignatureTypeNormalizedArityImpl(
    @Override ImmutableList<RType<?>> types, @Override ImmutableList<RArgumentType> dotArgs)
    implements RSignatureTypeNormalizedArity {}
