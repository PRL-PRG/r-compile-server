/**
 * IR code containers: {@linkplain org.prlprg.ir.closure.Closure closure}, {@linkplain
 * org.prlprg.ir.closure.ClosureVersion closure version} and {@linkplain
 * org.prlprg.ir.closure.Promise promise}.
 *
 * <p>Also contains data-structures used by these containers, including preconditions (e.g. {@link
 * org.prlprg.ir.closure.ClosureVersion.CallContext}), and postconditions (e.g. {@link
 * org.prlprg.ir.closure.ClosureVersion.Properties}).
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.closure;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
