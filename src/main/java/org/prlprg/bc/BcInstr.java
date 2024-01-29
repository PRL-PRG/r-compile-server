package org.prlprg.bc;

import com.google.common.primitives.ImmutableIntArray;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.sexp.*;
import org.prlprg.util.Either;
import org.prlprg.util.Pair;

/**
 * A single bytecode instruction, consists of an operation and arguments. The operation is
 * determined by its subtype, arguments are determined by its fields.
 */
@Immutable
public sealed interface BcInstr {
  /** The instruction's operation. */
  BcOp op();

  record Return() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.RETURN;
    }
  }

  record Goto(BcLabel label) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GOTO;
    }
  }

  record BrIfNot(ConstPool.TypedIdx<LangSXP> ast, BcLabel label) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.BRIFNOT;
    }
  }

  record Pop() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.POP;
    }
  }

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

  record StartLoopCntxt(boolean isForLoop, BcLabel break_) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTLOOPCNTXT;
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

  record StartFor(
      ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> elemName, BcLabel end)
      implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTFOR;
    }
  }

  record StepFor(BcLabel end) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STEPFOR;
    }
  }

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

  record LdConst(ConstPool.Idx constant) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LDCONST;
    }
  }

  record LdNull() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LDNULL;
    }
  }

  record LdTrue() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LDTRUE;
    }
  }

  record LdFalse() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LDFALSE;
    }
  }

  record GetVar(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETVAR;
    }
  }

  record DdVal(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DDVAL;
    }
  }

  record SetVar(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETVAR;
    }
  }

  record GetFun(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETFUN;
    }
  }

  record GetGlobFun(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETGLOBFUN;
    }
  }

  record GetSymFun(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETSYMFUN;
    }
  }

  record GetBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETBUILTIN;
    }
  }

  record GetIntlBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETINTLBUILTIN;
    }
  }

  record CheckFun() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CHECKFUN;
    }
  }

  /** {@code code} is usually but not always bytecode (see eval.c). */
  record MakeProm(ConstPool.Idx code) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MAKEPROM;
    }
  }

  record DoMissing() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DOMISSING;
    }
  }

  record SetTag(@Nullable ConstPool.TypedIdx<StrOrRegSymSXP> tag) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETTAG;
    }
  }

  record DoDots() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DODOTS;
    }
  }

  record PushArg() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.PUSHARG;
    }
  }

  record PushConstArg(ConstPool.Idx constant) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.PUSHCONSTARG;
    }
  }

  record PushNullArg() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.PUSHNULLARG;
    }
  }

  record PushTrueArg() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.PUSHTRUEARG;
    }
  }

  record PushFalseArg() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.PUSHFALSEARG;
    }
  }

  record Call(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALL;
    }
  }

  record CallBuiltin(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALLBUILTIN;
    }
  }

  record CallSpecial(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALLSPECIAL;
    }
  }

  record MakeClosure(ConstPool.TypedIdx<VecSXP> formalsBodyAndMaybeSrcRef) implements BcInstr {
    ListSXP formals(ConstPool pool) {
      return (ListSXP) pool.get(this.formalsBodyAndMaybeSrcRef).get(0);
    }

    SEXP body(ConstPool pool) {
      return pool.get(formalsBodyAndMaybeSrcRef).get(1);
    }

    SEXP srcRef(ConstPool pool) {
      var formalsBodyAndMaybeSrcRef = pool.get(this.formalsBodyAndMaybeSrcRef);
      return formalsBodyAndMaybeSrcRef.size() < 3 ? SEXPs.NULL : formalsBodyAndMaybeSrcRef.get(2);
    }

    @Override
    public BcOp op() {
      return BcOp.MAKECLOSURE;
    }
  }

  record UMinus(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.UMINUS;
    }
  }

  record UPlus(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.UPLUS;
    }
  }

  record Add(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ADD;
    }
  }

  record Sub(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUB;
    }
  }

  record Mul(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MUL;
    }
  }

  record Div(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DIV;
    }
  }

  record Expt(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EXPT;
    }
  }

  record Sqrt(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SQRT;
    }
  }

  record Exp(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EXP;
    }
  }

  record Eq(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EQ;
    }
  }

  record Ne(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.NE;
    }
  }

  record Lt(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LT;
    }
  }

  record Le(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LE;
    }
  }

  record Ge(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GE;
    }
  }

  record Gt(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GT;
    }
  }

  record And(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND;
    }
  }

  record Or(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR;
    }
  }

  record Not(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
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

  record StartAssign(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN;
    }
  }

  record EndAssign(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN;
    }
  }

  record StartSubset(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET;
    }
  }

  record DfltSubset() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBSET;
    }
  }

  record StartSubassign(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN;
    }
  }

  record DfltSubassign() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBASSIGN;
    }
  }

  record StartC(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTC;
    }
  }

  record DfltC() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DFLTC;
    }
  }

  record StartSubset2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET2;
    }
  }

  record DfltSubset2() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBSET2;
    }
  }

  record StartSubassign2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN2;
    }
  }

  record DfltSubassign2() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBASSIGN2;
    }
  }

  record Dollar(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member)
      implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DOLLAR;
    }
  }

  record DollarGets(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member)
      implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DOLLARGETS;
    }
  }

  record IsNull() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISNULL;
    }
  }

  record IsLogical() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISLOGICAL;
    }
  }

  record IsInteger() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISINTEGER;
    }
  }

  record IsDouble() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISDOUBLE;
    }
  }

  record IsComplex() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISCOMPLEX;
    }
  }

  record IsCharacter() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISCHARACTER;
    }
  }

  record IsSymbol() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISSYMBOL;
    }
  }

  record IsObject() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISOBJECT;
    }
  }

  record IsNumeric() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ISNUMERIC;
    }
  }

  // ???: call-idx can be negative? We make TypedIdx null to support this case, but not sure if
  // it's possible.
  //   This applies to every other `@Nullable call` in this file.
  record VecSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET;
    }
  }

  record MatSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET;
    }
  }

  record VecSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN;
    }
  }

  record MatSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN;
    }
  }

  record And1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND1ST;
    }
  }

  record And2nd(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND2ND;
    }
  }

  record Or1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR1ST;
    }
  }

  record Or2nd(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR2ND;
    }
  }

  record GetVarMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETVAR_MISSOK;
    }
  }

  record DdValMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
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

  record SetVar2(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETVAR2;
    }
  }

  record StartAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN2;
    }
  }

  record EndAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN2;
    }
  }

  record SetterCall(ConstPool.TypedIdx<LangSXP> ast, ConstPool.Idx valueExpr) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETTER_CALL;
    }
  }

  record GetterCall(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETTER_CALL;
    }
  }

  /** See eval.c for why this isn't just a regular swap instruction. */
  record SpecialSwap() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SWAP;
    }
  }

  record Dup2nd() implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DUP2ND;
    }
  }

  record Switch(
      ConstPool.TypedIdx<LangSXP> ast,
      @Nullable Either<ConstPool.TypedIdx<StrSXP>, ConstPool.TypedIdx<NilSXP>> names,
      @Nullable ConstPool.TypedIdx<IntSXP> cOffsets,
      @Nullable ConstPool.TypedIdx<IntSXP> iOffsets)
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

  record StartSubsetN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET_N;
    }
  }

  record StartSubassignN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN_N;
    }
  }

  record VecSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET2;
    }
  }

  record MatSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET2;
    }
  }

  record VecSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN2;
    }
  }

  record MatSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN2;
    }
  }

  record StartSubset2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET2_N;
    }
  }

  record StartSubassign2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN2_N;
    }
  }

  record SubsetN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBSET_N;
    }
  }

  record Subset2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBSET2_N;
    }
  }

  record SubassignN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN_N;
    }
  }

  record Subassign2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN2_N;
    }
  }

  record Log(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LOG;
    }
  }

  record LogBase(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LOGBASE;
    }
  }

  record Math1(ConstPool.TypedIdx<LangSXP> ast, int funId) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATH1;
    }
  }

  record DotCall(ConstPool.TypedIdx<LangSXP> ast, int numArgs) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DOTCALL;
    }
  }

  record Colon(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.COLON;
    }
  }

  record SeqAlong(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SEQALONG;
    }
  }

  record SeqLen(ConstPool.TypedIdx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SEQLEN;
    }
  }

  record BaseGuard(ConstPool.TypedIdx<LangSXP> expr, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.BASEGUARD;
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

class BcInstrs {
  /**
   * Create from the raw GNU-R representation.
   *
   * @param bytecodes The full list of instruction bytecodes including ones before and after this
   *     one
   * @param i The index in the list where this instruction starts
   * @param makePoolIdx A function to create pool indices from raw integers
   * @return The instruction and the index in the list where the next instruction starts
   * @apiNote This has to be in a separate class because it's package-private but interface methods
   *     are public.
   */
  static Pair<BcInstr, Integer> fromRaw(
      ImmutableIntArray bytecodes, int i, ConstPool.MakeIdx makePoolIdx) {
    BcOp op;
    try {
      op = BcOp.valueOf(bytecodes.get(i++));
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (instruction) " + bytecodes.get(i - 1));
    }

    try {
      var instr =
          switch (op) {
            case BCMISMATCH ->
                throw new BcFromRawException("invalid opcode " + BcOp.BCMISMATCH.value());
            case RETURN -> new BcInstr.Return();
            case GOTO -> new BcInstr.Goto(new BcLabel(bytecodes.get(i++)));
            case BRIFNOT ->
                new BcInstr.BrIfNot(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case POP -> new BcInstr.Pop();
            case DUP -> new BcInstr.Dup();
            case PRINTVALUE -> new BcInstr.PrintValue();
            case STARTLOOPCNTXT ->
                new BcInstr.StartLoopCntxt(
                    bytecodes.get(i++) != 0, new BcLabel(bytecodes.get(i++)));
            case ENDLOOPCNTXT -> new BcInstr.EndLoopCntxt(bytecodes.get(i++) != 0);
            case DOLOOPNEXT -> new BcInstr.DoLoopNext();
            case DOLOOPBREAK -> new BcInstr.DoLoopBreak();
            case STARTFOR ->
                new BcInstr.StartFor(
                    makePoolIdx.lang(bytecodes.get(i++)),
                    makePoolIdx.sym(bytecodes.get(i++)),
                    new BcLabel(bytecodes.get(i++)));
            case STEPFOR -> new BcInstr.StepFor(new BcLabel(bytecodes.get(i++)));
            case ENDFOR -> new BcInstr.EndFor();
            case SETLOOPVAL -> new BcInstr.SetLoopVal();
            case INVISIBLE -> new BcInstr.Invisible();
            case LDCONST -> new BcInstr.LdConst(makePoolIdx.any(bytecodes.get(i++)));
            case LDNULL -> new BcInstr.LdNull();
            case LDTRUE -> new BcInstr.LdTrue();
            case LDFALSE -> new BcInstr.LdFalse();
            case GETVAR -> new BcInstr.GetVar(makePoolIdx.sym(bytecodes.get(i++)));
            case DDVAL -> new BcInstr.DdVal(makePoolIdx.sym(bytecodes.get(i++)));
            case SETVAR -> new BcInstr.SetVar(makePoolIdx.sym(bytecodes.get(i++)));
            case GETFUN -> new BcInstr.GetFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETGLOBFUN -> new BcInstr.GetGlobFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETSYMFUN -> new BcInstr.GetSymFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETBUILTIN -> new BcInstr.GetBuiltin(makePoolIdx.sym(bytecodes.get(i++)));
            case GETINTLBUILTIN -> new BcInstr.GetIntlBuiltin(makePoolIdx.sym(bytecodes.get(i++)));
            case CHECKFUN -> new BcInstr.CheckFun();
            case MAKEPROM -> new BcInstr.MakeProm(makePoolIdx.any(bytecodes.get(i++)));
            case DOMISSING -> new BcInstr.DoMissing();
            case SETTAG -> new BcInstr.SetTag(makePoolIdx.strOrSymOrNil(bytecodes.get(i++)));
            case DODOTS -> new BcInstr.DoDots();
            case PUSHARG -> new BcInstr.PushArg();
            case PUSHCONSTARG -> new BcInstr.PushConstArg(makePoolIdx.any(bytecodes.get(i++)));
            case PUSHNULLARG -> new BcInstr.PushNullArg();
            case PUSHTRUEARG -> new BcInstr.PushTrueArg();
            case PUSHFALSEARG -> new BcInstr.PushFalseArg();
            case CALL -> new BcInstr.Call(makePoolIdx.lang(bytecodes.get(i++)));
            case CALLBUILTIN -> new BcInstr.CallBuiltin(makePoolIdx.lang(bytecodes.get(i++)));
            case CALLSPECIAL -> new BcInstr.CallSpecial(makePoolIdx.lang(bytecodes.get(i++)));
            case MAKECLOSURE ->
                new BcInstr.MakeClosure(makePoolIdx.formalsBodyAndMaybeSrcRef(bytecodes.get(i++)));
            case UMINUS -> new BcInstr.UMinus(makePoolIdx.lang(bytecodes.get(i++)));
            case UPLUS -> new BcInstr.UPlus(makePoolIdx.lang(bytecodes.get(i++)));
            case ADD -> new BcInstr.Add(makePoolIdx.lang(bytecodes.get(i++)));
            case SUB -> new BcInstr.Sub(makePoolIdx.lang(bytecodes.get(i++)));
            case MUL -> new BcInstr.Mul(makePoolIdx.lang(bytecodes.get(i++)));
            case DIV -> new BcInstr.Div(makePoolIdx.lang(bytecodes.get(i++)));
            case EXPT -> new BcInstr.Expt(makePoolIdx.lang(bytecodes.get(i++)));
            case SQRT -> new BcInstr.Sqrt(makePoolIdx.lang(bytecodes.get(i++)));
            case EXP -> new BcInstr.Exp(makePoolIdx.lang(bytecodes.get(i++)));
            case EQ -> new BcInstr.Eq(makePoolIdx.lang(bytecodes.get(i++)));
            case NE -> new BcInstr.Ne(makePoolIdx.lang(bytecodes.get(i++)));
            case LT -> new BcInstr.Lt(makePoolIdx.lang(bytecodes.get(i++)));
            case LE -> new BcInstr.Le(makePoolIdx.lang(bytecodes.get(i++)));
            case GE -> new BcInstr.Ge(makePoolIdx.lang(bytecodes.get(i++)));
            case GT -> new BcInstr.Gt(makePoolIdx.lang(bytecodes.get(i++)));
            case AND -> new BcInstr.And(makePoolIdx.lang(bytecodes.get(i++)));
            case OR -> new BcInstr.Or(makePoolIdx.lang(bytecodes.get(i++)));
            case NOT -> new BcInstr.Not(makePoolIdx.lang(bytecodes.get(i++)));
            case DOTSERR -> new BcInstr.DotsErr();
            case STARTASSIGN -> new BcInstr.StartAssign(makePoolIdx.sym(bytecodes.get(i++)));
            case ENDASSIGN -> new BcInstr.EndAssign(makePoolIdx.sym(bytecodes.get(i++)));
            case STARTSUBSET ->
                new BcInstr.StartSubset(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case DFLTSUBSET -> new BcInstr.DfltSubset();
            case STARTSUBASSIGN ->
                new BcInstr.StartSubassign(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case DFLTSUBASSIGN -> new BcInstr.DfltSubassign();
            case STARTC ->
                new BcInstr.StartC(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case DFLTC -> new BcInstr.DfltC();
            case STARTSUBSET2 ->
                new BcInstr.StartSubset2(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case DFLTSUBSET2 -> new BcInstr.DfltSubset2();
            case STARTSUBASSIGN2 ->
                new BcInstr.StartSubassign2(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case DFLTSUBASSIGN2 -> new BcInstr.DfltSubassign2();
            case DOLLAR ->
                new BcInstr.Dollar(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.sym(bytecodes.get(i++)));
            case DOLLARGETS ->
                new BcInstr.DollarGets(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.sym(bytecodes.get(i++)));
            case ISNULL -> new BcInstr.IsNull();
            case ISLOGICAL -> new BcInstr.IsLogical();
            case ISINTEGER -> new BcInstr.IsInteger();
            case ISDOUBLE -> new BcInstr.IsDouble();
            case ISCOMPLEX -> new BcInstr.IsComplex();
            case ISCHARACTER -> new BcInstr.IsCharacter();
            case ISSYMBOL -> new BcInstr.IsSymbol();
            case ISOBJECT -> new BcInstr.IsObject();
            case ISNUMERIC -> new BcInstr.IsNumeric();
            case VECSUBSET -> new BcInstr.VecSubset(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBSET -> new BcInstr.MatSubset(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case VECSUBASSIGN ->
                new BcInstr.VecSubassign(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBASSIGN ->
                new BcInstr.MatSubassign(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case AND1ST ->
                new BcInstr.And1st(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case AND2ND -> new BcInstr.And2nd(makePoolIdx.lang(bytecodes.get(i++)));
            case OR1ST ->
                new BcInstr.Or1st(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case OR2ND -> new BcInstr.Or2nd(makePoolIdx.lang(bytecodes.get(i++)));
            case GETVAR_MISSOK -> new BcInstr.GetVarMissOk(makePoolIdx.sym(bytecodes.get(i++)));
            case DDVAL_MISSOK -> new BcInstr.DdValMissOk(makePoolIdx.sym(bytecodes.get(i++)));
            case VISIBLE -> new BcInstr.Visible();
            case SETVAR2 -> new BcInstr.SetVar2(makePoolIdx.sym(bytecodes.get(i++)));
            case STARTASSIGN2 -> new BcInstr.StartAssign2(makePoolIdx.sym(bytecodes.get(i++)));
            case ENDASSIGN2 -> new BcInstr.EndAssign2(makePoolIdx.sym(bytecodes.get(i++)));
            case SETTER_CALL ->
                new BcInstr.SetterCall(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.any(bytecodes.get(i++)));
            case GETTER_CALL -> new BcInstr.GetterCall(makePoolIdx.lang(bytecodes.get(i++)));
            case SWAP -> new BcInstr.SpecialSwap();
            case DUP2ND -> new BcInstr.Dup2nd();
            case SWITCH ->
                new BcInstr.Switch(
                    makePoolIdx.lang(bytecodes.get(i++)),
                    makePoolIdx.strOrNilOrOther(bytecodes.get(i++)),
                    makePoolIdx.intOrOther(bytecodes.get(i++)),
                    makePoolIdx.intOrOther(bytecodes.get(i++)));
            case RETURNJMP -> new BcInstr.ReturnJmp();
            case STARTSUBSET_N ->
                new BcInstr.StartSubsetN(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case STARTSUBASSIGN_N ->
                new BcInstr.StartSubassignN(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case VECSUBSET2 ->
                new BcInstr.VecSubset2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBSET2 ->
                new BcInstr.MatSubset2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case VECSUBASSIGN2 ->
                new BcInstr.VecSubassign2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBASSIGN2 ->
                new BcInstr.MatSubassign2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case STARTSUBSET2_N ->
                new BcInstr.StartSubset2N(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case STARTSUBASSIGN2_N ->
                new BcInstr.StartSubassign2N(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case SUBSET_N ->
                new BcInstr.SubsetN(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBSET2_N ->
                new BcInstr.Subset2N(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBASSIGN_N ->
                new BcInstr.SubassignN(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBASSIGN2_N ->
                new BcInstr.Subassign2N(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case LOG -> new BcInstr.Log(makePoolIdx.lang(bytecodes.get(i++)));
            case LOGBASE -> new BcInstr.LogBase(makePoolIdx.lang(bytecodes.get(i++)));
            case MATH1 ->
                new BcInstr.Math1(makePoolIdx.lang(bytecodes.get(i++)), bytecodes.get(i++));
            case DOTCALL ->
                new BcInstr.DotCall(makePoolIdx.lang(bytecodes.get(i++)), bytecodes.get(i++));
            case COLON -> new BcInstr.Colon(makePoolIdx.lang(bytecodes.get(i++)));
            case SEQALONG -> new BcInstr.SeqAlong(makePoolIdx.lang(bytecodes.get(i++)));
            case SEQLEN -> new BcInstr.SeqLen(makePoolIdx.lang(bytecodes.get(i++)));
            case BASEGUARD ->
                new BcInstr.BaseGuard(
                    makePoolIdx.lang(bytecodes.get(i++)), new BcLabel(bytecodes.get(i++)));
            case INCLNK -> new BcInstr.IncLnk();
            case DECLNK -> new BcInstr.DecLnk();
            case DECLNK_N -> new BcInstr.DeclnkN(bytecodes.get(i++));
            case INCLNKSTK -> new BcInstr.IncLnkStk();
            case DECLNKSTK -> new BcInstr.DecLnkStk();
          };
      return new Pair<>(instr, i);
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (arguments) " + op, e);
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new BcFromRawException(
          "invalid opcode (arguments, unexpected end of bytecode stream) " + op);
    }
  }
}
