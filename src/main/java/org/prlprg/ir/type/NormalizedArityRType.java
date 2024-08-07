package org.prlprg.ir.type;

import com.google.common.collect.ImmutableList;
import java.util.List;

/** A list of matched arguments to be applied to a function overload. */
public sealed interface NormalizedArityRType {
  /**
   * The type of the matching argument at each parameter index, or union if the parameter is dots
   * and there are multiple arguments that match it.
   */
  ImmutableList<RType> types();

  /** The arguments that match the dots parameter, or an empty list if there is no dots. */
  ImmutableList<ArgumentRType> dotArgs();
}

/**
 * This is package-private so we can only construct in {@link OverloadRType#normalizeToMatch(List)}.
 */
record NormalizedArityRTypeImpl(
    @Override ImmutableList<RType> types, @Override ImmutableList<ArgumentRType> dotArgs)
    implements NormalizedArityRType {}
