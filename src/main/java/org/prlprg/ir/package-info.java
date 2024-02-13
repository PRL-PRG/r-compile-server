/**
 * <a href="https://en.wikipedia.org/wiki/Static_single-assignment_form">SSA-form</a> <a
 * href="https://en.wikipedia.org/wiki/Intermediate_representation">Intermediate representation</a>.
 *
 * <p>This IR contains instructions corresponding to GNU-R bytecode and is a superset of <a
 * href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR</a>.
 *
 * <p>The CFG has a lot of invariants which can't be enforced at compile-time, and gets put into
 * invalid states during passes, so we rely heavily on runtime checks which run after each pass, as
 * well as those which may run after smaller transactions which temporarily rely on invalid state.
 */
@ParametersAreNonnullByDefault
@FieldsAreNonNullByDefault
@ReturnTypesAreNonNullByDefault
package org.prlprg.ir;

import javax.annotation.ParametersAreNonnullByDefault;
import org.prlprg.util.FieldsAreNonNullByDefault;
import org.prlprg.util.ReturnTypesAreNonNullByDefault;
