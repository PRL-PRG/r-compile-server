package org.prlprg.bc;

import com.google.common.primitives.ImmutableIntArray;
import org.prlprg.util.NotImplementedException;
import org.prlprg.util.Pair;

import javax.annotation.concurrent.Immutable;
import java.util.function.Function;

/**
 * A single bytecode instruction.
 */
@Immutable
public sealed interface BcInstr {
    BcOp op();
    BcData data();

    /** Create from the raw GNU-R representation.
     *
     * @param bytecodes The full list of instruction bytecodes including ones before and after this one
     * @param i The index in the list where this instruction starts
     * @param makePoolIdx A function to create pool indices from raw integers
     * @return The instruction and the index in the list where the next instruction starts
     */
    static Pair<BcInstr, Integer> fromRaw(ImmutableIntArray bytecodes, int i, Function<Integer, ConstPool.Idx> makePoolIdx) {
        var op = BcOp.valueOf(bytecodes.get(i++));
        var instr = switch (op) {
            case LDNULL -> new LdNull();
            case LDTRUE -> new LdTrue();
            case LDFALSE -> new LdFalse();
            case LDCONST -> new LdConst(makePoolIdx.apply(bytecodes.get(i++)));
            case GETFUN -> new GetFun(makePoolIdx.apply(bytecodes.get(i++)));
            case CALL -> new Call(makePoolIdx.apply(bytecodes.get(i++)));
            case DOMISSING -> new DoMissing();
            case PUSHNULLARG -> new PushNullArg();
            case PUSHTRUEARG -> new PushTrueArg();
            case PUSHFALSEARG -> new PushFalseArg();
            case PUSHCONSTARG -> new PushConstArg(makePoolIdx.apply(bytecodes.get(i++)));
            case MAKEPROM -> new MakeProm(makePoolIdx.apply(bytecodes.get(i++)));
            case RETURN -> new Return();
            case ADD -> new Add();
            default -> throw new NotImplementedException();
        };
        return new Pair<>(instr, i);
    }

    record LdNull() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDNULL;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record LdTrue() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDTRUE;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record LdFalse() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDFALSE;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record LdConst(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDCONST;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(idx);
        }
    }

    record GetFun(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETFUN;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(idx);
        }
    }

    record Call(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALL;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(idx);
        }
    }

    record DoMissing() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOMISSING;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record PushNullArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHNULLARG;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record PushTrueArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHTRUEARG;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record PushFalseArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHFALSEARG;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record PushConstArg(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHCONSTARG;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(idx);
        }
    }

    record MakeProm(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MAKEPROM;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(idx);
        }
    }

    record Return() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.RETURN;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record Add() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ADD;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }
}
