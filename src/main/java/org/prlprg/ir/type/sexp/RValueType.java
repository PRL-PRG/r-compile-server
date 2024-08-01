package org.prlprg.ir.type.sexp;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.MaybeNat;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.BuiltinSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RawSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SpecialSXP;
import org.prlprg.sexp.StaticEnvSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.SymSXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Classes;
import org.prlprg.util.NotImplementedError;

/**
 * The type of a non-promise, not-missing {@link SEXP}, without the attributes.
 *
 * <p>The "value" part of an {@link RSexpType}; see {@link RSexpType#value()}.
 *
 * <p>There's a subclass for each type of {@link SEXP}.
 */
@Immutable
public sealed interface RValueType extends BoundedLattice<RValueType>
    permits RValueTypeImpl,
        RStringOrRegSymType,
        RRegSymOrLangType,
        RListOrVectorType,
        RAbstractPairListType,
        RFunType,
        REnvType,
        RBCodeType {
  RValueType ANY = RValueTypeImpl.INSTANCE;
  RValueType NOTHING = RNothingValueTypeImpl.INSTANCE;

  /**
   * Returns the most specific type whose instances include the given {@link SEXP}.
   *
   * @throws IllegalArgumentException If given a promise or special symbol, since those aren't
   *     considered "value"s in the sense that they aren't handled by {@link RValueType}.
   */
  static RValueType exact(SEXP sexp) {
    return switch (sexp) {
      case NilSXP _ -> RNilType.ANY;
      case ListSXP _ -> RListType.ANY;
      case LangSXP _ -> RLangType.ANY;
      case DotsListSXP _ -> RDotsListType.ANY;
      case RegSymSXP _ -> RRegSymType.ANY;
      case IntSXP s -> RIntType.of(MaybeNat.of(s.size()), NoOrMaybe.of(s.hasNaOrNaN()));
      case RealSXP s -> RRealType.of(MaybeNat.of(s.size()), NoOrMaybe.of(s.hasNaOrNaN()));
      case ComplexSXP s -> RComplexType.of(MaybeNat.of(s.size()), NoOrMaybe.of(s.hasNaOrNaN()));
      case LglSXP s -> RLogicalType.of(MaybeNat.of(s.size()), NoOrMaybe.of(s.hasNaOrNaN()));
      case StrSXP s -> RStringType.of(MaybeNat.of(s.size()), NoOrMaybe.of(s.hasNaOrNaN()));
      case RawSXP s -> RRawType.of(MaybeNat.of(s.size()));
      case VecSXP s -> RGenericVecType.of(MaybeNat.of(s.size()));
      case CloSXP s -> RClosureType.exact(s);
      case BuiltinSXP s -> RBuiltinType.exact(s);
      case SpecialSXP s -> RSpecialType.exact(s);
      case ExprSXP s -> RExprVecType.of(MaybeNat.of(s.size()));
      case StaticEnvSXP _ -> RStaticEnvType.ANY;
      case UserEnvSXP _ -> RUserEnvType.ANY;
      case BCodeSXP _ -> RBCodeType.ANY;
      case PromSXP<?> _ ->
          throw new IllegalArgumentException(
              "There is no `RValueType` for promises (`RType#exact` special-cases `PromSXP`)");
      case SymSXP _ ->
          throw new IllegalArgumentException(
              "There is no `RValueType` for special symbols (`RType#exact` special-cases `MISSING_ARG` and \"unbound value\" `ISexp`s should be represented by `null` or `Optional#empty` since they don't occur in normal code)");
    };
  }

  /**
   * The type of a value with the given {@link SEXPType}, not a promise, not missing, and no
   * attributes. If {@code type} is the type of a primitive vector, this will also return the type
   * for a scalar.
   *
   * @throws IllegalArgumentException if {@link SEXPType} is a promise, character vector, or "any".
   */
  static RValueType simple(SEXPType sexpType) {
    return switch (sexpType) {
      case NIL -> RNilType.ANY;
      case LANG -> RLangType.ANY;
      case LIST -> RListType.ANY;
      case SYM -> RRegSymType.ANY;
      case INT -> RIntType.ANY;
      case REAL -> RRealType.ANY;
      case CPLX -> RComplexType.ANY;
      case LGL -> RLogicalType.ANY;
      case STR -> RStringType.ANY;
      case RAW -> RRawType.ANY;
      case VEC -> RGenericVecType.ANY;
      case CLO -> RClosureType.ANY;
      case BUILTIN -> RBuiltinType.ANY;
      case SPECIAL -> RSpecialType.ANY;
      case EXPR -> RExprVecType.ANY;
      case ENV -> REnvType.ANY;
      case BCODE -> RBCodeType.ANY;
      case DOT -> RDotsListType.ANY;
      case PROM -> throw new IllegalArgumentException("No such thing as a \"simple promise\"");
      case CHAR ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple character vector\", because it never exists in user code (only \"str\" does)");
      case ANY ->
          throw new IllegalArgumentException(
              "No such thing as a \"simple any\" (GNU-R's \"any\" type is special and has no instances)");
      case EXTPTR, WEAKREF, S4 ->
          throw new NotImplementedError(
              "`SEXP` subclasses aren't implemented for these `SEXPType`s either");
    };
  }

  /**
   * If this has a specific {@link SEXPType}, returns it, otherwise {@code null}.
   *
   * <p>Note that both {@link RValueType#ANY} and {@link RValueType#NOTHING} return {@code null}.
   */
  default @Nullable SEXPType sexpType() {
    return null;
  }

  @Override
  default boolean isSubsetOf(RValueType other) {
    return other == this || other == ANY || simpleRecordIsSubset(this, other);
  }

  @Override
  default boolean isSupersetOf(RValueType other) {
    return other == this || other == NOTHING || simpleRecordIsSubset(other, this);
  }

  @Override
  default RValueType unionOf(RValueType other) {
    return isSupersetOf(other) ? this : isSubsetOf(other) ? other : simpleRecordUnion(this, other);
  }

  @Override
  default RValueType intersectionOf(RValueType other) {
    return isSubsetOf(other)
        ? this
        : isSupersetOf(other) ? other : simpleRecordIntersection(this, other);
  }

  @SuppressWarnings({"rawtypes", "unchecked"})
  private static boolean simpleRecordIsSubset(RValueType lhs, RValueType rhs) {
    return rhs.getClass().getSuperclass().isAssignableFrom(lhs.getClass().getSuperclass())
        && (!lhs.getClass().isRecord()
            || Lattice.simpleRecordIsSubset((Lattice) lhs, (Lattice) rhs));
  }

  private static RValueType simpleRecordUnion(RValueType lhs, RValueType rhs) {
    var superclass = simpleRecordSuperclass(lhs.getClass(), rhs.getClass());
    if (superclass == null) {
      return ANY;
    }

    return Lattice.simpleRecordUnion(superclass, lhs, rhs);
  }

  private static RValueType simpleRecordIntersection(RValueType lhs, RValueType rhs) {
    var lhsClass = lhs.getClass();
    var rhsClass = rhs.getClass();

    return rhsClass.isAssignableFrom(lhsClass)
        ? BoundedLattice.simpleRecordIntersection(lhsClass, lhs, rhs)
        : lhsClass.isAssignableFrom(rhsClass)
            ? BoundedLattice.simpleRecordIntersection(rhsClass, lhs, rhs)
            : NOTHING;
  }

  private static @Nullable Class<? extends RValueType> simpleRecordSuperclass(
      Class<? extends RValueType> lhsClass, Class<? extends RValueType> rhsClass) {
    return RValueTypeImpl.cachedCommonSimpleRecordSuperclasses
        .computeIfAbsent(lhsClass, _ -> new HashMap<>())
        .computeIfAbsent(
            rhsClass,
            _ ->
                Classes.streamCommonSuperclasses(RValueType.class, lhsClass, rhsClass)
                    .flatMap(
                        commonSuperclass ->
                            Arrays.stream(
                                Classes.<RValueType>permittedSubclassesOf(commonSuperclass))
                                .filter(Class::isRecord)
                                .findFirst()
                                .stream())
                    .findFirst())
        .orElse(null);
  }
}

final class RValueTypeImpl implements RValueType {
  static final RValueTypeImpl INSTANCE = new RValueTypeImpl();
  static final Map<
          Class<? extends RValueType>,
          Map<Class<? extends RValueType>, Optional<Class<? extends RValueType>>>>
      cachedCommonSimpleRecordSuperclasses = new HashMap<>();

  @Override
  public boolean isSubsetOf(RValueType other) {
    return other == this;
  }

  @Override
  public boolean isSupersetOf(RValueType other) {
    return true;
  }

  @Override
  public RValueType unionOf(RValueType other) {
    return this;
  }

  @Override
  public RValueType intersectionOf(RValueType other) {
    return other;
  }

  @Override
  public String toString() {
    return "⊤";
  }

  private RValueTypeImpl() {}
}

sealed interface RNothingValueType
    extends RStringType,
        RDotsSymType,
        RLangType,
        RNilType,
        RConsType,
        RIntType,
        RRealType,
        RComplexType,
        RLogicalType,
        RRawType,
        RGenericVecType,
        RExprVecType,
        RClosureType,
        RBuiltinType,
        RSpecialType,
        RStaticEnvType,
        RUserEnvType,
        RBCodeType,
        RDotsConsType {
  @Override
  RNothingValueType withLength(MaybeNat length);

  @Override
  RNothingValueType notNAOrNaN();

  @Override
  default boolean isSubsetOf(RValueType other) {
    return true;
  }

  @Override
  default boolean isSupersetOf(RValueType other) {
    return other == this;
  }

  @Override
  default RValueType unionOf(RValueType other) {
    return other;
  }

  @Override
  default RValueType intersectionOf(RValueType other) {
    return this;
  }

  // Some of the super-interfaces override `print`,
  // so we need to override it again to set it back to the default implementation.
  @PrintMethod
  private static void print(RNothingValueType self, Printer p) {
    p.writer().write(self.toString());
  }
}

final class RNothingValueTypeImpl implements RNothingValueType {
  static final RNothingValueTypeImpl INSTANCE = new RNothingValueTypeImpl();

  @Override
  public RNothingValueType withLength(MaybeNat length) {
    return this;
  }

  @Override
  public RNothingValueType notNAOrNaN() {
    return this;
  }

  @Override
  public NoOrMaybe hasNAOrNaN() {
    throw handleExplicitly();
  }

  @Override
  public MaybeNat length() {
    throw handleExplicitly();
  }

  @Override
  public RFunTypeOverloads overloads() {
    throw handleExplicitly();
  }

  @Override
  public YesOrMaybe isJit() {
    throw handleExplicitly();
  }

  @Override
  public String typeString() {
    throw handleExplicitly();
  }

  @Override
  public String toString() {
    return "⊥";
  }

  private RuntimeException handleExplicitly() {
    return new UnsupportedOperationException(
        "No reasonable return for this method on `NOTHING`. Instead, explicitly check for and handle `NOTHING`");
  }

  private RNothingValueTypeImpl() {}
}
