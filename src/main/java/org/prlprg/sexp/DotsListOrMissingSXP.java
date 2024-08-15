package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

/**
 * Literally either an expanded {@code ...} or the missing value.
 *
 * <p>The reason this exists is because allegedly if a function has a {@code ...} parameter and it's
 * empty, it will be the missing value, not an empty list. But maybe not? Either way, {@link
 * DotsListSXP} is a supertype of the empty list, so we must figure out and remove either this class
 * or that relation.
 */
@Immutable
public sealed interface DotsListOrMissingSXP extends ValueOrMissingSXP
    permits DotsListSXP, MissingSXP {}
