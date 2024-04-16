package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.rshruntime.BcLocation;
import org.prlprg.sexp.*;
import org.prlprg.util.NotImplementedError;

/**
 * Each type of statement (non-jump) instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from statements.
 */
public sealed interface StmtData<I extends Stmt> extends InstrData<I> {
  sealed interface Void extends StmtData<Stmt> {
    @Override
    default Stmt make(CFG cfg, String name) {
      return new VoidStmtImpl(cfg, name, this);
    }
  }

  sealed interface RValue_ extends StmtData<RValueStmt> {
    /**
     * Compute the type from the arguments, or for trivial cases, <b>this will return {@code null}
     * </b>and an annotation on this class will compute the type instead.
     */
    default @Nullable RType computeType() {
      return null;
    }

    @Override
    default RValueStmt make(CFG cfg, String name) {
      return new RValueStmtImpl(cfg, name, this);
    }
  }

  /**
   * Temporary placeholders that shouldn't be inserted or replaced directly. Instead, these are
   * inserted and replaced indirectly in insert, replace, and remove operations for other
   * instructions, to improve performance by batching array changes and non-local substitutions for
   * later.
   */
  sealed interface Placeholder {}

  /**
   * If we are removing many statements staggered throughout a {@link BB}, instead of removing them
   * immediately, we can replace with {@code NoOp}s, then batch remove all {@code NoOp}s to improve
   * performance.
   */
  @EffectsAre({})
  record NoOp() implements Void, Placeholder {}

  /**
   * If we are substituting many statements with ones of a different shape (different compile-time
   * type, # of return values, or the substitution already exists), instead of doing so immediately,
   * which is ordinarily {@code O(numSubsts * cfg.numInstrs)}, we can substitute each with a {@code
   * Proxy} that is the same shape and compile-time type, which is {@code O(numSubsts)}, then in a
   * single pass "actually" substitute all {@code Proxy}s with their targets in {@code
   * O(cfg.numInstrs)} (regardless of the # of proxies; the combined time complexity of both phases
   * is {@code O(numSubsts + cfg.numInstrs)}).
   */
  sealed interface Proxy<I extends Stmt> extends StmtData<I>, Placeholder {
    I target();

    @Override
    default REffects computeEffects() {
      return target().effects();
    }
  }

  record RValueProxy(RValueStmt target) implements RValue_, Proxy<RValueStmt> {}

  // Order of the following is the same as in PIR `instruction.h`

  @EffectsAre(REffect.ReadsEnvArg)
  record FrameState_(BcLocation location, ImmutableList<RValue> stack, Env env, boolean inPromise)
      implements StmtData<FrameState> {
    @Override
    public FrameState make(CFG cfg, String name) {
      return new FrameStateImpl(cfg, name, this);
    }
  }

  @TypeIs("ANY_FUN")
  @EffectsAreAribtrary()
  record LdFun(RegSymSXP name, Env env) implements RValue_ {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVar(RegSymSXP name, Env env) implements RValue_ {}

  // TODO: It says in PIR that this should eventually be replaced with a non-dispatching extract
  //  call (probably an old comment so idk if it's still relevant)
  @EffectsAre(REffect.Error)
  record ToForSeq(RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.toForSeq(value.type());
    }
  }

  @TypeIs("INT")
  @EffectsAre({})
  record Length(RValue value) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("ANY")
  record LdArg(int index) implements RValue_ {}

  @TypeIs("LGL")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record IsMissing(RegSymSXP varName, Env env) implements RValue_ {}

  @EffectsAre(REffect.Error)
  record ChkMissing(RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return value.type().notMissing();
    }
  }

  @EffectsAre(REffect.Error)
  record ChkFun(RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return value.type().intersection(RTypes.ANY_FUN);
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.ReadsEnvArg, REffect.WritesEnvArg})
  record StVarSuper(RegSymSXP name, RValue r, Env env) implements Void {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVarSuper(RegSymSXP name, Env env) implements RValue_ {}

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.WritesEnvArg})
  record StVar(RegSymSXP name, RValue r, Env env, boolean isArg) implements Void {
    public StVar(RegSymSXP name, RValue r, Env env) {
      this(name, r, env, false);
    }
  }

  @TypeIs("PROM")
  @EffectsAre({})
  record MkProm(SEXP code, @Nullable RValue eagerArg, Env env) implements RValue_ {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  record StrictifyProm(@TypeIs("PROM") RValue promise, RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return promise.type().strict();
    }
  }

  @EffectsAre({})
  @TypeIs("CLOS")
  record MkCls(
      Closure closure, ListSXP formals, SymOrLangSXP srcRef, BCodeSXP originalBody, Env lexicalEnv)
      implements RValue_ {}

  @EffectsAreAribtrary
  record Force(RValue promise, FrameState frameState) implements RValue_ {
    @Override
    public RType computeType() {
      return promise.type().forced();
    }
  }

  @TypeIs("LGL")
  record AsLogical(RValue value) implements RValue_ {
    @Override
    public REffects computeEffects() {
      return value.type().isSubsetOf(RTypes.ANY_SIMPLE_PRIM_VEC)
          ? REffects.PURE
          : new REffects(REffect.Error);
    }
  }

  @TypeIs("INT")
  @EffectsAre({})
  record AsSwitchIdx(RValue value) implements RValue_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record CheckTrueFalse(RValue value) implements RValue_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record ColonInputEffects(LangSXP ast, RValue lhs, RValue rhs) implements RValue_ {}

  @TypeIs("NUMERIC_OR_LOGICAL_NO_NA")
  @EffectsAre(REffect.Error)
  record ColonCastLhs(LangSXP ast, RValue lhs) implements RValue_ {}

  @TypeIs("NUMERIC_OR_LOGICAL_NO_NA")
  @EffectsAre(REffect.Error)
  record ColonCastRhs(LangSXP ast, @TypeIs("NUMERIC_OR_LOGICAL_NO_NA") RValue lhs, RValue rhs)
      implements RValue_ {}

  sealed interface Subassign extends RValue_ {
    LangSXP ast();

    RValue value();

    RValue vecOrMtx();

    ImmutableList<RValue> indices();

    Env env();

    @Override
    default RType computeType() {
      throw new NotImplementedError();
    }

    @Override
    default REffects computeEffects() {
      throw new NotImplementedError();
    }
  }

  sealed interface SubassignN_1D extends Subassign {
    RValue vector();

    RValue index();

    @Override
    default RValue vecOrMtx() {
      return vector();
    }

    @Override
    default ImmutableList<RValue> indices() {
      return ImmutableList.of(index());
    }
  }

  sealed interface SubassignN_2D extends Subassign {
    RValue matrix();

    RValue index1();

    RValue index2();

    @Override
    default RValue vecOrMtx() {
      return matrix();
    }

    @Override
    default ImmutableList<RValue> indices() {
      return ImmutableList.of(index1(), index2());
    }
  }

  sealed interface Extract extends RValue_ {
    LangSXP ast();

    RValue vecOrMtx();

    ImmutableList<RValue> indices();

    Env env();

    @Override
    default RType computeType() {
      throw new NotImplementedError();
    }

    @Override
    default REffects computeEffects() {
      throw new NotImplementedError();
    }
  }

  sealed interface ExtractN_1D extends Extract {
    RValue vector();

    RValue index();

    @Override
    default RValue vecOrMtx() {
      return vector();
    }

    @Override
    default ImmutableList<RValue> indices() {
      return ImmutableList.of(index());
    }
  }

  sealed interface ExtractN_2D extends Extract {
    RValue matrix();

    RValue index1();

    RValue index2();

    @Override
    default RValue vecOrMtx() {
      return matrix();
    }

    @Override
    default ImmutableList<RValue> indices() {
      return ImmutableList.of(index1(), index2());
    }
  }

  record Subassign1_1D(LangSXP ast, RValue value, RValue vector, RValue index, Env env)
      implements SubassignN_1D {}

  @EffectsAre(REffect.Error)
  record SetVecElt(RValue value, RValue vector, RValue index) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }
  }

  record Subassign2_1D(LangSXP ast, RValue value, RValue vector, RValue index, Env env)
      implements SubassignN_1D {}

  record Subassign1_2D(
      LangSXP ast, RValue value, RValue matrix, RValue index1, RValue index2, Env env)
      implements SubassignN_2D {}

  record Subassign2_2D(
      LangSXP ast, RValue value, RValue matrix, RValue index1, RValue index2, Env env)
      implements SubassignN_2D {}

  record Subassign1_3D(
      LangSXP ast,
      RValue value,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue index3,
      Env env)
      implements Subassign {
    @Override
    public RValue vecOrMtx() {
      return matrix;
    }

    @Override
    public ImmutableList<RValue> indices() {
      return ImmutableList.of(index1, index2, index3);
    }
  }

  record Extract1_1D(LangSXP ast, RValue vector, RValue index, Env env) implements ExtractN_1D {}

  record Extract2_1D(LangSXP ast, RValue vector, RValue index, Env env) implements ExtractN_1D {}

  record Extract1_2D(LangSXP ast, RValue matrix, RValue index1, RValue index2, Env env)
      implements ExtractN_2D {}

  record Extract2_2D(LangSXP ast, RValue matrix, RValue index1, RValue index2, Env env)
      implements ExtractN_2D {}

  record Extract1_3D(
      LangSXP ast, RValue matrix, RValue index1, RValue index2, RValue index3, Env env)
      implements Extract {
    @Override
    public RValue vecOrMtx() {
      return matrix;
    }

    @Override
    public ImmutableList<RValue> indices() {
      return ImmutableList.of(index1, index2, index3);
    }
  }

  /**
   * GNU-R `is` (runtime type test).
   *
   * @see GnuRIs
   */
  @TypeIs("LGL")
  @EffectsAre({})
  record GnuRIs(IsTypeCheck typeCheck, RValue value) implements RValue_ {}

  /**
   * Java compiler runtime type test.
   *
   * @see GnuRIs
   */
  @TypeIs("BOOL")
  @EffectsAre({})
  record IsType(RType type, RValue value) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("ENV")
  record LdFunctionEnv() implements RValue_ {}

  @EffectsAre(REffect.Visibility)
  record Visible() implements Void {}

  @EffectsAre(REffect.Visibility)
  record Invisible() implements Void {}

  @EffectsAre({})
  @TypeIs("STR_OR_NIL")
  record Names(RValue value) implements RValue_ {}

  @EffectsAre(REffect.Error)
  record SetNames(RValue value, RValue names) implements RValue_ {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  record PirCopy(RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  @TypeIs("BOOL")
  record Identical(RValue lhs, RValue rhs) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("INT")
  record Inc(RValue value) implements RValue_ {}

  sealed interface UnOp extends RValue_ {
    RValue arg();
  }

  sealed interface ArithmeticUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RTypes.arithmeticOp(arg().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.arithmeticOp(arg().type());
    }
  }

  sealed interface BooleanUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RTypes.booleanOp(arg().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.booleanOp(arg().type());
    }
  }

  sealed interface BinOp extends RValue_ {
    RValue lhs();

    RValue rhs();
  }

  sealed interface ArithmeticBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.arithmeticOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.arithmeticOp(lhs().type(), rhs().type());
    }
  }

  sealed interface ComparisonBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.comparisonOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.comparisonOp(lhs().type(), rhs().type());
    }
  }

  sealed interface BooleanBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RTypes.booleanOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.booleanOp(lhs().type(), rhs().type());
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

  record LAnd(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements BooleanBinOp {}

  record LOr(LangSXP ast, @Override RValue lhs, @Override RValue rhs, Env env)
      implements BooleanBinOp {}

  record Not(LangSXP ast, @Override RValue arg, Env env) implements BooleanUnOp {}

  @EffectsAreAribtrary
  @TypeIs("ANY_VALUE")
  record Colon(LangSXP ast, RValue lhs, RValue rhs, Env env) implements RValue_ {
    @Override
    public RType computeType() {
      throw new NotImplementedError();
    }

    @Override
    public REffects computeEffects() {
      throw new NotImplementedError();
    }
  }

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record Call(LangSXP ast, RValue fun, ImmutableList<RValue> args, Env env, FrameState_ fs)
      implements RValue_ {}

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamedCall(
      LangSXP ast,
      RValue fun,
      ImmutableList<SymSXP> names,
      @SameLen("names") ImmutableList<RValue> args,
      Env env,
      FrameState_ fs)
      implements RValue_ {}

  @EffectsAreAribtrary()
  record CallBuiltin(
      LangSXP ast, BuiltinId builtin, RValue fun, ImmutableList<RValue> args, Env env)
      implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.builtin(builtin);
    }
  }

  @EffectsAre({REffect.Visibility, REffect.Warn, REffect.Error})
  record CallSafeBuiltin(
      LangSXP ast,
      BuiltinId builtin,
      RValue fun,
      ImmutableList<RValue> args,
      Env env,
      ImmutableList<Assumption> assumption)
      implements RValue_ {
    @Override
    public RType computeType() {
      return RTypes.builtin(builtin);
    }
  }

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("ENV")
  record MkEnv(
      Env lexicalEnv,
      ImmutableList<SymSXP> names,
      @SameLen("names") ImmutableList<RValue> values,
      @SameLen("names") ImmutableList<Boolean> missingness)
      implements StmtData<EnvStmt> {
    @Override
    public EnvStmt make(CFG cfg, String name) {
      return new EnvStmtImpl(cfg, name, this);
    }
  }

  @EffectsAre({})
  @TypeIs("ENV")
  record MaterializeEnv(Env env) implements RValue_ {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("BOOL")
  record IsEnvStub(Env env) implements RValue_ {}

  @EffectsAre({REffect.ChangesContext, REffect.LeaksNonEnvArg, REffect.LeaksEnvArg})
  record PushContext(RValue ast, RValue op, Call call, Env sysParent)
      implements StmtData<RContext> {
    @Override
    public RContext make(CFG cfg, String name) {
      return new RContextImpl(cfg, name, this);
    }
  }

  @EffectsAre(REffect.ChangesContext)
  record PopContext(RValue res, RContext context) implements RValue_ {}

  @EffectsAre(REffect.ChangesContext)
  record DropContext() implements Void {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("DOTS_ARG")
  record LdDots(Env env) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("EXPANDED_DOTS")
  record ExpandDots(@TypeIs("DOTS_ARG") RValue dots) implements RValue_ {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("DOTS")
  record DotsList(ImmutableList<SymSXP> names, ImmutableList<RValue> values) implements RValue_ {}
}
