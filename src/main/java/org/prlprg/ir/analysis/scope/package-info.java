/**
 * PIR's scope analysis is so complicated, it has its own package (although really we can do this
 * for any analysis with multiple non-nested classes, but most only have one).
 *
 * <p>This package also contains a generic implementation of non-trivial <a
 * href="https://www.di.ens.fr/~cousot/AI/IntroAbsInt.html">abstract interpretation</a>, in case we
 * have other analyses that require it.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.analysis.scope;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
