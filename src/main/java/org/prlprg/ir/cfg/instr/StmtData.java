package org.prlprg.ir.cfg.instr;

import com.google.common.collect.ImmutableList;
import java.util.Iterator;
import java.util.Optional;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CallArguments;
import org.prlprg.ir.cfg.CallArguments.UnknownOrder;
import org.prlprg.ir.cfg.FrameState;
import org.prlprg.ir.cfg.IFun;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.NodeId;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.rshruntime.BcPosition;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.FunSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * Each type of statement (non-jump) instruction as a pattern-matchable record.
 *
 * @see InstrData and {@link Instr} for why we have this separate from statements.
 */
public sealed interface StmtData extends InstrData {
  /**
   * If we are removing many statements staggered throughout a {@link BB}, instead of removing them
   * immediately, we can replace with {@code NoOp}s, then batch remove all {@code NoOp}s to improve
   * performance.
   */
  @Intrinsic("noOp")
  record NoOp() implements StmtData {}

  // Many of these are derived from PIR `instruction.h`

  @Intrinsic("fs")
  @Effect(value = ReadsEnv.class, inputs = "env")
  @Outputs(FrameState.class)
  record FrameState_(
      BcPosition location,
      boolean inPromise,
      ImmutableList<Node<?>> stack,
      Node<? extends EnvSXP> env,
      @Nullable Node<? extends FrameState> inlinedNext)
      implements StmtData {
    public FrameState_(
        BcPosition location, boolean inPromise, ImmutableList<Node<?>> stack, Node<? extends EnvSXP> env) {
      this(location, inPromise, stack, env, null);
    }
  }

  /** Effects are arbitrary because it implicitly forces. */
  @Effect(value = Loads.class, inputs = {"name", "env"})
  @Effect(Forces.class)
  @Outputs(FunSXP.class)
  record LdFun(RegSymSXP name, Node<? extends EnvSXP> env) implements StmtData {}

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.GetVar BcInstr.GetVar}. */
  @Effect(value = Loads.class, inputs = {"name", "env"})
  @Outputs(SEXP.class)
  record LdVar(RegSymSXP name, Node<? extends EnvSXP> env, boolean missOk) implements StmtData {}

  /** Doesn't implicitly force, unlike {@link org.prlprg.bc.BcInstr.DdVal BcInstr.DdVal}. */
  @Effect(value = Loads.class, inputs = {0, 1})
  @Outputs(ValueSXP.class)
  record LdDdVal(int ddNum, Node<? extends EnvSXP> env, boolean missOk) implements StmtData {}

  // TODO: It says in PIR that this should eventually be replaced with a non-dispatching extract
  //  call (probably an old comment so idk if it's still relevant)
  @Effect(value = Errors.class)
  @Outputs(SEXP.class)
  record ToForSeq(Node<? extends SEXP> value) implements StmtData {}

  @Outputs(IntSXP.class)
  record Length(Node<? extends SEXP> value) implements StmtData {}

  @Effect(value = Loads.class, inputs = {0, 1})
  @Effect(value = Errors.class)
  @Outputs(BoolSXP.class)
  record IsMissing(RegSymSXP varName, Node<? extends EnvSXP> env) implements StmtData {}

  @Effect(value = Errors.class)
  @Outputs(NotMissingSXP.class)
  @OutputsGeneric(GenericOutput.INTERSECT_ARG)
  record ChkMissing(Node<? extends SEXP> value) implements StmtData {}

  @Effect(value = Errors.class)
  @Outputs(FunSXP.class)
  @OutputsGeneric(GenericOutput.INTERSECT_ARG)
  record ChkFun(Node<? extends SEXP> value) implements StmtData {}

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.ReadsEnvArg, REffect.WritesEnvArg})
  record StVarSuper(RegSymSXP name, ISexp value, ISexp env)
      implements StmtData {}

  @TypeIs("ANY")
  @EffectsAre({REffect.Error, REffect.ReadsEnvArg})
  record LdVarSuper(RegSymSXP name, ISexp env) implements StmtData {
    @Override
    public boolean missOk() {
      return false;
    }
  }

  @EffectsAre({REffect.LeaksNonEnvArg, REffect.WritesEnvArg})
  record StVar(
      RegSymSXP name, ISexp value, ISexp env, boolean isArg)
      implements StmtData {
    public StVar(RegSymSXP name, ISexp value, ISexp env) {
      this(name, value, env, false);
    }
  }

  @TypeIs("ANY_PROMISE_NOT_MISSING")
  @EffectsAre({})
  record MkProm(Promise promise) implements StmtData {
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
  record StrictifyProm(@TypeIs("PROM") ISexp promise, ISexp value) implements StmtData {
    @Override
    public RType computeType() {
      return promise.type().strict();
    }
  }

  @EffectsAre({})
  @TypeIs("CLO")
  record MkCls(Closure closure) implements StmtData {
    @Override
    public void verify(boolean isInsert) throws InstrVerifyException {
      // If `isInsert` is `true`, `closure` will be empty, because it gets late-assigned.
      if (!isInsert) {
        closure.verify();
      }
    }
  }

  record Force(ISexp promise, @Nullable FrameState fs, ISexp env) implements StmtData {

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
  record AsLogical(ISexp value) implements StmtData {
    @Override
    public REffects computeEffects() {
      return value.type().isSubsetOf(RType.ANY_SIMPLE_PRIM_VEC)
          ? REffects.PURE
          : new REffects(REffect.Error);
    }
  }

  @TypeIs("INT")
  @EffectsAre({REffect.Warn, REffect.Error})
  record AsSwitchIdx(ISexp value) implements StmtData {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record CheckTrueFalse(ISexp value) implements StmtData {}

  @TypeIs("BOOL")
  @EffectsAre({REffect.Warn, REffect.Error})
  record ColonInputEffects(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastLhs(@Nullable LangSXP ast, ISexp lhs)
      implements StmtData, InstrData.HasAst {}

  @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA")
  @EffectsAre(REffect.Error)
  record ColonCastRhs(
      @Nullable LangSXP ast, @TypeIs("NUMERIC_OR_LOGICAL_NOT_NA") ISexp lhs, ISexp rhs)
      implements StmtData, InstrData.HasAst {}

  sealed interface Subassign extends ISexp_, InstrData.HasAst {
    ISexp vecOrMtx();

    ISexp value();

    ImmutableList<ISexp> indices();

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
      @Nullable LangSXP ast, ISexp vector, ISexp value, ISexp index, ISexp env)
      implements StmtData {}

  @EffectsAre(REffect.Error)
  record SetVecElt(ISexp vector, ISexp value, ISexp index) implements StmtData {
    @Override
    public RType computeType() {
      // TODO
      return RType.ANY;
    }
  }

  record Subassign2_1D(
      @Nullable LangSXP ast, ISexp value, ISexp vector, ISexp index, ISexp env)
      implements StmtData {}

  record Subassign1_2D(
      @Nullable LangSXP ast,
      ISexp matrix,
      ISexp value,
      ISexp index1,
      ISexp index2,
      ISexp env)
      implements StmtData {}

  record Subassign2_2D(
      @Nullable LangSXP ast,
      ISexp matrix,
      ISexp value,
      ISexp index1,
      ISexp index2,
      ISexp env)
      implements StmtData {}

  record Subassign1_3D(
      @Nullable LangSXP ast,
      ISexp matrix,
      ISexp value,
      ISexp index1,
      ISexp index2,
      ISexp index3,
      ISexp env)
      implements StmtData {
    @Override
    public ISexp vecOrMtx() {
      return matrix;
    }

    @Override
    public ImmutableList<ISexp> indices() {
      return ImmutableList.of(index1, index2, index3);
    }
  }

  record Extract1_1D(@Nullable LangSXP ast, ISexp vector, ISexp index, ISexp env)
      implements StmtData {}

  record Extract2_1D(@Nullable LangSXP ast, ISexp vector, ISexp index, ISexp env)
      implements StmtData {}

  record Extract1_2D(
      @Nullable LangSXP ast, ISexp matrix, ISexp index1, ISexp index2, ISexp env)
      implements StmtData {}

  record Extract2_2D(
      @Nullable LangSXP ast, ISexp matrix, ISexp index1, ISexp index2, ISexp env)
      implements StmtData {}

  record Extract1_3D(
      @Nullable LangSXP ast,
      ISexp matrix,
      ISexp index1,
      ISexp index2,
      ISexp index3,
      ISexp env)
      implements StmtData {
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
  record GnuRIs(IsTypeCheck typeCheck, ISexp value) implements StmtData {}

  /**
   * Java compiler runtime type test.
   *
   * @see GnuRIs
   */
  @TypeIs("BOOL")
  @EffectsAre({})
  record IsType(RType type, ISexp value) implements StmtData {}

  /** Type coercion. */
  @EffectsAre({})
  record CastType(RType type, ISexp value) implements StmtData {
    @Override
    public RType computeType() {
      return type;
    }
  }

  @EffectsAre(REffect.Visibility)
  record Visible() implements StmtData {}

  @EffectsAre(REffect.Visibility)
  record Invisible() implements StmtData {}

  @EffectsAre({})
  @TypeIs("STR_OR_NIL")
  record Names(ISexp value) implements StmtData {}

  @EffectsAre(REffect.Error)
  record SetNames(ISexp value, ISexp names) implements StmtData {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  record PirCopy(ISexp value) implements StmtData {
    @Override
    public RType computeType() {
      return value.type();
    }
  }

  @EffectsAre({})
  @TypeIs("BOOL")
  record Identical(ISexp lhs, ISexp rhs) implements StmtData {}

  @EffectsAre({})
  @TypeIs("INT")
  record Inc(ISexp value) implements StmtData {}

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

  record UMinus(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record UPlus(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record Sqrt(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record Exp(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record Log(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record LogBase(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  // ???: Should we put all unary math functions in math1 or make all math1 functions separate
  // instructions?
  record Math1(@Nullable LangSXP ast, int funId, ISexp arg)
      implements StmtData {}

  record Add(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Sub(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Mul(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Div(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record IDiv(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Mod(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Pow(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Eq(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Neq(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Lt(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Lte(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Gte(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Gt(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record LAnd(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record LOr(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData {}

  record Not(@Nullable LangSXP ast, ISexp arg) implements StmtData {}

  record Colon(@Nullable LangSXP ast, ISexp lhs, ISexp rhs)
      implements StmtData, InstrData.HasAst {
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
  record Warning(String message) implements StmtData {}

  @EffectsAre(REffect.Error)
  record Error(String message) implements StmtData {}

  /** Dynamic call with no named arguments. */
  @TypeIs("ANY")
  record NamelessCall(
      @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") ISexp fun_,
      ImmutableList<ISexp> args_,
      ISexp env,
      @Nullable FrameState fs)
      implements StmtData {

    @Override
    public IFun fun() {
      return new DynamicCall(fun_);
    }

    @Override
    public CallArguments args() {
      return CallArguments.withoutNames(args_);
    }
  }

  /** Dynamic call with at least one named argument. */
  @TypeIs("ANY")
  record NamedCall(
      @Nullable LangSXP ast,
      @TypeIs("ANY_FUNCTION") ISexp fun_,
      ImmutableList<Optional<String>> names,
      @SameLen("names") ImmutableList<ISexp> args_,
      ISexp env,
      @Nullable FrameState fs)
      implements StmtData {
    @Override
    public IFun fun() {
      return new DynamicCall(fun_);
    }

    @Override
    public CallArguments args() {
      return new UnknownOrder(names, args_);
    }
  }

  /** Statically-known {@link Closure} call. */
  record StaticCall(
      @Nullable LangSXP ast,
      @TypeIs("CLO") @Nullable ISexp runtimeClosure,
      Closure fun_,
      ImmutableList<ISexp> args_,
      @Nullable ISexp env,
      @Nullable FrameState fs)
      implements StmtData {
    /** The exact closure version we dispatch. */
    public ClosureVersion version() {
      return fun_.getVersion(context());
    }

    @Override
    public IFun fun() {
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
  record CallBuiltin(
      @Nullable LangSXP ast,
      BuiltinId fun_,
      ImmutableList<ISexp> args_,
      @Nullable ISexp env)
      implements StmtData {
    @Override
    public IFun fun() {
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

  record TryDispatchBuiltin_(
      LangSXP ast,
      BuiltinId fun,
      ISexp target,
      @Nullable ISexp rhs,
      ISexp env)
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
  record MkEnv(
      ISexp parent,
      ImmutableList<RegSymSXP> names,
      @SameLen("names") ImmutableList<ISexp> values,
      @SameLen("names") ImmutableList<Boolean> missingness,
      int context,
      boolean isStub,
      boolean neverStub)
      implements StmtData {
    public MkEnv(
        ISexp parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<ISexp> values,
        @SameLen("names") ImmutableList<Boolean> missingness,
        int context,
        boolean isStub) {
      this(parent, names, values, missingness, context, isStub, false);
    }

    public MkEnv(
        ISexp parent,
        ImmutableList<RegSymSXP> names,
        @SameLen("names") ImmutableList<ISexp> values,
        @SameLen("names") ImmutableList<Boolean> missingness) {
      this(parent, names, values, missingness, 1, false);
    }

    public MkEnv(ISexp parent) {
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
        RegSymSXP name, ISexp value, boolean isMissing)
        implements StmtData {}

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
  record MaterializeEnv(ISexp env) implements StmtData {}

  /**
   * Doesn't have {@link REffect#ReadsEnvArg} because it doesn't read the "environment" part of the
   * environment, only checks that it's not a stub. The effect's absence is relied on by {@code
   * org.prlprg.optimizations.ElideEnvs}.
   */
  @EffectsAre({})
  @TypeIs("BOOL")
  record IsEnvStub(ISexp env) implements StmtData {}

  @EffectsAre({REffect.ChangesContext, REffect.LeaksNonEnvArg, REffect.LeaksEnvArg})
  record PushContext(ISexp ast, ISexp op, ImmutableList<ISexp> callArgs, ISexp sysParent)
      implements StmtData<RContext> {
    public PushContext(
        ISexp ast, ISexp op, CallArguments.KnownOrder callArgs, ISexp sysParent) {
      this(ast, op, callArgs.args(), sysParent);
    }

    @Override
    public RContext make(CFG cfg, NodeId<? extends Instr> id) {
      return new RContextImpl(cfg, id, this);
    }
  }

  @TypeIs("ANY_VALUE_MAYBE_MISSING")
  @EffectsAre(REffect.ChangesContext)
  record PopContext(ISexp res, RContext context) implements StmtData {}

  @EffectsAre(REffect.ChangesContext)
  record DropContext() implements StmtData {}

  @EffectsAre(REffect.ReadsEnvArg)
  @TypeIs("DOTS_LIST")
  record LdDots(ISexp env) implements StmtData {
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
  record ExpandDots(@TypeIs("DOTS_LIST") ISexp dots) implements StmtData {}

  @EffectsAre(REffect.LeaksNonEnvArg)
  @TypeIs("DOTS")
  record DotsList(
      ImmutableList<Optional<RegSymSXP>> names, @SameLen("names") ImmutableList<ISexp> values)
      implements StmtData {}
}
