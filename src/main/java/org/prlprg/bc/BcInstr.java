package org.prlprg.bc;

import javax.annotation.Nullable;

/**
 * A single bytecode instruction.
 */
public record BcInstr(BcOp op, @Nullable BcData data) {
}
