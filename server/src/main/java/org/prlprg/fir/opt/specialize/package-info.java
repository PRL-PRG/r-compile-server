/// Optimizations that replace individual expressions with those that are faster and/or have
/// better types. Reuses analyses and reaches a fixpoint faster than brute-force.
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.fir.opt.specialize;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
