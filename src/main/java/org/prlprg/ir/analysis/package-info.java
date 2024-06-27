/**
 * Data-structures which compute and cache the result of control-flow and data-flow analyses.
 *
 * <p>{@link org.prlprg.ir.analysis.PropertiesComputer PropertiesComputer} is also here because
 * properties are cached in code objects, but in a different way than the other analyses (which are
 * all for and cached in {@link org.prlprg.ir.cfg.CFG CFG}s).
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.analysis;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
