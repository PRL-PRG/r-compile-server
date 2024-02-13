/**
 * <a href="https://en.wikipedia.org/wiki/Static_single-assignment_form">SSA-form</a> <a
 * href="https://en.wikipedia.org/wiki/Intermediate_representation">Intermediate representation</a>.
 *
 * <p>This IR contains instructions corresponding to GNU-R bytecode and is a superset of <a
 * href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR</a>. The {@link
 * CFG} and {@link BB} classes contain a type parameter for their node types, and the {@link Node}
 * interface contains nested sub-interfaces, so that you can refine the IR to a subset (e.g. only
 * PIR instructions) and it gets enforced at compile-time and runtime.
 *
 * <p>{@link BB}s and {@link CFG}s are mutated in-place, {@link Node}s are immutable and should be
 * copied and replaced via {@link CFG#replace} if you need to modify them.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
