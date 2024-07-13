/**
 * The {@linkplain org.prlprg.ir IR} type system for {@link org.prlprg.sexp.SEXP SEXP}s
 * specifically.
 *
 * <p>This package contains {@link org.prlprg.ir.type.RType RType}, the type of an {@link
 * org.prlprg.ir.cfg.ISexp ISexp} (runtime {@linkplain org.prlprg.sexp.SEXP R SEXP}), and the
 * associated classes that implement it.
 *
 * <p>This does <i>not</i> contain the effect system, that's in {@link org.prlprg.ir.effect}.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.type;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
