package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.*;

/** {@link Stmt.Data} pattern-matchable records. */
class Stmts {
  // We put these sealed classes in `Stmts` so that we don't need a giant `permits` list.
  // We expose `Stmt.Data` and `RValueStmt.Data` instead of (hypothetical) `Stmts.Data` and
  // `Stmts.RValue`
  // so that `Stmts` only exposes records (outside package code will never want to pattern-match on
  // `Void` or ...).
  sealed interface Void extends Stmt.Data<Stmt> {
    @Override
    default Stmt make(CFG cfg, String name) {
      return new VoidStmtImpl(cfg, name, this);
    }
  }

  sealed interface RValue_ extends RValueStmt.Data {
    @Override
    default RValueStmt make(CFG cfg, String name) {
      return new RValueStmtImpl(cfg, name, this);
    }
  }

  record Invisible() implements Void {}

  record LdConst(SEXP constant) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.exact(constant);
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
      return RTypes.ANY_FUN;
    }
  }

  record CheckFun(RValue value) implements Void {}

  record MakeProm(SEXP code, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.simple(SEXPType.PROM);
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
}
