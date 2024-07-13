package org.prlprg.ir.cfg;

import javax.annotation.Nullable;

/**
 * Additional information in an {@link ISexp} that is an environment.
 *
 * @param parent Parent environment, if known.
 */
public record EnvAux(@Nullable ISexp parent) {}
