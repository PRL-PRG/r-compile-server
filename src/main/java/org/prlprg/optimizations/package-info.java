/**
 * {@linkplain org.prlprg.ir IR} optimizations, specifically for {@link org.prlprg.ir.cfg.CFG CFG}.
 *
 * <p>The entry-point to this is {@link org.prlprg.optimizations.Optimizer Optimizer}. The
 * optimizations themselves are package-private, since they aren't used outside of the optimizer.
 *
 * <p>IR analysis are in {@link org.prlprg.ir.analysis}, since they are also cached within the
 * {@link org.prlprg.ir.cfg.CFG CFG}. The "cleanup" pass is in {@link
 * org.prlprg.ir.cfg.CFG#cleanup()}, and the "verify" pass is in {@link
 * org.prlprg.ir.cfg.CFG#verify()}.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.optimizations;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
