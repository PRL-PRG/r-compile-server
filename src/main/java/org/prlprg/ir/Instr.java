package org.prlprg.ir;

import com.google.common.primitives.ImmutableIntArray;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.bc.BcFromRawException;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.BcOp;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.*;
import org.prlprg.util.Either;
import org.prlprg.util.Pair;

/** Instruction within an IR which encompasses both PIR and GNU-R bytecodes. */
@Immutable
public sealed interface Instr extends Node {
  /**
   * Instruction was created directly from a GNU-R bytecode instruction
   *
   * <p>Every bytecode instruction except those which manipulate the stack have a corresponding
   * {@link GnuR} node.
   */
  sealed interface GnuR extends Instr, Node.GnuR {}

  record Return() implements GnuR {}

  record Unreachable() implements Instr {}

  record Goto(BcLabel label) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GOTO;
    }
  }

  record BrIfNot(ConstPool.TypedIdx<LangSXP> ast, BcLabel label) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.BRIFNOT;
    }
  }

  record Pop() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.POP;
    }
  }

  record Dup() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DUP;
    }
  }

  record PrintValue() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PRINTVALUE;
    }
  }

  record StartLoopCntxt(boolean isForLoop, BcLabel break_) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTLOOPCNTXT;
    }
  }

  record EndLoopCntxt(boolean isForLoop) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ENDLOOPCNTXT;
    }
  }

  record DoLoopNext() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOLOOPNEXT;
    }
  }

  record DoLoopBreak() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOLOOPBREAK;
    }
  }

  record StartFor(
      ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> elemName, BcLabel end)
      implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTFOR;
    }
  }

  record StepFor(BcLabel end) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STEPFOR;
    }
  }

  record EndFor() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ENDFOR;
    }
  }

  record SetLoopVal() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SETLOOPVAL;
    }
  }

  record Invisible() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.INVISIBLE;
    }
  }

  record LdConst(ConstPool.Idx constant) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LDCONST;
    }
  }

  record LdNull() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LDNULL;
    }
  }

  record LdTrue() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LDTRUE;
    }
  }

  record LdFalse() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LDFALSE;
    }
  }

  record GetVar(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETVAR;
    }
  }

  record DdVal(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DDVAL;
    }
  }

  record SetVar(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SETVAR;
    }
  }

  record GetFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETFUN;
    }
  }

  record GetGlobFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETGLOBFUN;
    }
  }

  record GetSymFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETSYMFUN;
    }
  }

  record GetBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETBUILTIN;
    }
  }

  record GetIntlBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETINTLBUILTIN;
    }
  }

  record CheckFun() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.CHECKFUN;
    }
  }

  /** {@code code} is usually but not always bytecode (see eval.c). */
  record MakeProm(ConstPool.Idx code) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MAKEPROM;
    }
  }

  record DoMissing() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOMISSING;
    }
  }

  record SetTag(@Nullable ConstPool.TypedIdx<StrOrRegSymSXP> tag) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SETTAG;
    }
  }

  record DoDots() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DODOTS;
    }
  }

  record PushArg() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PUSHARG;
    }
  }

  record PushConstArg(ConstPool.Idx constant) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PUSHCONSTARG;
    }
  }

  record PushNullArg() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PUSHNULLARG;
    }
  }

  record PushTrueArg() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PUSHTRUEARG;
    }
  }

  record PushFalseArg() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.PUSHFALSEARG;
    }
  }

  record Call(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.CALL;
    }
  }

  record CallBuiltin(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.CALLBUILTIN;
    }
  }

  record CallSpecial(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.CALLSPECIAL;
    }
  }

  record MakeClosure(ConstPool.TypedIdx<VecSXP> formalsBodyAndMaybeSrcRef) implements GnuR {
    public ListSXP formals(ConstPool pool) {
      return (ListSXP) pool.get(this.formalsBodyAndMaybeSrcRef).get(0);
    }

    public SEXP body(ConstPool pool) {
      return pool.get(formalsBodyAndMaybeSrcRef).get(1);
    }

    public SEXP srcRef(ConstPool pool) {
      var formalsBodyAndMaybeSrcRef = pool.get(this.formalsBodyAndMaybeSrcRef);
      return formalsBodyAndMaybeSrcRef.size() < 3 ? SEXPs.NULL : formalsBodyAndMaybeSrcRef.get(2);
    }

    @Override
    public BcOp op() {
      return BcOp.MAKECLOSURE;
    }
  }

  record UMinus(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.UMINUS;
    }
  }

  record UPlus(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.UPLUS;
    }
  }

  record Add(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ADD;
    }
  }

  record Sub(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SUB;
    }
  }

  record Mul(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MUL;
    }
  }

  record Div(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DIV;
    }
  }

  record Expt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.EXPT;
    }
  }

  record Sqrt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SQRT;
    }
  }

  record Exp(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.EXP;
    }
  }

  record Eq(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.EQ;
    }
  }

  record Ne(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.NE;
    }
  }

  record Lt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LT;
    }
  }

  record Le(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LE;
    }
  }

  record Ge(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GE;
    }
  }

  record Gt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GT;
    }
  }

  record And(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.AND;
    }
  }

  record Or(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.OR;
    }
  }

  record Not(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.NOT;
    }
  }

  record DotsErr() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOTSERR;
    }
  }

  record StartAssign(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN;
    }
  }

  record EndAssign(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN;
    }
  }

  record StartSubset(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET;
    }
  }

  record DfltSubset() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBSET;
    }
  }

  record StartSubassign(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN;
    }
  }

  record DfltSubassign() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBASSIGN;
    }
  }

  record StartC(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTC;
    }
  }

  record DfltC() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DFLTC;
    }
  }

  record StartSubset2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET2;
    }
  }

  record DfltSubset2() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBSET2;
    }
  }

  record StartSubassign2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN2;
    }
  }

  record DfltSubassign2() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DFLTSUBASSIGN2;
    }
  }

  record Dollar(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member)
      implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOLLAR;
    }
  }

  record DollarGets(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member)
      implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOLLARGETS;
    }
  }

  record IsNull() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISNULL;
    }
  }

  record IsLogical() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISLOGICAL;
    }
  }

  record IsInteger() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISINTEGER;
    }
  }

  record IsDouble() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISDOUBLE;
    }
  }

  record IsComplex() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISCOMPLEX;
    }
  }

  record IsCharacter() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISCHARACTER;
    }
  }

  record IsSymbol() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISSYMBOL;
    }
  }

  record IsObject() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISOBJECT;
    }
  }

  record IsNumeric() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ISNUMERIC;
    }
  }

  // ???: call-idx can be negative? We make TypedIdx null to support this case, but not sure if
  // it's possible.
  //   This applies to every other `@Nullable call` in this file.
  record VecSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET;
    }
  }

  record MatSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET;
    }
  }

  record VecSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN;
    }
  }

  record MatSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN;
    }
  }

  record And1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.AND1ST;
    }
  }

  record And2nd(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.AND2ND;
    }
  }

  record Or1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.OR1ST;
    }
  }

  record Or2nd(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.OR2ND;
    }
  }

  record GetVarMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETVAR_MISSOK;
    }
  }

  record DdValMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DDVAL_MISSOK;
    }
  }

  record Visible() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.VISIBLE;
    }
  }

  record SetVar2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SETVAR2;
    }
  }

  record StartAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN2;
    }
  }

  record EndAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN2;
    }
  }

  record SetterCall(ConstPool.TypedIdx<LangSXP> ast, ConstPool.Idx valueExpr) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SETTER_CALL;
    }
  }

  record GetterCall(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.GETTER_CALL;
    }
  }

  /** See eval.c for why this isn't just a regular swap instruction. */
  record SpecialSwap() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SWAP;
    }
  }

  record Dup2nd() implements GnuR {
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
      implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SWITCH;
    }
  }

  record ReturnJmp() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.RETURNJMP;
    }
  }

  record StartSubsetN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET_N;
    }
  }

  record StartSubassignN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN_N;
    }
  }

  record VecSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET2;
    }
  }

  record MatSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET2;
    }
  }

  record VecSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN2;
    }
  }

  record MatSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN2;
    }
  }

  record StartSubset2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET2_N;
    }
  }

  record StartSubassign2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN2_N;
    }
  }

  record SubsetN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SUBSET_N;
    }
  }

  record Subset2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SUBSET2_N;
    }
  }

  record SubassignN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN_N;
    }
  }

  record Subassign2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN2_N;
    }
  }

  record Log(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LOG;
    }
  }

  record LogBase(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.LOGBASE;
    }
  }

  record Math1(ConstPool.TypedIdx<LangSXP> ast, int funId) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.MATH1;
    }
  }

  record DotCall(ConstPool.TypedIdx<LangSXP> ast, int numArgs) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DOTCALL;
    }
  }

  record Colon(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.COLON;
    }
  }

  record SeqAlong(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SEQALONG;
    }
  }

  record SeqLen(ConstPool.TypedIdx<LangSXP> ast) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.SEQLEN;
    }
  }

  record BaseGuard(ConstPool.TypedIdx<LangSXP> expr, BcLabel after) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.BASEGUARD;
    }
  }

  record IncLnk() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.INCLNK;
    }
  }

  record DecLnk() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DECLNK;
    }
  }

  record DeclnkN(int n) implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DECLNK_N;
    }
  }

  record IncLnkStk() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.INCLNKSTK;
    }
  }

  record DecLnkStk() implements GnuR {
    @Override
    public BcOp op() {
      return BcOp.DECLNKSTK;
    }
  }
}

class Instrs {
  /**
   * Create from the raw GNU-R representation.
   *
   * @param bytecodes The full list of GNU-R bytecodes including ones before and after this one.
   * @param i The index in the list where this instruction starts.
   * @param Label So we can create labels from GNU-R labels.
   * @param makePoolIdx A function to create pool indices from raw integers.
   * @return The instruction and the index in the list where the next instruction starts.
   * @apiNote This has to be in a separate class because it's package-private but interface methods
   *     are public.
   */
  static Pair<Instr, Integer> fromRaw(
      ImmutableIntArray bytecodes, int i, BcLabel.Factory Label, ConstPool.MakeIdx makePoolIdx) {
    BcOp op;
    try {
      op = BcOp.valueOf(bytecodes.get(i++));
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (instruction) at " + bytecodes.get(i - 1));
    }

    try {
      var instr =
          switch (op) {
            case BCMISMATCH ->
                throw new BcFromRawException("invalid opcode " + BcOp.BCMISMATCH.value());
            case RETURN -> new Instr.Return();
            case GOTO -> new Instr.Goto(Label.make(bytecodes.get(i++)));
            case BRIFNOT ->
                new Instr.BrIfNot(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case POP -> new Instr.Pop();
            case DUP -> new Instr.Dup();
            case PRINTVALUE -> new Instr.PrintValue();
            case STARTLOOPCNTXT ->
                new Instr.StartLoopCntxt(bytecodes.get(i++) != 0, Label.make(bytecodes.get(i++)));
            case ENDLOOPCNTXT -> new Instr.EndLoopCntxt(bytecodes.get(i++) != 0);
            case DOLOOPNEXT -> new Instr.DoLoopNext();
            case DOLOOPBREAK -> new Instr.DoLoopBreak();
            case STARTFOR ->
                new Instr.StartFor(
                    makePoolIdx.lang(bytecodes.get(i++)),
                    makePoolIdx.sym(bytecodes.get(i++)),
                    Label.make(bytecodes.get(i++)));
            case STEPFOR -> new Instr.StepFor(Label.make(bytecodes.get(i++)));
            case ENDFOR -> new Instr.EndFor();
            case SETLOOPVAL -> new Instr.SetLoopVal();
            case INVISIBLE -> new Instr.Invisible();
            case LDCONST -> new Instr.LdConst(makePoolIdx.any(bytecodes.get(i++)));
            case LDNULL -> new Instr.LdNull();
            case LDTRUE -> new Instr.LdTrue();
            case LDFALSE -> new Instr.LdFalse();
            case GETVAR -> new Instr.GetVar(makePoolIdx.sym(bytecodes.get(i++)));
            case DDVAL -> new Instr.DdVal(makePoolIdx.sym(bytecodes.get(i++)));
            case SETVAR -> new Instr.SetVar(makePoolIdx.sym(bytecodes.get(i++)));
            case GETFUN -> new Instr.GetFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETGLOBFUN -> new Instr.GetGlobFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETSYMFUN -> new Instr.GetSymFun(makePoolIdx.sym(bytecodes.get(i++)));
            case GETBUILTIN -> new Instr.GetBuiltin(makePoolIdx.sym(bytecodes.get(i++)));
            case GETINTLBUILTIN -> new Instr.GetIntlBuiltin(makePoolIdx.sym(bytecodes.get(i++)));
            case CHECKFUN -> new Instr.CheckFun();
            case MAKEPROM -> new Instr.MakeProm(makePoolIdx.any(bytecodes.get(i++)));
            case DOMISSING -> new Instr.DoMissing();
            case SETTAG -> new Instr.SetTag(makePoolIdx.strOrSymOrNil(bytecodes.get(i++)));
            case DODOTS -> new Instr.DoDots();
            case PUSHARG -> new Instr.PushArg();
            case PUSHCONSTARG -> new Instr.PushConstArg(makePoolIdx.any(bytecodes.get(i++)));
            case PUSHNULLARG -> new Instr.PushNullArg();
            case PUSHTRUEARG -> new Instr.PushTrueArg();
            case PUSHFALSEARG -> new Instr.PushFalseArg();
            case CALL -> new Instr.Call(makePoolIdx.lang(bytecodes.get(i++)));
            case CALLBUILTIN -> new Instr.CallBuiltin(makePoolIdx.lang(bytecodes.get(i++)));
            case CALLSPECIAL -> new Instr.CallSpecial(makePoolIdx.lang(bytecodes.get(i++)));
            case MAKECLOSURE ->
                new Instr.MakeClosure(makePoolIdx.formalsBodyAndMaybeSrcRef(bytecodes.get(i++)));
            case UMINUS -> new Instr.UMinus(makePoolIdx.lang(bytecodes.get(i++)));
            case UPLUS -> new Instr.UPlus(makePoolIdx.lang(bytecodes.get(i++)));
            case ADD -> new Instr.Add(makePoolIdx.lang(bytecodes.get(i++)));
            case SUB -> new Instr.Sub(makePoolIdx.lang(bytecodes.get(i++)));
            case MUL -> new Instr.Mul(makePoolIdx.lang(bytecodes.get(i++)));
            case DIV -> new Instr.Div(makePoolIdx.lang(bytecodes.get(i++)));
            case EXPT -> new Instr.Expt(makePoolIdx.lang(bytecodes.get(i++)));
            case SQRT -> new Instr.Sqrt(makePoolIdx.lang(bytecodes.get(i++)));
            case EXP -> new Instr.Exp(makePoolIdx.lang(bytecodes.get(i++)));
            case EQ -> new Instr.Eq(makePoolIdx.lang(bytecodes.get(i++)));
            case NE -> new Instr.Ne(makePoolIdx.lang(bytecodes.get(i++)));
            case LT -> new Instr.Lt(makePoolIdx.lang(bytecodes.get(i++)));
            case LE -> new Instr.Le(makePoolIdx.lang(bytecodes.get(i++)));
            case GE -> new Instr.Ge(makePoolIdx.lang(bytecodes.get(i++)));
            case GT -> new Instr.Gt(makePoolIdx.lang(bytecodes.get(i++)));
            case AND -> new Instr.And(makePoolIdx.lang(bytecodes.get(i++)));
            case OR -> new Instr.Or(makePoolIdx.lang(bytecodes.get(i++)));
            case NOT -> new Instr.Not(makePoolIdx.lang(bytecodes.get(i++)));
            case DOTSERR -> new Instr.DotsErr();
            case STARTASSIGN -> new Instr.StartAssign(makePoolIdx.sym(bytecodes.get(i++)));
            case ENDASSIGN -> new Instr.EndAssign(makePoolIdx.sym(bytecodes.get(i++)));
            case STARTSUBSET ->
                new Instr.StartSubset(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case DFLTSUBSET -> new Instr.DfltSubset();
            case STARTSUBASSIGN ->
                new Instr.StartSubassign(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case DFLTSUBASSIGN -> new Instr.DfltSubassign();
            case STARTC ->
                new Instr.StartC(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case DFLTC -> new Instr.DfltC();
            case STARTSUBSET2 ->
                new Instr.StartSubset2(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case DFLTSUBSET2 -> new Instr.DfltSubset2();
            case STARTSUBASSIGN2 ->
                new Instr.StartSubassign2(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case DFLTSUBASSIGN2 -> new Instr.DfltSubassign2();
            case DOLLAR ->
                new Instr.Dollar(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.sym(bytecodes.get(i++)));
            case DOLLARGETS ->
                new Instr.DollarGets(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.sym(bytecodes.get(i++)));
            case ISNULL -> new Instr.IsNull();
            case ISLOGICAL -> new Instr.IsLogical();
            case ISINTEGER -> new Instr.IsInteger();
            case ISDOUBLE -> new Instr.IsDouble();
            case ISCOMPLEX -> new Instr.IsComplex();
            case ISCHARACTER -> new Instr.IsCharacter();
            case ISSYMBOL -> new Instr.IsSymbol();
            case ISOBJECT -> new Instr.IsObject();
            case ISNUMERIC -> new Instr.IsNumeric();
            case VECSUBSET -> new Instr.VecSubset(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBSET -> new Instr.MatSubset(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case VECSUBASSIGN ->
                new Instr.VecSubassign(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBASSIGN ->
                new Instr.MatSubassign(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case AND1ST ->
                new Instr.And1st(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case AND2ND -> new Instr.And2nd(makePoolIdx.lang(bytecodes.get(i++)));
            case OR1ST ->
                new Instr.Or1st(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case OR2ND -> new Instr.Or2nd(makePoolIdx.lang(bytecodes.get(i++)));
            case GETVAR_MISSOK -> new Instr.GetVarMissOk(makePoolIdx.sym(bytecodes.get(i++)));
            case DDVAL_MISSOK -> new Instr.DdValMissOk(makePoolIdx.sym(bytecodes.get(i++)));
            case VISIBLE -> new Instr.Visible();
            case SETVAR2 -> new Instr.SetVar2(makePoolIdx.sym(bytecodes.get(i++)));
            case STARTASSIGN2 -> new Instr.StartAssign2(makePoolIdx.sym(bytecodes.get(i++)));
            case ENDASSIGN2 -> new Instr.EndAssign2(makePoolIdx.sym(bytecodes.get(i++)));
            case SETTER_CALL ->
                new Instr.SetterCall(
                    makePoolIdx.lang(bytecodes.get(i++)), makePoolIdx.any(bytecodes.get(i++)));
            case GETTER_CALL -> new Instr.GetterCall(makePoolIdx.lang(bytecodes.get(i++)));
            case SWAP -> new Instr.SpecialSwap();
            case DUP2ND -> new Instr.Dup2nd();
            case SWITCH ->
                new Instr.Switch(
                    makePoolIdx.lang(bytecodes.get(i++)),
                    makePoolIdx.strOrNilOrOther(bytecodes.get(i++)),
                    makePoolIdx.intOrOther(bytecodes.get(i++)),
                    makePoolIdx.intOrOther(bytecodes.get(i++)));
            case RETURNJMP -> new Instr.ReturnJmp();
            case STARTSUBSET_N ->
                new Instr.StartSubsetN(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case STARTSUBASSIGN_N ->
                new Instr.StartSubassignN(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case VECSUBSET2 -> new Instr.VecSubset2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBSET2 -> new Instr.MatSubset2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case VECSUBASSIGN2 ->
                new Instr.VecSubassign2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case MATSUBASSIGN2 ->
                new Instr.MatSubassign2(makePoolIdx.langOrNegative(bytecodes.get(i++)));
            case STARTSUBSET2_N ->
                new Instr.StartSubset2N(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case STARTSUBASSIGN2_N ->
                new Instr.StartSubassign2N(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case SUBSET_N ->
                new Instr.SubsetN(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBSET2_N ->
                new Instr.Subset2N(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBASSIGN_N ->
                new Instr.SubassignN(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case SUBASSIGN2_N ->
                new Instr.Subassign2N(
                    makePoolIdx.langOrNegative(bytecodes.get(i++)), bytecodes.get(i++));
            case LOG -> new Instr.Log(makePoolIdx.lang(bytecodes.get(i++)));
            case LOGBASE -> new Instr.LogBase(makePoolIdx.lang(bytecodes.get(i++)));
            case MATH1 -> new Instr.Math1(makePoolIdx.lang(bytecodes.get(i++)), bytecodes.get(i++));
            case DOTCALL ->
                new Instr.DotCall(makePoolIdx.lang(bytecodes.get(i++)), bytecodes.get(i++));
            case COLON -> new Instr.Colon(makePoolIdx.lang(bytecodes.get(i++)));
            case SEQALONG -> new Instr.SeqAlong(makePoolIdx.lang(bytecodes.get(i++)));
            case SEQLEN -> new Instr.SeqLen(makePoolIdx.lang(bytecodes.get(i++)));
            case BASEGUARD ->
                new Instr.BaseGuard(
                    makePoolIdx.lang(bytecodes.get(i++)), Label.make(bytecodes.get(i++)));
            case INCLNK -> new Instr.IncLnk();
            case DECLNK -> new Instr.DecLnk();
            case DECLNK_N -> new Instr.DeclnkN(bytecodes.get(i++));
            case INCLNKSTK -> new Instr.IncLnkStk();
            case DECLNKSTK -> new Instr.DecLnkStk();
          };
      return new Pair<>(instr, i);
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode " + op + " (arguments)", e);
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new BcFromRawException(
          "invalid opcode " + op + " (arguments, unexpected end of bytecode stream)");
    }
  }

  /**
   * Get the GNU-R size of the instruction at the position without creating it.
   *
   * @param bytecodes The full list of GNU-R bytecodes including ones before and after this one.
   * @param i The index in the list where this instruction starts.
   * @return The size of the instruction (we don't return next position because it can be computed
   *     from this).
   * @apiNote This has to be in a separate class because it's package-private but interface methods
   *     are public.
   */
  @SuppressWarnings({"DuplicateBranchesInSwitch", "DuplicatedCode"})
  static int sizeFromRaw(ImmutableIntArray bytecodes, int i) {
    BcOp op;
    try {
      op = BcOp.valueOf(bytecodes.get(i++));
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (instruction) " + bytecodes.get(i - 1));
    }

    try {
      return 1
          + switch (op) {
            case BCMISMATCH ->
                throw new BcFromRawException("invalid opcode " + BcOp.BCMISMATCH.value());
            case RETURN -> 0;
            case GOTO -> 1;
            case BRIFNOT -> 2;
            case POP -> 0;
            case DUP -> 0;
            case PRINTVALUE -> 0;
            case STARTLOOPCNTXT -> 2;
            case ENDLOOPCNTXT -> 1;
            case DOLOOPNEXT -> 0;
            case DOLOOPBREAK -> 0;
            case STARTFOR -> 3;
            case STEPFOR -> 1;
            case ENDFOR -> 0;
            case SETLOOPVAL -> 0;
            case INVISIBLE -> 0;
            case LDCONST -> 1;
            case LDNULL -> 0;
            case LDTRUE -> 0;
            case LDFALSE -> 0;
            case GETVAR -> 1;
            case DDVAL -> 1;
            case SETVAR -> 1;
            case GETFUN -> 1;
            case GETGLOBFUN -> 1;
            case GETSYMFUN -> 1;
            case GETBUILTIN -> 1;
            case GETINTLBUILTIN -> 1;
            case CHECKFUN -> 0;
            case MAKEPROM -> 1;
            case DOMISSING -> 0;
            case SETTAG -> 1;
            case DODOTS -> 0;
            case PUSHARG -> 0;
            case PUSHCONSTARG -> 1;
            case PUSHNULLARG -> 0;
            case PUSHTRUEARG -> 0;
            case PUSHFALSEARG -> 0;
            case CALL -> 1;
            case CALLBUILTIN -> 1;
            case CALLSPECIAL -> 1;
            case MAKECLOSURE -> 1;
            case UMINUS -> 1;
            case UPLUS -> 1;
            case ADD -> 1;
            case SUB -> 1;
            case MUL -> 1;
            case DIV -> 1;
            case EXPT -> 1;
            case SQRT -> 1;
            case EXP -> 1;
            case EQ -> 1;
            case NE -> 1;
            case LT -> 1;
            case LE -> 1;
            case GE -> 1;
            case GT -> 1;
            case AND -> 1;
            case OR -> 1;
            case NOT -> 1;
            case DOTSERR -> 0;
            case STARTASSIGN -> 1;
            case ENDASSIGN -> 1;
            case STARTSUBSET -> 2;
            case DFLTSUBSET -> 0;
            case STARTSUBASSIGN -> 2;
            case DFLTSUBASSIGN -> 0;
            case STARTC -> 2;
            case DFLTC -> 0;
            case STARTSUBSET2 -> 2;
            case DFLTSUBSET2 -> 0;
            case STARTSUBASSIGN2 -> 2;
            case DFLTSUBASSIGN2 -> 0;
            case DOLLAR -> 2;
            case DOLLARGETS -> 2;
            case ISNULL -> 0;
            case ISLOGICAL -> 0;
            case ISINTEGER -> 0;
            case ISDOUBLE -> 0;
            case ISCOMPLEX -> 0;
            case ISCHARACTER -> 0;
            case ISSYMBOL -> 0;
            case ISOBJECT -> 0;
            case ISNUMERIC -> 0;
            case VECSUBSET -> 1;
            case MATSUBSET -> 1;
            case VECSUBASSIGN -> 1;
            case MATSUBASSIGN -> 1;
            case AND1ST -> 2;
            case AND2ND -> 1;
            case OR1ST -> 2;
            case OR2ND -> 1;
            case GETVAR_MISSOK -> 1;
            case DDVAL_MISSOK -> 1;
            case VISIBLE -> 0;
            case SETVAR2 -> 1;
            case STARTASSIGN2 -> 1;
            case ENDASSIGN2 -> 1;
            case SETTER_CALL -> 2;
            case GETTER_CALL -> 1;
            case SWAP -> 0;
            case DUP2ND -> 0;
            case SWITCH -> 4;
            case RETURNJMP -> 0;
            case STARTSUBSET_N -> 2;
            case STARTSUBASSIGN_N -> 2;
            case VECSUBSET2 -> 1;
            case MATSUBSET2 -> 1;
            case VECSUBASSIGN2 -> 1;
            case MATSUBASSIGN2 -> 1;
            case STARTSUBSET2_N -> 2;
            case STARTSUBASSIGN2_N -> 2;
            case SUBSET_N -> 2;
            case SUBSET2_N -> 2;
            case SUBASSIGN_N -> 2;
            case SUBASSIGN2_N -> 2;
            case LOG -> 1;
            case LOGBASE -> 1;
            case MATH1 -> 2;
            case DOTCALL -> 2;
            case COLON -> 1;
            case SEQALONG -> 1;
            case SEQLEN -> 1;
            case BASEGUARD -> 2;
            case INCLNK -> 0;
            case DECLNK -> 0;
            case DECLNK_N -> 1;
            case INCLNKSTK -> 0;
            case DECLNKSTK -> 0;
          };
    } catch (IllegalArgumentException e) {
      throw new BcFromRawException("invalid opcode (arguments) " + op, e);
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new BcFromRawException(
          "invalid opcode (arguments, unexpected end of bytecode stream) " + op);
    }
  }
}
