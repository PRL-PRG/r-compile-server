package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Iterator;
import java.util.Optional;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.cfg.CallArguments.UnknownOrder;
import org.prlprg.ir.cfg.CallTarget.DynamicCall;
import org.prlprg.ir.cfg.CallTarget.StaticBuiltinCall;
import org.prlprg.ir.cfg.CallTarget.StaticCompiledCall;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.ClosureVersion.CallContext;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RClosureType;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.rshruntime.BcPosition;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * Each type of statement (non-jump) instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from statements.
 */
public sealed interface StmtData<I extends Stmt> extends InstrData<I> {
  /** An instruction that doesn't produce any value. */
  sealed interface Void extends StmtData<Stmt> {
    @Override
    default Stmt make(CFG cfg, NodeId<? extends Instr> id) {
      return new VoidStmtImpl(cfg, id, this);
    }
  }

  /** An instruction that produces a {@link SEXP}. */
  sealed interface ISexp_ extends StmtData<ISexpStmt> {
    /**
     * Compute the type from the arguments, or for trivial cases, <i>this will return {@code null}
     * </i> and an annotation on this class will compute the type instead.
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
    default ISexpStmt make(CFG cfg, NodeId<? extends Instr> id) {
      return new ISexpStmtImpl(cfg, id, this);
    }
  }

  /** A load instruction, e.g. {@link LdVar}, {@link LdVarSuper} */
  sealed interface Load {
    RegSymSXP name();

    boolean missOk();

    @IsEnv
    ISexp env();
  }

  /** A store instruction, e.g. {@link StVar}, {@link StVarSuper} */
  sealed interface Store {
    RegSymSXP name();

    ISexp value();

    @IsEnv
    ISexp env();
  }

  /** A call instruction, e.g. {@link NamelessCall}, {@link NamedCall} */
  sealed interface Call extends ISexp_, InstrData.HasAst {
    /**
     * The function to be called.
     *
     * <p>It may be an arbitrary {@link ISexp} or something statically-known (typically we must
     * speculatively guard the statically-known things, but that's outside this instruction, and not
     * necessarily e.g. in {@code (function(…) { … })(…) }).
     */
    CallTarget fun();

    /**
     * Call arguments.
     *
     * <p>They may or may not be ordered, and may or may not contain "dots" that expand to unknown
     * names and arguments.
     *
     * <p>This doesn't indicate how we'll pass the arguments; we will create an R-list for GNU-R
     * closures, but call directly and maybe unbox for JITted closures (and append necessary missing
     * arguments). It is only what arguments we'll pass, and whether they are in order ({@link
     * CallArguments.KnownOrder}), in order except with dots ({@link
     * CallArguments.KnownOrderExceptDots}), or possibly out of order what names (which determine
     * the order based on the closure's parameters; {@link CallArguments.UnknownOrder}).
     */
    CallArguments args();

    /**
     * Caller's environment.
     *
     * <p>The callee can access this via {@code sys.frame}. If {@code null}, that means we know the
     * callee won't access the environment, so we elided it.
     */
    @Nullable @IsEnv
    ISexp env();

    /** Frame-state for deoptimization. */
    @Nullable FrameState fs();

    /**
     * Compute the most specific {@link CallContext} we can from {@code args} and {@code env}.
     *
     * <p>If {@link #fun()} is statically known to be a {@linkplain Closure compiled closure}
     * ({@link RClosureType#isJit()}, but not a specific closure, we will provide this call context
     * to the call. If {@link #fun()} is statically known to be a specific compiled closure, we will
     * directly call the {@link ClosureVersion} that matches the context.
     */
    default CallContext context() {
      // TODO
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

  record ISexpProxy(ISexpStmt target) implements ISexp_, Proxy<ISexpStmt> {}

  // Order of the following is the same as in PIR `instruction.h`

  @EffectsAre(REffect.ReadsEnvArg)
  record FrameState_(
      BcPosition location,
      boolean inPromise,
      ImmutableList<Node> stack,
      @IsEnv ISexp env,
      @Nullable FrameState inlinedNext)
      implements StmtData<FrameStateStmt> {
    public FrameState_(
        BcPosition location, boolean inPromise, ImmutableList<Node> stack, @IsEnv ISexp env) {
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
  record LdFun(@Override RegSymSXP name, @Override @IsEnv ISexp env) implements Load {
    @Override
    public boolean missOk() {
      return false;
    }
  }

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.GetVar BcInstr.GetVar}. */
  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVar(@Override RegSymSXP name, @Override boolean missOk, @Override @IsEnv ISexp env)
      implements Load {}

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.DdVal BcInstr.DdVal}. */
  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdDdVal(int ddNum, @Override boolean missOk, @Override @IsEnv ISexp env) implements Load {
    @Override
    public RegSymSXP name() {
      return SEXPs.symbol(".." + ddNum);
    }
  }

  // TODO: It says in PIR that this should eventually be replaced with a non-dispatching extract
  //  call (probably an old comment so idk if it's still relevant)
  @EffectsAre(REffect.Error)
  record ToForSeq(ISexp value) implements ISexp_ {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }
  }

  @TypeIs("INT")
  @EffectsAre({})
  record Length(ISexp value) implements ISexp_ {}

  // FIXME: Insert in bytecode->IR `Compiler`. Should this be a `Load`?
  @EffectsAre({})
  record LdArg(int index, RType type) implements ISexp_ {
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
  record IsMissing(RegSymSXP varName, @IsEnv ISexp env) implements ISexp_ {}

  @EffectsAre(REffect.Error)
  record ChkMissing(ISexp value) implements ISexp_ {
    @Override
    public RType computeType() {
      return value.type().notMissing();
    }
  }

  @EffectsAre(REffect.Error)
  record ChkFun(ISexp value) implements ISexp_ {
    @Override
    public RType computeType() {
      return value.type().intersection(RType.ANY_FUNCTION);
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.ReadsEnvArg, REffect.WritesEnvArg})
  record StVarSuper(@Override RegSymSXP name, @Override ISexp value, @Override @IsEnv ISexp env)
      implements Store {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVarSuper(RegSymSXP name, @IsEnv ISexp env) implements Load {
    @Override
    public boolean missOk() {
      return false;
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.WritesEnvArg})
  record StVar(
      @Override RegSymSXP name, @Override ISexp value, @Override @IsEnv ISexp env, boolean isArg)
      implements Store {
    public StVar(RegSymSXP name, ISexp value, @IsEnv ISexp env) {
      this(name, value, env, false);
    }
  }

  @TypeIs("ANY_PROMISE_NOT_MISSING")
  @EffectsAre({})
  record MkProm(Promise promise) implements ISexp_ {
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
  record StrictifyProm(@TypeIs("PROM") ISexp promise, ISexp value) implements ISexp_ {
    @Override
    public RType computeType() {
      return promise.type().strict();
    }
  }

  @EffectsAre({})
  @TypeIs("CLO")
  record MkCls(Closure closure) implements ISexp_ {
    @Override
    public void verify(boolean isInsert) throws InstrVerifyException {
      // If `isInsert` is `true`, `closure` will be empty, because it gets late-assigned.
      if (!isInsert) {
        closure.verify();
      }
    }
  }

  record Force(ISexp promise, @Nullable FrameState fs, @IsEnv ISexp env) implements ISexp_ {

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
  record AsLogical(ISexp value) implements ISexp_ {
    @Override
    public REffects computeEffects() {
      return value.type().isSubsetOf(RType.ANY_SIMPLE_PRIM_VEC)
          ? REffects.PURE
          : new REffects(REffect.Error);
    }
  }

  @TypeIs("INT")
  @EffectsAre({REffect.Warn, REffect.Error})
  record AsSwitchIdx(ISexp value) implements ISexp_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record CheckTrueFalse(ISexp value) implements ISexp_ {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record ColonInputEffects(@Override @Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements ISexp_, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastLhs(@Override @Nullable LangSXP ast, ISexp lhs)
      implements ISexp_, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastRhs(
      @Override @Nullable LangSXP ast, @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA") ISexp lhs, ISexp rhs)
      implements ISexp_, InstrData.HasAst {}

  sealed interface Subassign extends ISexp_, InstrData.HasAst {
    ISexp value();

    ISexp vecOrMtx();

    ImmutableList<ISexp> indices();

    @IsEnv
    ISexp env();

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
    ISexp vector();

    ISexp index();

    @Override
    default ISexp vecOrMtx() {
      return vector();
    }

    @Override
    default ImmutableList<ISexp> indices() {
      return ImmutableList.of(index());
    }
  }

  sealed interface SubassignN_2D extends Subassign {
    ISexp matrix();

    ISexp index1();

    ISexp index2();

    @Override
    default ISexp vecOrMtx() {
      return matrix();
    }

    @Override
    default ImmutableList<ISexp> indices() {
      return ImmutableList.of(index1(), index2());
    }
  }

  sealed interface Extract extends ISexp_, InstrData.HasAst {
    ISexp vecOrMtx();

    ImmutableList<ISexp> indices();

    @IsEnv
    ISexp env();

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
    ISexp vector();

    ISexp index();

    @Override
    default ISexp vecOrMtx() {
      return vector();
    }

    @Override
    default ImmutableList<ISexp> indices() {
      return ImmutableList.of(index());
    }
  }

  sealed interface ExtractN_2D extends Extract {
    ISexp matrix();

    ISexp index1();

    ISexp index2();

    @Override
    default ISexp vecOrMtx() {
      return matrix();
    }

    @Override
    default ImmutableList<ISexp> indices() {
      return ImmutableList.of(index1(), index2());
    }
  }

  record Subassign1_1D(
      @Override @Nullable LangSXP ast, ISexp vector, ISexp index, ISexp value, @IsEnv ISexp env)
      implements SubassignN_1D {}

  @EffectsAre(REffect.Error)
  record SetVecElt(ISexp value, ISexp vector, ISexp index) implements ISexp_ {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }
  }

  record Subassign2_1D(
      @Override @Nullable LangSXP ast, ISexp vector, ISexp index, ISexp value, @IsEnv ISexp env)
      implements SubassignN_1D {}

  record Subassign1_2D(
      @Override @Nullable LangSXP ast,
      ISexp matrix,
      ISexp index1,
      ISexp index2,
      ISexp value,
      @IsEnv ISexp env)
      implements SubassignN_2D {}

  record Subassign2_2D(
      @Override @Nullable LangSXP ast,
      ISexp matrix,
      ISexp index1,
      ISexp index2,
      ISexp value,
      @IsEnv ISexp env)
      implements SubassignN_2D {}

  record Subassign1_3D(
      @Override @Nullable LangSXP ast,
      ISexp matrix,
      ISexp index1,
      ISexp index2,
      ISexp index3,
      ISexp value,
      @IsEnv ISexp env)
      implements Subassign {
    @Override
    public ISexp vecOrMtx() {
      return matrix;
    }

    @Override
    public ImmutableList<ISexp> indices() {
      return ImmutableList.of(index1, index2, index3);
    }
  }

  record Extract1_1D(@Override @Nullable LangSXP ast, ISexp vector, ISexp index, @IsEnv ISexp env)
      implements ExtractN_1D {}

  record Extract2_1D(@Override @Nullable LangSXP ast, ISexp vector, ISexp index, @IsEnv ISexp env)
      implements ExtractN_1D {}

  record Extract1_2D(
      @Override @Nullable LangSXP ast, ISexp matrix, ISexp index1, ISexp index2, @IsEnv ISexp env)
      implements ExtractN_2D {}

  record Extract2_2D(
      @Override @Nullable LangSXP ast, ISexp matrix, ISexp index1, ISexp index2, @IsEnv ISexp env)
      implements ExtractN_2D {}

  record Extract1_3D(
      @Override @Nullable LangSXP ast,
      ISexp matrix,
      ISexp index1,
      ISexp index2,
      ISexp index3,
      @IsEnv ISexp env)
      implements Extract {
    @Override
    public ISexp vecOrMtx() {
      return matrix;
    }

    @Override
    public ImmutableList<ISexp> indices() {
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
  record GnuRIs(IsTypeCheck typeCheck, ISexp value) implements ISexp_ {}

  /**
   * Java compiler runtime type test.
   *
   * @see GnuRIs
   */
  @TypeIs("BOOL")
  @EffectsAre({})
  record IsType(RType type, ISexp value) implements ISexp_ {}

  /** Type coercion. */
  @EffectsAre({})
  record CastType(RType type, ISexp value) implements ISexp_ {
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
  record Names(ISexp value) implements ISexp_ {}

  @EffectsAre(REffect.Error)
  record SetNames(ISexp value, ISexp names) implements ISexp_ {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  record PirCopy(ISexp value) implements ISexp_ {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  @TypeIs("BOOL")
  record Identical(ISexp lhs, ISexp rhs) implements ISexp_ {}

  @EffectsAre({})
  @TypeIs("INT")
  record Inc(ISexp value) implements ISexp_ {}

  /**
   * Unlike PIR, unary operations are guarnateed not to dispatch, because we compile the dispatch
   * case separately.
   */
  sealed interface UnOp extends ISexp_, InstrData.HasAst {
    ISexp arg();
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
  sealed interface BinOp extends ISexp_, InstrData.HasAst {
    ISexp lhs();

    ISexp rhs();
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

  record UMinus(@Override @Nullable LangSXP ast, @Override ISexp arg) implements ArithmeticUnOp {}

  record UPlus(@Override @Nullable LangSXP ast, @Override ISexp arg) implements ArithmeticUnOp {}

  record Sqrt(@Override @Nullable LangSXP ast, @Override ISexp arg) implements ArithmeticUnOp {}

  record Exp(@Override @Nullable LangSXP ast, @Override ISexp arg) implements ArithmeticUnOp {}

  record Log(@Override @Nullable LangSXP ast, @Override ISexp arg) implements ArithmeticUnOp {}

  record LogBase(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  // ???: Should we put all unary math functions in math1 or make all math1 functions separate
  // instructions?
  record Math1(@Override @Nullable LangSXP ast, int funId, @Override ISexp arg)
      implements ArithmeticUnOp {}

  record Add(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Sub(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Mul(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Div(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record IDiv(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Mod(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Pow(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ArithmeticBinOp {}

  record Eq(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record Neq(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record Lt(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record Lte(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record Gte(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record Gt(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements ComparisonBinOp {}

  record LAnd(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements BooleanBinOp {}

  record LOr(@Override @Nullable LangSXP ast, @Override ISexp lhs, @Override ISexp rhs)
      implements BooleanBinOp {}

  record Not(@Override @Nullable LangSXP ast, @Override ISexp arg) implements BooleanUnOp {}

  record Colon(@Override @Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements ISexp_, InstrData.HasAst {
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

  /** Dynamic call with no named arguments. */
  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamelessCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") @Override ISexp fun_,
      @Override ImmutableList<ISexp> args_,
      @Override @IsEnv ISexp env,
      @Override @Nullable FrameState fs)
      implements Call {

    @Override
    public CallTarget fun() {
      return new DynamicCall(fun_);
    }

    @Override
    public CallArguments args() {
      return CallArguments.withoutNames(args_);
    }
  }

  /** Dynamic call with at least one named argument. */
  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamedCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") @Override ISexp fun_,
      @Override ImmutableList<Optional<String>> names,
      @SameLen("names") @Override ImmutableList<ISexp> args_,
      @Override @IsEnv ISexp env,
      @Override @Nullable FrameState fs)
      implements Call {
    @Override
    public CallTarget fun() {
      return new DynamicCall(fun_);
    }

    @Override
    public CallArguments args() {
      return new UnknownOrder(names, args_);
    }
  }

  /** Statically-known {@link Closure} call. */
  record StaticCall(
      @Override @Nullable LangSXP ast,
      @TypeIs("CLO") @Nullable ISexp runtimeClosure,
      @Override Closure fun_,
      @Override ImmutableList<ISexp> args_,
      @Override @Nullable @IsEnv ISexp env,
      @Nullable FrameState fs)
      implements Call {
    /** The exact closure version we dispatch. */
    public ClosureVersion version() {
      return fun_.getVersion(context());
    }

    @Override
    public CallTarget fun() {
      return new StaticCompiledCall(fun_);
    }

    @Override
    public CallArguments args() {
      return CallArguments.withoutNames(args_);
    }

    @Override
    public @Nullable FrameState fs() {
      return null;
    }

    @Override
    public RType computeType() {
      return version().properties().returnType(args_);
    }

    @Override
    public REffects computeEffects() {
      return version().properties().effects(args_);
    }
  }

  /** Statically-known builtin ({@link BuiltinId}) call. */
  @EffectsAreAribtrary()
  record CallBuiltin(
      @Override @Nullable LangSXP ast,
      @Override BuiltinId fun_,
      @Override ImmutableList<ISexp> args_,
      @Override @Nullable @IsEnv ISexp env)
      implements Call {
    @Override
    public CallTarget fun() {
      return new StaticBuiltinCall(fun_);
    }

    @Override
    public CallArguments args() {
      // Builtins don't have named parameters, so names are discarded.
      return CallArguments.withoutNames(args_);
    }

    @Override
    public RType computeType() {
      return RType.builtin(fun_);
    }

    @Override
    public @Nullable FrameState fs() {
      return null;
    }
  }

  @EffectsAreAribtrary()
  record TryDispatchBuiltin_(
      @Override LangSXP ast,
      @Override BuiltinId fun,
      ISexp target,
      @Nullable ISexp rhs,
      @Override @IsEnv ISexp env)
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
      @Override @IsEnv ISexp parent,
      ImmutableList<RegSymSXP> names,
      @SameLen("names") ImmutableList<ISexp> values,
      @SameLen("names") ImmutableList<Boolean> missingness,
      int context,
      boolean isStub,
      boolean neverStub)
      implements ISexp_ {
    public MkEnv(
        @IsEnv ISexp parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<ISexp> values,
        @SameLen("names") ImmutableList<Boolean> missingness,
        int context,
        boolean isStub) {
      this(parent, names, values, missingness, context, isStub, false);
    }

    public MkEnv(
        @IsEnv ISexp parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<ISexp> values,
        @SameLen("names") ImmutableList<Boolean> missingness) {
      this(parent, names, values, missingness, 1, false);
    }

    public MkEnv(@IsEnv ISexp parent) {
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

      ISexp value();

      boolean isMissing();
    }

    private record LocalVarImpl(
        @Override RegSymSXP name, @Override ISexp value, @Override boolean isMissing)
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
  record MaterializeEnv(@IsEnv ISexp env) implements Void {}

  /**
   * Doesn't have {@link REffect#ReadsEnvArg} because it doesn't read the "environment" part of the
   * environment, only checks that it's not a stub. The effect's absence is relied on by {@code
   * org.prlprg.optimizations.ElideEnvs}.
   */
  @EffectsAre({})
  @TypeIs("BOOL")
  record IsEnvStub(@IsEnv ISexp env) implements ISexp_ {}

  @EffectsAre({REffect.ChangesContext, REffect.LeaksNonEnvArg, REffect.LeaksEnvArg})
  record PushContext(ISexp ast, ISexp op, ImmutableList<ISexp> callArgs, @IsEnv ISexp sysParent)
      implements StmtData<RContext> {
    public PushContext(
        ISexp ast, ISexp op, CallArguments.KnownOrder callArgs, @IsEnv ISexp sysParent) {
      this(ast, op, callArgs.args(), sysParent);
    }

    @Override
    public RContext make(CFG cfg, NodeId<? extends Instr> id) {
      return new RContextImpl(cfg, id, this);
    }
  }

  @TypeIs("ANY_VALUE_MAYBE_MISSING")
  @EffectsAre(REffect.ChangesContext)
  record PopContext(ISexp res, RContext context) implements ISexp_ {}

  @EffectsAre(REffect.ChangesContext)
  record DropContext() implements Void {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("DOTS_LIST")
  record LdDots(@IsEnv ISexp env) implements Load {
    @Override
    public RegSymSXP name() {
      return SEXPs.DOTS_SYMBOL;
    }

    @Override
    public boolean missOk() {
      return false;
    }
  }

  @EffectsAre({})
  @TypeIs("EXPANDED_DOTS")
  record ExpandDots(@TypeIs("DOTS_LIST") ISexp dots) implements ISexp_ {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("DOTS")
  record DotsList(
      ImmutableList<Optional<RegSymSXP>> names, @SameLen("names") ImmutableList<ISexp> values)
      implements ISexp_ {}
}
