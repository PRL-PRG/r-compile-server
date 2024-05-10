package org.prlprg.ir.cfg;

import javax.annotation.Nullable;

/**
 * Additional information in an {@link RValue} that is an environment.
 *
 * @param parent Parent environment, if known.
 */
public record EnvAux(@Nullable RValue parent) {}
