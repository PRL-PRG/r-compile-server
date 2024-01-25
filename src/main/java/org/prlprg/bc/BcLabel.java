package org.prlprg.bc;

import org.prlprg.util.NotImplementedException;

/** A bytecode offset */
public class BcLabel {
    private final int rawOffset;

    /** Creates from an offset in the GNU-R bytecode. */
    public BcLabel(int rawOffset) {
        this.rawOffset = rawOffset;
    }

    /** Returns the new pc after applying this offset.
     *
     * @apiNote It needs a reference to the {@link BcCode} because the GNU-R pc steps over instruction metadata, but we
     * store an array of instructions, so our offsets are different and conversion depends on the specific bytecode.
     * TODO: compute the offset mapping before parsing bytecode instructions, and use it to create {@link BcLabel} with
     *   the correct adjusted offset.
     */
    public int offsetFrom(int pc) {
        throw new NotImplementedException();
    }
}
