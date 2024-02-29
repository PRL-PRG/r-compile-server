package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import javax.annotation.Nullable;
import org.prlprg.ir.CFG;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.*;
import org.prlprg.util.NotImplementedError;

/** {@link Stmt.Data} pattern-matchable records. */
class Stmts {
  // We put these sealed classes in `Stmts` so that we don't need a giant `permits` list.
  // We expose `Stmt.Data` and `RValueStmt.Data` instead of (hypothetical) `Stmts.Data` and
  // `Stmts.RValue`
  // so that `Stmts` only exposes records (outside package code will never want to pattern-match on
  // `Void` or ...).
  sealed interface Void extends Stmt.Data<Stmt> {
    @Override
    default Stmt make(CFG cfg) {
      return new VoidStmtImpl(cfg, this);
    }
  }

  sealed interface RValue_ extends RValueStmt.Data {}

  record PrintValue(RValue value) implements Void {}

  record EndLoopCntxt(boolean isForLoop) implements Void {}

  record EndFor(RValue seq) implements Void {}

  record SetLoopVal() implements Void {}

  record Invisible() implements Void {}

  record LdConst(SEXP constant) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.of(constant);
    }
  }

  record GetVar(RegSymSXP name, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record DdVal(RegSymSXP name, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record SetVar(RegSymSXP name, RValue r, Env env) implements Void {}

  record GetFun(RegSymSXP name, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.FUN;
    }
  }

  record GetGlobFun(RegSymSXP name) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.FUN;
    }
  }

  record GetSymFun(RegSymSXP name) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.SYMFUN;
    }
  }

  record GetBuiltin(RegSymSXP name) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.simple(SEXPType.BUILTIN);
    }
  }

  record GetIntlBuiltin(RegSymSXP name) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.simple(SEXPType.BUILTIN);
    }
  }

  record CheckFun(RValue value) implements Void {}

  record MakeProm(SEXP code, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.simple(SEXPType.PROM);
    }
  }

  record DoMissing() implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.of(SEXPs.MISSING_ARG);
    }
  }

  record SetTag(@Nullable StrOrRegSymSXP tag, RValue arg) implements RValue_ {
    @Override
    public RType computeType() {
      // Actually doesn't change the value, just sets the tag of where it's located (the call
      // arguments list)
      return arg.type();
    }
  }

  record DoDots(Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record Call(LangSXP ast, RValue fun, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record CallBuiltin(LangSXP ast, RValue fun, ImmutableList<RValue> args, Env env)
      implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record CallSpecial(LangSXP ast, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.ANY;
    }
  }

  record MakeClosure(VecSXP formalsBodyAndMaybeSrcRef, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.simple(SEXPType.CLO);
    }
  }

  sealed interface UnOp extends RValue_ {
    RValue arg();
  }

  sealed interface ArithmeticUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RTypes.arithmeticOp(arg().type());
    }
  }

  sealed interface BooleanUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RTypes.booleanOp(arg().type());
    }
  }

  sealed interface BinOp extends RValue_ {
    RValue lhs();

    RValue rhs();
  }

  sealed interface ArithmeticBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.arithmeticOp(lhs().type());
    }
  }

  sealed interface ComparisonBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.comparisonOp(lhs().type(), rhs().type());
    }
  }

  sealed interface BooleanBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.booleanOp(lhs().type(), rhs().type());
    }
  }

  record UMinus(LangSXP ast, @Override RValue arg, Env env) implements ArithmeticUnOp {}

  record UPlus(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Add(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Sub(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Mul(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Div(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Expt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Sqrt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Exp(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ArithmeticBinOp {}

  record Eq(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record Ne(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record Lt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record Le(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record Ge(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record Gt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements ComparisonBinOp {}

  record And(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements BooleanBinOp {}

  record Or(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements BooleanBinOp {}

  record Not(LangSXP ast, @Override RValue arg, Env env) implements BooleanUnOp {}

  record DotsErr() implements Void {}

  record StartAssign(RegSymSXP name, RValue value, Env env) implements Stmt.Data {}

  record EndAssign(RegSymSXP name, RValue lhs, RValue rhs, Env env) implements Void {}

  record DfltSubset(RValue call, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }

  record DfltSubassign(RValue call, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }

  record DfltC(RValue call, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }

  record DfltSubset2(RValue call, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }

  record DfltSubassign2(RValue call, ImmutableList<RValue> args, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }
  /* record Dollar(LangSXP ast, RegSymSXP member) implements GnuR
  record DollarGets(LangSXP ast, RegSymSXP member) implements GnuR
  record IsNull() implements GnuR
  record IsLogical() implements GnuR
  record IsInteger() implements GnuR
  record IsDouble() implements GnuR
  record IsComplex() implements GnuR
  record IsCharacter() implements GnuR
  record IsSymbol() implements GnuR
  record IsObject() implements GnuR
  record IsNumeric() implements GnuR
  record VecSubset(@Nullable LangSXP ast) implements GnuR
  record MatSubset(@Nullable LangSXP ast) implements GnuR
  record VecSubassign(@Nullable LangSXP ast) implements GnuR
  record MatSubassign(@Nullable LangSXP ast) implements GnuR
  record And1st(LangSXP ast, BcLabel shortCircuit) implements GnuR
  record And2nd(LangSXP ast) implements GnuR
  record Or1st(LangSXP ast, BcLabel shortCircuit) implements GnuR
  record Or2nd(LangSXP ast) implements GnuR
  record GetVarMissOk(RegSymSXP name) implements GnuR
  record DdValMissOk(RegSymSXP name) implements GnuR
  record Visible() implements GnuR
  record SetVar2(RegSymSXP name) implements GnuR
  record StartAssign2(RegSymSXP name) implements GnuR
  record EndAssign2(RegSymSXP name) implements GnuR
  record SetterCall(LangSXP ast, ConstPool.Idx valueExpr) implements GnuR
  record GetterCall(LangSXP ast) implements GnuR
  record SpecialSwap() implements GnuR
  record Dup2nd() implements GnuR
  record Switch(LangSXP ast, @Nullable Either<StrSXP, NilSXP> names, @Nullable IntSXP cOffsets, @Nullable IntSXP iOffsets) implements GnuR
  record ReturnJmp() implements GnuR
  record StartSubsetN(LangSXP ast, BcLabel after) implements GnuR
  record StartSubassignN(LangSXP ast, BcLabel after) implements GnuR
  record VecSubset2(@Nullable LangSXP ast) implements GnuR
  record MatSubset2(@Nullable LangSXP ast) implements GnuR
  record VecSubassign2(@Nullable LangSXP ast) implements GnuR
  record MatSubassign2(@Nullable LangSXP ast) implements GnuR
  record StartSubset2N(LangSXP ast, BcLabel after) implements GnuR
  record StartSubassign2N(LangSXP ast, BcLabel after) implements GnuR
  record SubsetN(@Nullable LangSXP ast, int n) implements GnuR
  record Subset2N(@Nullable LangSXP ast, int n) implements GnuR
  record SubassignN(@Nullable LangSXP ast, int n) implements GnuR
  record Subassign2N(@Nullable LangSXP ast, int n) implements GnuR
  record Log(LangSXP ast) implements GnuR
  record LogBase(LangSXP ast) implements GnuR
  record Math1(LangSXP ast, int funId) implements GnuR
  record DotCall(LangSXP ast, int numArgs) implements GnuR
  record Colon(LangSXP ast) implements GnuR
  record SeqAlong(LangSXP ast) implements GnuR
  record SeqLen(LangSXP ast) implements GnuR
  record BaseGuard(LangSXP expr, BcLabel after) implements GnuR
  record IncLnk() implements GnuR
  record DecLnk() implements GnuR
  record DeclnkN(int n) implements GnuR
  record IncLnkStk() implements GnuR
  record DecLnkStk() implements GnuR */
}
