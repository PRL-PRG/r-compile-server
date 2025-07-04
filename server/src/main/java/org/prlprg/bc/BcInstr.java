package org.prlprg.bc;

import com.google.common.collect.ImmutableMap;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.RecordComponent;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Optional;
import javax.annotation.Nullable;

import org.prlprg.sexp.*;

/**
 * A single bytecode instruction, consists of an operation and arguments. The operation is
 * determined by its subtype, arguments are determined by its fields.
 */
@SuppressWarnings("MissingJavadoc")
@SuppressFBWarnings({"EI_EXPOSE_REP2", "EI_EXPOSE_REP"})
public sealed interface BcInstr {
    /**
     * Every instruction class mapped to its {@linkplain Class#getSimpleName() simple name}.
     */
    @SuppressWarnings("unchecked")
    ImmutableMap<String, Class<? extends BcInstr>> CLASSES =
            Arrays.stream(BcInstr.class.getPermittedSubclasses())
                    .collect(
                            ImmutableMap.toImmutableMap(Class::getSimpleName, c -> (Class<? extends BcInstr>) c));

    /**
     * The instruction's operation.
     */
    BcOp op();

    /**
     * The instruction's labels.
     */
    // FIXME: do a default reflection-based implementation
    default Optional<BcLabel> label() {
        return Optional.empty();
    }

    default int pop() {
        var stackEffect = getClass().getAnnotation(StackEffect.class);
        return stackEffect == null ? 0 : stackEffect.pop();
    }

    default int push() {
        var stackEffect = getClass().getAnnotation(StackEffect.class);
        return stackEffect == null ? 0 : stackEffect.push();
    }

    default Optional<ConstPool.Idx<RegSymSXP>> bindingCell() {
        var cls = getClass();

        if (cls.isRecord()) {
            for (RecordComponent rc : cls.getRecordComponents()) {
                if (rc.isAnnotationPresent(BindingCell.class)) {
                    Method accessor = null;
                    try {
                        accessor = this.getClass().getDeclaredMethod(rc.getName());
                        accessor.setAccessible(true);
                        return Optional.ofNullable((ConstPool.Idx<RegSymSXP>) accessor.invoke(this));
                    } catch (Exception e) {
                        throw new RuntimeException("Unable to access @BindingCell field", e);
                    }
                }
            }
        }

        return Optional.empty();
    }

    default boolean needsRho() {
        return getClass().getAnnotation(NeedsRho.class) != null;
    }

    default Collection<ConstPool.Idx<? extends SEXP>> args() {
        var fields = getClass().getRecordComponents();
        var args = new ArrayList<ConstPool.Idx<? extends SEXP>>();
        for (var field : fields) {
            if (ConstPool.Idx.class.isAssignableFrom(field.getType())) {
                try {
                    var value = field.getAccessor().invoke(this);
                    args.add((ConstPool.Idx<? extends SEXP>) value);
                } catch (ReflectiveOperationException e) {
                    throw new RuntimeException(e);
                }
            }
        }
        return args;
    }

    @StackEffect(pop = 1)
    record Return() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.RETURN;
        }
    }

    record Goto(@LabelName("") BcLabel dest) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GOTO;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(dest);
        }
    }

    @NeedsRho
    @StackEffect(pop = 1)
    record BrIfNot(ConstPool.Idx<LangSXP> ast, @LabelName("ifFalse") BcLabel dest)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.BRIFNOT;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(dest);
        }
    }

    @StackEffect(pop = 1)
    record Pop() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.POP;
        }
    }

    @StackEffect(pop = 1, push = 2)
    record Dup() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DUP;
        }
    }

    record PrintValue() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PRINTVALUE;
        }
    }

    record StartLoopCntxt(boolean isForLoop, @LabelName("loopEnd") BcLabel end) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTLOOPCNTXT;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(end);
        }
    }

    record EndLoopCntxt(boolean isForLoop) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ENDLOOPCNTXT;
        }
    }

    record DoLoopNext() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOLOOPNEXT;
        }
    }

    record DoLoopBreak() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOLOOPBREAK;
        }
    }

    @StackEffect(pop = 1, push = 3)
    @NeedsRho
    record StartFor(
            ConstPool.Idx<LangSXP> ast,
            @BindingCell ConstPool.Idx<RegSymSXP> elemName,
            @LabelName("forStep") BcLabel step)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTFOR;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(step);
        }
    }

    @StackEffect(pop = 3, push = 3)
    @NeedsRho
    record StepFor(@LabelName("forBody") BcLabel body) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STEPFOR;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(body);
        }
    }

    @StackEffect(pop = 3, push = 1)
    @NeedsRho
    record EndFor() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ENDFOR;
        }
    }

    record SetLoopVal() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SETLOOPVAL;
        }
    }

    record Invisible() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.INVISIBLE;
        }
    }

    @StackEffect(push = 1)
    record LdConst(ConstPool.Idx<SEXP> constant) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDCONST;
        }
    }

    @StackEffect(push = 1)
    record LdNull() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDNULL;
        }
    }

    @StackEffect(push = 1)
    record LdTrue() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDTRUE;
        }
    }

    @StackEffect(push = 1)
    record LdFalse() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LDFALSE;
        }
    }

    @StackEffect(push = 1)
    @NeedsRho
    record GetVar(@BindingCell ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETVAR;
        }
    }

    record DdVal(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DDVAL;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record SetVar(@BindingCell ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SETVAR;
        }
    }

    @NeedsRho
    @StackEffect(push = 3)
    record GetFun(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETFUN;
        }
    }

    record GetGlobFun(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETGLOBFUN;
        }
    }

    record GetSymFun(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETSYMFUN;
        }
    }

    @StackEffect(push = 3)
    record GetBuiltin(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETBUILTIN;
        }
    }

    @StackEffect(push = 3)
    record GetIntlBuiltin(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETINTLBUILTIN;
        }
    }

    @StackEffect(pop = 1, push = 3)
    record CheckFun() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CHECKFUN;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 3)
            /** {@code code} is usually but not always bytecode (see eval.c). */
    record MakeProm(ConstPool.Idx<SEXP> code) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MAKEPROM;
        }
    }

    // It accesses the last three elements of the stack: call, args head and args tail
    @StackEffect(pop = 3, push = 3)
    record DoMissing() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOMISSING;
        }
    }

    @StackEffect(pop = 3, push = 3)
    record SetTag(@Nullable ConstPool.Idx<StrOrRegSymSXP> tag) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SETTAG;
        }
    }

    @StackEffect(pop = 3, push = 3)
    @NeedsRho
    record DoDots() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DODOTS;
        }
    }

    @StackEffect(pop = 3, push = 2)
    record PushArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHARG;
        }
    }

    @StackEffect(pop = 2, push = 2)
    record PushConstArg(ConstPool.Idx<SEXP> constant) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHCONSTARG;
        }
    }

    @StackEffect(pop = 2, push = 2)
    record PushNullArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHNULLARG;
        }
    }

    @StackEffect(pop = 2, push = 2)
    record PushTrueArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHTRUEARG;
        }
    }

    @StackEffect(pop = 2, push = 2)
    record PushFalseArg() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.PUSHFALSEARG;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record Call(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALL;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record CallBuiltin(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALLBUILTIN;
        }
    }

    @NeedsRho
    @StackEffect(push = 1)
    record CallSpecial(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.CALLSPECIAL;
        }
    }

    @NeedsRho
    @StackEffect(push = 1)
    record MakeClosure(ConstPool.Idx<VecSXP> arg) implements BcInstr {
        public ListSXP formals(ConstPool pool) {
            return (ListSXP) pool.get(this.arg).get(0);
        }

        public SEXP body(ConstPool pool) {
            return pool.get(arg).get(1);
        }

        public SEXP srcRef(ConstPool pool) {
            var formalsBodyAndMaybeSrcRef = pool.get(this.arg);
            return formalsBodyAndMaybeSrcRef.size() < 3 ? SEXPs.NULL : formalsBodyAndMaybeSrcRef.get(2);
        }

        @Override
        public BcOp op() {
            return BcOp.MAKECLOSURE;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record UMinus(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.UMINUS;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record UPlus(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.UPLUS;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Add(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ADD;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Sub(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SUB;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Mul(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MUL;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Div(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DIV;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Expt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.EXPT;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record Sqrt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SQRT;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record Exp(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.EXP;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Eq(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.EQ;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Ne(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.NE;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Lt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LT;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Le(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LE;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Ge(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GE;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Gt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GT;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record And(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.AND;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record Or(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.OR;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record Not(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.NOT;
        }
    }

    record DotsErr() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOTSERR;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 4)
    record StartAssign(@BindingCell ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTASSIGN;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record EndAssign(@BindingCell ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ENDASSIGN;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 4)
    record StartSubset(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubset") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBSET;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @StackEffect(pop = 4, push = 1)
    @NeedsRho
    record DfltSubset() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DFLTSUBSET;
        }
    }

    @StackEffect(pop = 2, push = 5)
    @NeedsRho
    record StartSubassign(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubassign") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBASSIGN;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @StackEffect(pop = 5, push = 1)
    @NeedsRho
    record DfltSubassign() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DFLTSUBASSIGN;
        }
    }

    record StartC(ConstPool.Idx<LangSXP> ast, @LabelName("afterC") BcLabel after) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTC;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    record DfltC() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DFLTC;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 4)
    record StartSubset2(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubset2") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBSET2;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @StackEffect(pop = 4, push = 1)
    @NeedsRho
    record DfltSubset2() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DFLTSUBSET2;
        }
    }

    @StackEffect(pop = 2, push = 5)
    @NeedsRho
    record StartSubassign2(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubassign2") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBASSIGN2;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @StackEffect(pop = 5, push = 1)
    @NeedsRho
    record DfltSubassign2() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DFLTSUBASSIGN2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record Dollar(ConstPool.Idx<LangSXP> ast, ConstPool.Idx<RegSymSXP> member) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOLLAR;
        }
    }

    record DollarGets(ConstPool.Idx<LangSXP> ast, ConstPool.Idx<RegSymSXP> member)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOLLARGETS;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsNull() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISNULL;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsLogical() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISLOGICAL;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsInteger() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISINTEGER;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsDouble() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISDOUBLE;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsComplex() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISCOMPLEX;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsCharacter() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISCHARACTER;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsSymbol() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISSYMBOL;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsObject() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISOBJECT;
        }
    }

    @StackEffect(push = 1, pop = 1)
    record IsNumeric() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ISNUMERIC;
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
            // XXX: call-idx can be negative? We make TypedIdx null to support this case,
            // but not sure if
            // it's possible.
            // This applies to every other `@Nullable call` in this file.
    record VecSubset(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.VECSUBSET;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record MatSubset(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MATSUBSET;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record VecSubassign(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.VECSUBASSIGN;
        }
    }

    @NeedsRho
    @StackEffect(pop = 4, push = 1)
    record MatSubassign(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MATSUBASSIGN;
        }
    }

    @StackEffect(pop = 1, push = 1)
    record And1st(ConstPool.Idx<LangSXP> ast, @LabelName("afterAnd") BcLabel shortCircuit)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.AND1ST;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(shortCircuit);
        }
    }

    @StackEffect(pop = 2, push = 1)
    record And2nd(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.AND2ND;
        }
    }

    @StackEffect(pop = 1, push = 1)
    record Or1st(ConstPool.Idx<LangSXP> ast, @LabelName("afterOr") BcLabel shortCircuit)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.OR1ST;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(shortCircuit);
        }
    }

    @StackEffect(pop = 2, push = 1)
    record Or2nd(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.OR2ND;
        }
    }

    @NeedsRho
    @StackEffect(push = 1)
    record GetVarMissOk(@BindingCell ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETVAR_MISSOK;
        }
    }

    record DdValMissOk(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DDVAL_MISSOK;
        }
    }

    record Visible() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.VISIBLE;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record SetVar2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SETVAR2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 4)
    record StartAssign2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTASSIGN2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record EndAssign2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.ENDASSIGN2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 5, push = 1)
    record SetterCall(ConstPool.Idx<LangSXP> ast, ConstPool.Idx<SEXP> valueExpr) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SETTER_CALL;
        }
    }

    @NeedsRho
    @StackEffect(pop = 4, push = 2)
    record GetterCall(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.GETTER_CALL;
        }
    }

    /**
     * See eval.c for why this isn't just a regular swap instruction.
     */
    @StackEffect(pop = 3, push = 3)
    record SpecialSwap() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SWAP;
        }
    }

    @StackEffect(pop = 2, push = 3)
    record Dup2nd() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DUP2ND;
        }
    }

    /**
     * The OP_SWITCH instruction.
     *
     * @param ast
     * @param names        {@code null} represents {@code NilSXP}
     * @param chrLabelsIdx {@code null} represents {@code NilSXP}
     * @param numLabelsIdx {@code null} represents {@code NilSXP}
     */
    record Switch(
            ConstPool.Idx<LangSXP> ast,
            @Nullable ConstPool.Idx<StrSXP> names,
            @Nullable ConstPool.Idx<IntSXP> chrLabelsIdx,
            @Nullable ConstPool.Idx<IntSXP> numLabelsIdx)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SWITCH;
        }
    }

    record ReturnJmp() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.RETURNJMP;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record StartSubsetN(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubsetN") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBSET_N;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 2)
    record StartSubassignN(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubassignN") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBASSIGN_N;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 1)
    record VecSubset2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.VECSUBSET2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record MatSubset2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MATSUBSET2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 3, push = 1)
    record VecSubassign2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.VECSUBASSIGN2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 4, push = 1)
    record MatSubassign2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MATSUBASSIGN2;
        }
    }

    @NeedsRho
    @StackEffect(pop = 1, push = 1)
    record StartSubset2N(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubset2N") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBSET2_N;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    @NeedsRho
    @StackEffect(pop = 2, push = 2)
    record StartSubassign2N(ConstPool.Idx<LangSXP> ast, @LabelName("afterSubassign2N") BcLabel after)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.STARTSUBASSIGN2_N;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(after);
        }
    }

    ///
    /// The SUBSET_N instruction.
    ///
    /// Stack effect:
    ///  - pops the vector and a variable number of elements from the stack determined by the value of
    // [[n]]

    ///  - pushes the result
    ///
    /// @param ast
    /// @param n
    @NeedsRho
    @StackEffect(push = 1)
    record SubsetN(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SUBSET_N;
        }
    }

    ///
    /// The SUBSET2_N instruction.
    ///
    /// Stack effect:
    ///  - pops the vector and a variable number of elements from the stack determined by the value of
    // [[n]]

    ///  - pushes the result
    ///
    /// @param ast
    /// @param n
    @NeedsRho
    @StackEffect(push = 1)
    record Subset2N(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SUBSET2_N;
        }
    }

    ///
    /// The SUBASSIGN_N instruction.
    ///
    /// Stack effect:
    ///  - pops the vector and a variable number of elements from the stack determined by the value of
    // [[n]] and rhs

    ///  - pushes the result
    ///
    /// @param ast
    /// @param n
    @NeedsRho
    @StackEffect(push = 1)
    record SubassignN(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SUBASSIGN_N;
        }
    }

    ///
    /// The SUBASSIGN2_N instruction.
    ///
    /// Stack effect:
    ///  - pops the vector and a variable number of elements from the stack determined by the value of
    // [[n]] and rhs

    ///  - pushes the result
    ///
    /// @param ast
    /// @param n
    @NeedsRho
    @StackEffect(push = 1)
    record Subassign2N(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SUBASSIGN2_N;
        }
    }

    @StackEffect(pop = 1, push = 1)
    @NeedsRho
    record Log(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LOG;
        }
    }

    @StackEffect(pop = 2, push = 1)
    @NeedsRho
    record LogBase(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.LOGBASE;
        }
    }

    @StackEffect(pop = 1, push = 1)
    @NeedsRho
    record Math1(ConstPool.Idx<LangSXP> ast, int funId) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.MATH1;
        }
    }

    record DotCall(ConstPool.Idx<LangSXP> ast, int numArgs) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DOTCALL;
        }
    }

    @StackEffect(push = 1, pop = 2)
    @NeedsRho
    record Colon(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.COLON;
        }
    }

    @StackEffect(push = 1, pop = 1)
    @NeedsRho
    record SeqAlong(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SEQALONG;
        }
    }

    @StackEffect(push = 1, pop = 1)
    @NeedsRho
    record SeqLen(ConstPool.Idx<LangSXP> ast) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.SEQLEN;
        }
    }

    record BaseGuard(ConstPool.Idx<LangSXP> expr, @LabelName("baseGuardAfter") BcLabel ifFail)
            implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.BASEGUARD;
        }

        @Override
        public Optional<BcLabel> label() {
            return Optional.of(ifFail);
        }
    }

    record IncLnk() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.INCLNK;
        }
    }

    record DecLnk() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DECLNK;
        }
    }

    record DeclnkN(int n) implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DECLNK_N;
        }
    }

    record IncLnkStk() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.INCLNKSTK;
        }
    }

    record DecLnkStk() implements BcInstr {
        @Override
        public BcOp op() {
            return BcOp.DECLNKSTK;
        }
    }
}
