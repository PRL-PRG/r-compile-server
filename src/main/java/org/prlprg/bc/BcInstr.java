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
        BcOp op;
        try {
            op = BcOp.valueOf(bytecodes.get(i++));
        } catch (IllegalArgumentException e) {
            throw new BcFromRawException("invalid opcode " + bytecodes.get(i - 1));
        }

        var instr = switch (op) {
            case LDNULL -> new LdNull();
            case LDTRUE -> new LdTrue();
            case LDFALSE -> new LdFalse();
            case LDCONST -> new LdConst(makePoolIdx.apply(bytecodes.get(i++)));
            case GETVAR -> new GetVar(makePoolIdx.apply(bytecodes.get(i++)));
            case GETFUN -> new GetFun(makePoolIdx.apply(bytecodes.get(i++)));
            case CALL -> new Call(makePoolIdx.apply(bytecodes.get(i++)));
            case CALLBUILTIN -> new CallBuiltin(makePoolIdx.apply(bytecodes.get(i++)));
            case DOMISSING -> new DoMissing();
            case PUSHNULLARG -> new PushNullArg();
            case PUSHTRUEARG -> new PushTrueArg();
            case PUSHFALSEARG -> new PushFalseArg();
            case PUSHCONSTARG -> new PushConstArg(makePoolIdx.apply(bytecodes.get(i++)));
            case PUSHARG -> new PushArg();
            case POP -> new Pop();
            case MAKEPROM -> new MakeProm(makePoolIdx.apply(bytecodes.get(i++)));
            case RETURN -> new Return();
            case ADD -> new Add(makePoolIdx.apply(bytecodes.get(i++)));
            case BASEGUARD -> new BaseGuard(makePoolIdx.apply(bytecodes.get(i++)), bytecodes.get(i++));
            case GETBUILTIN -> new GetBuiltin(makePoolIdx.apply(bytecodes.get(i++)));
            case BCMISMATCH -> throw new BcFromRawException("invalid opcode " + BcOp.BCMISMATCH.value());
            default -> throw new NotImplementedException(op);
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

    record GetVar(ConstPool.Idx idx) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETVAR;
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

    record Call(ConstPool.Idx call) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALL;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(call);
        }
    }

    record CallBuiltin(ConstPool.Idx call) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALLBUILTIN;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(call);
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

    record PushArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHARG;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
        }
    }

    record Pop() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.POP;
        }

        @Override
        public BcData.None data() {
            return new BcData.None();
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

    record Add(ConstPool.Idx call) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ADD;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(call);
        }
    }

    // TODO: Make label an enum
    record BaseGuard(ConstPool.Idx expr, int label) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.BASEGUARD;
        }

        @Override
        public BcData.BaseGuard data() {
            return new BcData.BaseGuard(expr, label);
        }
    }

    record GetBuiltin(ConstPool.Idx symbol) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETBUILTIN;
        }

        @Override
        public BcData.ConstantIdx data() {
            return new BcData.ConstantIdx(symbol);
        }
    }
}
