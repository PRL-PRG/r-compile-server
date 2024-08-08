/**
 * The type system for {@linkplain org.prlprg.ir IR} {@link org.prlprg.ir.cfg.Node Node}s.
 *
 * <p>This package contains {@link org.prlprg.ir.type.RType RType}, which is an "enhanced" {@link
 * java.lang.Class Class}, in that it supports {@linkplain org.prlprg.ir.type.lattice.Lattice
 * lattice operations}, helpers for {@link org.prlprg.sexp.SEXP SEXP} types like {@link
 * org.prlprg.ir.type.sexp.RSexpType#isPromise() #isPromise()}, and is more-fine grained (can
 * represent generics, vectors of specific lengths, etc.)
 *
 * <p>This doesn't contain the effect system, that's in {@link org.prlprg.ir.effect}.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir.type;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
