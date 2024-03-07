package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPType;

/** The different function {@link SEXPType}s in R: closure, special, and builtin. */
public enum FunctionRType {
  CLOSURE(BaseRType.CLOSURE, SEXPType.CLO),
  SPECIAL(BaseRType.SPECIAL, SEXPType.SPECIAL),
  BUILTIN(BaseRType.BUILTIN, SEXPType.BUILTIN);

  private final BaseRType baseRType;
  private final SEXPType sexpType;

  /** Returns non-null if this is a closure, builtin, or special type. */
  public static @Nullable FunctionRType of(BaseRType type) {
    return switch (type) {
      case BaseRType.Closure() -> CLOSURE;
      case BaseRType.Special() -> SPECIAL;
      case BaseRType.Builtin() -> BUILTIN;
      default -> null;
    };
  }

  /** Returns non-null if this is a closure, builtin, or special type. */
  public static @Nullable FunctionRType of(SEXPType sexpType) {
    return switch (sexpType) {
      case CLO -> CLOSURE;
      case SPECIAL -> SPECIAL;
      case BUILTIN -> BUILTIN;
      default -> null;
    };
  }

  FunctionRType(BaseRType baseRType, SEXPType sexpType) {
    this.baseRType = baseRType;
    this.sexpType = sexpType;
  }

  public BaseRType baseRType() {
    return baseRType;
  }

  public SEXPType sexpType() {
    return sexpType;
  }

  @Override
  public String toString() {
    return switch (this) {
      case CLOSURE -> "clos";
      case SPECIAL -> "spec";
      case BUILTIN -> "bltn";
    };
  }
}
