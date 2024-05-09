package org.prlprg.ir.type;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/** A simpler form of {@link RType} (R SEXP type), without other attributes like "is-scalar". */
public sealed interface BaseRType extends Lattice<BaseRType> {
  static BaseRType of(SEXP value) {
    return value instanceof PromSXP p
        ? (p.isLazy() ? LAZY_ANY_PROMISE : new Promise(YesOrMaybe.YES, (NotPromise) of(p.val())))
        : of(value.type());
  }

  static BaseRType of(SEXPType type) {
    return switch (type) {
      case NIL, LIST -> ANY_LIST;
      case CHAR, LGL, INT, REAL, CPLX, STR, RAW, VEC ->
          new Vector(Objects.requireNonNull(VectorElementRType.of(type)));
        //noinspection DuplicatedCode
      case SYM -> SYMBOL;
      case LANG -> LANGUAGE;
      case CLO -> CLOSURE;
      case PROM -> LAZY_ANY_PROMISE;
      case EXTPTR -> EXTERNAL_PTR;
      case WEAKREF -> WEAK_REF;
      case ENV -> ENV;
      case SPECIAL -> SPECIAL;
      case BUILTIN -> BUILTIN;
      case EXPR -> EXPRESSION;
      case S4 -> S4;
      case BCODE -> BYTECODE;
      case DOT -> DOTS;
      case ANY ->
          throw new IllegalArgumentException(
              "ANY is not an SEXPType for an actual SEXP, so we don't expect it and didn't write code to handle it");
    };
  }

  /**
   * The {@link SEXPType} which all instances have, or {@code null} if instances may have different
   * {@link SEXPType}s.
   */
  default @Nullable SEXPType sexpType() {
    return switch (this) {
      case Any(), AnyValue(), AnyFun() -> null;
      case Vector(var elementType) -> elementType.vectorSexpType;
      case AnyList() -> SEXPType.LIST;
      case Promise(var _, var _) -> SEXPType.PROM;
      case Language() -> SEXPType.LANG;
      case Expression() -> SEXPType.EXPR;
      case Closure() -> SEXPType.CLO;
      case S4() -> SEXPType.S4;
      case ExternalPtr() -> SEXPType.EXTPTR;
      case WeakRef() -> SEXPType.WEAKREF;
      case Dots() -> SEXPType.DOT;
      case Env() -> SEXPType.ENV;
      case Bytecode() -> SEXPType.BCODE;
      case Symbol() -> SEXPType.SYM;
      case Special() -> SEXPType.SPECIAL;
      case Builtin() -> SEXPType.BUILTIN;
    };
  }

  /** Is this a primitive vector type? */
  default Troolean isPrimitiveVector() {
    return switch (this) {
      case Any() -> Troolean.MAYBE;
      case AnyValue() -> Troolean.MAYBE;
      case Vector(var elementType) -> elementType.isPrimitive();
      default -> Troolean.NO;
    };
  }

  /** Is this a function type? (closure, builtin, or special) */
  default Troolean isFunction() {
    return switch (this) {
      case Any(), AnyValue() -> Troolean.MAYBE;
      case AnyFun(), Closure(), Special(), Builtin() -> Troolean.YES;
      default -> Troolean.NO;
    };
  }

  /** Is this a promise type? */
  default Troolean isPromise() {
    return switch (this) {
      case Any() -> Troolean.MAYBE;
      case Promise(var _, var _) -> Troolean.YES;
      default -> Troolean.NO;
    };
  }

  /** If this is a promise type, returns the inner type. Otherwise, returns itself. */
  default NotPromise forced() {
    return switch (this) {
      case Any() -> ANY_VALUE;
      case Promise(_, var valueType) -> valueType;
      default -> (NotPromise) this;
    };
  }

  @Override
  default boolean isSubsetOf(BaseRType other) {
    return other instanceof Any
        || (other instanceof AnyValue && isPromise() == Troolean.NO)
        || switch (this) {
          case Any(), AnyValue() -> false;
          case AnyFun() -> other instanceof AnyFun;
          case Vector(var elementType) ->
              other instanceof Vector(var otherElementType)
                  && elementType.isSubsetOf(otherElementType);
          case AnyList() -> other instanceof AnyList;
          case Promise(var isEvaluated, var valueType) ->
              other instanceof Promise(var otherIsEvaluated, var otherValueType)
                  && isEvaluated.isSubsetOf(otherIsEvaluated)
                  && valueType.isSubsetOf(otherValueType);
          case Language() -> other instanceof Language;
          case Expression() -> other instanceof Expression;
          case Closure() -> other instanceof AnyFun || other instanceof Closure;
          case S4() -> other instanceof S4;
          case ExternalPtr() -> other instanceof ExternalPtr;
          case WeakRef() -> other instanceof WeakRef;
          case Dots() -> other instanceof Dots;
          case Env() -> other instanceof Env;
          case Bytecode() -> other instanceof Bytecode;
          case Symbol() -> other instanceof Symbol;
          case Special() -> other instanceof AnyFun || other instanceof Special;
          case Builtin() -> other instanceof AnyFun || other instanceof Builtin;
        };
  }

  @Override
  default BaseRType union(BaseRType other) {
    // Fallback value. Other cases where one value is maybe a promise (including where either value
    // is `ANY`) are handled explicitly, either by the first `?`/`:` conditional or `case Promise`
    var any = other instanceof Promise ? ANY : ANY_VALUE;
    return (other instanceof Any || (other instanceof AnyValue && isPromise() == Troolean.NO))
        ? other
        : switch (this) {
          case Any() -> this;
          case AnyValue() -> any;
          case AnyFun() -> other.isFunction() == Troolean.YES ? this : any;
          case Vector(var elementType) ->
              other instanceof Vector(var otherElementType)
                  ? new Vector(elementType.union(otherElementType))
                  : any;
          case AnyList() -> other instanceof AnyList ? this : any;
          case Promise(var isEvaluated, var valueType) ->
              other instanceof Promise(var otherIsEvaluated, var otherValueType)
                  ? new Promise(
                      isEvaluated.union(otherIsEvaluated), valueType.union(otherValueType))
                  : ANY;
          case Language() -> other instanceof Language ? this : any;
          case Expression() -> other instanceof Expression ? this : any;
          case Closure() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Closure ? this : any;
          case S4() -> other instanceof S4 ? this : any;
          case ExternalPtr() -> other instanceof ExternalPtr ? this : any;
          case WeakRef() -> other instanceof WeakRef ? this : any;
          case Dots() -> other instanceof Dots ? this : any;
          case Env() -> other instanceof Env ? this : any;
          case Bytecode() -> other instanceof Bytecode ? this : any;
          case Symbol() -> other instanceof Symbol ? this : any;
          case Special() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Special ? this : any;
          case Builtin() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Builtin ? this : any;
        };
  }

  default @Nullable BaseRType intersection(BaseRType other) {
    return other instanceof Any
        ? this
        : other instanceof AnyValue
            ? (this instanceof Any ? other : isPromise() == Troolean.NO ? this : null)
            : switch (this) {
              case Any() -> other;
              case AnyValue() -> other.isPromise() == Troolean.NO ? other : null;
              case AnyFun() -> other.isFunction() == Troolean.YES ? other : null;
              case Vector(var elementType) -> {
                if (!(other instanceof Vector(var otherElementType))) {
                  yield null;
                }
                var resultElementType = elementType.intersection(otherElementType);
                if (resultElementType == null) {
                  yield null;
                }
                yield new Vector(resultElementType);
              }
              case AnyList() -> other instanceof AnyList ? this : null;
              case Promise(var isEvaluated, var valueType) -> {
                if (!(other instanceof Promise(var otherIsEvaluated, var otherValueType))) {
                  yield null;
                }
                var resultValueType = valueType.intersection(otherValueType);
                if (resultValueType == null) {
                  yield null;
                }
                yield new Promise(isEvaluated.intersection(otherIsEvaluated), resultValueType);
              }
              case Language() -> other instanceof Language ? this : null;
              case Expression() -> other instanceof Expression ? this : null;
              case Closure() -> other instanceof AnyFun || other instanceof Closure ? this : null;
              case S4() -> other instanceof S4 ? this : null;
              case ExternalPtr() -> other instanceof ExternalPtr ? this : null;
              case WeakRef() -> other instanceof WeakRef ? this : null;
              case Dots() -> other instanceof Dots ? this : null;
              case Env() -> other instanceof Env ? this : null;
              case Bytecode() -> other instanceof Bytecode ? this : null;
              case Symbol() -> other instanceof Symbol ? this : null;
              case Special() -> other instanceof AnyFun || other instanceof Special ? this : null;
              case Builtin() -> other instanceof AnyFun || other instanceof Builtin ? this : null;
            };
  }

  /** Restricts {@link BaseRType} to non-promises. */
  sealed interface NotPromise extends BaseRType {
    default NotPromise union(NotPromise other) {
      return (NotPromise) union((BaseRType) other);
    }

    default @Nullable NotPromise intersection(NotPromise other) {
      return (NotPromise) intersection((BaseRType) other);
    }
  }

  BaseRType ANY = new Any();

  record Any() implements BaseRType {
    @Override
    public String toString() {
      return "any";
    }
  }

  NotPromise ANY_VALUE = new AnyValue();

  record AnyValue() implements NotPromise {
    @Override
    public String toString() {
      return "val";
    }
  }

  NotPromise ANY_FUN = new AnyFun();

  record AnyFun() implements NotPromise {
    @Override
    public String toString() {
      return "fun";
    }
  }

  NotPromise ANY_VECTOR = new Vector(VectorElementRType.ANY);
  NotPromise SEXP_VECTOR = new Vector(VectorElementRType.SEXP);
  NotPromise INT_VECTOR = new Vector(VectorElementRType.INT);
  NotPromise STRING_VECTOR = new Vector(VectorElementRType.STRING);
  NotPromise LOGICAL_VECTOR = new Vector(VectorElementRType.LOGICAL);
  NotPromise RAW_VECTOR = new Vector(VectorElementRType.RAW);
  NotPromise COMPLEX_VECTOR = new Vector(VectorElementRType.COMPLEX);
  NotPromise DOUBLE_VECTOR = new Vector(VectorElementRType.DOUBLE);
  NotPromise EXPRESSION_VECTOR = new Vector(VectorElementRType.EXPRESSION);

  record Vector(VectorElementRType elementType) implements NotPromise {
    @Override
    public String toString() {
      return "vec(" + elementType + ")";
    }
  }

  NotPromise ANY_LIST = new AnyList();

  record AnyList() implements NotPromise {
    @Override
    public String toString() {
      return "list";
    }
  }

  BaseRType LAZY_ANY_PROMISE = new Promise(YesOrMaybe.MAYBE, ANY_VALUE);
  BaseRType FORCED_ANY_PROMISE = new Promise(YesOrMaybe.YES, ANY_VALUE);

  record Promise(YesOrMaybe isEvaluated, NotPromise valueType) implements BaseRType {
    @Override
    public String toString() {
      return (isEvaluated == YesOrMaybe.YES ? "prom" : "lazy") + "(" + valueType + ")";
    }
  }

  NotPromise LANGUAGE = new Language();

  record Language() implements NotPromise {
    @Override
    public String toString() {
      return "lang";
    }
  }

  NotPromise EXPRESSION = new Expression();

  record Expression() implements NotPromise {
    @Override
    public String toString() {
      return "expr";
    }
  }

  NotPromise CLOSURE = new Closure();

  record Closure() implements NotPromise {
    @Override
    public String toString() {
      return "clos";
    }
  }

  NotPromise S4 = new S4();

  record S4() implements NotPromise {
    @Override
    public String toString() {
      return "s4";
    }
  }

  NotPromise EXTERNAL_PTR = new ExternalPtr();

  record ExternalPtr() implements NotPromise {
    @Override
    public String toString() {
      return "extptr";
    }
  }

  NotPromise WEAK_REF = new WeakRef();

  record WeakRef() implements NotPromise {
    @Override
    public String toString() {
      return "weakref";
    }
  }

  NotPromise DOTS = new Dots();

  record Dots() implements NotPromise {
    @Override
    public String toString() {
      return "dots";
    }
  }

  NotPromise ENV = new Env();

  record Env() implements NotPromise {
    @Override
    public String toString() {
      return "env";
    }
  }

  NotPromise BYTECODE = new Bytecode();

  record Bytecode() implements NotPromise {
    @Override
    public String toString() {
      return "bytecode";
    }
  }

  NotPromise SYMBOL = new Symbol();

  record Symbol() implements NotPromise {
    @Override
    public String toString() {
      return "sym";
    }
  }

  NotPromise SPECIAL = new Special();

  record Special() implements NotPromise {
    @Override
    public String toString() {
      return "sbltn";
    }
  }

  NotPromise BUILTIN = new Builtin();

  record Builtin() implements NotPromise {
    @Override
    public String toString() {
      return "bltn";
    }
  }
}
