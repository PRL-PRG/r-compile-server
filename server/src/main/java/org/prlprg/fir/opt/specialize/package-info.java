/// Optimizations that replace individual expressions with those that are faster and/or have
/// better types. Reuses analyses and reaches a fixpoint faster than brute-force.
@NullMarked
package org.prlprg.fir.opt.specialize;

import org.jspecify.annotations.NullMarked;
