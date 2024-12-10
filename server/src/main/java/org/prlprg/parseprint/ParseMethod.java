package org.prlprg.parseprint;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Annotation to put on a static method that takes a {@link Parser}, and optionally additionally a
 * context object, and returns an object that is parsed using them.
 *
 * <p>It can also be put on a constructor for said object with the same parameters.
 *
 * <p>To find the {@code ParseMethod} for that class, {@link Parser} looks within the object class
 * itself and superclasses as well as context class (but <i>not</i> context superclasses). You
 * cannot put it anywhere else (orphan rule). The method's arguments must be (in order) {@link
 * Parser}, optionally something else (context), and optionally a {@link Class} (parsed class). The
 * context may be the instance receiver, otherwise the method must be static. The method must return
 * an instance of the class it parses. It can't throw any checked exceptions, and it must be private
 * (since using {@link Parser#parse(Class)} is preferred).
 *
 * @see PrintMethod
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.METHOD, ElementType.CONSTRUCTOR})
@SuppressFBWarnings("UPM_UNCALLED_PRIVATE_METHOD")
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
