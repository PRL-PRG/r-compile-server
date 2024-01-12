package org.prlprg.bc;

/**
 * Data associated with a bytecode instruction.
 */
public sealed interface BcData {
    record ConstantIdx(int idx) implements BcData {
    }
}
