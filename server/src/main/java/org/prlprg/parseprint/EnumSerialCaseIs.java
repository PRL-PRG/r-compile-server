package org.prlprg.parseprint;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.util.StringCase;

/**
 * Determines the case of the enum constant in the serialized form.
 *
 * <p>This can be annotated on:
 *
 * <ul>
 *   <li>The context object, to change the case of all enums when parsed or printed with that
 *       context.
 *   <li>The enum type itself, to change its case
 * </ul>
 *
 * In case of both, the context object's annotation takes precedence.
 */
@Retention(RetentionPolicy.RUNTIME)
@Documented
@Target(ElementType.TYPE)
public @interface EnumSerialCaseIs {
  StringCase value();
}
