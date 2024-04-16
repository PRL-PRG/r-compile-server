package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import javax.annotation.Nullable;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrOrRegSymSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

/**
 * A single bytecode instruction, consists of an operation and arguments. The operation is
 * determined by its subtype, arguments are determined by its fields.
 */
@SuppressWarnings("MissingJavadoc")
@SuppressFBWarnings({"EI_EXPOSE_REP2", "EI_EXPOSE_REP"})
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

  record BrIfNot(ConstPool.Idx<LangSXP> ast, BcLabel label) implements BcInstr {
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

  record StartFor(ConstPool.Idx<LangSXP> ast, ConstPool.Idx<RegSymSXP> elemName, BcLabel end)
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

  record LdConst(ConstPool.Idx<SEXP> constant) implements BcInstr {
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

  record GetVar(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
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

  record SetVar(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETVAR;
    }
  }

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

  record GetBuiltin(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GETBUILTIN;
    }
  }

  record GetIntlBuiltin(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
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
  record MakeProm(ConstPool.Idx<SEXP> code) implements BcInstr {
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

  record SetTag(@Nullable ConstPool.Idx<StrOrRegSymSXP> tag) implements BcInstr {
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

  record PushConstArg(ConstPool.Idx<SEXP> constant) implements BcInstr {
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

  record Call(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALL;
    }
  }

  record CallBuiltin(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALLBUILTIN;
    }
  }

  record CallSpecial(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.CALLSPECIAL;
    }
  }

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

  record UMinus(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.UMINUS;
    }
  }

  record UPlus(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.UPLUS;
    }
  }

  record Add(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ADD;
    }
  }

  record Sub(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUB;
    }
  }

  record Mul(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MUL;
    }
  }

  record Div(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.DIV;
    }
  }

  record Expt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EXPT;
    }
  }

  record Sqrt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SQRT;
    }
  }

  record Exp(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EXP;
    }
  }

  record Eq(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.EQ;
    }
  }

  record Ne(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.NE;
    }
  }

  record Lt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LT;
    }
  }

  record Le(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LE;
    }
  }

  record Ge(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GE;
    }
  }

  record Gt(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.GT;
    }
  }

  record And(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND;
    }
  }

  record Or(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR;
    }
  }

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

  record StartAssign(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN;
    }
  }

  record EndAssign(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN;
    }
  }

  record StartSubset(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
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

  record StartSubassign(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
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

  record StartC(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
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

  record StartSubset2(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
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

  record StartSubassign2(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
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

  // ???: call-idx can be negative? We make TypedIdx null to support this case,
  // but not sure if
  // it's possible.
  // This applies to every other `@Nullable call` in this file.
  record VecSubset(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET;
    }
  }

  record MatSubset(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET;
    }
  }

  record VecSubassign(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN;
    }
  }

  record MatSubassign(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN;
    }
  }

  record And1st(ConstPool.Idx<LangSXP> ast, BcLabel shortCircuit) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND1ST;
    }
  }

  record And2nd(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.AND2ND;
    }
  }

  record Or1st(ConstPool.Idx<LangSXP> ast, BcLabel shortCircuit) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR1ST;
    }
  }

  record Or2nd(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.OR2ND;
    }
  }

  record GetVarMissOk(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
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

  record SetVar2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETVAR2;
    }
  }

  record StartAssign2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTASSIGN2;
    }
  }

  record EndAssign2(ConstPool.Idx<RegSymSXP> name) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.ENDASSIGN2;
    }
  }

  record SetterCall(ConstPool.Idx<LangSXP> ast, ConstPool.Idx<SEXP> valueExpr) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SETTER_CALL;
    }
  }

  record GetterCall(ConstPool.Idx<LangSXP> ast) implements BcInstr {
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

  /**
   * The OP_SWITCH instruction.
   *
   * @param ast
   * @param names {@code null} represents {@code NilSXP}
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

  record StartSubsetN(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET_N;
    }
  }

  record StartSubassignN(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN_N;
    }
  }

  record VecSubset2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBSET2;
    }
  }

  record MatSubset2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBSET2;
    }
  }

  record VecSubassign2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.VECSUBASSIGN2;
    }
  }

  record MatSubassign2(@Nullable ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.MATSUBASSIGN2;
    }
  }

  record StartSubset2N(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBSET2_N;
    }
  }

  record StartSubassign2N(ConstPool.Idx<LangSXP> ast, BcLabel after) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.STARTSUBASSIGN2_N;
    }
  }

  record SubsetN(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBSET_N;
    }
  }

  record Subset2N(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBSET2_N;
    }
  }

  record SubassignN(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN_N;
    }
  }

  record Subassign2N(@Nullable ConstPool.Idx<LangSXP> ast, int n) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SUBASSIGN2_N;
    }
  }

  record Log(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LOG;
    }
  }

  record LogBase(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.LOGBASE;
    }
  }

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

  record Colon(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.COLON;
    }
  }

  record SeqAlong(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SEQALONG;
    }
  }

  record SeqLen(ConstPool.Idx<LangSXP> ast) implements BcInstr {
    @Override
    public BcOp op() {
      return BcOp.SEQLEN;
    }
  }

  record BaseGuard(ConstPool.Idx<LangSXP> expr, BcLabel after) implements BcInstr {
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
