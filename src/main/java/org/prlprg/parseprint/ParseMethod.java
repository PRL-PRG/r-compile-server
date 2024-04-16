package org.prlprg.parseprint;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Annotation to put on a static method that takes a {@link Parser}, and optionally additionally a
 * context object, and returns an object that is parsed using them.
 *
 * <p>{@link Parser} looks within the class itself to find the {@code ParseMethod} for that class,
 * you cannot put it in a separate class (orphan rule). The method's arguments must be {@link
 * Parser} and optionally something else, it must return an instance of the class it's declared in,
 * it can't throw any checked exceptions, and it must be private (since using {@link
 * Parser#parse(Class)} is preferred).
 *
 * @see PrintMethod
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.METHOD)
public @interface ParseMethod {
  /**
   * Whether to skip whitespace when this method directly uses the lexer.
   *
   * <p>Pass {@code null} to inherit the policy of whatever calls this parser. The default policy
   * for a parser is to not skip any whitespace.
   *
   * <p>Note that when other objects are parsed, they have their own whitespace policy.
   */
  SkipWhitespace value() default SkipWhitespace.ALL;
}
