package org.prlprg.bc;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;

import javax.annotation.concurrent.Immutable;
import java.util.Collection;
import java.util.List;
import java.util.function.Function;

/**
 * An array of bytecode instructions, which make up the code of a closure or promise.
 * A complete bytecode is {@link Bc}, which also includes a constant pool.
 */
@Immutable
public final class BcCode extends ForwardingList<BcInstr> {
    final ImmutableList<BcInstr> instrs;

    private BcCode(ImmutableList<BcInstr> instrs) {
        this.instrs = instrs;
    }

    @Override
    protected List<BcInstr> delegate() {
        return instrs;
    }

    /** Create from the raw GNU-R representation, not including the initial version number.
     *
     * @param makePoolIdx A function to create pool indices from raw integers
     */
    static BcCode fromRaw(ImmutableIntArray bytecodes, Function<Integer, ConstPool.Idx> makePoolIdx)
            throws BcFromRawException {
        var builder = new Builder();
        int i = 0;
        while (i < bytecodes.length()) {
            var instrAndI = BcInstr.fromRaw(bytecodes, i, makePoolIdx);
            builder.add(instrAndI.a());
            i = instrAndI.b();
        }
        return builder.build();
    }

    /**
     * A builder class for creating BcArray instances.
     * <p>
     * Not synchronized, so don't use from multiple threads.
     */
    public static class Builder {
        ImmutableList.Builder<BcInstr> builder = ImmutableList.builder();

        /**
         * Create a new builder.
         */
        public Builder() {
        }

        /**
         * Append an instruction.
         */
        public Builder add(BcInstr instr) {
            builder.add(instr);
            return this;
        }

        /**
         * Append instructions.
         */
        public Builder addAll(Collection<? extends BcInstr> c) {
            builder.addAll(c);
            return this;
        }

        /**
         * Finish building the array.
         *
         * @return The array.
         */
        public BcCode build() {
            return new BcCode(builder.build());
        }
    }
}
