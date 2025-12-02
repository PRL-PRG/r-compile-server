package org.prlprg.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/// Annotate a class or interface to change the actual class [SingletonParameterResolver]
/// constructs for it.
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface SingletonClass {
  /// The actual class to construct instead of the annotated class or interface.
  ///
  /// This must be a subclass or implementation of the annotated class or interface.
  Class<?> value();
}
