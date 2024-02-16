package org.prlprg.ir;

import org.prlprg.ir.Instr.GnuR;

class Instrs {
  record Return() implements GnuR {}
  record Unreachable() implements Instr {}
  record Goto(BcLabel label) implements GnuR
  record BrIfNot(ConstPool.TypedIdx<LangSXP> ast, BcLabel label) implements GnuR
  record Pop() implements GnuR
  record Dup() implements GnuR
  record PrintValue() implements GnuR
  record StartLoopCntxt(boolean isForLoop, BcLabel break_) implements GnuR
  record EndLoopCntxt(boolean isForLoop) implements GnuR
  record DoLoopNext() implements GnuR
  record DoLoopBreak() implements GnuR
  record StartFor(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> elemName, BcLabel end) implements GnuR
  record StepFor(BcLabel end) implements GnuR
  record EndFor() implements GnuR
  record SetLoopVal() implements GnuR
  record Invisible() implements GnuR
  record LdConst(ConstPool.Idx constant) implements GnuR
  record LdNull() implements GnuR
  record LdTrue() implements GnuR
  record LdFalse() implements GnuR
  record GetVar(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record DdVal(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record SetVar(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record GetFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record GetGlobFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record GetSymFun(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record GetBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record GetIntlBuiltin(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record CheckFun() implements GnuR
  record MakeProm(ConstPool.Idx code) implements GnuR
  record DoMissing() implements GnuR
  record SetTag(@Nullable ConstPool.TypedIdx<StrOrRegSymSXP> tag) implements GnuR
  record DoDots() implements GnuR
  record PushArg() implements GnuR
  record PushConstArg(ConstPool.Idx constant) implements GnuR
  record PushNullArg() implements GnuR
  record PushTrueArg() implements GnuR
  record PushFalseArg() implements GnuR
  record Call(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record CallBuiltin(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record CallSpecial(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record MakeClosure(ConstPool.TypedIdx<VecSXP> formalsBodyAndMaybeSrcRef) implements GnuR
  record UMinus(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record UPlus(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Add(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Sub(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Mul(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Div(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Expt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Sqrt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Exp(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Eq(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Ne(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Lt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Le(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Ge(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Gt(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record And(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Or(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Not(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record DotsErr() implements GnuR
  record StartAssign(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record EndAssign(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record StartSubset(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record DfltSubset() implements GnuR
  record StartSubassign(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record DfltSubassign() implements GnuR
  record StartC(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record DfltC() implements GnuR
  record StartSubset2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record DfltSubset2() implements GnuR
  record StartSubassign2(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record DfltSubassign2() implements GnuR
  record Dollar(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member) implements GnuR
  record DollarGets(ConstPool.TypedIdx<LangSXP> ast, ConstPool.TypedIdx<RegSymSXP> member) implements GnuR
  record IsNull() implements GnuR
  record IsLogical() implements GnuR
  record IsInteger() implements GnuR
  record IsDouble() implements GnuR
  record IsComplex() implements GnuR
  record IsCharacter() implements GnuR
  record IsSymbol() implements GnuR
  record IsObject() implements GnuR
  record IsNumeric() implements GnuR
  record VecSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record MatSubset(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record VecSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record MatSubassign(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record And1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements GnuR
  record And2nd(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Or1st(ConstPool.TypedIdx<LangSXP> ast, BcLabel shortCircuit) implements GnuR
  record Or2nd(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record GetVarMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record DdValMissOk(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record Visible() implements GnuR
  record SetVar2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record StartAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record EndAssign2(ConstPool.TypedIdx<RegSymSXP> name) implements GnuR
  record SetterCall(ConstPool.TypedIdx<LangSXP> ast, ConstPool.Idx valueExpr) implements GnuR
  record GetterCall(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record SpecialSwap() implements GnuR
  record Dup2nd() implements GnuR
  record Switch(ConstPool.TypedIdx<LangSXP> ast, @Nullable Either<ConstPool.TypedIdx<StrSXP>, ConstPool.TypedIdx<NilSXP>> names, @Nullable ConstPool.TypedIdx<IntSXP> cOffsets, @Nullable ConstPool.TypedIdx<IntSXP> iOffsets) implements GnuR
  record ReturnJmp() implements GnuR
  record StartSubsetN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record StartSubassignN(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record VecSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record MatSubset2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record VecSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record MatSubassign2(@Nullable ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record StartSubset2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record StartSubassign2N(ConstPool.TypedIdx<LangSXP> ast, BcLabel after) implements GnuR
  record SubsetN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR
  record Subset2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR
  record SubassignN(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR
  record Subassign2N(@Nullable ConstPool.TypedIdx<LangSXP> ast, int n) implements GnuR
  record Log(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record LogBase(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record Math1(ConstPool.TypedIdx<LangSXP> ast, int funId) implements GnuR
  record DotCall(ConstPool.TypedIdx<LangSXP> ast, int numArgs) implements GnuR
  record Colon(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record SeqAlong(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record SeqLen(ConstPool.TypedIdx<LangSXP> ast) implements GnuR
  record BaseGuard(ConstPool.TypedIdx<LangSXP> expr, BcLabel after) implements GnuR
  record IncLnk() implements GnuR
  record DecLnk() implements GnuR
  record DeclnkN(int n) implements GnuR
  record IncLnkStk() implements GnuR
  record DecLnkStk() implements GnuR
}