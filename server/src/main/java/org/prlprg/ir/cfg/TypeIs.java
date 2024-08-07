package org.prlprg.ir.cfg;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
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
      case "ANY" -> RTypes.ANY;
      case "ANY_VALUE" -> RTypes.ANY_VALUE;
      case "ANY_FUN" -> RTypes.ANY_FUN;
      case "ANY_SYM_FUN" -> RTypes.ANY_SYM_FUN;
      case "PROM" -> RTypes.ANY_PROM;
      case "CLO" -> RTypes.simple(SEXPType.CLO);
      case "ENV" -> RTypes.simple(SEXPType.ENV);
      case "DOTS" -> RTypes.simple(SEXPType.DOT);
      case "DOTS_ARG" -> RTypes.DOTS_ARG;
      case "EXPANDED_DOTS" -> RTypes.EXPANDED_DOTS;
      case "INT" -> RTypes.simple(SEXPType.INT);
      case "LGL" -> RTypes.simple(SEXPType.LGL);
      case "BOOL" -> RTypes.BOOL;
      case "NUMERIC_OR_LOGICAL_NO_NA" -> RTypes.NUMERIC_OR_LOGICAL_NO_NA;
      case "STR_OR_NIL" -> RTypes.simple(SEXPType.STRING).union(RTypes.exact(SEXPs.NULL));
      default ->
          throw new NotImplementedError(
              "Unknown type string representation: " + annotation.value());
    };
  }

  private TypeIsUtil() {}
}
