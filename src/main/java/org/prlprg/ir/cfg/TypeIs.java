package org.prlprg.ir.cfg;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.type.RType;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.NotImplementedError;

/**
 * Specifies the {@link org.prlprg.ir.type.RType RType} of a statement that produces a value.
 *
 * @see RValueStmt#type()
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.TYPE, ElementType.RECORD_COMPONENT})
public @interface TypeIs {
  String value();
}

class TypeIsUtil {
  static RType parse(TypeIs annotation) {
    return switch (annotation.value()) {
      case "ANY" -> RType.ANY;
      case "ANY_VALUE_MAYBE_MISSING" -> RType.ANY_VALUE_MAYBE_MISSING;
      case "ANY_FUNCTION" -> RType.ANY_FUNCTION;
      case "ANY_BUILTIN_OR_SPECIAL" -> RType.ANY_BUILTIN_OR_SPECIAL;
      case "ANY_PROMISE_NOT_MISSING" -> RType.ANY_PROMISE_NOT_MISSING;
      case "CLO" -> RType.simple(SEXPType.CLO);
      case "ENV" -> RType.ANY_ENV;
      case "DOTS" -> RType.simple(SEXPType.DOT);
      case "DOTS_LIST" -> RType.DOTS_LIST;
        // TODO `RType.EXPANDED_DOTS` or implement dots differently than PIR.
      case "EXPANDED_DOTS" -> RType.ANY;
      case "INT" -> RType.simple(SEXPType.INT);
      case "LGL" -> RType.simple(SEXPType.LGL);
      case "BOOL" -> RType.BOOL;
      case "NUMERIC_OR_LOGICAL_NOT_NA" -> RType.NUMERIC_OR_LOGICAL_NOT_NA;
      case "STR_OR_NIL" -> RType.union(RType.simple(SEXPType.STR), RType.exact(SEXPs.NULL));
      default ->
          throw new NotImplementedError(
              "Unknown type string representation: " + annotation.value());
    };
  }

  private TypeIsUtil() {}
}
