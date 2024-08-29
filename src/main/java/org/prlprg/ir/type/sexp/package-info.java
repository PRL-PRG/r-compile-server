/**
 * The {@linkplain org.prlprg.ir IR} type system for {@link org.prlprg.sexp.SEXP SEXP}s
 * specifically.
 *
 * <p>This package contains {@link org.prlprg.ir.type.RSexpType RSexpType}, the {@linkplain
 * org.prlprg.ir.cfg.Node#type() type} of a {@link org.prlprg.ir.cfg.Node Node}{@code <}{@link
 * org.prlprg.sexp.SEXP SEXP}{@code >} (IR node representing an R SEXP at runtime), and the
 * associated classes that implement it.
 *
 * <p>{@link org.prlprg.ir.type} contains {@link org.prlprg.ir.type.RType RType}, a superclass of
 * {@link org.prlprg.ir.type.RSexpType RSexpType} that also encompasses unboxed (non-SEXP) runtime
 * values.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.type.sexp;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
