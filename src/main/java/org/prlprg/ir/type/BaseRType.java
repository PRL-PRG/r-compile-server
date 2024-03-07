package org.prlprg.ir.type;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPType;

/** The "main" part of an {@link RType}, without other attributes like "is-scalar". */
public sealed interface BaseRType extends Lattice<BaseRType> {
  static BaseRType of(SEXP value) {
    return value instanceof PromSXP p
        ? new Promise(YesOrMaybe.of(p.isEvaluated()), p.isLazy() ? ANY : of(p.getVal()))
        : of(value.type());
  }

  static BaseRType of(SEXPType type) {
    return switch (type) {
      case NIL, LIST -> new AnyList();
      case CHAR, LGL, INT, REAL, CPLX, STR, RAW, VEC ->
          new Vector(Objects.requireNonNull(VectorElementRType.of(type)));
      case SYM -> new Symbol();
      case LANG -> new Language();
      case CLO -> new Closure();
      case PROM -> new Promise(YesOrMaybe.MAYBE, ANY);
      case EXTPTR -> new ExternalPtr();
      case WEAKREF -> new WeakRef();
      case ENV -> new Env();
      case SPECIAL -> new Special();
      case BUILTIN -> new Builtin();
      case EXPR -> new Expression();
      case S4 -> new S4();
      case BCODE -> new Bytecode();
      case DOT -> new Dots();
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
      case Any() -> null;
      case AnyFun() -> null;
      case Vector(var elementType) -> elementType.vectorSexpType;
      case AnyList() -> SEXPType.LIST;
      case Promise(var ignored, var ignored2) -> SEXPType.PROM;
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
      case Vector(var elementType) -> elementType.isPrimitive();
      default -> Troolean.NO;
    };
  }

  /** Is this a function type? (closure, builtin, or special) */
  default boolean isFunction() {
    return switch (this) {
      case AnyFun() -> true;
      case Closure() -> true;
      case Special() -> true;
      case Builtin() -> true;
      default -> false;
    };
  }

  @Override
  default boolean isSubsetOf(BaseRType other) {
    return other instanceof Any
        || switch (this) {
          case Any() -> false;
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
    return other instanceof Any
        ? other
        : switch (this) {
          case Any() -> this;
          case AnyFun() -> other.isFunction() ? this : ANY;
          case Vector(var elementType) ->
              other instanceof Vector(var otherElementType)
                  ? new Vector(elementType.union(otherElementType))
                  : ANY;
          case AnyList() -> other instanceof AnyList ? this : ANY;
          case Promise(var isEvaluated, var valueType) ->
              other instanceof Promise(var otherIsEvaluated, var otherValueType)
                  ? new Promise(
                      isEvaluated.union(otherIsEvaluated), valueType.union(otherValueType))
                  : ANY;
          case Language() -> other instanceof Language ? this : ANY;
          case Expression() -> other instanceof Expression ? this : ANY;
          case Closure() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Closure ? this : ANY;
          case S4() -> other instanceof S4 ? this : ANY;
          case ExternalPtr() -> other instanceof ExternalPtr ? this : ANY;
          case WeakRef() -> other instanceof WeakRef ? this : ANY;
          case Dots() -> other instanceof Dots ? this : ANY;
          case Env() -> other instanceof Env ? this : ANY;
          case Bytecode() -> other instanceof Bytecode ? this : ANY;
          case Symbol() -> other instanceof Symbol ? this : ANY;
          case Special() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Special ? this : ANY;
          case Builtin() ->
              other instanceof AnyFun ? ANY_FUN : other instanceof Builtin ? this : ANY;
        };
  }

  default @Nullable BaseRType intersection(BaseRType other) {
    return other instanceof Any
        ? this
        : switch (this) {
          case Any() -> other;
          case AnyFun() -> other.isFunction() ? other : null;
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
          case AnyList() -> other instanceof AnyList ? this : ANY;
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

  BaseRType ANY = new Any();

  record Any() implements BaseRType {
    @Override
    public String toString() {
      return "any";
    }
  }

  BaseRType ANY_FUN = new AnyFun();

  record AnyFun() implements BaseRType {
    @Override
    public String toString() {
      return "fun";
    }
  }

  BaseRType ANY_VECTOR = new Vector(VectorElementRType.ANY);
  BaseRType SEXP_VECTOR = new Vector(VectorElementRType.SEXP);
  BaseRType INT_VECTOR = new Vector(VectorElementRType.INT);
  BaseRType STRING_VECTOR = new Vector(VectorElementRType.STRING);
  BaseRType LOGICAL_VECTOR = new Vector(VectorElementRType.LOGICAL);
  BaseRType RAW_VECTOR = new Vector(VectorElementRType.RAW);
  BaseRType COMPLEX_VECTOR = new Vector(VectorElementRType.COMPLEX);
  BaseRType DOUBLE_VECTOR = new Vector(VectorElementRType.DOUBLE);
  BaseRType EXPRESSION_VECTOR = new Vector(VectorElementRType.EXPRESSION);

  record Vector(VectorElementRType elementType) implements BaseRType {
    @Override
    public String toString() {
      return "vec(" + elementType + ")";
    }
  }

  BaseRType ANY_LIST = new AnyList();

  record AnyList() implements BaseRType {
    @Override
    public String toString() {
      return "list";
    }
  }

  BaseRType LAZY_ANY_PROMISE = new Promise(YesOrMaybe.MAYBE, ANY);
  BaseRType FORCED_ANY_PROMISE = new Promise(YesOrMaybe.YES, ANY);

  record Promise(YesOrMaybe isEvaluated, BaseRType valueType) implements BaseRType {
    @Override
    public String toString() {
      return (isEvaluated == YesOrMaybe.YES ? "prom" : "lazy") + "(" + valueType + ")";
    }
  }

  BaseRType LANGUAGE = new Language();

  record Language() implements BaseRType {
    @Override
    public String toString() {
      return "lang";
    }
  }

  BaseRType EXPRESSION = new Expression();

  record Expression() implements BaseRType {
    @Override
    public String toString() {
      return "expr";
    }
  }

  BaseRType CLOSURE = new Closure();

  record Closure() implements BaseRType {
    @Override
    public String toString() {
      return "clos";
    }
  }

  BaseRType S4 = new S4();

  record S4() implements BaseRType {
    @Override
    public String toString() {
      return "s4";
    }
  }

  BaseRType EXTERNAL_PTR = new ExternalPtr();

  record ExternalPtr() implements BaseRType {
    @Override
    public String toString() {
      return "extptr";
    }
  }

  BaseRType WEAK_REF = new WeakRef();

  record WeakRef() implements BaseRType {
    @Override
    public String toString() {
      return "weakref";
    }
  }

  BaseRType DOTS = new Dots();

  record Dots() implements BaseRType {
    @Override
    public String toString() {
      return "dots";
    }
  }

  BaseRType ENV = new Env();

  record Env() implements BaseRType {
    @Override
    public String toString() {
      return "env";
    }
  }

  BaseRType BYTECODE = new Bytecode();

  record Bytecode() implements BaseRType {
    @Override
    public String toString() {
      return "bytecode";
    }
  }

  BaseRType SYMBOL = new Symbol();

  record Symbol() implements BaseRType {
    @Override
    public String toString() {
      return "sym";
    }
  }

  BaseRType SPECIAL = new Special();

  record Special() implements BaseRType {
    @Override
    public String toString() {
      return "sbltn";
    }
  }

  BaseRType BUILTIN = new Builtin();

  record Builtin() implements BaseRType {
    @Override
    public String toString() {
      return "bltn";
    }
  }
}
