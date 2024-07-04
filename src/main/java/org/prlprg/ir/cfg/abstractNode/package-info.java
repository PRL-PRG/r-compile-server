/**
 * An <b>abstract <i>X</i></b> is a {@linkplain org.prlprg.ir.type.lattice.Lattice lattice}
 * representing all possible <i>Xs</i> a particular value might be in any (concrete) interpretation
 * trace.
 *
 * <p>It's used in <a href="https://www.di.ens.fr/~cousot/AI/IntroAbsInt.html">abstract
 * interpretation</a> static analyses.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.cfg.abstractNode;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
