package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import java.util.Optional;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.rshruntime.BcAddress;
import org.prlprg.rshruntime.BcLocation;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SymOrLangSXP;

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

    /**
     * Compute the environment data from the arguments if this is guaranteed to be an environment,
     * otherwise return {@code null}.
     */
    default @Nullable EnvAux computeEnvAux() {
      return null;
    }

    @Override
    default RValueStmt make(CFG cfg, String name) {
      return new RValueStmtImpl(cfg, name, this);
    }
  }

  /** A call instruction (e.g. {@link Call}, {@link NamedCall}, etc.). */
  sealed interface Call_ extends RValue_ {
    LangSXP ast();

    @Nullable RValue fun();

    /** {@code null} except in named calls. */
    default @Nullable ImmutableList<Optional<RegSymSXP>> names() {
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
    default org.prlprg.ir.cfg.Call make(CFG cfg, String name) {
      return new CallImpl(cfg, name, this);
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
  record FrameState(
      BcLocation location,
      boolean inPromise,
      ImmutableList<RValue> stack,
      @IsEnv RValue env,
      Optional<org.prlprg.ir.cfg.FrameState> inlined)
      implements StmtData<FrameStateStmt> {
    public FrameState(
        BcLocation location,
        boolean inPromise,
        ImmutableList<RValue> stack,
        @IsEnv RValue env,
        @Nullable org.prlprg.ir.cfg.FrameState inlined) {
      this(location, inPromise, stack, env, Optional.ofNullable(inlined));
    }

    @Override
    public FrameStateStmt make(CFG cfg, String name) {
      return new FrameStateStmtImpl(cfg, name, this);
    }
  }

  @TypeIs("ANY_FUN")
  @EffectsAreAribtrary()
  record LdFun(RegSymSXP name, @IsEnv RValue env) implements RValue_ {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVar(RegSymSXP name, @IsEnv RValue env) implements RValue_ {}

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
  record LdArg(int index, RType type) implements RValue_ {
    public LdArg(int index) {
      this(index, RTypes.ANY);
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
      return value.type().intersection(RTypes.ANY_FUN);
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.ReadsEnvArg, REffect.WritesEnvArg})
  record StVarSuper(RegSymSXP name, RValue r, @IsEnv RValue env) implements Void {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVarSuper(RegSymSXP name, @IsEnv RValue env) implements RValue_ {}

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.WritesEnvArg})
  record StVar(RegSymSXP name, RValue r, @IsEnv RValue env, boolean isArg) implements Void {
    public StVar(RegSymSXP name, RValue r, @IsEnv RValue env) {
      this(name, r, env, false);
    }
  }

  @TypeIs("PROM")
  @EffectsAre({})
  record MkProm(
      SEXP code, Optional<RValue> eagerArg, @IsEnv RValue env, NoOrMaybe performsReflection)
      implements RValue_ {
    public MkProm(
        SEXP code, @Nullable RValue eagerArg, @IsEnv RValue env, NoOrMaybe performsReflection) {
      this(code, Optional.ofNullable(eagerArg), env, performsReflection);
    }

    public MkProm(SEXP code, @Nullable RValue eagerArg, @IsEnv RValue env) {
      this(code, eagerArg, env, NoOrMaybe.MAYBE);
    }
  }

  @EffectsAre(REffect.LeaksNonEnvArg)
  record StrictifyProm(@TypeIs("PROM") RValue promise, RValue value) implements RValue_ {
    @Override
    public RType computeType() {
      return promise.type().strict();
    }
  }

  @EffectsAre({})
  @TypeIs("CLO")
  record MkCls(
      Closure closure,
      ListSXP formals,
      SymOrLangSXP srcRef,
      BcAddress originalBody,
      @IsEnv RValue parent)
      implements RValue_ {}

  record Force(RValue promise, Optional<org.prlprg.ir.cfg.FrameState> frameState, @IsEnv RValue env)
      implements RValue_ {
    public Force(
        RValue promise, @Nullable org.prlprg.ir.cfg.FrameState frameState, @IsEnv RValue env) {
      this(promise, Optional.ofNullable(frameState), env);
    }

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
      return YesOrMaybe.of(isLazy == null || isLazy == Troolean.NO);
    }

    @Override
    public REffects computeEffects() {
      if (isStrict() == YesOrMaybe.YES) {
        return REffects.PURE;
      }
      var effects = REffects.ARBITRARY;
      if (promise instanceof Stmt s
          && s.data() instanceof MkProm p
          && p.performsReflection() == NoOrMaybe.NO) {
        effects = effects.without(REffect.Reflection);
      }
      return effects;
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

    @IsEnv
    RValue env();

    @Override
    default RType computeType() {
      // TODO
      return RTypes.ANY;
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

  sealed interface Extract extends RValue_ {
    LangSXP ast();

    RValue vecOrMtx();

    ImmutableList<RValue> indices();

    @IsEnv
    RValue env();

    @Override
    default RType computeType() {
      // TODO
      return RTypes.ANY;
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

  record Subassign1_1D(LangSXP ast, RValue value, RValue vector, RValue index, @IsEnv RValue env)
      implements SubassignN_1D {}

  @EffectsAre(REffect.Error)
  record SetVecElt(RValue value, RValue vector, RValue index) implements RValue_ {
    @Override
    public RType computeType() {
      // TODO
      return RTypes.ANY;
    }
  }

  record Subassign2_1D(LangSXP ast, RValue value, RValue vector, RValue index, @IsEnv RValue env)
      implements SubassignN_1D {}

  record Subassign1_2D(
      LangSXP ast, RValue value, RValue matrix, RValue index1, RValue index2, @IsEnv RValue env)
      implements SubassignN_2D {}

  record Subassign2_2D(
      LangSXP ast, RValue value, RValue matrix, RValue index1, RValue index2, @IsEnv RValue env)
      implements SubassignN_2D {}

  record Subassign1_3D(
      LangSXP ast,
      RValue value,
      RValue matrix,
      RValue index1,
      RValue index2,
      RValue index3,
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

  record Extract1_1D(LangSXP ast, RValue vector, RValue index, @IsEnv RValue env)
      implements ExtractN_1D {}

  record Extract2_1D(LangSXP ast, RValue vector, RValue index, @IsEnv RValue env)
      implements ExtractN_1D {}

  record Extract1_2D(LangSXP ast, RValue matrix, RValue index1, RValue index2, @IsEnv RValue env)
      implements ExtractN_2D {}

  record Extract2_2D(LangSXP ast, RValue matrix, RValue index1, RValue index2, @IsEnv RValue env)
      implements ExtractN_2D {}

  record Extract1_3D(
      LangSXP ast, RValue matrix, RValue index1, RValue index2, RValue index3, @IsEnv RValue env)
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

  @EffectsAre({})
  @IsEnv
  record LdFunctionEnv() implements RValue_ {
    @Override
    public EnvAux computeEnvAux() {
      return new EnvAux(null);
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

  record UMinus(LangSXP ast, @Override RValue arg, @IsEnv RValue env) implements ArithmeticUnOp {}

  record UPlus(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Add(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Sub(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Mul(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Div(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record IDiv(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Mod(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Pow(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ArithmeticBinOp {}

  record Eq(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record Neq(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record Lt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record Lte(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record Gte(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record Gt(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements ComparisonBinOp {}

  record LAnd(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements BooleanBinOp {}

  record LOr(LangSXP ast, @Override RValue lhs, @Override RValue rhs, @IsEnv RValue env)
      implements BooleanBinOp {}

  record Not(LangSXP ast, @Override RValue arg, @IsEnv RValue env) implements BooleanUnOp {}

  record Colon(LangSXP ast, RValue lhs, RValue rhs, @IsEnv RValue env) implements RValue_ {
    @Override
    public RType computeType() {
      // TODO
      return RTypes.ANY;
    }

    @Override
    public REffects computeEffects() {
      // TODO
      return REffects.ARBITRARY;
    }
  }

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record Call(
      @Override LangSXP ast,
      @TypeIs("ANY_FUN") @Override RValue fun,
      @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env,
      Optional<org.prlprg.ir.cfg.FrameState> fs)
      implements Call_ {
    public Call(
        LangSXP ast,
        RValue fun,
        ImmutableList<RValue> args,
        @IsEnv RValue env,
        @Nullable org.prlprg.ir.cfg.FrameState fs) {
      this(ast, fun, args, env, Optional.ofNullable(fs));
    }
  }

  @TypeIs("ANY")
  @EffectsAreAribtrary()
  record NamedCall(
      @Override LangSXP ast,
      @TypeIs("ANY_FUN") @Override RValue fun,
      @Override ImmutableList<Optional<RegSymSXP>> names,
      @SameLen("names") @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env,
      Optional<org.prlprg.ir.cfg.FrameState> fs)
      implements Call_ {
    public NamedCall(
        LangSXP ast,
        RValue fun,
        ImmutableList<Optional<RegSymSXP>> names,
        ImmutableList<RValue> args,
        @IsEnv RValue env,
        @Nullable org.prlprg.ir.cfg.FrameState fs) {
      this(ast, fun, names, args, env, Optional.ofNullable(fs));
    }
  }

  record StaticCall(
      @Override LangSXP ast,
      @TypeIs("CLO") Optional<RValue> runtimeClosure,
      ClosureVersion closureVersion,
      ClosureVersion.OptimizationContext givenContext,
      @Override ImmutableList<RValue> args,
      @Override @SameLen("args") ImmutableIntArray arglistOrder,
      @Override @IsEnv RValue env,
      Optional<org.prlprg.ir.cfg.FrameState> fs)
      implements Call_ {
    public StaticCall(
        LangSXP ast,
        @Nullable RValue runtimeClosure,
        ClosureVersion closureVersion,
        ClosureVersion.OptimizationContext givenContext,
        ImmutableList<RValue> args,
        ImmutableIntArray arglistOrder,
        @IsEnv RValue env,
        @Nullable org.prlprg.ir.cfg.FrameState fs) {
      this(
          ast,
          Optional.ofNullable(runtimeClosure),
          closureVersion,
          givenContext,
          args,
          arglistOrder,
          env,
          Optional.ofNullable(fs));
    }

    @Override
    public @Nullable RValue fun() {
      return runtimeClosure.orElse(null);
    }

    @Override
    public RType computeType() {
      // TODO: Compute from closureVersion applied in givenContext (and maybe callerEnv) to args
      return RTypes.ANY;
    }

    @Override
    public REffects computeEffects() {
      // TODO: Compute from closureVersion applied in givenContext (and maybe callerEnv) to args
      return REffects.ARBITRARY;
    }
  }

  @EffectsAreAribtrary()
  record CallBuiltin(
      @Override LangSXP ast,
      BuiltinId builtin,
      @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env)
      implements Call_ {
    @Override
    public @Nullable RValue fun() {
      return null;
    }

    @Override
    public RType computeType() {
      return RTypes.builtin(builtin);
    }
  }

  @EffectsAre({REffect.Visibility, REffect.Warn, REffect.Error})
  record CallSafeBuiltin(
      @Override LangSXP ast,
      BuiltinId builtin,
      @Override ImmutableList<RValue> args,
      @Override @IsEnv RValue env,
      ImmutableList<Assumption> assumption)
      implements Call_ {
    @Override
    public @Nullable RValue fun() {
      return null;
    }

    @Override
    public RType computeType() {
      return RTypes.builtin(builtin);
    }
  }

  @EffectsAre(REffect.LeaksNonEnvArg)
  @IsEnv
  record MkEnv(
      @Override @IsEnv RValue parent,
      ImmutableList<RegSymSXP> names,
      @SameLen("names") ImmutableList<RValue> values,
      @SameLen("names") ImmutableList<Boolean> missingness,
      int context,
      boolean isStub)
      implements RValue_ {
    public MkEnv(
        @IsEnv RValue parent,
        ImmutableList<RegSymSXP> names,
        ImmutableList<RValue> values,
        ImmutableList<Boolean> missingness) {
      this(parent, names, values, missingness, 1, false);
    }

    @Override
    public EnvAux computeEnvAux() {
      return new EnvAux(parent);
    }
  }

  @EffectsAre({})
  @IsEnv
  record MaterializeEnv(@IsEnv RValue env) implements RValue_ {
    @Override
    public EnvAux computeEnvAux() {
      var envAux = env.envAux();
      return new EnvAux(envAux == null ? null : envAux.parent());
    }
  }

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("BOOL")
  record IsEnvStub(@IsEnv RValue env) implements RValue_ {}

  @EffectsAre({REffect.ChangesContext, REffect.LeaksNonEnvArg, REffect.LeaksEnvArg})
  record PushContext(
      RValue ast,
      RValue op,
      ImmutableList<RValue> ctxArgs,
      Optional<ImmutableIntArray> arglistOrder,
      @IsEnv RValue sysParent)
      implements StmtData<RContext> {
    public PushContext(
        RValue ast,
        RValue op,
        ImmutableList<RValue> args,
        @Nullable ImmutableIntArray arglistOrder,
        @IsEnv RValue sysParent) {
      this(ast, op, args, Optional.ofNullable(arglistOrder), sysParent);
    }

    public PushContext(
        RValue ast, RValue op, org.prlprg.ir.cfg.Call call, @IsEnv RValue sysParent) {
      this(ast, op, call.data().args(), call.data().arglistOrder(), sysParent);
    }

    @Override
    public RContext make(CFG cfg, String name) {
      return new RContextImpl(cfg, name, this);
    }
  }

  @TypeIs("ANY_VALUE")
  @EffectsAre(REffect.ChangesContext)
  record PopContext(RValue res, RContext context) implements RValue_ {}

  @EffectsAre(REffect.ChangesContext)
  record DropContext() implements Void {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("DOTS_ARG")
  record LdDots(@IsEnv RValue env) implements RValue_ {}

  @EffectsAre({})
  @TypeIs("EXPANDED_DOTS")
  record ExpandDots(@TypeIs("DOTS_ARG") RValue dots) implements RValue_ {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("DOTS")
  record DotsList(
      ImmutableList<Optional<RegSymSXP>> names, @SameLen("names") ImmutableList<RValue> values)
      implements RValue_ {}
}
