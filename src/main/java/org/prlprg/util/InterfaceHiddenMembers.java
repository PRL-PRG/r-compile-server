package org.prlprg.util;

import java.lang.annotation.Retention;
import java.lang.annotation.Target;

/**
 * Specifies a utility class for an interface which may provide non-public static methods and
 * fields.
 */
@Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
@Target(java.lang.annotation.ElementType.TYPE)
public @interface InterfaceHiddenMembers {
  /** The utility class for the annotated interface. */
  Class<?> value();
}
