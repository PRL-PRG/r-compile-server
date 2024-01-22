package org.prlprg.bc;

import javax.annotation.concurrent.Immutable;

/**
 * Data associated with a bytecode instruction.
 */
@Immutable
public sealed interface BcData {
    record ConstantIdx(ConstPool.Idx idx) implements BcData {
    }

    /** The instruction has no associated data. */
    record None() implements BcData {
    }

    // TODO: Make label an enum
    record BaseGuard(ConstPool.Idx expr, int label) implements BcData {
    }
}
