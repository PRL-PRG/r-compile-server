package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import java.util.Iterator;
import java.util.Optional;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.ClosureVersion.CallContext;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.rshruntime.BcPosition;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;

/**
 * Each type of statement (non-jump) instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from statements.
 */
public sealed interface StmtData<I extends Stmt> extends InstrData<I> {
  sealed interface Void extends StmtData<Stmt> {
    @Override
    default Stmt make(CFG cfg, NodeId<? extends Instr> id) {
      return new VoidStmtImpl(cfg, id, this);
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

    /**
     * Compute the environment data from the arguments if this is guaranteed to be an environment,
     * otherwise return {@code null}.
     */
    default @Nullable EnvAux computeEnvAux() {
      return null;
    }

    @Override
    default RValueStmt make(CFG cfg, NodeId<? extends Instr> id) {
      return new RValueStmtImpl(cfg, id, this);
    }
  }

  /** A call instruction (e.g. {@link NamelessCall}, {@link NamedCall}, etc.). */
  sealed interface Call_<Fun> extends RValue_, InstrData.HasAst {
    Fun fun();

    /**
     * {@code null} except in named calls.
     *
     * <p>Static calls may have named arguments, but these are "implicit" because they are stored in
     * the {@link ClosureVersion}.
     */
    default @Nullable ImmutableList<Optional<String>> explicitNames() {
      return null;
    }

    ImmutableList<RValue> args();

    /** {@code null} except in static calls (? instead of {@code names} ?). */
    default @Nullable ImmutableIntArray arglistOrder() {
      return null;
    }

    @IsEnv
    RValue env();

    @Override
    default Call make(CFG cfg, NodeId<? extends Instr> id) {
      return new CallImpl(cfg, id, this);
    }

    /** Compute the {@link CallContext} provided to the closure being called. */
    default CallContext context() {
      // TODO: Compute something better if we can.
      return CallContext.EMPTY;
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
  record FrameState_(
      BcPosition location,
      boolean inPromise,
      ImmutableList<Node> stack,
      @IsEnv RValue env,
      @Nullable FrameState inlinedNext)
      implements StmtData<FrameStateStmt> {
    public FrameState_(
        BcPosition location, boolean inPromise, ImmutableList<Node> stack, @IsEnv RValue env) {
      this(location, inPromise, stack, env, null);
    }

    @Override
    public FrameStateStmt make(CFG cfg, NodeId<? extends Instr> id) {
      return new FrameStateStmtImpl(cfg, id, this);
    }
  }

  /** Effects are arbitrary because it implicitly forces. */
  @TypeIs("ANY_FUNCTION")
  @EffectsAreAribtrary()
  record LdFun(RegSymSXP name, @IsEnv RValue env) implements RValue_ {}

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.GetVar BcInstr.GetVar}. */
  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVar(RegSymSXP name, boolean missOk, @IsEnv RValue env) implements RValue_ {}

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.DdVal BcInstr.DdVal}. */
  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdDdVal(int ddNum, boolean missOk, @IsEnv RValue env) implements RValue_ {}

  // TODO: It says in PIR that this should eventually be replaced with a non-dispatching extract
  //  call (probably an old comment so idk if it's still relevant)
  @EffectsAre(REffect.Error)
  record ToForSeq(RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }
  }

  @TypeIs("INT")
  @EffectsAre({})
  record Length(RValue value) implements RValue_ {}

  @EffectsAre({})
  record LdArg(int index, RType type) implements RValue_ {
    public LdArg(int index) {
      this(index, RType.ANY);
    }

    @Override
    public RType computeType() {
      return type;
    }
  }

  @TypeIs("LGL")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record IsMissing(RegSymSXP varName, @IsEnv RValue env) implements RValue_ {}

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
      return value.type().intersection(RType.ANY_FUNCTION);
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.ReadsEnvArg, REffect.WritesEnvArg})
  record StVarSuper(RegSymSXP name, RValue value, @IsEnv RValue env) implements Void {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVarSuper(RegSymSXP name, @IsEnv RValue env) implements RValue_ {}

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.WritesEnvArg})
  record StVar(RegSymSXP name, RValue value, @IsEnv RValue env, boolean isArg) implements Void {
    public StVar(RegSymSXP name, RValue value, @IsEnv RValue env) {
      this(name, value, env, false);
    }
  }

  @TypeIs("ANY_PROMISE_NOT_MISSING")
  @EffectsAre({})
  record MkProm(Promise promise) implements RValue_ {
    @Override
    public void verify(boolean isInsert) throws InstrVerifyException {
      // If `isInsert` is `true`, `promise` will be empty, because it gets late-assigned.
      if (!isInsert) {
        promise.verify();
      }
    }
  }

  /** Force promise, but don't unwrap it. */
  @EffectsAre(REffect.LeaksNonEnvArg)
  record StrictifyProm(@TypeIs("PROM") RValue promise, RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return promise.type().strict();
    }
  }

  @EffectsAre({})
  @TypeIs("CLO")
  record MkCls(Closure closure) implements RValue_ {
    @Override
    public void verify(boolean isInsert) throws InstrVerifyException {
      // If `isInsert` is `true`, `closure` will be empty, because it gets late-assigned.
      if (!isInsert) {
        closure.verify();
      }
    }
  }

  record Force(RValue promise, @Nullable FrameState fs, @IsEnv RValue env) implements RValue_ {

    @Override
    public RType computeType() {
      return promise.type().forced();
    }

    /**
     * Whether the forced {@link SEXP} is guaranteed to already be evaluated.
     *
     * <p>If {@link YesOrMaybe#YES}, the force simply unwraps it if it's a promise.
     */
    public YesOrMaybe isStrict() {
      var isLazy = promise.type().isLazy();
      return YesOrMaybe.of(isLazy == null || isLazy == Maybe.NO);
    }

    @Override
    public REffects computeEffects() {
      if (isStrict() == YesOrMaybe.YES) {
        return REffects.PURE;
      }
      return promise instanceof Stmt s && s.data() instanceof MkProm(var p)
          ? p.properties().effects()
          : REffects.ARBITRARY;
    }
  }

  @TypeIs("LGL")
  record AsLogical(RValue value) implements RValue_ {
    @Override
    public REffects computeEffects() {
      return value.type().isSubsetOf(RType.ANY_SIMPLE_PRIM_VEC)
          ? REffects.PURE
          : new REffects(REffect.Error);
    }
  }

  @TypeIs("INT")
  @EffectsAre({REffect.Warn, REffect.Error})
  record AsSwitchIdx(RValue value) implements RValue_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record CheckTrueFalse(RValue value) implements RValue_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record ColonInputEffects(@Override @Nullable LangSXP ast, RValue lhs, RValue rhs)
      implements RValue_, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastLhs(@Override @Nullable LangSXP ast, RValue lhs)
      implements RValue_, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastRhs(
      @Override @Nullable LangSXP ast, @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA") RValue lhs, RValue rhs)
      implements RValue_, InstrData.HasAst {}

  sealed interface Subassign extends RValue_, InstrData.HasAst {
    RValue value();

    RValue vecOrMtx();

    ImmutableList<RValue> indices();

    @IsEnv
    RValue env();

    @Override
    default RType computeType() {
      // TODO
      return RType.ANY;
    }

    @Override
    default REffects computeEffects() {
      // TODO
      return REffects.ARBITRARY;
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

  sealed interface Extract extends RValue_, InstrData.HasAst {
    RValue vecOrMtx();

    ImmutableList<RValue> indices();

    @IsEnv
    RValue env();

    @Override
    default RType computeType() {
      // TODO
      return RType.ANY;
    }

    @Override
    default REffects computeEffects() {
      // TODO
      return REffects.ARBITRARY;
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

  record Subassign1_1D(
      @Override @Nullable LangSXP ast, RValue vector, RValue index, RValue value, @IsEnv RValue env)
      implements SubassignN_1D {}

  @EffectsAre(REffect.Error)
  record SetVecElt(RValue value, RValue vector, RValue index) implements RValue_ {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }
  }

  record Subassign2_1D(
      @Override @Nullable LangSXP ast, RValue vector, RValue index, RValue value, @IsEnv RValue env)
      implements SubassignN_1D {}

  record Subassign1_2D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue value,
      @IsEnv RValue env)
      implements SubassignN_2D {}

  record Subassign2_2D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue value,
      @IsEnv RValue env)
      implements SubassignN_2D {}

  record Subassign1_3D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue index3,
      RValue value,
      @IsEnv RValue env)
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

  record Extract1_1D(
      @Override @Nullable LangSXP ast, RValue vector, RValue index, @IsEnv RValue env)
      implements ExtractN_1D {}

  record Extract2_1D(
      @Override @Nullable LangSXP ast, RValue vector, RValue index, @IsEnv RValue env)
      implements ExtractN_1D {}

  record Extract1_2D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      @IsEnv RValue env)
      implements ExtractN_2D {}

  record Extract2_2D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      @IsEnv RValue env)
      implements ExtractN_2D {}

  record Extract1_3D(
      @Override @Nullable LangSXP ast,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue index3,
      @IsEnv RValue env)
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

  /** Type coercion. */
  @EffectsAre({})
  record CastType(RType type, RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return type;
    }
  }

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

  /**
   * Unlike PIR, unary operations are guarnateed not to dispatch, because we compile the dispatch
   * case separately.
   */
  sealed interface UnOp extends RValue_, InstrData.HasAst {
    RValue arg();
  }

  sealed interface ArithmeticUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RType.arithmeticOp(arg().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.arithmeticOp(arg().type());
    }
  }

  sealed interface BooleanUnOp extends UnOp {
    @Override
    default RType computeType() {
      return RType.booleanOp(arg().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.booleanOp(arg().type());
    }
  }

  /**
   * Unlike PIR, binary operations are guarnateed not to dispatch, because we compile the dispatch
   * case separately.
   */
  sealed interface BinOp extends RValue_, InstrData.HasAst {
    RValue lhs();

    RValue rhs();
  }

  sealed interface ArithmeticBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RType.arithmeticOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.arithmeticOp(lhs().type(), rhs().type());
    }
  }

  sealed interface ComparisonBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RType.comparisonOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.comparisonOp(lhs().type(), rhs().type());
    }
  }

  sealed interface BooleanBinOp extends BinOp {
    @Override
    default RType computeType() {
      return RType.booleanOp(lhs().type(), rhs().type());
    }

    @Override
    default REffects computeEffects() {
      return REffects.booleanOp(lhs().type(), rhs().type());
    }
  }

  record UMinus(@Override @Nullable LangSXP ast, @Override RValue arg) implements ArithmeticUnOp {}

  record UPlus(@Override @Nullable LangSXP ast, @Override RValue arg) implements ArithmeticUnOp {}

  record Sqrt(@Override @Nullable LangSXP ast, @Override RValue arg) implements ArithmeticUnOp {}

  record Exp(@Override @Nullable LangSXP ast, @Override RValue arg) implements ArithmeticUnOp {}

  record Log(@Override @Nullable LangSXP ast, @Override RValue arg) implements ArithmeticUnOp {}

  record LogBase(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  // ???: Should we put all unary math functions in math1 or make all math1 functions separate
  // instructions?
  record Math1(@Override @Nullable LangSXP ast, int funId, @Override RValue arg)
      implements ArithmeticUnOp {}

  record Add(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Sub(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Mul(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Div(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record IDiv(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Mod(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Pow(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ArithmeticBinOp {}

  record Eq(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record Neq(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record Lt(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record Lte(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record Gte(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record Gt(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements ComparisonBinOp {}

  record LAnd(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements BooleanBinOp {}

  record LOr(@Override @Nullable LangSXP ast, @Override RValue lhs, @Override RValue rhs)
      implements BooleanBinOp {}

  record Not(@Override @Nullable LangSXP ast, @Override RValue arg) implements BooleanUnOp {}

  record Colon(@Override @Nullable LangSXP ast, RValue lhs, RValue rhs)
      implements RValue_, InstrData.HasAst {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }

    @Override
    public REffects computeEffects() {
      // TODO
      return REffects.ARBITRARY;
    }
  }

  @EffectsAre(REffect.Warn)
  record Warning(String message) implements Void {}

  @EffectsAre(REffect.Error)
  record Error(String message) implements Void {}

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamelessCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") @Override RValue fun,
      @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env,
      @Nullable FrameState fs)
      implements Call_<RValue> {}

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamedCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") @Override RValue fun,
      @Override ImmutableList<Optional<String>> explicitNames,
      @SameLen("names") @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env,
      @Nullable FrameState fs)
      implements Call_<RValue> {}

  record StaticCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("CLO") @Nullable RValue runtimeClosure,
      @Override ClosureVersion fun,
      @Override CallContext context,
      @Override ImmutableList<RValue> args,
      @Override @SameLen("args") ImmutableIntArray arglistOrder,
      @Override @IsEnv RValue env,
      @Nullable FrameState fs)
      implements Call_<ClosureVersion> {
    @Override
    public RType computeType() {
      // TODO: Draft impl
      return fun.properties().returnType(args);
    }

    @Override
    public REffects computeEffects() {
      // TODO: Draft impl
      return fun.properties().effects(args);
    }
  }

  @EffectsAreAribtrary()
  record CallBuiltin(
      @Override @Nullable LangSXP ast,
      @Override BuiltinId fun,
      @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env)
      implements Call_<BuiltinId> {
    @Override
    public RType computeType() {
      return RType.builtin(fun);
    }
  }

  @EffectsAre({REffect.Visibility, REffect.Warn, REffect.Error})
  record CallSafeBuiltin(
      @Override @Nullable LangSXP ast,
      @Override BuiltinId fun,
      @Override ImmutableList<RValue> args,
      ImmutableList<Assumption> assumption)
      implements Call_<BuiltinId> {
    public CallSafeBuiltin(@Nullable LangSXP ast, BuiltinId fun, ImmutableList<RValue> args) {
      this(ast, fun, args, ImmutableList.of());
    }

    @Override
    public RValue env() {
      return StaticEnv.ELIDED;
    }

    @Override
    public RType computeType() {
      return RType.builtin(fun);
    }
  }

  @EffectsAreAribtrary()
  record TryDispatchBuiltin_(
      @Override LangSXP ast,
      @Override BuiltinId fun,
      RValue target,
      @Nullable RValue rhs,
      @Override @IsEnv RValue env)
      implements StmtData<TryDispatchBuiltin> {
    @Override
    public TryDispatchBuiltin make(CFG cfg, NodeId<? extends Instr> id) {
      return new TryDispatchBuiltinImpl(cfg, id, this);
    }
  }

  /**
   * @param parent
   * @param names
   * @param values
   * @param missingness
   * @param context
   * @param isStub Whether this is a special lightweight environment (from PIR).
   * @param neverStub Set on a stubbed environment if we deoptimize because it materialized.
   */
  @EffectsAre(REffect.LeaksNonEnvArg)
  @IsEnv
  record MkEnv(
      @Override @IsEnv RValue parent,
      ImmutableList<RegSymSXP> names,
      @SameLen("names") ImmutableList<RValue> values,
      @SameLen("names") ImmutableList<Boolean> missingness,
      int context,
      boolean isStub,
      boolean neverStub)
      implements RValue_ {
    public MkEnv(
        @IsEnv RValue parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<RValue> values,
        @SameLen("names") ImmutableList<Boolean> missingness,
        int context,
        boolean isStub) {
      this(parent, names, values, missingness, context, isStub, false);
    }

    public MkEnv(
        @IsEnv RValue parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<RValue> values,
        @SameLen("names") ImmutableList<Boolean> missingness) {
      this(parent, names, values, missingness, 1, false);
    }

    public MkEnv(@IsEnv RValue parent) {
      this(parent, ImmutableList.of(), ImmutableList.of(), ImmutableList.of());
    }

    @Override
    public EnvAux computeEnvAux() {
      return new EnvAux(parent);
    }

    public int size() {
      assert names.size() == values.size();
      assert names.size() == missingness.size();
      return names.size();
    }

    public interface LocalVar {
      RegSymSXP name();

      RValue value();

      boolean isMissing();
    }

    private record LocalVarImpl(
        @Override RegSymSXP name, @Override RValue value, @Override boolean isMissing)
        implements LocalVar {}

    public Iterable<LocalVar> localVars() {
      return () ->
          new Iterator<>() {
            private int i = 0;

            @Override
            public boolean hasNext() {
              return i < size();
            }

            @Override
            public LocalVar next() {
              if (i == size()) {
                throw new IndexOutOfBoundsException();
              }

              var result = new LocalVarImpl(names.get(i), values.get(i), missingness.get(i));
              i++;
              return result;
            }
          };
    }
  }

  @EffectsAre({})
  record MaterializeEnv(@IsEnv RValue env) implements Void {}

  /**
   * Doesn't have {@link REffect#ReadsEnvArg} because it doesn't read the "environment" part of the
   * environment, only checks that it's not a stub. The effect's absence is relied on by {@code
   * org.prlprg.optimizations.ElideEnvs}.
   */
  @EffectsAre({})
  @TypeIs("BOOL")
  record IsEnvStub(@IsEnv RValue env) implements RValue_ {}

  @EffectsAre({REffect.ChangesContext, REffect.LeaksNonEnvArg, REffect.LeaksEnvArg})
  record PushContext(
      RValue ast,
      RValue op,
      ImmutableList<RValue> ctxArgs,
      @Nullable ImmutableIntArray arglistOrder,
      @IsEnv RValue sysParent)
      implements StmtData<RContext> {
    public PushContext(RValue ast, RValue op, Call call, @IsEnv RValue sysParent) {
      this(ast, op, call.data().args(), call.data().arglistOrder(), sysParent);
    }

    @Override
    public RContext make(CFG cfg, NodeId<? extends Instr> id) {
      return new RContextImpl(cfg, id, this);
    }
  }

  @TypeIs("ANY_VALUE_MAYBE_MISSING")
  @EffectsAre(REffect.ChangesContext)
  record PopContext(RValue res, RContext context) implements RValue_ {}

  @EffectsAre(REffect.ChangesContext)
  record DropContext() implements Void {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("DOTS_LIST")
  record LdDots(@IsEnv RValue env) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("EXPANDED_DOTS")
  record ExpandDots(@TypeIs("DOTS_LIST") RValue dots) implements RValue_ {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("DOTS")
  record DotsList(
      ImmutableList<Optional<RegSymSXP>> names, @SameLen("names") ImmutableList<RValue> values)
      implements RValue_ {}
}
