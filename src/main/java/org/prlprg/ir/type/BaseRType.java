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
        ? new Promise(p.isEvaluated(), p.isLazy() ? new Any() : of(p.getVal()))
        : of(value.type());
  }

  static BaseRType of(SEXPType type) {
    return switch (type) {
      case NIL, LIST -> new ListAny();
      case CHAR, LGL, INT, REAL, CPLX, STR, RAW, VEC ->
          new Vector(Objects.requireNonNull(RVectorElementType.of(type)));
      case SYM -> new Symbol();
      case LANG -> new Language();
      case CLO -> new Closure();
      case PROM -> new Promise(false, new Any());
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
   * SEXPTypes.
   */
  default @Nullable SEXPType sexpType() {
    return switch (this) {
      case Any() -> null;
      case Vector(var elementType) -> elementType.vectorSexpType;
      case ListAny() -> SEXPType.LIST;
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

  @Override
  default boolean isSubsetOf(BaseRType other) {
    return other instanceof Any
        || switch (this) {
          case Any() -> false;
          case Vector(var elementType) ->
              other instanceof Vector(var otherElementType)
                  && elementType.isSubsetOf(otherElementType);
          case ListAny() -> other instanceof ListAny;
          case Promise(var isEvaluated, var valueType) ->
              other instanceof Promise(var otherIsEvaluated, var otherValueType)
                  && (isEvaluated || !otherIsEvaluated)
                  && valueType.isSubsetOf(otherValueType);
          case Language() -> other instanceof Language;
          case Expression() -> other instanceof Expression;
          case Closure() -> other instanceof Closure;
          case S4() -> other instanceof S4;
          case ExternalPtr() -> other instanceof ExternalPtr;
          case WeakRef() -> other instanceof WeakRef;
          case Dots() -> other instanceof Dots;
          case Env() -> other instanceof Env;
          case Bytecode() -> other instanceof Bytecode;
          case Symbol() -> other instanceof Symbol;
          case Special() -> other instanceof Special;
          case Builtin() -> other instanceof Builtin;
        };
  }

  @Override
  default BaseRType union(BaseRType other) {
    return other instanceof Any
        ? other
        : switch (this) {
          case Any() -> this;
          case Vector(var elementType) ->
              other instanceof Vector(var otherElementType)
                  ? new Vector(elementType.union(otherElementType))
                  : new Any();
          case ListAny() -> other instanceof ListAny ? this : new Any();
          case Promise(var isEvaluated, var valueType) ->
              other instanceof Promise(var otherIsEvaluated, var otherValueType)
                  ? new Promise(isEvaluated && otherIsEvaluated, valueType.union(otherValueType))
                  : new Any();
          case Language() -> other instanceof Language ? this : new Any();
          case Expression() -> other instanceof Expression ? this : new Any();
          case Closure() -> other instanceof Closure ? this : new Any();
          case S4() -> other instanceof S4 ? this : new Any();
          case ExternalPtr() -> other instanceof ExternalPtr ? this : new Any();
          case WeakRef() -> other instanceof WeakRef ? this : new Any();
          case Dots() -> other instanceof Dots ? this : new Any();
          case Env() -> other instanceof Env ? this : new Any();
          case Bytecode() -> other instanceof Bytecode ? this : new Any();
          case Symbol() -> other instanceof Symbol ? this : new Any();
          case Special() -> other instanceof Special ? this : new Any();
          case Builtin() -> other instanceof Builtin ? this : new Any();
        };
  }

  default @Nullable BaseRType intersection(BaseRType other) {
    return other instanceof Any
        ? this
        : switch (this) {
          case Any() -> other;
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
          case ListAny() -> other instanceof ListAny ? this : new Any();
          case Promise(var isEvaluated, var valueType) -> {
            if (!(other instanceof Promise(var otherIsEvaluated, var otherValueType))) {
              yield null;
            }
            var resultValueType = valueType.intersection(otherValueType);
            if (resultValueType == null) {
              yield null;
            }
            yield new Promise(isEvaluated || otherIsEvaluated, resultValueType);
          }
          case Language() -> other instanceof Language ? this : null;
          case Expression() -> other instanceof Expression ? this : null;
          case Closure() -> other instanceof Closure ? this : null;
          case S4() -> other instanceof S4 ? this : null;
          case ExternalPtr() -> other instanceof ExternalPtr ? this : null;
          case WeakRef() -> other instanceof WeakRef ? this : null;
          case Dots() -> other instanceof Dots ? this : null;
          case Env() -> other instanceof Env ? this : null;
          case Bytecode() -> other instanceof Bytecode ? this : null;
          case Symbol() -> other instanceof Symbol ? this : null;
          case Special() -> other instanceof Special ? this : null;
          case Builtin() -> other instanceof Builtin ? this : null;
        };
  }

  record Any() implements BaseRType {
    @Override
    public String toString() {
      return "any";
    }
  }

  record Vector(RVectorElementType elementType) implements BaseRType {
    @Override
    public String toString() {
      return "vec(" + elementType + ")";
    }
  }

  record ListAny() implements BaseRType {
    @Override
    public String toString() {
      return "list";
    }
  }

  record Promise(YesOrMaybe isEvaluated, BaseRType valueType) implements BaseRType {
    @Override
    public String toString() {
      return (isEvaluated ? "prom" : "lazy") + "(" + valueType + ")";
    }
  }

  record Language() implements BaseRType {
    @Override
    public String toString() {
      return "lang";
    }
  }

  record Expression() implements BaseRType {
    @Override
    public String toString() {
      return "expr";
    }
  }

  record Closure() implements BaseRType {
    @Override
    public String toString() {
      return "clos";
    }
  }

  record S4() implements BaseRType {
    @Override
    public String toString() {
      return "s4";
    }
  }

  record ExternalPtr() implements BaseRType {
    @Override
    public String toString() {
      return "extptr";
    }
  }

  record WeakRef() implements BaseRType {
    @Override
    public String toString() {
      return "weakref";
    }
  }

  record Dots() implements BaseRType {
    @Override
    public String toString() {
      return "dots";
    }
  }

  record Env() implements BaseRType {
    @Override
    public String toString() {
      return "env";
    }
  }

  record Bytecode() implements BaseRType {
    @Override
    public String toString() {
      return "bytecode";
    }
  }

  record Symbol() implements BaseRType {
    @Override
    public String toString() {
      return "sym";
    }
  }

  record Special() implements BaseRType {
    @Override
    public String toString() {
      return "sbltn";
    }
  }

  record Builtin() implements BaseRType {
    @Override
    public String toString() {
      return "bltn";
    }
  }
}
